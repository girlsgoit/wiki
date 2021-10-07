---
description: "def \U0001F6CF️(sleep):"
---

# Funcții



1. Fie date numerele \(3, 22, 8, 12, 45, -1, 19\). Stocați-le într-o listă și determinați numărul minim și maxim, **cu ciclu for și funcții**.
2. Scrieți o funcție care calculeaza distanța euclidică dintre două puncte. Parametrii funcției sunt datele punctelor într-un plan bidimensional.
3. Scrieți o funcție care calculează produsul a două fracții. Vom defini o fracție ca pereche a două numere întregi: \(numărătorul, numitorul\)
4. Scrieți o funcție care înlătură numerele negative dintr-o listă și returnează lista schimbată. 
5. Scrieți o funcție care calculează puterea unui număr fără a folosi operatorul \*\*.

```python
#1 Solutie
aList = [121, 562, 2989, 92538, 9281]

def invert(n):
    digits_list = []
    while n != 0:
        digits_list.append(n % 10)
        n = n // 10 

    number = 0
    for i, d in enumerate(digits_list):
        number = number + d * 10 ** (len(digits_list) - 1 - i)   

    return number


inverted_numbers = []
for n in aList:
    inverted_numbers.append(invert(n))
    
inverted_numbers

#2
def euclidean_distance(x1, y1, x2, y2):
    d = ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5
    return d

x1= int(input('x1 ')
y1= int(input('y1 ')
x2= int(input('x2 ')
y2= int(input('y2 ')

euclidean_distance(x1, y1, x2, y2)

#2.1
import math
def euclidean_distance(x1, y1, x2, y2):
    d = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)
    return d
    
euclidean_distance(2, 3, -1, 5)
```

