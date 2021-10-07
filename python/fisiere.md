---
description: 'Ca fish, dar fiSHier)'
---

# Fișiere

Utilizarea fișierelor este larg răspândită pe larg în web development, deorece ele ne permit să stocăm și să accesăm informația necesară nouă. Acestă informație poate fi stocată în fișiere CSV \(comma-separated values\) - fisiere cu valori separate de virgulă.

## Intro

Pentru a putea deschide aceste fisiere, mai întâi de toate trebuie să le încărcăm în Google Colab.

Dupa ce am încarcat fișierul în mapa Files\(stanga sus\), putem să folosim funcția `open()` pentru a deschide acest fișier. Funcția `open()` primește ca argumente 'adresa' fișierului, în cazul nostru: `'./heroes_information.csv'` și tipul de permisiune, în cazul nostru `'r'` de la 'read'.

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

După ce am deschis fișierul, avem nevoie de funcția `reader()` din modulul csv care va citi acest fișier și ne va întoarce un obiect.

## Citirea din fișier

```python
from csv import reader  # importăm funcția reader din modulul csv 
read_file = reader(opened_file) # interpretăm datele csv din fișier
```

Se poate întampla ca în fișierul nostru CSV datele să nu fie separate prin **`,`** ci prin **`;`**. În cazul dat va trebui să setam in funcția reader delimitatorul sa fie **`;`**, care în mod implicit e setat să fie **`,`**.

```python
read_file = reader(opened_file, delimeter=';')
```

Acum read\_file poate fi transformat într-o structura de date deja familiara nouă, într-o listă de liste. Pentru asta folosim funcția pre-stabilită \(built-in\) `list()`.

```python
heroes = list(read_file) # transformăm datele csv într-o listă de liste
```

### INTOTDEAUNA INCHIDE FIȘIERUL

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

### Verificarea existenței fișierului

Pentru a evita o eroare, vă recomandăm să verificați dacă fișierul există înainte de a încerca să îl ștergeți!

```python
import os
if os.path.exists("tester.txt"):
  print('Fișierul există')
else:
  print('Fișierul nu există')
```

## Accesarea fișierului

### De pe calculator

```python
# accesam un fisier de pe calculatorul nostru
import csv
f = open("myfile.csv", newline='')
```

### De pe Google Drive

```python
from google.colab import drive
drive.mount('/content/drive')
```

### Citirea cu și fără CSV

```python
import csv  # importăm pachetul csv

opened_file = open('/content/protagonist.csv', 'r') # deschidem fișierul csv în mod citire

raw_lines = opened_file.readlines()
print("Reading without CSV")
for line in raw_lines:
    
    print(line)


print("Reafing with CSV")
opened_file = open('/content/protagonist.csv', 'r')
read_file = csv.reader(opened_file) 

rows = list(read_file) 
for row in rows:
    print(row)
```

## Introducerea datelor in fișier

{% hint style="info" %}
`.writerow(info)` - Scrie o linie de informație
{% endhint %}

```python
import csv

f = open('protagonist.csv', 'w')
# procesare fisier
f.close()

fruit = {'Nume':'Banana', 
         'Greutate(g)': 1000, 
         'Pret': 20}

with open('protagonist.csv', 'w') as f:

    writer = csv.writer(f)

    writer.writerow(["Nr", "Film", "Protagonist"])
    writer.writerow([1, "Lord of the Rings", "Frodo Baggins"])
    writer.writerow([2, "Harry Potter", "Harry Potter"])
```

### Fișier și dicționare

1️⃣ Creăm coloane 

```python
details = ['Nume', 'Greutate(g)', 'Pret']
```

[2️⃣](https://emojipedia.org/keycap-digit-two/) Adăugăm date

```python
fruit = {'Nume':'Banana', 
         'Greutate(g)': 1000, 
         'Pret': 20}

with open('/content/drive/MyDrive/CSV/my_file.csv', mode='a') as csv_file:  #context manager
    writer = csv.DictWriter(csv_file, fieldnames=details)
    writer.writerow(fruit)
```

Mai multă informație : \([site](https://www.programiz.com/python-programming/file-operation), [more info](https://realpython.com/read-write-files-python/), [documentation](https://docs.python.org/3/library/filesys.html)\)

> To learn something new, you need to [try ](untitled.md)new things and not be afraid to be wrong.

