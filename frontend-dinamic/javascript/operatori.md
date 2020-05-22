---
description: Ce putem face in expressiile js
---

# Operatori

JavaScript are o serie de operatori pentru majoritatea tipurilor de date primare. Le vom analiza in continuare pe grupuri

## Operatori Aritmetici

Operatorii aritmetici sunt pentru tipurile de date numerice, și ei sunt destul de standarți:



| Operator | Description | Exemplu | Result in y | Result in x |
| :--- | :--- | :--- | :--- | :--- |
| + | Adunarea | `x = y + 2` | `y = 5` | `x = 7` |
| - | Scăderea | `x = y - 2` | `y = 5` | `x = 3` |
| \* | Mutiplicarea | `x = y * 2` | `y = 5` | `x = 10` |
| / | Împărțirea | `x = y / 2` | `y = 5` | `x = 2.5` |
| % | Modulus \(restul împărțirii\) | `x = y % 2` | `y = 5` | `x = 1` |
| ++ | Increment \(aduna 1\) | `x = ++y` | `y = 6` | `x = 6` |
|   |   | `x = y++` | `y = 6` | `x = 5` |
| -- | Decrement \(scade 1\) | `x = --y` | `y = 4` | `x = 4` |
|   |   | `x = y--` | `y = 4` | `x = 5` |

{% hint style="info" %}
Observați că Increment si Decrement modifică de asemenea valoarea lui y
{% endhint %}

## Operatori de asignare

Deja am folosit principaul operator de asignare - `=`. Pe lângă el sunt o serie de operatori combinați care ne permit sa executam operații aritmetice in formă prescurtată.

| Operator | Exemplu | Forma echivalentă | Result in x |
| :--- | :--- | :--- | :--- |
| `=` | `x = y` | `x = y` | `x = 5` |
| `+=` | `x += y` | `x = x + y` | `x = 15` |
| `-=` | `x -= y` | `x = x - y` | `x = 5` |
| `*=` | `x *= y` | `x = x * y` | `x = 50` |
| `/=` | `x /= y` | `x = x / y` | `x = 2` |
| `%=` | `x %= y` | `x = x % y` | `x = 0` |

{% hint style="info" %}
Forma prescurtată se folosește deobicei când unul din elementele expresiei e variabila care vrem să o modificăm. Vedeți forma echivalentă în tabel
{% endhint %}

## Operatori pe String

JavaScript suportă concatenarea \(unirea\) mai multor expresii String impreună, și pentru astsa e folosit operatorul sugestiv de adunare.

| Operator | Exemplu | text1 | text2 | text3 |
| :--- | :--- | :--- | :--- | :--- |
| `+` | `text3 = text1 + text2` | `"Good "` | `"Morning"` |  `"Good Morning"` |
| `+=` | `text1 += text2` | `"Good Morning"` | `"Morning"` | `""` |

{% hint style="info" %}
Puteti de asemenea să adaugati la un string și alte tipuri de date. Ele vor fi convertite în string, după care concatenate. e.g. `let result = "Answer is " + 42`
{% endhint %}

## Operatori de comparare

Operatorii de comparare vor avea ca rezultat întotdeauna o variabilă de tip **Boolean.** Ei sunt folosiți în comparări și condiționale.

Pentru exemplul **`let x = 5`**, tabelul următor prezintă operatorii de comparare și rezultatul lor:

| Operator | Descriere | Exemplu | Rezultat |
| :--- | :--- | :--- | :--- |
| == | este egal | `x == 8` | `false` |
|   |   | `x == 5` | `true` |
| === | este egal ca valoare și tip | `x === "5"` | `false` |
|    |   | `x === 5` | `true` |
| != | nu este egal | `x != 8` | `true` |
| !== | nu este ca valoare sau tip | `x !== "5"` | `true` |
|   |    | `x !== 5` | `false` |
| &gt; | mai mare | `x > 8` | `false` |
| &lt; | mai mic | `x < 8` | `true` |
| &gt;= | mai mare sau egal | `x >= 8` | `false` |
| &lt;= | mai mic sau egal | `x <= 8` | _`true`_ |

## Operatorii logici

Operatorii logici sunt asemănători cu cei de comparare, în sensul că rezultatul lor e întotdeauna de tip **Boolean.** Ei sunt folosiți deobicei impreună cu operatorii de comparare, și ne permite să-i combinăm în expresii mai complexe.

Pentru exemplul **`let x = 6;`** și **`let y = 3;`** tabelul de mai jos prezintă operatorii și rezultatul lor

| Operator | Descriere | Exemplu | Rezultat |
| :--- | :--- | :--- | :--- |
| && | and | `(x < 10 && y > 1)` | `true` |
| \|\| | or | `(x === 5 || y === 5)` | `false` |
| ! | not | `!(x === y)` | `true` |

{% hint style="info" %}
Observați că operatorul `! (not)`, se aplică doar pentru un singur membru \(e unar\) spre deosebire de celelalte 2 care se aplică între 2 membri. Ceea ce are sens dacă analizăm - el inversează rezultatul unei expresii care urmează dupa el.
{% endhint %}

