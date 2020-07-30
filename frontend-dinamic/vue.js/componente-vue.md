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

Componentele sunt Vue instances reutilizabile cu un nume, în cazul nostru, `<button-counter>.` Putem folosi acest component ca un element personalizat \]n interiorul unei rădăcini Vue instance creată cu `new Vue`:

`<div id="components-demo">  
      <button-counter></button-counter>  
</div>`

`new Value ({el: '#components-demo' })`

## Reutilizarea componentelor

Componentele pot fi reutilizate de câte ori ne dorim, spre exemplu:

`<div id="components-demo">  
     <button-counter></button-counter>  
     <button-counter></button-counter>  
     <button-counter></button-counter>  
</div>`

 [`data`](https://vuejs.org/v2/guide/components.html#data-Must-Be-a-Function)trebuie să fie funcție. 

Atunci când am definit componentul &lt;button-counter&gt;, probabil ai observat că `data` nu a prevăzut direct un obiect, spre exemplu:

`data: {  
     count: 0  
}`

În schimb, opțiunea componentului data trebuie să fie o funcție, astfel că fiecare exemplu să își poate menține o copie independentă a informației returnate:

`data: function ( ) {  
     return {  
       count: 0  
    }  
}`

În caz contrar, dacă nu am folosi regula dată, în exemplul nostru, de fiecare dată când dăm click pe un button ar fi afectată informația pentru toate celelalte exemple.

## Organizarea Componentelor

În general, se obișnuiește organizarea aplicației într-un arbore de componente imbricate:

![](../../.gitbook/assets/image%20%28300%29.png)

Spre exemplu, ai putea avea componente pentru header, sidebar și content area, fiecare conținând, de obicei, alte componente pentru blog posts, link-uri de navigare ș.a.

Pentru a utiliza componentele date în șabloanele noastre, acestea trebuie înregistrate astfel încât Vue să știe de existența acestora. Sunt 2 tipuri de înregistrare a componentelor: **global** și __**local.** Pentru mai multe detalii, [accesează-mă](https://vuejs.org/v2/guide/components-registration.html).

## Instanța Vue

Orice aplicație Vue începe cu crearea unei noi instanțe Vue cu funcția `Vue`:

`var vm = new Vue ( {  
       //opțiuni  
})`

Deseori folosim variabila `vm` \(prescurtare de la ViewModel\) pentru a face referire la instanța Vue.

O aplicație Vue constă din o rădăcină Vue instance creată cu new Vue, organizată în mod opțional într-un arbore de componente imbricare, componente reutilizabile. Spre exemplu, arborele unei aplicații todo ar putea arăta în felul următor: 

![](../../.gitbook/assets/image%20%28303%29.png)

## Data și Metode

Atunci când o instanță Vue este creată, aceasta adaugă toate proprietățile găsite în `data` obiectului acesteia la sistemul de reactivitate Vue. Atunci când valorile acestor proprietăți se schimbă, vederea va reacționa, actualizând astfel încât să se potrivească cu noile valori.

`// Our data object   
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
data.a = 3 vm.a // => 3`

Atunci când datele date se schimbă, vizualizarea va fi refăcută. Trebuie de menționat că proprietățile în `data` sunt doar reactive dacă au existat atunci când instanța a fost creată.

Singura excepție fiind utilizarea `Object.freeze( )`, care previne ca proprietățile existente să fie schimbate.

`//JS  
var obj = {  
    foo: 'bar'  
}  
  
Object.freeze(obj)  
  
new Vue ({  
    el: '#app',  
    data: obj  
})`

`//HTML  
<div id="app">  
   <p>{{foo}}</p>  
   <button v-on:click="foo = 'baz'">Change it</button>  
</div>`

Pe lângă proprietăților date, instanțele Vue expun un număr de proprietăți și metode ale instanței. Acestea au prefixul `$` pentru a le diferenția de proprietățile definite de utilizator. \(Pentru mai multe detalii, puteți accesa [aici](https://vuejs.org/v2/api/#Instance-Properties)\)

## Interpolare

### `#Text`

Cea mai de bază formă de legare a datelor este interpolarea textului folosind sintaxa „Mustață”/„Mustache” \(bretele duble - {{ }} \):

&lt;`span> Message: {{msg}}</span>`

Acest tag va fi înlocuit cu valoarea proprietății obiectului `msg` corespunzătoare și va fi actualizată oricând valoarea proprietății obiectului `msg` se schimbă.

De asemenea, poți să execuți interpolări unice care nu actualizează la modificarea datelor utilizând directivul [v-once](https://vuejs.org/v2/api/#v-once), dar trebuie să memorați că aceasta va afecta orice alte legături în același nod.

`<span v-once> This will never change: {{ msg }}</span>`

### `#Raw HTML`

Interpolarea {{ }} interpretează datele ca text simplu, nu HTML. Pentru a produce HTML, trebuie să utilizezi directivul `v-html:`

`<p> Using mustaches: {{ rawHtml}}</p>  
<p>Using v-html directive: <span v-html="rawHtml"></span></p>`

![](../../.gitbook/assets/image%20%28301%29.png)

Interiorul la `span` va fi înlocuit cu valoarea proprietății `rawHtml`, interpretat ca HTML curat - legăturile datelor fiind neglijate. Observați că nu putem utiliza `v-html` pentru a compune șabloane parțiale, deoarece Vue nu e un motor de șabloane pe bază de șiruri.

### \#`Atribute`

{{ }} nu pot fi utilizate în interiorul atributelor HTML. În schimb, utilizăm directivul `v-bind`:

`<div v-bind: id="dynamicId"></div>`

În cazul atributelor de tip boolean, unde simpla lor existență presupune `true`, `v-bind` lucrează într-un mod ușor diferit:

`<button v-bind: disabled="isButtonDisabled">Button</button>`

Dacă `isButtonDisabled` are valoarea `null`, `undefined` sau `false`, atributul `disabled` nici nu va fi inclus în interpretarea elementului `<button>`.

### `#Utilizarea expresiilor JavaScript`

Vue.js suportă puterea totală a expresiilor JavaScript în interiorul tuturor legăturilor de date.

```markup
{{ number +1 }}
{{ ok ? 'YES': 'NO' }}
{{ message.split(' ').reverse( ).join(' ') }}
<div v-bind: id=" 'list-' +id"></div>
```

Aceste expresii vor fi evaluate ca JavaScript în sfera de date a instanței Vue a proprietarului. O restricție este că fiecare legătură poate conține o singură expresie.

## Proprietăți calculate \(Computed Properties\)

Proprietățile din șablon sunt foarte convinabile, dar sunt predestinate pentru operații simple. Punând prea multă logică în șabloanele noastre le-ar putea umfla și le-ar face dificile de menținut. De exemplu:

`<div id="example">  
    {{ message.split(' ').reverse( ).join(' ') }}  
</div>`

În acest moment, șablonul nu mai este simplu și enunțiativ. Ar trebui să te uiți un pic și să analizezi înainte de a realiza că se afișează `message` invers. Problema devine și mai gravă când dorești să incluzi mesajul invers în șablonul tău încă o dată.

Din acest motiv, pentru logică mai complexă, se utilizează **proprietățile calculate.**

**Exemplu:**

`<div id="example">  
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
 })`

Rezultatul obținut:

![](../../.gitbook/assets/image%20%28299%29.png)

Aici am declarat  o proprietate calculată `reversedMessage`. Funcția pe care am utilizat, va fi folosită ca funcție reproducătoare pentru proprietatea `vm.reversedMessage.`

`console.log(vm.reversedMessage) //=> 'olleH'  
vm.message = 'Goodbye'  
console.log(vm.reversedMessage) //=> 'eybdooG'`

Valoarea lui `vm.reversedMessage` este dependentă de valoarea lui `vm.message`.

## Condiționalele

### v-if

Directivul v-if este utilizat pentru redarea condiționată a unui bloc. Blocul va fi redat doar dacă expresia directivului returnează o valoare adevărată.

`<h1 v-if= "awesome"> You are awesome!</h1>`

Este, de asemenea, posibil de adăugat și „else block” utilizând v-else:

`<h1 v-if= "awesome"> You are awesome!</h1>  
<h1 v-else>Oh no</h1>`

### Grupuri condiționale cu v-if în &lt;template&gt;

Deoarece `v-if` este o directivă, a fost atașat unui singur element. Dar ce se întâmplă dacă noi dorim să comutăm mai mult decât un singur element? În acest caz noi putem utiliza `v-if` într-un element `<template>`, care servește ca un ambalaj invizibil. Redarea finală a rezultatului nu va include elementul `<template>`

`<template v-if="ok">  
   <h1>Title</h1>  
   <p>Paragraph 1</p>  
   <p>Paragraph 2</p>  
</template>`

### v-else

Se poate utiliza directivul `v-else` pentru a indica un „else block" pentru v-if:

`<div v-if="Math.random( ) > 0.5">  
Now you see me  
</div>  
<div v-else>  
Now you don't  
</div>`

Un element `v-else` trebuie să urmeze imediat un element `v-if` sau `v-else-if` - în caz contrar nu va fi recunoscut.

### v-else-if

V-else-if servește ca un „else if block” pentru v-if. De asemenea, poate fi legat de mai multe ori:

`<div v-if="type==='A'">  
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
</div>`

Similar la v-else, un element `v-else-if` trebuie numaidecât să urmeze un element `v-if` sau `v-else-if`.

