---
description: Unul din cele mai importante concepte în orice limbaj.
---

# Funcții

Funcțiile în **JavaScript** sunt blocuri de cod reutilizabile, care execută o serie de instrucțiuni. Aceste funcții pot fi apelate de evenimente în browser, sau apelate din alte părți în codul JavaScript.

## Sintaxa unei funcții

O funcție e definită utilizând cuvântuil cheie `function`, urmat de un **nume** \(care îl alegeti voi\) urmat de paranteze `( )`. După care, între acolade `{ }` se definesc instrucțiunile care vrem sa le includem în această funcție.

```javascript
function sayHello() {
    console.log("hello, World!");
}
```

{% hint style="info" %}
Observați că aici funcția doar e declarată, asta inseamnă că orice cod care îl scriem aici încă nu e executat, doar spunem ce vrem sa facem când această funcție va fi apelată mai târziu.
{% endhint %}

Funcția de mai sus va face un singur lucru, va afișa la consola **”Hello, World!”**. Observați că are un nume sugestiv, și instrucțiunea `console.log()` se află între acolade. 

Pentru a apela funcția sayHello oriunde în codul nostru, trebuie doar să-i scriem numele cu paranteze la sfârșit:

```javascript
sayHello(); // Va afisa "Hello, World!" in consola
```

## Parametri de intrare

Orice funcție poate avea o serie de parametri de intrare definiți. Acești parametri vor fi vizibili doar în scopul funcției și deobicei îi folosim pentru a crea funcționalități mai generice, care pot fi apelate în diferite forme. 

Spre exemplu putem face funcția noastră mai puternică dacă vrem să o facem sa zică salute pe cineva concret:

```javascript
function sayHello(name) {
    console.log("Hello, " + name);
}
```

Observați că parametrii de intrare sunt definiți între paranteze cînd definim funcția. Dacă avem mai mulți parametri, îi separăm prin virgulă.

Pentru a apela această funcție, folosim același pattern:

```javascript
sayHello("Lume"); // Va afisa "Hello, Lume"
```

## Return \(Răspunsul unei funcții\)

Funcțiile, pe lângă parametri de intrare, care o fac configurabilă, mai poate avea și un raspuns. Spre deosebire de parametri de intrare, care pot fi mai mulți, răspunsul e întotdeauna unul singur. 

Pentru a defini un răspuns, folosim cuvântul cheie `return` în corpul funcției:

```javascript
function add(a, b) {
    const sum = a + b;
    return sum; 
    // orice scriem aici nu se va mai executa
}
```

Funcția de mai sus are 2 parametri de intrare, și va calcula suma lor, după care va returna această sumă \(linia 3\). Orice cod care noi îl scriem după instrucțiunea `return` nu va mai fi executat. Putem folosi această idee pentru a operi prematur execuția unei funcții.

Pentru a apela funcția declarată mai sus, o apelăm în același mod, doar că o interpretăm ca o instrucțiune ce întoarce un rezultat:

```javascript
let res = add(3, 5); // res va avea valoarea 8

console.log(add("test ", "me")) // vom afisa la consola "test me"

const text = "Suma numerelor 4 si 6 este " + add(4, 6);
```

## Scopul variabilelor în funcții

Orice variabilă care o declarăm în funcțiile noastre, vor fi vizibile doar în corpul lor, care e definit de { }. Se aplică aceleași reguli de vizibilitate ca și peste tot în JavaScript:

```javascript
function product(n1, n2, n3) {
    let p = n1 * n2;
    let p2 = p * n3;
    // alt cod care foloseste variabilele p si p2
}

// aici NU putem folosi variabilele p, p2, n1, n2, n3
```

## Alte forme de definire a unei funcții

În JavaScript, funcțille sunt sunt așa numitele ”First class citizens”. Asta doar ne spune că putem folosi funcțiile la fel cum folosim orice variabilă, adică putem sa o transmitem ca o variabilă și să o declarăm ca o variabilă.

```javascript
function add(a, b) {
    return a + b;
}


let suma = add; // suma() va fi la fel o functie acum
console.log(suma(2, 3)); // va afisa la consola "5"


let prod = function (a, b) { 
    return a * b;
}
console.log(prod(3, 4)); // va afisa la consola "12"
```

O să vedeți în exemple de cod aceste forme de declarare a funcțiilor și e important să le recunoașteți. Voi puteți să le declarați în orice formă care va e comod vouă.

