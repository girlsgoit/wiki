---
description: >-
  Putem stoca numere în Python? Dar litere? Cuvinte? Da! Chiar și versuri
  "Dragostea Din Tei" de Dan Bălan)
---

# Tipuri de Date

În programare, **tipurile de date** \(Data Type\) este un concept important.

Variabilele pot stoca diferite tipuri de date.

{% hint style="info" %}
Python are următoarele tipuri de date încorporate în mod implicit, în aceste categorii:

* Text Type: **`str`**
* Numeric Types: **`int`, `float`,** `complex`
* Sequence Types: `list`, `tuple`, `range`
* Mapping Type: `dict`
* Set Types: `set`, `frozenset`
* Boolean Type: **`bool`**
* Binary Types: `bytes`, `bytearray`, `memoryview`
{% endhint %}

###  S**tring**

`Str` este un șir de caractere \(un text\).

Un `string` poate conține litere, numere, simboluri și spații. Ele trebuie să fie scrise între ghilimele.

```python
# poate fi orice caracter în " " / ' '
x = "Hello World" 
y = '13478*/+'
```

Deși înca nu am învățat ce sunt funcțiile, noi deja le folosim.

> `type()` - funcție care ne spune ce tip de date conține variabila data.

`print()` și `input()` la fel sunt funcții.

```python
# haideti sa ne convingem 
# ca variabilele x si y au valori de tip `string`

print(type(x))
print(type(y))
```

{% hint style="info" %}
După cum am mai menționat, _Python_ acceptă și _ghilimele duble_, și _ghilimele unice_ ca fel de scriere a `string`-urilor.
{% endhint %}

###  **Integer**

`Int`este un număr întreg, pozitiv sau negativ, fără zecimale, de lungime nelimitată.

{% hint style="info" %}
Amintiți-vă de mulțimea numerelor întregi Z de la matematică, este același lucru.
{% endhint %}

```python
my_int = 3
your_int = -4
```

### Float

 `Float`, sau numărul rațional este un număr, pozitiv sau negativ, care conține unul sau mai multe zecimale.

{% hint style="info" %}
`Float,`la fel, poate fi asociat cu mulțimea numerelor reale R.
{% endhint %}

```python
# iata cum arata un float
x = 20.5 

print(x, type(x))
```

### Bool

 **`Bool`** reprezintă un tip de variabile care pot avea doar două valori: Adevărat sau Fals. Așa cum un întrerupător poate avea doar două stări: conectat sau deconectat, la fel și un bool poate fi doar `True` sau `False`.

```python
# bool de la boolean :)
x = True
type(x)
```

### Convertirea

Cum convertim dintr-un tip de date în alt tip de date?

Convertirea din `float`  în `integer`

```python
x = 2.8
print(type(x))

x = int(x)
print(x)
print(type(x))
```

Convertirea din `string` în `float`

```python
x = '177'
print(type(x))

x = float(x)
print(x)
print(type(x))
```

Convertirea din `int`  în  `string`

```python
x = 10
print(type(x))

x = str(x)
print(x)
print(type(x))
```

Convertirea din `string`  în  `float`

```python
x = '10'
print(type(x))

x = float(x)
print(x)
print(type(x)
```

Convertirea din `string`  în  `int`

{% hint style="info" %}
Putem converti un `string` în`int` doar dacă este format în totalitate din cifre.
{% endhint %}

```python
x = "10"
print(type(x))

x = int(x)
print(type(x))
print(x)
```

Convertirea din `bool`  în  `int`

```python
x = False
print(type(x))

x = int(x)
print(type(x))
print
```



> **Every language has an optimization** [**operator**](operatori.md)**. In C++ that operator is ‘//’. \(In Python - \#\)**

