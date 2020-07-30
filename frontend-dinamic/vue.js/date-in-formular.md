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

```markup
<span>Multiline message is:</span>
<p style="white-space: pre-line;">{{ message }}</p>
<br>
<textarea v-model="message" placeholder="add multiple lines"></textarea>
```

![](../../.gitbook/assets/image%20%28305%29.png)

#### Checkbox

În exemplul de mai jos, valoarea afișată în `<label>` va fi `true` dacă checkbox-ul este bifat. În caz contrar va fi `false`.

```markup
<input type="checkbox" id="checkbox" v-model="checked">
<label for="checkbox">{{ checked }}</label>
```

![](../../.gitbook/assets/image%20%28309%29.png)

 În exemplul de mai jos, `checkedNames` este un array \(`checkedNames: []`\) în care vor fi incluse numele pentru care checkbox-ul este bifat.

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

