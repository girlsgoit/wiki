---
description: .. -
---

# Liste

1. Scrieți un program pentru a verifica dacă o listă este goală sau nu.
2. Avem lista aLsit = `[100, 200, 300, 400, 500]`

   Afișați această listă în următoarea ordine: `[500, 400, 300, 200, 100]`

3. Adăugați 7000 după 6000 în următoarea listă list1 = `[10, 20, [300, 400, [5000, 6000], 500], 30, 40]`

   Utilizați metoda `append ()`

4. Fie date numerele `(3, 22, 8, 12, 45, -1, 19)`. Stocați-le într-o listă și manual determinați numărul minim și maxim in variabile repective.
5.  ****Avem lista list1 = _\["a", "b", \["c", \["d", "e", \["f", "g"\], "k"\], "l"\], "m", "n"\]_ Extindeți lista dată cu adăugarea sub-listei `["h", "i", "j"]` în așa fel încât să arate ca următoarea listă **\['a', 'b', \['c', \['d', 'e', \['f', 'g', 'h', 'i', 'j'\], 'k'\], 'l'\], 'm', 'n'\]**

```python
#4
numbers = [3, 22, 8, 12, 45, -1, 19]

minimum = numbers[5]
maximum = numbers[4]
#bonus:
print(min(numbers))
print(max(numbers))

#5
list1 = ["a", "b", ["c", ["d", "e", ["f", "g"], "k"], "l"], "m", "n"]

list1[2][1][2].extend(["h", "i", "j"])

print(list1)
```

\_\_

 ****



