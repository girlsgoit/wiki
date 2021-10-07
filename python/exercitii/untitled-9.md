---
description: "\U0001F4DA"
---

# Librării , module

1. Scrieți un program Python pentru a selecta un element aleatoriu dintr-o listă, un set, un dicționar \(valoare\). Utilizați `random.choice ()`.
2. Scrieți un program Python pentru a amesteca elementele unei liste date. Utilizați `random.shuffle ()`
3. Scrieți un program Python pentru a crea o listă de numere întregi aleatorii și selectați aleatoriu mai multe elemente din lista menționată. Utilizați `random.sample ()`

```python
#1
import random
print("Select a random element from a list:")
elements = [1, 2, 3, 4, 5]
print(random.choice(elements))
print(random.choice(elements))
print(random.choice(elements))
print("\nSelect a random element from a set:")
elements = set([1, 2, 3, 4, 5])
# convert to tuple because sets are invalid inputs
print(random.choice(tuple(elements)))
print(random.choice(tuple(elements)))
print(random.choice(tuple(elements)))
print("\nSelect a random value from a dictionary:")
d = {"a": 1, "b": 2, "c": 3, "d": 4, "e": 5}
key = random.choice(list(d))
print(d[key])
key = random.choice(list(d))
print(d[key])
key = random.choice(list(d))
print(d[key]) 

#2
import random 
nums = [1, 2, 3, 4, 5]
print("Original list:")
print(nums)
random.shuffle(nums)
print("Shuffle list:")
print(nums)
words = ['red', 'black', 'green', 'blue']
print("\nOriginal list:")
print(words)
random.shuffle(words)
print("Shuffle list:")
print(words)


#3
import random 
print("Create a list of random integers:")
population = range(0, 100)
nums_list = random.sample(population, 10)
print(nums_list)
no_elements = 4
print("\nRandomly select",no_elements,"multiple items from the said list:")
result_elements = random.sample(nums_list, no_elements)
print(result_elements)
no_elements = 8
print("\nRandomly select",no_elements,"multiple items from the said list:")
result_elements = random.sample(nums_list, no_elements)
print(result_elements)
```



