---
description: >-
  Adunatura de proprietati si functii ajutatoare la operatii matematice a
  datelor de tip Number
---

# Math API

## Despre Math

Este un obiect JavaScript ce ne ofera o serie de functii si proprietati utile pentru a opera cu datele de tip **Number**. 

#### Cum folosim o functie? \(ex: `round()`\)

```javascript
const x = 2.4;

const roundedX = Math.round(x); // Round x to nearest integer: 2c
```

#### Cum folosim o proprietate? \(ex: `PI`\)

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
* `floor(x)` - rotunjirea in jos a lui **x** la precedentul numar intreg \(truncare\)
* `random()` - returneaza un numar aleator de la **0** \(inclusiv\) pina la **1** \(exclusiv\) - \[0, 1\) 

## Proprietatile lui Math

Majoritatea din ele se intrebuinteaza destul de rar, cele mai vestite fiind constantele **PI** si **E**

* `Math.E` - returneaza numarul lui **Euler**
* `Math.PI` - returneaza constanta **PI** 
* `Math.SQRT2` - returneaza radical din 2 
* `Math.SQRT1_2` - returneaza radical din 1/2 
* `Math.LN2` - returneaza logaritm natural din 2 
* `Math.LN10` - returneaza logaritm natural din 10 
* `Math.LOG2E` - returneaza logaritm in baza 2 din E 
* `Math.LOG10E` - returneaza logaritm in baza 10 din E 

