# Matplotlib

## Ce este Matplotlib?

Matplotlib este o librarie\(o colecție de clase, module si funcții\) care ne permite să vizualizăm sau să reprezentăm grafic datele.

Ca să accesăm această librarie, trebuie mai întâi s-o importăm.

Pe noi ne interesează anume modulul Pyplot din această librarie, pentru că el oferă o serie de funcții care reprezintă diferite tipuri de grafice sau facilitează reprezentarea acestora.

#### Asa importam un modul dintr-o librarie 

```text
import matplotlib.pyplot as plt
```

{% hint style="info" %}
###  cuvantul cheie 'as' ne permite sa prescurtam numele pyplot ---&gt; plt
{% endhint %}

## Elementele unui grafic 

```text
x = [2, 4, 6, 8]
y = [2, 4, 8, 3]
```

![alt text](https://lh3.google.com/u/0/d/1-c-EMlO6uOW59ZNLgUFIbsVxoQ08gTL9=w1204-h878-iv1)

### Exemplu

```text
x = [2, 4, 6, 8]
y = [2, 4, 8, 3]
plt.plot(x, y) 
```

![](../../.gitbook/assets/image%20%28291%29.png)

{% hint style="info" %}
Daca nu lucram in Colab, vom avea nevoie sa apelam plt.show\(\) pentru a afisa graficul
{% endhint %}

```text
plt.show()
```

## Diferite stiluri de marker

Putem adauga un parametru optional care defineste culoarea, tipul markerului si stilul liniei: o, ., x, ro, -o, r-o, etc

```text
x = [2, 4, 6, 8]
y = [2, 4, 8, 3]

plt.plot(x, y, 'o')
```

![](../../.gitbook/assets/image%20%28294%29.png)

```
x = [2, 4, 6, 8]
y = [2, 4, 8, 3]

plt.plot(x, y, color = 'green', marker = 'o', linestyle = 'dashed',
         linewidth=2, markersize=12)
```

![](../../.gitbook/assets/image%20%28287%29.png)

### Adăugăm denumirile axelor x şi y

```text
x = [2, 4, 6, 8]
y = [2, 4, 8, 3]

plt.plot(x, y, 'r', label = 'line')
plt.xlabel('Zi din luna Iulie')
plt.ylabel('Număr de cărți vândute')

plt.show()
```

![](../../.gitbook/assets/image%20%28296%29.png)

### Afişăm titlul graficului

```text
x = [2, 4, 6, 8]
y = [2, 4, 8, 3]

plt.plot(x, y, 'r', label = 'line')
plt.title('Trendul de vânzare a cărților pentru 7 zile')
```

![](../../.gitbook/assets/image%20%28297%29.png)

### Afişăm legenda

```text
x = [2, 4, 6, 8]
y = [2, 4, 8, 3]

plt.plot(x, y, 'r', label = 'nr de vanzari')
plt.legend()
```

![](../../.gitbook/assets/image%20%28288%29.png)

## Tipuri de grafice

### Barh

Tipul de grafice barh este potrivit pentru a reprezenta multe categorii de valori. Acesta afișează bare orizontale care reprezintă valoarea fiecărei categorii.

```text
fructe = ['mar', 'banana', 'mango', 'portocala', 'para']
nr_de_fructe = [3, 2, 5, 2, 1]

plt.barh(fructe, nr_de_fructe)
```

![](../../.gitbook/assets/image%20%28289%29.png)

### Bar

```text
fructe = ['mar', 'banana', 'mango', 'portocala', 'para']
nr_de_fructe = [3, 2, 5, 2, 1]

plt.bar(fructe, nr_de_fructe)
```

![](../../.gitbook/assets/image%20%28293%29.png)

### Histogram

Histograma reprezintă distribuția și frecvența datelor.

```text
plt.hist([1, 2, 2, 3, 3, 3, 4, 4, 10], color='r')
```

![](../../.gitbook/assets/image%20%28290%29.png)

### Pie

Pie este un grafic care reprezintă valorile categoriale radial. Este potrivit pentru situațiile când avem puține categorii.

```text
fructe = ['mar', 'banana', 'mango', 'portocala', 'para']
nr_de_fructe = [3, 2, 5, 2, 1]

plt.pie(nr_de_fructe, labels = fructe);
plt.title('Cantități de fructe')
```

![](../../.gitbook/assets/image%20%28292%29.png)

### Scatter

Graficul Scatter ne permite să investigăm relația dintre 2 valori.

```text
fructe = ['mar', 'banana', 'mango', 'portocala', 'para']
nr_de_fructe = [3, 2, 5, 2, 1]
pretul_fructelor = [5, 10, 25, 7, 2]

plt.scatter(pretul_fructelor, nr_de_fructe)

plt.xlabel('Numărul de fructe')
plt.ylabel('Prețul')
plt.title('Prețul fructelor în dependență de cantitatea lor');
```

![](../../.gitbook/assets/image%20%28295%29.png)

