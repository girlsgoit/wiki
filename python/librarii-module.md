# Librarii, module

### Ce este un modul?

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

### Cum creăm un modul?

```text
def salut(nume):
  print("Salut, " + nume)

#Salvăm codul într-un fișier cu extensia .py
```



