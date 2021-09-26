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

```python
f = open("demofile.txt") 
f = open("demofile.txt", "r") #Read
f = open("demofile.txt", "rt") #Read Text
```

 Dupa ce am deschis fisierul, avem nevoie de functia `reader()` din modulul csv care va citi acest fisier si ne va intoarce un obiect.

## Citirea din fișier

```python
from csv import reader  # importăm funcția reader din modulul csv 
read_file = reader(opened_file) # interpretăm datele csv din fișier
```

Se poate intampla ca in fisierul nostru CSV datele nu vor fi separate prin **`,`** ci prin **`;`**. In cazul dat va trebui sa setam in fuctia reader delimitatorul sa fie **`;`**, care in mod implicit e setat sa fie **`,`**.

```python
read_file = reader(opened_file, delimeter=';')
```

Acum read\_file poate fi transformat intr-o structura de date deja familiara noua, intr-o lista de lista. Pentru asta folosim functia pre-creata \(built-in\) `list()`.

```python
heroes = list(read_file) # transformăm datele csv într-o listă de liste
```

## INTOTDEAUNA INCHIDE FIȘIERUL

```python
f.close()
```

## Modificarea informației

{% hint style="info" %}
`.write()` - Scrie in fișier
{% endhint %}

`filename.write(info)`

```python
f = open("tester.txt", "w") # scriem "deasupra" , in fișier gol 
f.write("Salut! ")
f.close()

#citim informația inscrisă
f = open("tester.txt", "r")
print(f.read())  #Salut!
f.close()

#adăugăm informație
f = open("tester.txt", "a") #adăugam informatia in capătul de fișier
f.write("Ne bucurăm că sunteți alături de noi!")
f.close()

#citim informația inscrisă
f = open("tester.txt", "r")
print(f.read())  # Salut! Ne bucurăm că sunteți alături de noi!
f.close()
```

## Creăm fișier nou

```python
f = open("myfile.txt", "x")
```

## Ștergem fișier

{% hint style="info" %}
Pentru a șterge un fișier, trebuie să importăm modulul `os`

`.remove() -` Șterge fișier din memorie
{% endhint %}

```python
import os
os.remove("myfile.txt")
```

### Dacă fișier există

Pentru a evita  o eroare, vă recomandăm să verificați dacă fișierul există înainte de a încerca să îl ștergeți!

```python
import os
if os.path.exists("tester.txt"):
  print('Fișierul există')
else:
  print('Fișierul nu există')
```

