---
description: 'Ca fish, dar fiSHier)'
---

# Fișiere

Utilizarea fișierelor este larg răspândită pe larg în web developement, deorece ele ne permit să stocăm și să accesăm informația necesară nouă. Acestă informație poate fi stocată in fisiere CSV \(comma-separated values\) - fisiere cu valori separate de virgula.

## Intro

Pentru a putea deschide aceste fisiere, mai intai de toate trebuie sa le incarcam in Google Colab.

Dupa ce am incarcat fisierul in mapa Files\(stanga sus\), putem sa folosim functia `open()` pentru a deschide acest fisier. Functia `open()` primeste ca argumente 'adresa' fisierului, in cazul nostru: `'./heroes_information.csv'` si tipul de permisiune, in cazul nostru `'r'` de la 'read'.

```python
# pentru a deschide aceste fisiere, folosim comanda open()
opened_file = open('./heroes_information.csv', 'r') 
# deschidem fișierul csv în mod citire
```

## Deshidem fișier

{% hint style="info" %}
`.open()` - principala funcție de deschidere a fișierului
{% endhint %}

### Metode de deshidere

{% hint style="info" %}
* `'r'` - Doar pentru citire \(Read\)
* `'a'` - Pentru a adăuga informație \(Append\)
* `'w'` - Pentru scrierea informației \(Write\)
* `'x'` - Pentru a crea un fișier
* `'r+'` - Permite citirea și scrierea informației
* `'a+'` - Permite citirea și adăugarea informației
{% endhint %}

### Metode de interpretarea 

{% hint style="info" %}
* `'b'` - binar, folosit pentru imagini, etc.
* `'t'` - text, modul implicit
{% endhint %}

### Structura

