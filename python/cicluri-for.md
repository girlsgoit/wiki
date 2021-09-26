---
description: Să repetăm informația incă o dată! Și încă o dată! Pînă obosim... cicluri!
---

# Cicluri for

#### **`For` your health**  **✌️  `While` you are happy** 💖

{% hint style="success" %}
 Există două scenarii de iterare a unui cod: [**definit** ](cicluri-for.md#for-loop)și [**indefinit**](cicluri-for.md#while-loop).
{% endhint %}

## For loop 

Cea mai bună metodă de a _itera_ în _Python_ este `for loop`. Dar ce înseamnă să iterezi?

{% hint style="info" %}
Când un proces sau o secvență de program este executată multiplu, adică repetată, atunci această secvență se numește **iterată**.
{% endhint %}

`For loop` reprezintă o metodă de iterare, care repetă aceeași bucată de cod pentru a determina mai multe valori ale acelorași variabile.  Ciclul `for` produce o iterare definită.

 **Structura buclei for:**

![](../.gitbook/assets/2_5.png)

### `For x in list_name`

```python
numbers  = [7, 9, 12, 54, 99]

print "This list contains: "

for num in numbers:
    print(num)
```

În exemplul de mai sus, la fiecare iterație, variabila `num` va fi următoarea valoare din lista `numbers`. Astfel, prima dată, `num` va fi `7`, a doua oară - va fi `9`, apoi `12`, `54`, `99`, iar după asta iterația se va termina, deoarece nu mai există valori în listă.

```python
my_list = [3, 6, 9, 5, 1, 0]

for number in my_list:
    doubled = number * 2               # instructiunea 1  
    print(doubled)                     # instructiunea 2 ...
```

{% hint style="success" %}
Observați că instrucțiunea iterativă `for`, la fel ca și instrucțiunea condițională `if` \(sau `elif`, `else`\), necesită două puncte la sfârșit de linie, respectiv necesită ca și codul ce urmează să fie indentat
{% endhint %}

```python
fructe = ["măr", "banană", "ananas"]
for x in fructe:
  print(x)
```

```python
    for name in ["Joe", "Amy", "Brad", "Angelina", "Zuki", "Thandi", "Paris"]:
    print("Hi", name, "Please come to my party on Saturday!")
```

✨AVANSĂM!✨ 

```python
votes = [8575855, 5555, 54433, 1001, 14000]
votes_good = 10000
for x in votes:
    if x < votes_good:
        votes.remove(x)
print(votes)
```

### `For x in range()`

{% hint style="info" %}
`range` este o funcție care primește un parametru `n` și returnează o listă de la `0` la `n-1`.
{% endhint %}

```python
# range (start=0 , stop=10)
for i in range(10):
    print(i)
```

Această sintaxă ne spune următoarele: _"pentru fiecare număr_ `i` _din range de la_ `0` _la_ `10`_, afișează_ `i`_"_.



![](../.gitbook/assets/python-range-explained-and-visualized-range-stop-parameter.png)

```python
# range(start=2, stop =12)
for i in range (2, 12):
    print(i)
```

```python
#range (start = 10, stop = 0, step = -1)
for i in range(10, 0, -1):
    print(i)
```

{% hint style="info" %}
Mai mult despre for loop poti citi [aici](https://pynative.com/python-for-loop/)
{% endhint %}

## While loop

{% hint style="success" %}
Bucla `while` este folosită pentru a itera o secțiune de cod atât timp cât condiția este adevărată.
{% endhint %}

 Bucla `while` este o buclă indefinită.  Această buclă ține cont de indentarea codului.

 **Structura buclei While:**

![](../.gitbook/assets/2_7.png)

```python
# exemplu cu while
total = 0
while total < 100:         #False
    total = total + 1

print(total)
```

```python
# cu for !!!!!!!!!!!!!!не знаю, если нужно и поможет понять!!!!!!!!!
total = 0
for total in range(100):
    total = total + 1
    
print(total)    
```

_Ciclul infinit_

```python
a = 1

while True:
    a = a + 1
    print(a)
```

### Declarație de control `break`

Declarația `break` este folosită pentru a ieși din o structură repetitivă. 

{% hint style="info" %}
O instrucțiune dată într-o buclă termină imediat bucla.
{% endhint %}

```python
n = 5
while n > 0:
    n = n - 1
    if n == 2:
        break
    print(n)
```

### Declarație de control `continue`

```python
n = 5
while n > 0:
    n = n - 1 #sau n-=1
    if n == 2: 
        continue
    print(n)
```

 **Folosirea condiției `else`**

Condiția _else_ poate fi folosită și în cadrul buclei While.

```python
n = 5
while n > 0: 
    n = n - 1
    print(n)
else:
    print('Bucla s-a terminat')
```

Mai multe despre cicluri: [while ](https://www.w3schools.com/python/python_while_loops.asp), [for](https://www.w3schools.com/python/python_for_loops.asp), si mai multe resurse \([while](https://realpython.com/python-while-loop/), [for](https://www.programiz.com/python-programming/for-loop)\)

> **The** [**function** ](functii.md)**name should define everything the function does.**

