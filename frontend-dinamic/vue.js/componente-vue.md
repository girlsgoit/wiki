---
description: >-
  Vue Component = un set de unelte și/sau resurse pre-pregătit, care permite
  dezvoltarea mai rapidă.
---

# Componente Vue

Un simplu exemplu de declarare a unei componente Vue:

```markup
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

Componentele sunt Vue instances reutilizabile cu un nume, în cazul nostru, `<button-counter>.` Putem folosi acest component ca un element personalizat în interiorul unei rădăcini Vue instance creată cu `new Vue`:

```markup
<div id="components-demo">
      <button-counter></button-counter>
</div>
```

```markup
new Value ({el: '#components-demo' })
```

## Reutilizarea componentelor

Componentele pot fi reutilizate de câte ori ne dorim, spre exemplu:

```javascript
<div id="components-demo">
     <button-counter></button-counter>
     <button-counter></button-counter>
     <button-counter></button-counter>
</div>
```

 [`data`](https://vuejs.org/v2/guide/components.html#data-Must-Be-a-Function)trebuie să fie funcție. 

Atunci când am definit componentul `<button-counter>`, probabil ai observat că `data` nu a prevăzut direct un obiect, spre exemplu:

```javascript
data: {
     count: 0
}
```

În schimb, opțiunea componentei date trebuie să fie o funcție, astfel că fiecare exemplu să își poată menține o copie independentă a informației returnate:

```javascript
data: function ( ) {
     return {
       count: 0
    }
}
```

În caz contrar, dacă nu am folosi regula dată, în exemplul nostru, de fiecare dată când dăm click pe button ar fi afectată informația pentru toate celelalte exemple.

## Organizarea Componentelor

În general, se obișnuiește organizarea aplicației într-un arbore de componente imbricate:

![](../../.gitbook/assets/image%20%28300%29.png)

Spre exemplu, ai putea avea componente pentru header, sidebar și content area, fiecare conținând, de obicei, alte componente pentru blog posts, link-uri de navigare ș.a.

Pentru a utiliza componentele date în șabloanele noastre, acestea trebuie înregistrate astfel încât Vue să știe de existența acestora. Sunt 2 tipuri de înregistrare a componentelor: **global** și __**local.** Pentru mai multe detalii, [accesează-mă](https://vuejs.org/v2/guide/components-registration.html).

## Instanța Vue

Orice aplicație Vue începe cu crearea unei noi instanțe Vue cu funcția `Vue`:

```javascript
var vm = new Vue ( {
       //opțiuni
})
```

Deseori folosim variabila `vm` \(prescurtare de la ViewModel\) pentru a face referire la instanța Vue.

O aplicație Vue constă din o rădăcină Vue instance creată cu new Vue, organizată în mod opțional într-un arbore de componente imbricare, componente reutilizabile. Spre exemplu, arborele unei aplicații todo ar putea arăta în felul următor: 

![](../../.gitbook/assets/image%20%28303%29.png)

## Data și Metode

Atunci când o instanță Vue este creată, aceasta adaugă toate proprietățile găsite în `data` obiectului acesteia la sistemul de reactivitate Vue. Atunci când valorile acestor proprietăți se schimbă, perspectiva va reacționa, actualizând astfel încât să se potrivească cu noile valori.

```javascript
// Our data object 
var data = { a: 1 }
// The object is added to a Vue instance 
var vm = new Vue({ 
   data: data 
})
// Getting the property on the instance 
// returns the one from the original data 
vm.a == data.a // => true
// Setting the property on the instance 
// also affects the original data 
vm.a = 2 data.a // => 2
// ... and vice-versa 
data.a = 3 vm.a // => 3
```

Atunci când datele date se schimbă, vizualizarea va fi refăcută. Trebuie de menționat că proprietățile în `data` sunt doar reactive dacă au existat atunci când instanța a fost creată.

Singura excepție fiind utilizarea `Object.freeze( )`, care previne ca proprietățile existente să fie schimbate.

```javascript
var obj = {
    foo: 'bar'
}

Object.freeze(obj)

new Vue ({
    el: '#app',
    data: obj
})
```

```markup
<div id="app">
   <p>{{foo}}</p>
   <button v-on:click="foo = 'baz'">Change it</button>
</div>
```

Pe lângă proprietăților date, instanțele Vue expun un număr de proprietăți și metode ale instanței. Acestea au prefixul `$` pentru a le diferenția de proprietățile definite de utilizator. \(Pentru mai multe detalii, puteți accesa [aici](https://vuejs.org/v2/api/#Instance-Properties)\)

## Interpolare

### \#Text

Cea mai de bază formă de legare a datelor este interpolarea textului folosind sintaxa „Mustață”/„Mustache” \(bretele duble - {{ }} \):

```markup
<span> Message: {{msg}}</span>
```

Acest tag va fi înlocuit cu valoarea proprietății obiectului `msg` corespunzătoare și va fi actualizată oricând valoarea proprietății obiectului `msg` se schimbă.

De asemenea, poți să execuți interpolări unice care nu actualizează la modificarea datelor utilizând directivul [v-once](https://vuejs.org/v2/api/#v-once), dar trebuie să memorați că aceasta va afecta orice alte legături în același nod.

```markup
<span v-once> This will never change: {{ msg }}</span>
```

### \#Raw HTML

Interpolarea {{ }} interpretează datele ca text simplu, nu HTML. Pentru a produce HTML, trebuie să utilizezi directivul `v-html:`

```markup
<p> Using mustaches: {{ rawHtml}}</p>
<p>Using v-html directive: <span v-html="rawHtml"></span></p>
```

![](../../.gitbook/assets/image%20%28301%29.png)

Interiorul la `span` va fi înlocuit cu valoarea proprietății `rawHtml`, interpretat ca HTML curat - legăturile datelor fiind neglijate. Observați că nu putem utiliza `v-html` pentru a compune șabloane parțiale, deoarece Vue nu e un motor de șabloane pe bază de șiruri.

### \#Atribute

{{ }} nu pot fi utilizate în interiorul atributelor HTML. În schimb, utilizăm directivul `v-bind`:

```markup
<div v-bind: id="dynamicId"></div>
```

În cazul atributelor de tip boolean, unde simpla lor existență presupune `true`, `v-bind` lucrează într-un mod ușor diferit:

```markup
<button v-bind: disabled="isButtonDisabled">Button</button>
```

Dacă `isButtonDisabled` are valoarea `null`, `undefined` sau `false`, atributul `disabled` nici nu va fi inclus în interpretarea elementului `<button>`.

### \#Utilizarea expresiilor JavaScript

Vue.js suportă puterea totală a expresiilor JavaScript în interiorul tuturor legăturilor de date.

```markup
{{ number +1 }}
{{ ok ? 'YES': 'NO' }}
{{ message.split(' ').reverse( ).join(' ') }}
<div v-bind: id=" 'list-' +id"></div>
```

Aceste expresii vor fi evaluate ca JavaScript în sfera de date a instanței Vue a proprietarului. O restricție este că fiecare legătură poate conține o singură expresie.

## Proprietăți calculate \(Computed Properties\)

Proprietățile din șablon sunt foarte convinabile, dar sunt predestinate pentru operații simple. Punând prea multă logică în șabloanele noastre le-ar putea supraîncărca și le-ar face dificile de menținut. De exemplu:

```markup
<div id="example">
    {{ message.split(' ').reverse( ).join(' ') }}
</div>
```

În acest moment, șablonul nu mai este simplu și enunțiativ. Ar trebui să te uiți un pic și să analizezi înainte de a realiza că se afișează `message` invers. Problema devine și mai gravă când dorești să incluzi mesajul invers în șablonul tău încă o dată.

Din acest motiv, pentru logică mai complexă, se utilizează **proprietățile calculate.**

**Exemplu:**

```markup
<div id="example">
<p>Original message: "{{ message }}"</p>
<p>Computed reversed message: "{{ reversedMessage }}"</p>
</div>
var vm = new Vue({ 
    el: '#example', 
    data: {
        message: 'Hello' 
    }, 
    computed: { 
   // a computed getter 
   reversedMessage: function () { 
      // 'this' points to the vm instance 
      return this.message.split(' ').reverse().join(' ') 
   }
  }
 })
```

Rezultatul obținut:

![](../../.gitbook/assets/image%20%28299%29.png)

Aici am declarat  o proprietate calculată `reversedMessage`. Funcția pe care am utilizat, va fi folosită ca funcție reproducătoare pentru proprietatea `vm.reversedMessage.`

```javascript
console.log(vm.reversedMessage) //=> 'olleH'
vm.message = 'Goodbye'
console.log(vm.reversedMessage) //=> 'eybdooG'
```

Valoarea lui `vm.reversedMessage` este dependentă de valoarea lui `vm.message`.

## Condiționalele

### v-if

Directiva v-if este utilizată pentru redarea condiționată a unui bloc. Blocul va fi redat doar dacă expresia directivei returnează o valoare adevărată.

```javascript
<h1 v-if= "awesome"> You are awesome!</h1>
```

Este, de asemenea, posibil de adăugat și „else block” utilizând v-else:

```javascript
<h1 v-if= "awesome"> You are awesome!</h1>
<h1 v-else>Oh no</h1>
```

### Grupuri condiționale cu v-if în &lt;template&gt;

Deoarece `v-if` este o directivă, a fost atașat unui singur element. Dar ce se întâmplă dacă noi dorim să comutăm mai mult decât un singur element? În acest caz noi putem utiliza `v-if` într-un element `<template>`, care servește ca un ambalaj invizibil. Redarea finală a rezultatului nu va include elementul `<template>`.

```javascript
<template v-if="ok">
   <h1>Title</h1>
   <p>Paragraph 1</p>
   <p>Paragraph 2</p>
</template>
```

### v-else

Se poate utiliza directiva `v-else` pentru a indica un „else block" pentru v-if:

```javascript
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

```javascript
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

## Evenimente

### Modificatori de evenimente \(Event modifiers\)

Este o necesitate comună să apelăm `event.preventDefault( )` sau `event.stopPropagation( )` în interiorul manipulatorilor de evenimente. Chiar dacă putem face asta în interiorul metodelor, ar fi mai bine dacă metodele ar fi doar despre logica datelor, mai degrabă decât să aibă de-a face cu detaliile evenimentelor DOM.

Pentru a adresa această problemă, Vue furnizează modificatori de evenimente pentru `v-on`. Să ne reamintim că modificatorii sunt sufixe directive notate cu un punct.

`.stop  
.prevent  
.capture  
.self  
.once  
.passive`

```javascript
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

Se poate folosi direct orice nume de tastă validă neacoperită prin [`KeyboardEvent.key`](https://developer.mozilla.org/en-US/docs/Web/API/KeyboardEvent/key/Key_Values)ca modificatori prin transformarea lor în cazul-kebab.

```markup
<input v-on:keyup.page-down="onPageDown">
```

În ultimul exemplu, manipulatorul va fi chemat doar dacă `$event.key` e egal cu `'PageDown'`.

#### \#Key Codes

```markup
<input v-on:keyup.13="submit">
```

Vue oferă pseudonime pentru cele mai utilizate coduri de taste atunci când este necesar pentru suportul browserului:

`.enter  
.tab  
.delete  
.esc  
.space  
.up  
.down  
.right  
.left`

De asemenea, se poate defini o [tastă predefinită](https://vuejs.org/v2/api/#keyCodes) în acest sens prin intermediului obiectului global `config.keyCodes`:

```javascript
// enable `v-on:keyup.f1`
Vue.config.keyCodes.f1 = 112
```

#### Taste modificatoare de sistem

Putem folosi următorii modificatori pentru a declanșa evenimentele de la tastatură sau mouse doar când modificatorii corespunzători sunt apesați:

`ctrl  
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

