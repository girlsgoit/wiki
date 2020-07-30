# Date în formular

### Directiva v-model

Pentru elementele unui formular, putem crea o legătură bidirecțională cu proprietățile declarate în instanța Vue. Pentru aceasta, vom utiliza directiva `v-model`. Atunci când datele din formular sunt modificate, aceste date sunt procesate reactiv \(instant\) de către Vue.

În exemplul de mai jos, textul din `<input>` va fi procesat instant și va fi afișat în paragraful de mai jos.

```markup
<input v-model="message" placeholder="edit me">
<p>Message is: {{ message }}</p>
```

![](../../.gitbook/assets/image%20%28307%29.png)

#### Text cu mai multe linii

Textul cu mai multe linii poate fi adăugat cu ajutorul elementului `<textarea>`. Pentru acest element, interpolarea \(`<textarea>{{ text }}</textarea>`\) nu funcționează, dar poate fi utilizată directiva `v-model`.

```markup
<span>Multiline message is:</span>
<p style="white-space: pre-line;">{{ message }}</p>
<br>
<textarea v-model="message" placeholder="add multiple lines"></textarea>
```

![](../../.gitbook/assets/image%20%28305%29.png)

