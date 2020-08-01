---
description: >-
  Vue.js este un framework care permite să construim progresiv interfețe de
  utilizator pentru aplicații web
---

# Vue.js

## Documentația oficială \(in engleză\)

{% embed url="https://vuejs.org/v2/guide/" %}

## Instanța Vue

Orice aplicație Vue începe cu crearea unei noi instanțe Vue cu funcția `Vue`:

```javascript
import Vue from "vue";

new Vue({
//opțiuni
});
```

O aplicație Vue constă din o rădăcină Vue instance creată cu `new Vue()`, organizată în mod opțional într-un arbore de componente imbricare, componente reutilizabile. 

Instanța trebuie să fie legată de un element html din pagina principală \(index.html\), și să determine ce element va fi randat:

```markup
<html>
  ...
  <body>
    <div id="app"></div>
  </body>
</html>
```

```javascript
import Vue from "vue";

new Vue({
  el: '#app',
  template: '<div>{{ hi }}</div>'
});
```

{% hint style="info" %}
Observați cum instanța Vue definește `el` care arată către element-ul html cu id-ul `#app`
{% endhint %}

O metodă alternativă, care lucrează identic, să definim element-ul de care ne legăm, e prin funcția `$mount()`:

```javascript
import Vue from "vue";
import App from "./App.vue";

new Vue({
  render: function(h) {
    return h(App);
  }
}).$mount("#app");

```

De asemenea observați că în loc de template folosim funcția `render(h)` în exemplul de mai sus. În acest mod putem să randăm în loc de html arbitrar un component \(componentul primar\) , în acest caz - `App`. 

Componentele Vue sunt explicate mai detaliat în [Componente Vue](componente-vue.md)

## Includerea într-o pagină arbitrară

Dacă avem o singură pagină `html`, și dorim să includem Vue.js în ea, cel mai simplu mod e să introducem un script în pagina noastră:

```markup
<script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
```

Un exemplu cum arată o pagină `html` cu Vue inclus:

```markup
<!DOCTYPE html>
<html>
<head>
  <title>My first Vue app</title>
  <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
</head>
<body>
  <div id="app">
    {{ message }}
  </div>

  <script>
    var app = new Vue({
      el: '#app',
      data() {
        return {
          message: 'Hello Vue!'
        };
      }
    })
  </script>
</body>
</html>
```

În codul de mai sus observăm câteva elemente importante:

Am definit in pagină un element `div` cu un `id="app"`. Acest id va fi identificatorul care va fi căutat când inițializăm aplicația Vue.

```markup
  <div id="app">
    ...
  </div>

```

După asta avem un script, care definește aplicația noastră. Observați cum am definit `el: '#app'`, care corespunde elementului `div` cu acest id, creat mai sus:

```markup
  <script>
    var app = new Vue({
      el: '#app',
      ...
    })
  </script>

```

