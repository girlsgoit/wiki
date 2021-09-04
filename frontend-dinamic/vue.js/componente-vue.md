---
description: >-
  Vue Component = un set de unelte și/sau resurse  care permite dezvoltarea mai
  rapidă.
---

# Componente Vue

## Structura unei Componente Vue

Un simplu exemplu de declarare a unei componente Vue, care zice "Hello, World"

```markup
<!-- HelloWorld.vue -->
<template>
  <h1>Hello, {{ name }}</h1>
</template>

<script>
export default {
  name: "HelloWorld",
  data: function() {
    return {
      name: "World"
    };
  }
};
</script>

<style scoped>
h1 {
  text-align: center;
}
</style>

```

Un component are 3 blocuri principale:

* **`template`** - definim html-ul componentei, cu o serie de directive și constructori care ne ușurează viața \(urmează să-i învățăm\)
* **`script`** - definim logica JavaScript a componentei, e un **obiect** care definește date, acțiuni, și alte elemente folositoare
* **`style`** - stilurile folosite de componenta noastră, ca să arate bine! Observați atributul scoped, el definește ca stilurile definite în această componentă să fie izolate, și să nu fie vizibile de alte componente, comod!

Componentele sunt instanțe Vue reutilizabile cu un nume, în cazul nostru, `<HelloWorld>.` Putem folosi acest component ca un element personalizat în interiorul aplicației noastre:

```markup
<div id="components-demo">
    <HelloWorld></HelloWorld>
</div>
```

### Reutilizarea componentelor

Componentele pot fi reutilizate de câte ori ne dorim, spre exemplu:

```markup
<div id="components-demo">
    <HelloWorld></HelloWorld>
    <HelloWorld></HelloWorld>
    <HelloWorld></HelloWorld>
</div>
```

## Data

 Orice componentă poate defini date, care pot fi folosite în `template` sau în `script`:

```markup
<script>
export default {
  ...
  data: function() {
    return {
      name: "World",
      age: 4.543
    };
  }
  ...
};
</script>
```

### [`data`](https://vuejs.org/v2/guide/components.html#data-Must-Be-a-Function) trebuie să fie funcție

Observăm că definirea datelor e o funcție, și nu un obiect simplu, cum ar fi:

```javascript
data: {
     name: "World"
}
```

**`data`** trebuie să fie o funcție. Astfel, pentru fiecare utilizare a componentei se menține o copie independentă cu informația returnată.

În caz contrar, dacă nu am folosi regula dată, în exemplul nostru, de fiecare dată când dăm click pe button ar fi afectată informația pentru toate celelalte exemple.

## Interpolare

### Text

Cea mai de bază formă de legare a datelor este interpolarea textului folosind sintaxa „Mustață”/„Mustache” \(bretele duble - `{{ }}` \):

```markup
<template>
  <span> Message: {{ msg }}</span>
</template>

<script>
export default {
  data: function() {
    return {
      msg : "I am dynamic!"
    };
  }
};
</script>
```

Acest tag va fi înlocuit cu valoarea proprietății obiectului `msg` corespunzătoare și va fi actualizat oricând valoarea proprietății obiectului `msg` se schimbă.

De asemenea, putem executa interpolări unice care nu actualizează la modificarea datelor utilizând directivul [v-once](https://vuejs.org/v2/api/#v-once), care afectează toate legăturile din elementul în care este definit.

```markup
<span v-once> This will never change: {{ msg }}</span>
```

### Raw HTML

Interpolarea `{{ }}` interpretează datele ca text simplu, nu HTML. Asta înseamnă că chiar dacă textul nostru va conține html, el va fi reprezentat ca text direct. Pentru a produce HTML, trebuie să utilizăm directivul `v-html:`

```markup
<p>Using mustaches: {{ rawHtml}}</p>
<p>Using v-html directive: <span v-html="rawHtml"></span></p>
```

```javascript
data: function() {
  return {
    rawHtml: '<span style="color: red">This should be red.</span>'
  };
}
```

![Exemplu de reprezentare](../../.gitbook/assets/image%20%28314%29.png)

Interiorul la `span` va fi înlocuit cu valoarea proprietății `rawHtml`, interpretat ca HTML curat - legăturile datelor fiind neglijate. Observați că nu putem utiliza `v-html` pentru a compune șabloane parțiale, deoarece Vue nu e un motor de șabloane pe bază de șiruri.

### Atribute

`{{ }}` nu pot fi utilizate în interiorul atributelor HTML. În schimb, utilizăm directivul `v-bind`:

```markup
<div v-bind:id="dynamicId"></div>
```

O sintaxă prescurtată e să omitem `v-bind`:

```markup
<div :id="dynamicId"></div>
```

În cazul atributelor de tip boolean, unde simpla lor existență presupune `true`, `v-bind` lucrează într-un mod ușor diferit:

```markup
<button :disabled="isButtonDisabled">Button</button>
```

Dacă `isButtonDisabled` are valoarea `null`, `undefined` sau `false`, atributul `disabled` nici nu va fi inclus în interpretarea elementului `<button>`.

### Utilizarea expresiilor JavaScript

Vue.js suportă puterea totală a expresiilor JavaScript în interiorul tuturor legăturilor de date.

```markup
{{ number + 1 }}
{{ ok ? 'YES': 'NO' }}
{{ message.split(' ').reverse( ).join(' ') }}

<div v-bind:id=" 'list-' +id"></div>
```

```javascript
data: function() {
  return {
    number: 10,
    ok: false,
    message: 'This is a message',
    id: 'unique-id'
  };
}
```

Aceste expresii vor fi evaluate ca JavaScript în sfera de date a instanței Vue a proprietarului. O restricție este că fiecare legătură poate conține o singură expresie.

### Reactivitatea datelor

Datele în componente sunt **reactive** - atunci când datele se schimbă, vizualizarea va fi refăcută automat. Trebuie de menționat că proprietățile în `data` sunt reactive doar dacă au existat atunci când instanța a fost creată.

```markup
<p> {{ reactiveData }} </p> <!-- va fi updatat -->
<p> {{ badData }} </p> <!-- nu va fi updatat -->
```

```javascript
data: function () {
  return {
    reactiveData: 'I am updated'
  };
}
```

## Proprietăți calculate \(Computed Properties\)

Proprietățile din șablon sunt foarte convenabile, dar sunt predestinate pentru operații simple. Prea multă logică în șabloanele noastre le-ar putea supraîncărca și le-ar face dificile de menținut. De exemplu:

```markup
<div id="example">
    {{ message.split(' ').reverse( ).join(' ') }}
</div>
```

În acest moment, șablonul nu mai este simplu și enunțiativ. Ar trebui să te uiți un pic și să analizezi înainte de a realiza că se afișează `message` invers. Problema devine și mai gravă când dorești să incluzi mesajul invers în șablonul tău încă o dată.

Din acest motiv, pentru logică mai complexă, se utilizează **proprietățile calculate.**

**Exemplu:**

```markup
<div>
    <p>Original message: "{{ message }}"</p>
    <p>Computed reversed message: "{{ reversedMessage }}"</p>
</div>
```

```javascript
export default { 
    data: {
        message: 'Hello' 
    }, 
    computed: { 
        // a computed getter 
        reversedMessage: function () { 
            // 'this' points to the vm instance 
            return this.message.split(' ').reverse().join(' ')ș
        }
    }
}
```

![](../../.gitbook/assets/image%20%28317%29.png)

{% hint style="info" %}
Orice metodă \(funcție\) a componentei are acces la cuvîntul cheie **`this`**, care reprezintă **obiectul curent,** respectiv poate accesa toate datele, și alte metode din componentă.
{% endhint %}

Aici am declarat funcția `reversedMessage()` sub blocul `computed`. Ea va fi folosită ca funcție reproducătoare pentru proprietatea `{{ reversedMessage }}`.

{% hint style="info" %}
Valoarea lui `reversedMessage` este dependentă de valoarea lui `message`. E recalculată de fiecare dată când valoarea originală se schimbă, și păstrează această valoare pentru a mări performanța. Urmărește modificarea datelor în același mod cum sunt urmărite modificările pentru interpolări în template.
{% endhint %}

## Condiționalele

### v-if

Directiva v-if este utilizată pentru redarea condiționată a unui bloc. Blocul va fi redat doar dacă expresia directivei returnează o valoare adevărată.

```markup
<h1 v-if="awesome">You are awesome!</h1>
```

```javascript
data: function () {
  return {
    awesome: true
  };
}
```

Este, de asemenea, posibil de adăugat și blocul „else” utilizând v-else:

```markup
<h1 v-if="awesome">You are awesome!</h1>
<h1 v-else>Oh no</h1>
```

### Grupuri condiționale cu v-if în &lt;template&gt;

Deoarece `v-if` este o directivă, a fost atașat unui singur element, dar cum putem afișa mai multe elemente? În acest caz putem utiliza `v-if` într-un element `<template>`, care servește ca un ambalaj invizibil. Redarea finală a rezultatului nu va include elementul `<template>`.

```markup
<template v-if="ok">
   <h1>Title</h1>
   <p>Paragraph 1</p>
   <p>Paragraph 2</p>
</template>
```

### v-else

Se poate utiliza directiva `v-else` pentru a indica un bloc „else" pentru v-if:

```markup
<div v-if="Math.random( ) > 0.5">
    Now you see me
</div>
<div v-else>
    Now you don't
</div>
```

Un element `v-else` trebuie să urmeze imediat un element `v-if` sau `v-else-if` - în caz contrar nu va fi recunoscut.

### v-else-if

V-else-if servește ca un „else if block” pentru v-if. De asemenea, poate fi legat de mai multe ori:

```markup
<div v-if="type==='A'">
    A
</div>
<div v-else-if="type==='B'">
    B
</div>
<div v-else-if="type==='C'">
    C
</div>
<div v-else>
    Not A, B, or C
</div>
```

Similar la v-else, un element `v-else-if` trebuie numaidecât să urmeze un element `v-if` sau `v-else-if`.

## Randarea Listelor

### v-for

Pentru a randa un array de elemente, folosim directiva **`v-for`**. Această directivă necesită o sintaxă specială sub forma **`item in items`**, unde `items` este un array de date, iar `item` va fi variabila locală în template

```markup
<ul id="example-1">
  <li v-for="item in items" :key="item.message">
    {{ item.message }}
  </li>
</ul>
```

```javascript
data: function () {
  return {
    items: [
      { message: 'Foo' },
      { message: 'Bar' }
    ]
  }
}
```

![Rezultat](../../.gitbook/assets/image%20%28315%29.png)

{% hint style="info" %}
**`v-for`**îl definim peste elementul care vrem să-l repetăm. În acest caz vrem mai multe elemente `<li>`
{% endhint %}

{% hint style="info" %}
:**`key`**e important să-l definim pentru a-l ajuta pe Vue să identifice ușor care element din array corespunde elementului din html, și în caz dacă ștergem sau mutăm cu locul elementele, să păstreze valorile din el. Devine foarte util spre exemplu când lucrăm cu forme și inputs.

Recomandarea generală e să-l definim întotdeauna, cu valoarea care unic poate identifica obiectul, deobicei un **id** sau un **string** unic
{% endhint %}

### Index

În cazurile când avem nevoie și de index \(poziția curentă\) putem adăuga un element adițional în **`v-for`**:

```markup
<ul id="example-2">
  <li v-for="(item, index) in items">
    {{ parentMessage }} - {{ index }} - {{ item.message }}
  </li>
</ul>
```

![Rezultat](../../.gitbook/assets/image%20%28313%29.png)

## Metode

Când vrem să executăm acțiuni la anumite evenimente, trebuie să definim logica care le va prelucra - event handlers. De asemenea, uneori vrem să definim funcții ajutatătoare care îndeplinesc o anumită funcționalitate. 

Pentru asta putem defini o serie de metode. O metodă e o funcție obișnuită, care aparține unui obiect \(în cazul nostru componentei\), și are acces la acest obiect \(componentă\) prin cuvântul cheie **`this`**

```javascript
...
data: function () {
  return {
    counter: 0,
  };
},
methods: {
  increment: function () {
    this.counter++;
  },
  decrement() { // putem omite cuvantul cheie `function`
    this.counter--;
  }
}
...
```

Aceste metode pot fi folosite ca acțiuni la evenimente pentru a adăuga interactivitate componentelor noastre. Un exemplu de counter simplu:

```markup
<template>
  <div>
    <p>{{ counter }}</p>
    <button @click="increment()">Increase</button>
    <button @click="decrement()">Decrease</button>
  </div>
</template>

<script>
export default {
  name: "Counter",
  data: function() {
    return {
      counter: 0
    };
  },
  methods: {
    increment: function() {
      this.counter++;
    },
    decrement() {
      this.counter--;
    }
  }
};
</script>

<style scoped>
...
</style>
```

## Evenimente

Evenimentele în Vue ne permit să executăm diferite metode la acțiunile pe care utilizatorul le face.

Evenimentele în forma desfășurată se definesc prin directivul **`v-on`**, urmat de evenimentul care vrem să-l „prindem”. Unul din cele mai des folosite evenimente este **click:**

```markup
<button v-on:click="doSomething()">Click Me</button>
```

{% hint style="info" %}
În acest exemplu componenta va avea definită o metodă `doSomething()` care va fi apelată când utilizatorul va face click pe acest buton.
{% endhint %}

Putem defini evenimentul și în formă presucrată, înlocuind directivul `v-on` cu **`@`**

```markup
<button @click="doSomething()">Click Me</button>
```

### Modificatori de evenimente \(Event modifiers\)

Este o necesitate comună să apelăm `event.preventDefault( )` sau `event.stopPropagation( )` în interiorul manipulatorilor de evenimente. Chiar dacă putem face asta în interiorul metodelor, ar fi mai bine dacă metodele ar fi doar despre logica datelor, mai degrabă decât să aibă de-a face cu detaliile evenimentelor DOM.

Pentru a adresa această problemă, Vue furnizează modificatori de evenimente pentru `v-on`. Să ne reamintim că modificatorii sunt sufixe directive notate cu un punct.

`.stop  
.prevent  
.capture  
.self  
.once  
.passive`

```markup
<!-- the click event's propagation will be stopped -->
<a v-on:click.stop="doThis"></a>

<!-- the submit event will no longer reload the page -->
<form v-on:submit.prevent="onSubmit"></form>

<!-- modifiers can be chained -->
<a v-on:click.stop.prevent="doThat"></a>

<!-- just the modifier -->
<form v-on:submit.prevent></form>

<!-- use capture mode when adding the event listener -->
<!-- i.e. an event targeting an inner element is handled here before being handled by that element -->
<div v-on:click.capture="doThis">...</div>

<!-- only trigger handler if event.target is the element itself -->
<!-- i.e. not from a child element -->
<div v-on:click.self="doThat">...</div>
```

Pentru mai multe detalii, click [aici](https://developer.mozilla.org/en-US/docs/Web/API/EventTarget/addEventListener#Parameters).

### Modificatori de taste \(Key modifiers\)

Atunci când ascultăm evenimentele de la tastatură, de multe ori trebuie să verificăm anumite taste. Vue permite adăugarea modificatorilor de taste pentru `v-on` atunci când ascultăm evenimentele de la taste.

```markup
<!-- only call `vm.submit()` when the `key` is `Enter` -->
<input v-on:keyup.enter="submit">
```

Se poate folosi direct orice nume de tastă validă [`KeyboardEvent.key`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/key/Key_Values) neacoperită utilizând cazul-kebab.

```markup
<input v-on:keyup.page-down="onPageDown">
```

În ultimul exemplu, manipulatorul va fi chemat doar dacă `$event.key` e egal cu `'PageDown'`.

#### \#Key Codes

```markup
<input v-on:keyup.13="submit">
```

Vue oferă pseudonime pentru cele mai utilizate coduri de taste:

`.enter  
.tab  
.delete  
.esc  
.space  
.up  
.down  
.right  
.left`

De asemenea, se poate defini o [tastă predefinită](https://vuejs.org/v2/api/#keyCodes) prin intermediului obiectului global `config.keyCodes`:

```javascript
// enable `v-on:keyup.f1`
Vue.config.keyCodes.f1 = 112
```

#### Taste modificatoare de sistem

Putem folosi următorii modificatori pentru a declanșa evenimentele de la tastatură sau mouse doar când modificatorii corespunzători sunt apăsați:

`.ctrl  
.alt  
.shift  
.meta`

Exemplu:

```markup
<!-- Alt + C -->
<input v-on:keyup.alt.67="clear">

<!-- Ctrl + Click -->
<div v-on:click.ctrl="doSomething">Do something</div>
```

#### Modificatorul .exact

Modificatorul dat permite controlul unor combinații exacte a sistemului pentru a declanșa un eveniment.

```markup
<!-- this will fire even if Alt or Shift is also pressed -->
<button v-on:click.ctrl="onClick">A</button>

<!-- this will only fire when Ctrl and no other keys are pressed -->
<button v-on:click.ctrl.exact="onCtrlClick">A</button>

<!-- this will only fire when no system modifiers are pressed -->
<button v-on:click.exact="onClick">A</button>
```

#### Modificatori pentru butoanele mouse-ului

`.left  
.right  
.middle`

## Proprietăți implicite

Pe lângă datele, și metodele definite de noi, componentele Vue expun un număr de proprietăți și metode ale instanței. Acestea au prefixul `$` pentru a le diferenția de proprietățile definite de utilizator. \(Pentru mai multe detalii, puteți accesa [aici](https://vuejs.org/v2/api/#Instance-Properties)\)

