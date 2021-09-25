# Dictionare

Un dicționar în Python este o colecție de data _neordonată, modificabilă, care nu permite duplicate_.

{% hint style="info" %}
 Are formatul: **{ cheie : valoare }**
{% endhint %}

```python
d = {"cheie1": "valoare", "cheie2": "valoare2"}
print(d)
```

Un **dicționar** este asemănător cu o listă, doar că în cazul dicționarelor puteți să accesați valorile prin intermediul unei chei, și nu prin intermediul unui index. O **cheie** poate fi un `string` sau un număr. 

> #### Dicționarele sunt utile pentru asemenea lucruri, ca: lista numerelor de telefoane \(având perechile _nume - număr_\), pagini de logare \(având perechile _adresa de e-mail - nume de utilizator_\) și nu doar!

### Accesarea elementelor

Putem accesa un element prin cheie \(accesarea unei valori din dicționar după o cheie e aceeași cum am accesa valorile din liste după indecși\)

```python
d = {"cheie1": "câine", "cheie2": "valoare2"}
print(d["cheie1"])
print(d["cheie2"])
```

{% hint style="info" %}
 La fel putem accesa un element prin cheie utilizând metoda **.get**:
{% endhint %}

```python
d = {"cheie1": "câine", "cheie2": "valoare2"}

print(d["cheie2"])
print(d.get("cheie3"))
```

### Adăugarea valorilor

La fel ca listele, dicționarele sunt "flexibile". Aceasta înseamnă că ele pot fi schimbate după ce au fost create. Un avantaj al acestui fapt este ceea că putem adăuga în dicționarele deja create noi perechi _cheie-valoare_, în felul următor: 

```python
d = {"cheie1": "tort", "cheie2": "valoare2"}
print(d)

d["cheie_noua"] = "valoare_noua"
print(d)
```

### Modificarea valorilor

 Modificăm valorile din dicționar prin accesul la **cheie.**

```python
d = {"cheie1": "valoare", "cheie2": "valoare2"}
print(d)

d["cheie1"] = "O noua valoare!"
print(d)
```

### Verificarea existenței unei chei în dicționar

Cum verificăm dacă în următorul dicționar există cheia "cheie3"?

```python
dictionar = {"cheie1": "valoare1", "cheie2": "valoare2"}

if "valoare1" in dictionar:
  print("valoare1 exista")
else:
  print("valoare1 nu exista")
```

