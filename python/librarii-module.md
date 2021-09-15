# Librării, module

## Ce este un modul?

* Modulele ne ajută să ne facem codul mai practic
* Modulele sunt fișiere ce conțin funcții
* Există module incorporate în limbaj și module care le putem crea

În Python un modul e o simplă colecție de variabile, funcții și/sau clase\(numite definiții\) care pot fi importate în Python \(de exemplu, modulul CSV\).

Python conține multe module standarde, acestea sunt utilizate pentru a performa diferite operațiuni cum ar fi operații matematice avansate, operațiuni cu formate de fisșiere specifice și baze de date, lucru cu date temporale.

Ca să putem folosi definițiile dintr-un modul, mai întâi trebuie să le importăm din acest modul. Pentru aceasta avem nevoie de `import` .

* **Importarea întregului modul după nume.**

```text
import csv 

# Sintaxa pentru accesarea unei definiții
module_name.defintion_name

# Exemplu:
csv.reader()
```

* **Importarea unui întreg modul folosind un nume prescurtat\(alias\).**

```text
import csv as c

# as  - ne permite să redenumim modulul la importare cu un alt nume(alias) 

# Exemplu:
c.reader()
```

*  **Importarea uneia sau a mai multor definiții din modul.**

```text
# importam doar o singură definiție
from csv import reader

# reader()
```

```text
# importăm mai multe definiții
from csv import reader, writer

# reader()
# writer()
```

*  **Importarea tuturor defințiilor din modul cu ajutorul metacaracterului \*.**

```text
# importăm toate definițiile din modul
from csv import *

# reader()
# writer()
# get_dialect()
```

## Cum creăm un modul?

```text
def salut(nume):
  print("Salut, " + nume)

#Salvăm codul într-un fișier cu extensia .py, cu numele mymodule.py
```

## Cum folosim modulul creat de noi?

```text
import mymodule

# numelefisierului.numelefunctiei()
```

## Exemple de Module incorporate în limbaj

### Math

Math este un modul automat inclus în Python, și oferă o serie de funcții utile care ne permite să executăm operații matematice.

`math.floor()` - rotunjește numărul până până la o valoare mai mică decât numărul dat sau egală cu acesta

```text
import math
x = math.floor(4.9)
print(x)
```

`math.ceil()` - rotunjește numărul până până la o valoare mai mare decât numărul dat sau egală cu acesta

```text
x = math.ceil(7.1)
print(x)
```

`math.fabs()` - afișează modulul numărului

```text
x = math.fabs(-9)
print(x)
```

`math.sqrt(x)`- calculează rădăcina de gradul 2 a unui număr

```text
math.sqrt(3)
```

`math.pow(x, y)` - calculează un număr ridicat la o anumită putere

```text
math.pow(5, 2)
```

**Funcții logaritmice:**

* `math.log(x, baza)` - calculează logaritmul unui număr cu o bază sugerată de utilizator
* `math.log2(x)` - calculează logaritmul unui număr cu baza 2
* `math.log10(x)` - calculează logaritmul unui număr cu baza 10

```text
print(math.log(9, 3)) 
print(math.log2(4))
print(math.log10(100))
```

**Funcții trigonometrice:**

* `math.cos(x)` - calculează cosinusul de un număr
* `math.sin(x)` - calculează sinusul de un număr
* `math.tan(x)` - calculează tangenta de un număr
* `math.acos(x)` - calculează arccosinusul de un număr
* `math.asin(x)` - calculează arcsinusul de un număr
* `math.atan(x)` - calculează tangenta de un număr
* `math.atan2(y, x)` - calculează atan\(y / x\)

```text
print(math.cos(1))
print(math.sin(0.7))
print(math.tan(1))
```

**Conversia dintre radiani și grade:**

* `math.degrees(x)` 
* `math.radians(x)`

```text
math.degrees(math.atan(1))
```

**Numerele constante stocate în modul:**

```text
import math
print(math.pi)
print(math.e)
print(math.tau)
print(math.inf)
print(-math.inf)
print(math.nan)
```

### **Datetime**

Python are trei module standarde folosite pentru lucrul cu datele temporale:

* Modulul `calendar`
* Modulul `time`
* Modulu `datetime`

Fiecare modul este focusat pe o arie specifică de interes, dar cel mai util modul din acestea trei este `datetime`, respectiv despre el vom învăța mai departe.

Modulul datetime include mai multe clase, dintre care și următoarele:

* `datetime.datetime()`: pentru lucrul cu dăți\(01-01-2021\) și date de timp\(03:40:00\)
* `datetime.time()`: pentru lucrul doar cu date de timp
* `datetime.timedelta()`: pentru reprezentarea perioadelor de timp

#### Clasa datetime

Clasa datetime.datetime\(\) este cea mai utilizată din modulul datetime. Mai jos sunt parametrii pe care îi putem utiliza în această clasă.

`datetime.datetime(year, month, day, hour = 0, minute = 0, second = 0)`

Argumentele **obligatorii** sunt _year, month, day_, iar argumentele _hour, minute, second_ sunt **opționale**.

```text
# instanțiem un obiect al clasei datetime 
# 3 Ianuarie 2021.

import datetime as dt

ian_3 = dt.datetime(2021, 1, 3)

print(ian_3)
```

```text
# instanțiem un obiect datetime folosind și parametrii opționali

feb_13 = dt.datetime(1975, 2, 13, 21, 26, 7)

print(feb_13)
```

#### Cum transformăm din date string în datetime și invers?

```text
dec_24 = '24/12/2015'
```

Pentru a 'parsa' \(interpreta\) acest string în formatul datetime, folosim metoda **datetime.strptime\(\)**.

```text
dec_24_dt = dt.datetime.strptime(dec_24, '%d/%m/%Y')

print(dec_24_dt)
```

```text
march_03_dt = dt.datetime.strptime('03-28-2015', '%m-%d-%Y')
print(march_03_dt)
```

Mai multe notații:

* `%a`    - afișează ziua săptămânii în variantă prescurtată
* `%A`    - afișează ziua săptămânii
* `%w`    - afișează ziua săptămânii ca număr, 0 fiind duminica
* `%d`    - afișează ziua lunii    
* `%b`    - afișează luna în variantă prescurtată    
* `%B`    - afișează luna    
* `%m`    - afișează luna ca numbăr
* `%y`    - afișează anul fără primele două cifre
* `%Y`    - afișează anul    
* `%H`    -    afișează ora în format de 24 ore
* `%I`    - afișează ora în format de 12 ore
* `%M`     - afișează minutele
* `%S`    - afișează secundele    
* `%f`    - afișează milisecundele    
* `%z`    - afișează ora militară
* `%Z`    - afișează fusul orar

[Mai multă informație în Documentație](https://docs.python.org/3/library/datetime.html#strftime-strptime-behavior)

Metodata datetime.strftime\(\) este utilizată pentru a formata un obiect datetime într-un string. Ea utilizează aceleași notații ca și metoda `strptime()`.

```text
print(dec_24_dt)
```

```text
string1 = dec_24_dt.strftime('%m/%d/%Y')
print(string1)
print(type(string1))
```

```text
string2 = dec_24_dt.strftime('%B %d, %Y')
print(string2)
```

```text
string3 = dec_24_dt.strftime('%A %B, %d at %I:%M %p')
print(string3)
```

#### Atributele clasei datetime.

Fiecare datetime e un obiect care are câteva atribute. Acestea ne permit să extragem detalii din obiect.

* datetime.day - data unei luni
* datetime.month - luna unui an
* datetime.year - anul
* datetime.hour - ora unei zile
* datetime.minute - minuta unei ore

```text
dec_25_dt = dt.datetime(1955, 12, 25)
print(dec_25_dt)

date = dec_25_dt.day
print(date)

month = dec_25_dt.month
print(month)

year = dec_25_dt.year
print(year)
```

#### Alte metode ale clasei datetime

Metoda `datetime.datetime.now()` afișează data și ora curentă.

```text
x = dt.datetime.now()
print(x)
```

#### Clasa time

Clasa time conține doar informații despre timp: ore, minute, secunde, și microsecunde.

Sintaxa de a instanția un obiect al clasei time:

`datetime.time(hour = 0, minute = 0, second = 0, microsecond = 0)`

Toate argumentele sunt opționale.

```text
by_default = dt.time()
print(by_default)
```

```text
unu_30 = dt.time(13, 30)
print(unu_30)
```

Putem extrage un obiect time dintr-un obiect datetime.

```text
nov_22 = dt.datetime(2001, 11, 22, 12, 30)
print(nov_22)
```

```text
nov_22_time = nov_22.time()
print(nov_22_time)
```

#### Cum tranformăm din string în obiect time?

```text
time_str = '8:35'
time_dt = dt.datetime.strptime(time_str, '%H:%M')
print(time_dt)
```

```text
time_t = time_dt.time()
print(time_t)
```

#### Atributele clasei time

* time.hour
* time.second

```text
print(time_t.hour)
print(time_t.second)
print(time_t.microsecond)
```

#### Compararea obiectelor time

O caracteristică foarte utilă a obiectelor time este că acestea pot fi comparate.

```text
t1 = dt.time(15, 30)
t2 = dt.time(10, 45)

comparison = t1 > t2

print(comparison)
```

De asemenea putem folosi funcțiile built-in din Python: min\(\), max\(\).

```text
times = [
         dt.time(23, 30),
         dt.time(14, 45),
         dt.time(8, 0)
]
```

```text
print(min(times))
print(max(times))
```

#### Calcule cu Dates și Time.

Obiectele datetime la fel pot fi comparate ca și obiectele time, folosind operatorii `>` și `<`. Să vedem dacă putem folosi alți operatori precum `+` și `-`.

```text
dt1 = dt.datetime.now()
dt2 = dt.datetime(1996, 10, 30)

print(dt1 + dt2)
print(dt1 - dt2)
```

Observăm că atunci când folosim operatorul `+` vom avea eroare care ne zice că acest operator nu este valid.

Atunci când folosim operatorul `-` cu obiecte datetime, rezultatul va fi o diferență dintre două obiecte datetime. Să investigăm tipul de date al acestui obiect rezultant.

```text
diff = dt1 - dt2
print(type(diff))
```

#### Clasa timedelta

Tipul de obiect timedelta reprezintă o perioadă de timp. Putem să creăm un obiect timedelta folosind operatorul `-`, sau putem folosi clasa timedelta, utilizând această sintaxă:

`datetime.timedelta(days = 0, seconds = 0, microseconds = 0, milliseconds = 0, minutes = 0, hours = 0, weeks = 0)`

```text
doua_zile = dt.timedelta(2)
print(doua_zile)
```

```text
trei_saptamani = dt.timedelta(weeks = 3)
print(trei_saptamani) 
```

```text
o_ora_10_min = dt.timedelta(hours = 1, minutes = 10)
print(o_ora_10_min)
```

```text
azi = dt.date(2021, 4, 18)
azi_plus_o_sapt = azi + dt.timedelta(weeks = 1)
print(azi_plus_o_sapt)
```

În tabelul de mai jos o să găsiți mai multe operții care pot fi făcute între obiecte de tip timedelta și datetime.

| Operții | Explicație | Tipul rezultatului |
| :--- | :--- | :--- |
| `datetime - datetime` | Calculează timpul dintre două obiecte dates/times | timedelta |
| `datetime - timedelta` | Scade o periodă de timp dintr-un obiect date sau time | datetime |
| `datetime + timedelta` | Adaugă o periodă de timp la un obiect date sau time | datetime |
| `timedelta + timedelta` | Adună două perioade de timp împreună | timedelta |
| `timedelta - timedelta` | Calculează diferența dintre două perioade de timp | timedelta |

#### Numere constante stocate în modul.

```text
print(dt.MINYEAR)
print(dt.MAXYEAR)
```

### Random

Acest modul conține funcții care ne permit să generăm numere sau secvențe pseudo-aleatorii.

**Funcții ale modului random:**

* `random.randrange(stop)` - generează un număr aleatoriu dintr-o gamă 
* `random.randrange(start, stop, pași)` -  generează un număr aleatoriu dintr-o gamă 
* `random.uniform()` - alege un număr ce aparține mulțimii numerelor reale din o gamă
* `random.radint()`  - alege un număr întreg ce aparține unei game
* `random.choice()` - alege un element dintr-o iterabilă
* `random.shuffle()` - reorganizează ordinea elementelor unei iterabile

```text
import random
print(random.randrange(1000))
print(random.randrange(-5, 10, 1))
print(random.uniform(2, 6))
print(random.randint(0,9))
print(random.choice([7, 8]))

letters = ['a', 'b', 'c', 'd']
random.shuffle(letters)
print(letters)
```



