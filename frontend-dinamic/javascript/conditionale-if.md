---
description: 'To be, or not to be'
---

# Condiționale \(if\)

Instrucțiunile condiționale ne permit să executăm anumite instrucțiuni în cod, doar dacă anumite condiții se îndeplinesc.

{% hint style="info" %}
Știați că anume capacitatea să poti executa o instrucțiune în dependență de o condiție face orice calculator ”Turing Complete” - capabil să execute orice algoritm ne vine în cap?
{% endhint %}

## Sintaxa

Instrucțiunile condiționale se declară în JavaScript cu ajutorul cuvântului cheie `if`, urmat de o condiție, urmat de blocul de cod care vrem să-l executam doar în cazul cand condiția va avea rezultatul `true`

```javascript
let age = 19;

if (age >=18) { 
    // aceasta instrucțiune va fi executată din cauza că age e 19 (> 18)
    console.log("Pot vota"); 
} 
```

{% hint style="info" %}
Observați că condiția e definită între paranteze, și rezultatul ei e interpretat ca un rezultat `boolean` întotdeauna.
{% endhint %}

## If - else

Uneori vrem să executăm acțiuni în cazul când condiția e indeplinită \(`true`\), și o altă instrucțiune când condiția nu e îndeplinită \(`false`\). În aceste cazuri ne vine în ajutor combinația `if .. else`

```javascript
let age = 17;

if (age >=18) {
    console.log("Pot vota"); // NU va fi executata
} else {
    // vor fi executate
    console.log("Nu pot vota"); 
    age++; 
}
```

{% hint style="info" %}
Observați că blocurile de cod care vrem să le executăm sunt definite la fel între `{}`, primele după `if` repezintă toate instrucțiunile care vrem să le executăm daca condiția e adevărată, și cele după `else` reprezintă toate instrucțiunile care vrem să le executăm dacă condiția e falsă.
{% endhint %}

## If - else if

Putem combina mai multe condiționale împreună pentru a testa altă condiție dacă prima e falsă. 

```javascript
let number = 3;

if (number < 0) {
    conosle.log("numarul e negativ");
} else if (number > 0) {
    console.log("numarul e pozitiv");
} else {
    console.log("numarul e zero");
}
```

{% hint style="info" %}
Putem înlănțui oricâte condiții `else if` vrem una după alta. Trebuie doar să ținem minte că se va opri în momentul când prima condiție se adeverește. În cazul de mai sus execuția se oprește la linia 6, când se adeverește verificarea `else if (number > 0)`
{% endhint %}

### If vs else if

Un moment important e să întelgem diferența între mai multe instrucțiuni indepente `if`, și o serie de instrucțiuni `else if` înlănțuite.

În acest exemplu, avem 4 instrucțiuni `if` indepente. Ele toate vor fi verificate, și, desigur, singura care va fi evaluată `true` și executată va fi primul `if`

```javascript
let age = 10

if (dayOfWeek <= 10) {
    console.log("Copil");
}

if (age <= 20) {
    console.log("Adolescent");
}

if (age <= 30) {
    console.log("Tanar");
}

if (age > 30) {
    console.log("Matur");
}
```

În acest exemplua avem o serie de `else if` inlănțuite. Fiecare verificare următoare va fi executată doar dacă precentele au fost false. În acest caz verificările se vor opri la al doilea `if`, cele ce urmează nici nu vor fi verificate.

```javascript
let age = 14

if (dayOfWeek <= 10) {
    console.log("Copil");
} else if (age <= 20) {
    console.log("Adolescent");
} else if (age <= 30) {
    console.log("Tanar");
} else {
    console.log("Matur");
}
```

