# Vue.js

## Vue CLI

### Instalare

{% hint style="info" %}
#### Node.js este necesar

Pentru a rula Vue CLI este necesară instalarea [Node](https://nodejs.org/). Node \(sau denumirea oficială Node.js\) este un mediu de execuție open-source, multi-platformă, care permite dezvoltatorilor să creeze tot felul de instrumente și aplicații în JavaScript.
{% endhint %}

Pentru a instala un pachet nou folosește următoarele comenzi. Ai nevoie de drepturi de administrator pentru a executa aceste comenzi.

```bash
npm install -g @vue/cli
```

După instalare vei avea acces la comanda `vue` în linia de comandă. Pentru a verifica dacă instalarea a avut loc cu success poți executa comanda `vue` care va prezenta un mesaj informațional afișând lista de comenzi accesibile. 

### Crearea unui proiect

Pentru a crea un nou proiect execută:

```bash
vue create hello-world
```

Un proiect nou poate fi generat în interiorul unui folder existent.

```bash
vue create .
```

Ți se va propune să selectezi una din configurările presetate. Poți selecta o configurare implicită sau „Manually select features” pentru a funcționalitățile de care ai nevoie.

![](../.gitbook/assets/image%20%28190%29.png)

Configurația implicită este potrivită pentru o prototipare rapidă, în timp ce configurarea manuală oferă mai multe opțiuni pentru personalizarea proiectului tău. 

![](../.gitbook/assets/image%20%28163%29.png)

### 

### Lansare împachetarea

Pentru a lansa proiectul execută următoarea comandă.

```bash
npm run serve
```

După ce proiectul a fost lansat, introdu în browser următoarea adresă.

```text
http://localhost:8080/
```

Pentru a împacheta proiectul execută următoarea comandă.

```bash
npm run build
```

### Structura proiectului

```text
node_modules/ – Dependențele Node.js care se administrează automat.
public/ – Lista de fișiere publice, Vue va folosi aceste fișiere pentru a injecta codul sursă a aplicației.
src/ – Aici locuiește codul aplicației tale, toate modificările le faci aici.
  assets/ – Lista resurselor (de exemplu imagini) de care ai nevoie în proiect.
  components/ – Toate componentele sunt definite aici.
  App.vue – Compononenta părinte care conține întreaga aplicație Vue.
  main.js – Configurarea globală a aplicației Vue.js
```

