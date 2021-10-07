---
description: "\U0001F4D6\U0001F4D6\U0001F4D6"
---

# Dicționare

1. Creați un dicționar numit `menu`
2. Adăugați cel puțin 5 feluri de bucate și indicați-le prețul.
3. Scrieți un program pentru a verifica dacă dicționarul este gol sau nu.
4. Scrieți un script in Python pentru a genera și tipări un dicționar care conține un număr \(între 1 și n\) în formă \(x, x \* x\). _\(Ex. n = 3. dict={1:1, 2:4, 3:9}\)_
5. Scrieți un program Python pentru a combina două dicționare adăugând valori pentru cheile comune.

```python
#4
n=int(input("Input a number "))
d = {}

for x in range(1,n+1):
    d[x]=x*x

print(d) 
```

