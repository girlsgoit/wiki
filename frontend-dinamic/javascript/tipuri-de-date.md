# Tipuri de date

&#x20;În JavaScript, o valoare e întotdeauna de un anumit tip de date. În continuare vom vedea care sunt ele.

### **Undefined**

Undefined e un tip special de date care reprezintă conceptul unei valori care lipsește neintenționat. De exemplu, dacă o variabilă nu are setată o valoare, atunci tipul de date a variabilei este undefined.

```javascript
let bandersnatch;

console.log(bandersnatch); // undefined
```

### Null

Null e un tip special de date care reprezintă conceptul unei valori care lipsește intenționat. Null poate fi utilizat atunci când dorim să indicăm că valoarea lipsește sau e necunoscută.

```javascript
let mimsy = null;

console.log(mimsy); // null
```

### Boolean

Tipul de date boolean poate avea doar 2 valori: **true** sau **false**.

Acest tip de date este utilizat pentru stocarea valorilor de tip **da** sau **nu**.

```javascript
let isSad = true;

let isHappy = !isSad;               // The opposite
let isFeeling = isSad || isHappy;   // Is at least one of them true?
let isConfusing = isSad && isHappy; // Are both true?
```

### Number

Tipul de date number poate stoca atât numere întregi cât și numere reale.

```javascript
console.log(typeof(28));   // "number"
console.log(typeof(3.14)); // "number"
console.log(typeof(-140)); // "number"
```

Din tipul de date number fac parte și valorile numerice speciale **Infinity**, **-Infinity** și **NaN**.

**Infinity** reprezintă infinitatea matematică și este o valoare specială mai mare decât orice număr.\
**NaN** reprezintă o eroare de calcul, este rezultatul unei operații matematice incorecte sau nedeterminate.

```javascript
let scale = 0;

let a = 1 / scale;  // Infinity
let b = 0 / scale;  // NaN
let c = -a;         // -Infinity
let d = 1 / c;      // -0
```

**BigInt**

În JavaScript, tipul de date number nu poate reprezenta valori mai mari decât 9007199254740991 sau mai mici decât -9007199254740992. De asemenea ele nu sunt numere exacte. În majoritatea cazurilor aceste valori sunt deajuns, însă atunci când dorim valori mai mari sau mai mici, sau vrem numere intregi exacte, putem utiliza **BigInt**.

O variabilă sau constantă de tip **BigInt** are sufixul **n** după număr.

```javascript
let alot = 9007199254740991n;

console.log(typeof(alot)); // "bigint"
console.log(alot + 1n));   // 9007199254740992n
console.log(alot + 2n));   // 9007199254740993n
```

### String

Un șir de caractere are tipul de date string și se scrie între ghilimele. Pot fi declarate cu 3 tipuri de ghilimele, toate creaza acelasi tip de date - string.

```javascript
console.log(typeof("some text")); // "string"
console.log(typeof('some text')); // "string"
console.log(typeof(`some text`)); // "string"
```

Un string gol, este și el un string.

```javascript
console.log(typeof('')); // "string"
```

String-urile pot fi parte a unei expresii.

```javascript
console.log(101 + ' Dalmatians'); // "101 Dalmatians"
console.log('Hello' + ' World');  // "Hello World"
```

String-urile au o serie de metode (functii interne) utile care ne ajuta sa le manipulam usor. Cateva exemple mai populare:

```javascript
let text = "Hello World";

// returneaza caracterul pe pozitia indicata ca parametru
let letter = text.charAt(0) // 'H'

// Intreaba daca string-ul incepe cu caracterele indicate ca parametru
text.startsWith("Hello"); // true

// Intreaba daca string-ul se termina cu caracterele indicate ca parametru
text.endsWith("WORLD"); // false (caracterele mici si mari sunt diferite in js)

// Returneaza textul cu toate caracterele transformate in "LITERE MARI"
text.toUpperCase(); // "HELLO WORLD"

// Returneaza textul cu toate caracterele transformate in "litere mici"
text.toLowerCase(); // "hello world"
```

Nimeni nu le tine minte pe toate deobicei, puteti intotdeauna sa gasiti toate metodele string-ului in resurse externe, e.g:

W3Schools - [https://www.w3schools.com/jsref/jsref\_obj\_string.asp](https://www.w3schools.com/jsref/jsref\_obj\_string.asp)

MDN - [https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global\_Objects/String](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global\_Objects/String)

### Symbol

Symbol este un tip de date special care este utilizat pentru crearea identificatorilor unici.

```javascript
let alohomora = Symbol()
console.log(typeof(alohomora)); // "symbol"
```

### Mai departe

În capitolul următor vom vedea operațiile principale care le putem avea cu aceste tipuri de date.

{% content-ref url="operatori.md" %}
[operatori.md](operatori.md)
{% endcontent-ref %}

