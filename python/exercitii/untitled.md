# Cicluri for



1. Calculați răsturnatul fiecărui număr din lista \(_Răsturnatul numărului 123 este 321.\)_
2. Calculați și afișați triplul fiecărui număr de la 1 la 100. \(_Ex: 3,6,9,12_\)
3. Fie date numerele \(3, 22, 8, 12, 45, -1, 19\). Stocați-le într-o listă și determinați numărul minim și maxim, **cu ciclu for**.
4. Printați următorul pattern:

```text
*
* *
* * * 
* * * * 
* * * * * 
```

```python
# Solutii
#1 

aList = [121, 562, 2989, 92538, 9281]
inverted_numbers = []
for n in aList:
    inverted_numbers.append(int(str(n)[::-1]))

#3 
numbers = [3, 22, 8, 12, 45, -1, 19]
minimum = None
maximum = None
for n in numbers:
    if maximum == None or maximum < n:
        maximum = n
    if minimum == None or minimum > n:
        minimum = n

print(minimum, maximum)    
```

