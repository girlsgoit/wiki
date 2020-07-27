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

![](../../.gitbook/assets/image%20%28287%29.png)

## Diferite stiluri de marker

Putem adauga un parametru optional care defineste culoarea, tipul markerului si stilul liniei: o, ., x, ro, -o, r-o, etc

```text
plt.plot(x, y, 'o')
```

![](../../.gitbook/assets/image%20%28288%29.png)

```
plt.plot(x, y, color = 'green', marker = 'o', linestyle = 'dashed',
         linewidth=2, markersize=12)
```



