---
description: >-
  Vue router este modalitatea principală de a crea pagini multiple într-o
  aplicație web Vue
---

# Vue Router

În cadrul acestui wiki vom crea cateva pagini și un menu principal care poate naviga prin ele.

## Instalare

Vue router e o dependență separată față de Vue.js, pentru a-l putea folosi, trebuie mai intâi să-l instalăm. În dependență dacă lucrăm în CodeSandbox sau local avem proceduri diferite de instalare.

### Instalare CodeSandbox

Instalrea lui `vue-router` în code sandbox e destul de simplă. Pentru asta trebuie să deschidem IDE-ul la **`Explorer`**, și să apăsăm butonul **`Add dependency`**, din category Dependencies

![](<../../.gitbook/assets/image (331).png>)

In acest moment se deschide un modal, care ne permite sa căutăm și instalăm dependențe. Scriem vue-router în câmpul de căutare și dăm click să instalăm dependeța care zice ca-i „Official router vor Vue.js 2”

![](<../../.gitbook/assets/image (327).png>)

Atît! După acest pas ar trebui să avem **`vue`** și **`vue-router`** în lista de Dependencies:

![](<../../.gitbook/assets/image (328).png>)

### Instalare locală

{% hint style="info" %}
#### Node.js este necesar

Pentru a rula Vue local este necesară instalarea [Node](https://nodejs.org/). De asemenea trebuie să aveți configurat și instalat proiectul Vue local, pentru asta urmăriți pașii din [Instalare locală](instalare-locala.md)
{% endhint %}

Pentru a instala local, avem nevoie să lansăm linia de comandă, și să rulăm următoarea comandă:

```bash
npm install vue-router --save
```

Atît! După acest pas puteți utiliza **`vue-router`** în proiectul vostru local Vue

## Configurare

Pentru a putea folosi routerul vue în aplicația noastră, mai întâi trebuie să-l configurăm să fie folosit.&#x20;

Pentru asta modificăm fișierul **`main.js`**, care fișierul JavaScript principal de intrare și configurăm aplicația să-l folosescă:

```javascript
import Vue from "vue";
import VueRouter from 'vue-router'

import App from "./App.vue";

Vue.use(VueRouter)

new Vue({
  render: h => h(App)
}).$mount("#app");
```

{% hint style="info" %}
Liniile importante aici sunt linia **`2`** și **`6`**, care importă vue-router și îl configurează să fie folosit.
{% endhint %}

## Pagini prin Router

### Router view

Pentru a defini paginile noastre prin router, avem nevoie să pregătim un pic aplicația noastră.&#x20;

Vom folosi **`App.vue`** ca punctul principal al aplicației, și înăuntrul lui trebuie să definim locul unde vom randa paginile concrete accesate prin router. Facem asta cu ajutorul componentei **`router-view`**

```markup
<template>
  <div id="app">
    <router-view></router-view>
  </div>
</template>
```

{% hint style="info" %}
Putem adăuga alte elemente pe lângă `router-view`, și ele vor apărea în toate paginile, indiferent de calea pe care suntem. Vom folosi asta un pic mai târziu când vom defini link-urile de navigare
{% endhint %}

**`router-view`** zice lui Vue.js că în acest spațiu va trebui sa randeze componentele care vor corespunde paginii care vrem să o accesăm.&#x20;

### Pagina principală

Pentru a defini pagina principală care va fi accesată pe adresa de bază, trebuie să definim o componentă mică nouă, și să o numim spre exemplu **`Home.vue`**

```markup
<template>
  <div>
    <h1>The home page</h1>
  </div>
</template>

<script>
export default {
  name: "Home"
};
</script>

<style>
</style>
```

La momentul actual, această componentă nu e folosită nicăieri, deci nimeni nu o va putea vizualiza. Pentru a o defini ca pagina când utilizatorii acceseaza adresa de bază, trebuie să configurăm prima cale în main.js:

```javascript
import { createApp } from "vue";
import { createRouter, createWebHashHistory } from "vue-router";

import App from "./App.vue";
import Home from "./Home.vue";

// Aici vom defini toate routes din aplicatia noastra
const routes = [
  // 1. calea "/" ne spune ca asta va fi adresa de baza, fara nimic in plus
  // 2. component - dicteaza care componenta sa folosim la aceasta cale
  { path: "/", component: Home }
];


// definim router-ul nostru, in care adaugam routes definite mai sus
const router = new createRouter({
  history: createWebHashHistory(),
  routes: routes
});


// includem router-ul in aplicatia noastra Vue
createApp(App).use(router).mount("#app");
```

În acest moment, dacă încărcăm pagina noastră principală, vedem conținutul componentei **`Home.vue`**

![Pagina Home](<../../.gitbook/assets/image (329).png>)

V-ați putea intreba - până acum am scris o mulțime de cod pentru a arăta un simplu text, cu același succes am fi putut scrie tot in `App.vue` direct. Pentru ce toată complicarea asta?

Secretul e că acum putem ușor adăuga pagini noi care toate vor fi controlate prin URL!

### Pagini secundare

Pentru a defini o pagină cu o adresă concretă, trebuie să repetăm parțial pașii de mai sus cu mici modificări.

Pentru început creăm o componentă pentru pagina noastră nouă, spre exemplu **`About.vue`**:

```markup
<template>
  <div>
    <h1>The ABOUT page</h1>
  </div>
</template>

<script>
export default {
  name: "About"
};
</script>

<style>
</style>
```

Putem configura pagina asta să fie accesibilă la calea /about:

```javascript
import Home from "./Home.vue";
import About from "./About.vue";

const routes = [
  { path: "/", component: Home },
  { path: "/about", component: About }
];
```

{% hint style="info" %}
`/` în fața la `about` spune că asta e definiția la o adresă absolută, deobicei vrem să le definim așa.
{% endhint %}

În așa mod putem accesa pagina about pe adresa URL respectivă:

![Pagina About](<../../.gitbook/assets/image (325).png>)

În același mod putem adăuga oricâte pagini vrem, pur și simplu creând componente, și introducând calea lor în **`routes`**.

### Pagini globale

Uneori utilizatorii pot să acceseze url-uri care nu sunt cunoscute de aplicația noastră. În aceste cazuri am vrea să arătăm o pagină specială - cel mai des e așa numita pagina „404 Not Found”.

Ca deobicei, primul pas e să definim componenta, în acest caz **`NotFound.vue`**:

```markup
<template>
  <div>
    <h1>The requested page is NOT FOUND</h1>
  </div>
</template>

<script>
export default {
  name: "NotFound"
};
</script>

<style>
</style>
```

Diferența apare când definim calea, aici în loc de o cale specifică, definim o cale globală:

```javascript
import NotFound from "./NotFound.vue";

const routes = [
  { path: "/", component: Home },
  { path: "/about", component: About },
  { path: "*", component: NotFound }
];
```

{% hint style="warning" %}
E important ca această cale globală să fie declarată la sfârșit, de altfel paginile declarate după ea, nu vor putea fi accesate
{% endhint %}

În acest mod când utilizatorul încearcă să acceseze orice URL necunoscut, va fi redirecționat la pagina **not found**.

![Pagina Not Found](<../../.gitbook/assets/image (332).png>)

### Pagini dinamice

Uneori avem nevoie de pagini care să aibă informație dinamică in URL. Un exemplu bun e o pagină ce ar afișa un articol.&#x20;

În acest caz nu creăm câte o componentă separată pentru fiecare articol, ci creăm o singură componentă, și folosim URL-uri dinamice pentru a-i spune componentei care articol anume să-l încarce.&#x20;

Un exemplu de URL dinamic ar putea fi: **`/articles/article-2`**&#x20;

În acest caz componenta ar trebui să citească textul după **`/articles/`** (în cazul nostru - **`article-2`**) și să încarce articolul cu acest identificator.

Pentru a crea o componentă cu URL dinamic vom merge în direcție inversă - mai intâi creăm un route cu un segment dinamic în ea:

```javascript
import Article from "./Article.vue";

const routes = [
  ...
  { path: "/article/:id", component: Article },
  ...
];
```

{% hint style="info" %}
**`:id`** reprezintă un nume care noi îl declarăm pentru segmentul dinamic din URL. Putem alege orice nume.
{% endhint %}

Acum putem declara componenta noastră **`Article.vue`**, care va putea citi acest segment dinamic:

```markup
<template>
  <div>
    <h1>You just opened article: {{ articleId }}</h1>
  </div>
</template>

<script>
export default {
  name: "About",
  data() {
    return {
      articleId: null
    };
  },
  created() {
    // putem accesa route-ul curent prin variabila $route
    this.articleId = this.$route.params.id;

    // In acest moment putem incarca un articol, etc.
  }
};
</script>

<style>
</style>
```

{% hint style="info" %}
**`this.$route.params.id`** nu e o bucată de cod aleatoare:&#x20;

* **`$route`** - avem acces la el în orice pagină
* **`.params`** - toti parametrii dinamici a route-ului curent
* **`.id`** - același nume care l-am definit in calea dinamică din `main.js`
{% endhint %}

Astfel putem accesa un URL dinamic (care începe cu /article/) și pagina noastră îl va putea citi:

![Pagina care deschide articolul cu id=articol-23](<../../.gitbook/assets/image (326).png>)

## Link-uri de navigare

Până acum am definit o serie de pagini care pot fi accesate direct prin URL. O parte foarte importantă a oricărei aplicații este menu de navigare, care ne permite prin cateva link-uri să navigăm prin paginile noastre.&#x20;

Deobicei vrem să creăm menu-ul de navigare într-o componentă care știm că va fi randată în toate paginile unde vrem să arătăm acest menu. În cazul nostru un candidat bun e **`App.vue`**, care e punctul de intrare si e întotdeauna prezent.

Pentru a adăuga menu de navigare, am pute folosi link-uri obișnuite **`<a>`**, dar avem la dispoziție **`<router-link>`**, care ne oferă o funcționalitate automată comodă - asignează o clasă specifică când calea curentă e activă.

App.vue:

```markup
<template>
  <div id="app">
    <nav>
      <router-link to="/">Home</router-link>
      <router-link to="/about">About</router-link>
      <router-link to="/article/123">Main article</router-link>
    </nav>
    <router-view></router-view>
  </div>
</template>

<script>
export default {
  name: "App",
};
</script>

<style>
nav {
  display: flex;
  justify-content: flex-end;
}

nav a {
  background-color: #00162c;
  color: white;
  text-decoration: none;
  padding: 0.5em 1em;
  margin: 0.2em;
}


nav a.router-link-exact-active {
  background-color: #048a9c;
}
</style>
```

{% hint style="info" %}
din cauza că folosim componenta **`router-link`**, putem să stilizăm clasa **`.router-link-exact-active`** pentru a accentua vizual care pagină e activă.
{% endhint %}

Rezultatul care îl obținem în browser cu această modificare:

![Pagina About este activă](<../../.gitbook/assets/image (333).png>)

## Navigare programatică

Putem naviga din cod direct către o pagină utilizând variabila **`$router`** la care avem acces din orice pagină.&#x20;

Spre exemplu putem adăuga un buton în componenta **`Article.vue`**, care ne către pagina primară:

```markup
<template>
  <div>
    ...
    <button @click="goToHome()">Go HOME</button>
  </div>
</template>

<script>
export default {
  name: "About",
  ...
  methods: {
    goToHome() {
      this.$router.push({ path: `/` });
    }
  }
};
</script>

<style>
</style>

```

{% hint style="info" %}
`this.$router.push()` ne permite să navigăm programatic, în dependență de orice logică către o cale arbitrară.
{% endhint %}

## Exemplul complet

Astfel am implementat câteva pagini și un menu de navigare care ne permite să le accesăm.

**`main.js`**:

```javascript
import { createApp } from "vue";
import { createRouter, createWebHashHistory } from "vue-router";

import App from "./App.vue";
import Home from "./Home.vue";
import About from "./About.vue";
import Article from "./Article.vue";
import NotFound from "./NotFound.vue";

const routes = [
  { path: "/", component: Home },
  { path: "/about", component: About },
  { path: "/article/:id", component: Article },
  { path: "*", component: NotFound }
];

const router = createRouter({
  history: createWebHashHistory(),
  routes: routes
});

createApp(App).use(router).mount("#app");
```

**`App.Vue`**:

```markup
<template>
  <div id="app">
    <nav>
      <router-link to="/">Home</router-link>
      <router-link to="/about">About</router-link>
      <router-link to="/article/123">Main article</router-link>
    </nav>
    <router-view></router-view>
  </div>
</template>

<script>
export default {
  name: "App"
};
</script>

<style>
#app {
  font-family: "Avenir", Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
nav {
  display: flex;
  justify-content: flex-end;
}
nav a {
  background-color: #00162c;
  color: white;
  text-decoration: none;
  padding: 0.5em 1em;
  margin: 0.2em;
}

nav a.router-link-exact-active {
  background-color: #048a9c;
}
</style>
```

**`Article.vue`**:

```markup
<template>
  <div>
    <h1>You just opened article: {{ articleId }}</h1>
    <button @click="goToHome()">Go HOME</button>
  </div>
</template>

<script>
export default {
  name: "About",
  data() {
    return {
      articleId: null
    };
  },
  created() {
    // putem accesa route curent prin variabila $route
    this.articleId = to.params.id;

    // In acest moment putem incarca un articol, etc.
  },
  methods: {
    goToHome() {
      this.$router.push({ path: `/` });
    }
  }
};
</script>

<style>
</style>
```

Celelalte componente sunt doar template gol fără nimic semnificativ în ele, doar poziția lor în folder e importantă:

![Structura proiectului de navigare](<../../.gitbook/assets/image (330).png>)
