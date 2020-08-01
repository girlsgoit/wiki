---
description: >-
  Componentele se integrează cu elementele html care permit unui utilizator să
  introducă valori, și să reflecte modificările în variabile JavaScript direct,
  cu configurație minimală.
---

# Componente & Forme

Când folosim interpolarea obișnuită, se crează o relație unidirecțională, care modifică conținutul html de fiecare dată când modificăm variabila in JavaScript. Dar dacă vom încerca să modificăm valoarea dată în html \(prin folosirea folosirea unui `<input>`\), atunci modificările nu vor apărea în JavaScript. 

Decizia asta e din motive de performanță generală. Putem crea legături bidirecționale printr-o directivă specială - `v-model`

## Directiva v-model

Pentru elementele unui formular, putem crea o legătură bidirecțională cu proprietățile declarate în instanța Vue. Pentru aceasta, vom utiliza directiva `v-model`. Atunci când datele din formular sunt modificate, aceste date sunt procesate reactiv \(instant\) de către Vue.

În exemplul de mai jos, textul din `<input>` va fi procesat instant și va fi afișat în paragraful de mai jos.

```markup
<input v-model="message" placeholder="edit me">
<p>Message is: {{ message }}</p>
```

![](../../.gitbook/assets/image%20%28307%29.png)

#### Text cu mai multe linii

```markup
<span>Multiline message is:</span>
<p style="white-space: pre-line;">{{ message }}</p>
<br>
<textarea v-model="message" placeholder="add multiple lines"></textarea>
```

![](../../.gitbook/assets/image%20%28305%29.png)

#### Checkbox

```markup
<input type="checkbox" id="checkbox" v-model="checked">
<label for="checkbox">{{ checked }}</label>
```

![](../../.gitbook/assets/image%20%28309%29.png)

Valoarea afișată în `<label>` va fi `true` dacă checkbox-ul este bifat. În caz contrar va fi `false`.

#### Checkbox-uri multiple, care utilizează același array

```markup
<input type="checkbox" id="jack" value="Jack" v-model="checkedNames">
<label for="jack">Jack</label>
<input type="checkbox" id="john" value="John" v-model="checkedNames">
<label for="john">John</label>
<input type="checkbox" id="mike" value="Mike" v-model="checkedNames">
<label for="mike">Mike</label>
<br>
<span>Checked names: {{ checkedNames }}</span>
```

![](../../.gitbook/assets/image%20%28308%29.png)

`checkedNames` este un array \(`checkedNames: []`\) în care sunt incluse toate numele pentru care checkbox-ul este bifat.

#### Radio

```markup
<input type="radio" id="one" value="One" v-model="picked">
<label for="one">One</label>
<br>
<input type="radio" id="two" value="Two" v-model="picked">
<label for="two">Two</label>
<br>
<span>Picked: {{ picked }}</span>
```

![](../../.gitbook/assets/image%20%28311%29.png)

#### Select

```markup
<select v-model="selected">
  <option disabled value="">Please select one</option>
  <option>A</option>
  <option>B</option>
  <option>C</option>
</select>
<span>Selected: {{ selected }}</span>
```

![](../../.gitbook/assets/image%20%28310%29.png)

## Submit

În cazul în care dorim să apelăm o metodă atunci când un formular este expediat, utilizăm evenimentul `v-on:submit` sau forma scurtă `@submit`.

```markup
<form
  id="app"
  @submit="checkForm"
  action="https://vuejs.org/"
  method="post"
>

<!-- elementele formularului -->

</form>
```

## Modificatori de evenimente

Uneori dorim să modificăm fluxul tratării unui eveniment. De exemplu, atunci când facem click pe un checkbox, în mod implicit checkbox-ul este bifat. Cu ajutorul modificatorului `preventDefault`, putem modifica fluxul astfel încât checkbox-ul să nu fie bifat.

```markup
<input type="checkbox" v-on:submit.prevent="onClick">
```

Atunci când se va face click pe checkbox, va fi apelară metoda `onClick`, fără ca checkboxul să fie bifat.

În Vue sunt următorii modificatori de evenimente:

* `.stop`
* `.prevent`
* `.capture`
* `.self`
* `.once`
* `.passive`

```markup
<!-- propagarea evenimentului de click va fi oprită -->
<a v-on:click.stop="doThis"></a>

<!-- evenimentul de submit nu va mai reîncărca pagina -->
<form v-on:submit.prevent="onSubmit"></form>

<!-- modificatorii pot fi înlănțuiți -->
<a v-on:click.stop.prevent="doThat"></a>

<!-- doar modificatorul -->
<form v-on:submit.prevent></form>

<!-- folosește modul de captare când se adaugă un event listener -->
<!-- un eveniment care vizează un element din interior este tratat aici înainte de a fi gestionat de acel element -->
<div v-on:click.capture="doThis">...</div>

<!-- evenimentul este tratat doar dacă nu este generat de către un element din interior -->
<div v-on:click.self="doThat">...</div>
```

