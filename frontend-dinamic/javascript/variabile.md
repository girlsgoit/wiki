---
description: Blocurile primare a oricărui limbaj
---

# Variabile

Variabilele sunt mecanismul primar de abstractizare în orice limbaj. Noi lucrăm întotdeauna cu valori, dar nu le putem redeclara de fiecare dată când avem nevoie de ele.

Deseori vrem sa modificăm o valoare, sau să facem operații cu ea. Aici ne ajuta mecanismul de a seta o variabilă, când îi „dăm un nume unei valori”

## Declararea unei Variabile

Variabilele ne permit să facem referință la o valoare cu un nume. 

![Exemplu de variabila](https://lh5.googleusercontent.com/R5j_hU54b_lke8E0XtjLLvUK__hFitI2CqijLo_hAzm5jna215d9XYWxSvb80Ker4zQ909JU7MbxuTD0cm4UM3SyMOlh1jQkmVFC3YaCS0VIp_iRtsx166yCanEZEfVS1JEV7Y-DhlY)

Ele se setează prin operația de atribuire \(semnul `=`\).  În partea stîngă avem numele variabilei \(în acest caz `pet`. În partea dreaptă e o valoare, sau o expresie - rezultatul căreia deja știm că e întotdeauna o valoare nouă.

## Modificarea unei variabile

Putem schimba valoarea oricărei variabile prin aceeași operație de atribuire:

![](https://lh4.googleusercontent.com/Td1inF_7csLtN8QqbDTb1_qRm1aDqzeDBTUSO9lhF2wYsdSNv40j-NrRURri4vMjcUXwlqsizVxdEKz7glWzq1_tvH9BhFJ5DXPkLIxrR4crUA9TlbZbvo3HIed0FBObcI-isi7a3qw)

Observați că la prima linie, am declarat variabila, și am folosit cuvântul cheie let, după care am reutilizat aceeași variabilă si i-am schimbat valoarea.

După cum spuneam, putem avea în parte dreaptă a operației de atribuire și o expresie: 

![Modificarea unei variabile folosind o expresie](https://lh6.googleusercontent.com/uSzQ-DvUGjaMOSBLw9IAdJ96qfakKllb5bf09QnzP9On_0SocASzk-EE8yZ5wXDJuAvYMnPwfZ-vvsyaKPqGRaYctHzbED7wuWr8jTw5YDkP_tK0I6_JrGxroZg3H_QrXJZpIr23qFY)

## Constante vs Variabile

Până acum, de fiecare dată când am declarat o variabilă, am utilizat cuvântul cheie let în fața ei. Mai avem  2 cuvinte cheie: 

![let, const &#x219;i var](https://lh5.googleusercontent.com/9QXFMPJ0dsBFTwWmczikIdaNgaanZw_oIrysJaWfbROlq9K0hy9WL9enyFVO4--6rkDbGY-FGm4hSGIz0GlAKw3PF5Rl0wdct7ytMwNd7GEeBOVx7l_qM2KOjnUeKZiZ9Vqo0xbJ-Yg)

**`let`** și **`const`** e o evoluție recentă de cuvinte cheie, `var` e ceva mai vechi. Recomandarea modernă e sa folosim **`let`** și **`const`**, și să **NU** folosim `var`, din motiv că e un pic mai complex \(mai putin logic\) mecanismul de scopuri și vizibilitate. 

În linii generale: 

* **`let`** - îl folosim în cazul general, când vrem sa declarăm o variabile care ne așteptăm să își modifice valoarea, pe care o vom manipula și modifica
* **`const`** - îl folosim în cazul când vrem să declarăm o constantă. Constanta nu își poate modifica valoarea, și JavaScript va arunca o eroare dacă vom încerca să-i dăm una.

![](../../.gitbook/assets/image%20%28197%29.png)

## Scopul și vizibilitatea unei variabile

Unul din motivele primare pentru introducerea cuvintelor cheie noi let și const a fost definiția clară când și in ce grup o variabilă e vizibilă. 

În termeni generali, o variabilă e vizibilă doar în scopul în care a fost declarată. Un scop e definit de acoladele **`{ .... }`**. Exemple și detalii mai multe despre aceste blocuri le vom afla în capitolele următoare. 

![](../../.gitbook/assets/image%20%28196%29.png)

În exemplul de mai sus, variabila **`pet`** e vizibilă peste tot. În același timp variabila **`anotherPet`** e vizibilă doar în cadrul blocului definit de **`{ ... }`**. Încercarea să o accesăm în afara blocului ne va da o eroare.

Putem de asemenea să redefinim variabile cu același nume în diferite scopuri: 

![](https://lh4.googleusercontent.com/lfiQcVQv2QG6X-l3wAAKWMgzr9v8Em-6wTuTEloyezxRJH3wmRNTVHgp8T_kDYn0HXlAlazSySL1xlQKNQiYQ92Kb5vA_qrhfErn5g07cyLrppgkyAKxnqktEl3X38PaDP1Q67j_FqE)

Aici vedeți ca variabla pet are valori diferite în dependență de scopul din care e accesată. 

{% hint style="info" %}
Scopurile in **JavaScript** sunt ierarhice. Putem defini scopuri înauntru la alte scopuri, și regulile de vizibilitate vor fi întotdeauna aceleași: o variabilă din scop exterior, va fi vizibilă într-un scop interior, invers nu.
{% endhint %}

## Mai departe

În capitolul următor vom vedea diferitele tipuri de date care pot fi atribuite la variabile și semnificația lor.

{% page-ref page="tipuri-de-date.md" %}



