---
description: >-
  Ce vei face, dacă ai castiga un million dolari? Dar dacă zece lei? Introducem
  construția if...else! Și multe alte!
---

# Flow control

La fel ca în viața reală, uneori codul nostru trebuie să fie capabil să ia decizii.

Până acum, tot ce am scris împreună în _Python_ putea să urmeze doar un singur fir logic: fie că am adunat două numere sau fie că am afișat ceva. Codul nostru, însă, nu putea lua decizii de sine-stătător în privința a ce instrucțiuni să execute în dependență de o careva condiție. Conceptul de **Control Flow** oferă posibilitate programului de a alege ce să facă.

Pentru a intra în esența conceptului de Control Flow, trebuie să definim câteva noțiuni importante.

{% hint style="success" %}
[Operatori de comparatie](operatori.md#comparatoarele) au un rol major in conceptul de Control Flow.
{% endhint %}

## **Operațiile Boolean**

Operațiile `boolean` compară careva afirmații, rezultatul acestei comparații fiind o valoare `boolean`. Există trei operații `boolean`:

* `and`, care verifică dacă _ambele_ afirmații sunt `True`;
* `or`, care verifică dacă _cel puțin_ o afirmație este `True`;
* `not`, care este _opusul_ afirmației.

În acest context, aflați că:

```python
 - True  and True  este True;
 - True  and False este False;
 - False and True  este False;
 - False and False este False;

 - True  or True  este True;
 - True  or False este True;
 - False or True  este True;
 - False or False este False;

 - Not True  este False;
 - Not False este True.
```

Să mergem mai departe.

Să zicem că avem următoarea expresie _Python_: `1 < 2 and 2 < 3`.

Rezultatul acestei expresii va fi `True` sau `False`? Pentru a răspunde la această întrebare, să apelăm la tabelul de mai sus.

`1 < 2` este `True`. `2 < 3` este la fel `True`. `True and True` ce va fi? Corect! `True`!

Dar care vor fi rezultatele următoarelor expresii? `1 < 2 and 2 > 3` \(_False_\) `1 < 2 or 2 > 3` \(_True_\) `1 > 2 or 2 > 3` \(_False_\) `not False` \(_True_\) `not 41 > 40` \(_False_\)

{% hint style="warning" %}
Operațiile `boolean` nu sunt pur și simplu evaluate de la stânga la dreapta. La fel ca operațiile aritmetice, operațiile `boolean` au o ordine de execuție:

* `and`, care verifică dacă _ambele_ afirmații sunt `True`;
* `or`, care verifică dacă _cel puțin_ o afirmație este `True`;
* `not`, care este _opusul_ afirmației.
{% endhint %}

De exemplu, `True or not False and False` returnează `True`. De ce?

`not` este evaluat primul, astfel noi avem `True or True and False`. Deoarece `and`-ul e următorul evaluat, avem `True or False`. Așa după cum am văzut mai sus, `True or False` este `True`, astfel valoarea finală este `True`!

