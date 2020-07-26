---
description: >-
  Vue.js este un framework care permite să construim progresiv interfețe de
  utilizator pentru aplicații web
---

# Vue.js

## Documentația oficială \(in engleză\)

{% embed url="https://vuejs.org/v2/guide/" %}

## Cel mai simplu exemplu

Cea mai simplă metodă să introducem Vue.js în pagina noastră e să introducem un script în pagina noastră `index.html`

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

Continuarea urmeaza...

