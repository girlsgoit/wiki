---
description: >-
  Adunatura de proprietati si functii ajutatoare la operatii matematice a
  datelor de tip Number
---

# Math API

## Despre Math

Este un obiect JavaScript ce ne ofera o serie de functii si proprietati utile pentru a opera cu datele de tip **Number**.&#x20;

#### Cum folosim o functie? (ex: `round()`)

```javascript
const x = 2.4;

const roundedX = Math.round(x); // Round x to nearest integer: 2c
```

#### Cum folosim o proprietate? (ex: `PI`)

```javascript
const circleRadius = 4;

const circleArea = Math.PI * circleRadius * circleRadius; // Area = PI * R^2 = 50.26548245743669 
```

Pentru o solutie mai eleganta se poate de folosit o alta functie pentru ridicarea la putere - `pow()`

```javascript
const circleArea = Math.PI * Math.pow(circleRadius, 2); // acelasi rezultat
```

Pentru obtinerea doar partii intregi a rezultatului, prin truncare, putem utiliza `floor()`

```javascript
const circleArea = Math.floor(Math.PI * Math.pow(circleRadius, 2)); // 50
```

## Functiile des folosite

* `round(x)` - rotunjirea lui **x** pina la cel mai aproape numar intreg
* `pow(x, y)` - ridicarea lui **x** la puterea **y**
* `sqrt(x)` - radical din **x**
* `abs(x)` - modulul lui **x**
* `ceil(x)` - rotunjirea in sus a lui **x** la urmatorul numar intreg
* `floor(x)` - rotunjirea in jos a lui **x** la precedentul numar intreg (truncare)
* `random()` - returneaza un numar aleator de la **0** (inclusiv) pina la **1** (exclusiv) - \[0, 1)&#x20;

### Exemple de functii

Obtineti un numar intreg aleator de la 1 la 10 si printati-l in consola.

```javascript
const randomNumberFrom0To1 = Math.random(); // de la 0 la 1 - ex: 0.3221243

const randomNumberFrom1To10 = randomNumberFrom0To1 * 10; // ex: 3.221243

const integerRandomNumberFrom0To9 = Math.floor(randomNumberFrom0To1); // ex: 3

const integerRandomNumberFrom1to10 = integerRandomNumberFrom0To9 + 1; // ex: 4
```

Daca analizam aceasta solutie observam ca minim Math.random() poate fi 0 si maxim 0.99999999, respectiv daca utilizam la final `ceil()` inloc de `floor()` pentru a evita adunarea de la urma **+1**, erau sanse in caz ca `Math.random()` returneaza **0** programul sa returneze in final **0** inloc de 1 (cerinta minimala).\
\
**PS**. De asemenea acest program putea fi scris intr-o linie.

```javascript
const randomNumber = Math.floor(Math.random() * 10) + 1; // mai elegant
```

#### ATENTIE: Optati pentru varianta cu mai putine linii de cod doar in cazul in care este destul de clara expresia.&#x20;

De altfel separarea codului in mai multe variabile usureaza citirea codului - in special celor care nu l-au scris.

## Proprietatile lui Math

Majoritatea din ele se intrebuinteaza destul de rar, cele mai vestite fiind constantele **PI** si **E**

* `Math.E` - returneaza numarul lui **Euler**
* `Math.PI` - returneaza constanta **PI**&#x20;
* `Math.SQRT2` - returneaza radical din 2&#x20;
* `Math.SQRT1_2` - returneaza radical din 1/2&#x20;
* `Math.LN2` - returneaza logaritm natural din 2&#x20;
* `Math.LN10` - returneaza logaritm natural din 10&#x20;
* `Math.LOG2E` - returneaza logaritm in baza 2 din E&#x20;
* `Math.LOG10E` - returneaza logaritm in baza 10 din E&#x20;
