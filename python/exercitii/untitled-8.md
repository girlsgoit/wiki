---
description: try (to learn) - except (actually learn) - finally (go eat)
---

# Try-except, Lambda

1. Scrieți un program Python pentru a crea o funcție lambda care adaugă 15 la un anumit număr transmis ca argument, creați și o funcție lambda care înmulțește argumentul x cu argumentul y și imprimați rezultatul. 
2. Scrieți un program Python pentru a pătrat și a cubiza fiecare număr dintr-o listă dată de numere întregi folosind Lambda. Lista = `[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`
3. Scrieți un program Python pentru a găsi numere divizibile cu nouăsprezece sau treisprezece dintr-o listă de numere folosind Lambda. Lista = `[19, 65, 57, 39, 152, 639, 121, 44, 90, 190]`

```python
#1
r = lambda a : a + 15
print(r(10))
r = lambda x, y : x * y
print(r(12, 4))

#2
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("Original list of integers:")
print(nums)
print("\nSquare every number of the said list:")
square_nums = list(map(lambda x: x ** 2, nums))
print(square_nums)
print("\nCube every number of the said list:")
cube_nums = list(map(lambda x: x ** 3, nums))
print(cube_nums)

#3
nums = [19, 65, 57, 39, 152, 639, 121, 44, 90, 190]
print("Orginal list:")
print(nums) 
result = list(filter(lambda x: (x % 19 == 0 or x % 13 == 0), nums)) 
print("\nNumbers of the above list divisible by nineteen or thirteen:")
print(result)
```

