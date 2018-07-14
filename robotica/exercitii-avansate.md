# 2.3 Exerciții avansate

**Schimbarea culorilor utilizând variabilele.**

Fiecare LED are 3 culori diferite - roșu, verde și albastru \(RGB\) - toate dintre acestea putându-i fi atribuite o valoare între 0 și 255. Varietatea culorilor care pot fi obținute folosind aceste culori primare este afișată în această roată:

![](../.gitbook/assets/image%20%2814%29.png)

În acest tutorial, vreau să afișezi toate culorile din această roată pe LED-urile robotului. Să ne gândim la ce va fi pseudocodul. Să începem cu luminile setate pe tot albastrul și să mergem în sensul acelor de ceasornic în jurul roții \(spre verde\). Pe măsură ce mergem în jur, trebuie să reduci nivelul de albastru și să crești nivelul de verde:

```text
Set LED to blue.
Repeat until fully green:
---- level of blue.
---- Increase level of green
```

Acesta este începutul codului. Cu toate acestea, există o problemă. Odată ce LED-ul a fost setat, nu poți "citi" nivelurile de verde și albastru. Deci, în următorul ciclu, cum știi la ce să setăm LED-urile? Ai nevoie de o variabilă.

Variabilele sunt  pentru a stoca informații. În mBlock, variabilele stochează numere. Fiecare variabilă are un nume. Numele trebuie să fie ales pentru a reflecta ce fel de informație conține variabila. Deci, pentru tutorialul acesta, vei avea nevoie 3 variabile:

```text
redSetting
greenSetting
blueSetting
```

O regulă pentru a numi variabilele este că prima literă trebuie să fie o minusculă și toate cuvintele ulterioare, prima literă fiind majusculă.

Pentru a face o variabilă în mBlock, trebuie să mergi la scriptul "Data & Blocks" și să alegi "Make a Variable":

![](../.gitbook/assets/image%20%2842%29.png)

Când apeși butonul, îți va cere un nume:

![](../.gitbook/assets/image%20%2845%29.png)

Asigură-te că alegeți un nume care descrie informațiile pe care le va conține variabila. Odată ce ai definit o variabilă, va afișa câteva blocuri legate de variabila pe care o poți folosi pentru programare:

![](../.gitbook/assets/image%20%288%29.png)

Cu excepția cazului în care variabilele vor fi modificate de la începutul unui program, se consideră o bună practică inițializarea variabilelor la începutul unui program. Pentru programul tău,  începe cu albastru pornit, și verde și roșu oprit. Vei transforma LED-urile pe o valoare maximă de 100:

![](../.gitbook/assets/image%20%2858%29.png)

Și acum setează LED-urile la valorile acestor variabile:

![](../.gitbook/assets/image%20%2817%29.png)

Acum scade setarea albastră unul câte unul până când ajung la zero. În același timp, mărește setarea verde până când ajunge la 100. Deci va trebui să repeți acest pas de 100 de ori:

![](../.gitbook/assets/image%20%2862%29.png)

_Challenge_:

1. Finisează programul astfel încât LED-urile să continue să se schimbe prin culorile roții.
2. Scrie un program care măsoară lumina \(utilizând senzorul de lumină de la bord\) pe măsură ce LED-urile se estompează. Ce setări LED oferă cele mai întunecate măsuri. Notează problemele cu care te confrunți în timp ce scrii acest program. Cum ai rezolvat problemele?

## Butonul On-board și Timer-ul

 Butonul de la bord are 2 blocuri de programare asociate în mBlock. Primul este un header bloc:

![](../.gitbook/assets/image%20%2875%29.png)

Acesta poate fi folosită ca declanșator pentru ca un anumit cod să fie rulat.   
_NOTĂ: acest bloc poate fi folosit numai când rulează programe mBlock._

Al doilea bloc este un bloc boolean. Un bloc boolean este unul care poate fi folosit într-o condițional \(cum ar fi "if"\) și se va întoarce fie adevărat, fie fals:

![](../.gitbook/assets/image%20%2890%29.png)

Meniurile drop-down pentru ambele blocuri sunt fie "pressed", fie "released"

Există două timere în mBlock - una rulează în mediul mBlock, iar cealaltă rulează pe tablă. Prin urmare,  ce timer utilizezi ar trebui să depindă de locul în care intenționezi să rulezi programul. Blocurile temporizatorului de mediu mBlock pot fi găsite în scripturile "Sensing":

![](../.gitbook/assets/image%20%2831%29.png)

Blocurile cronometrului robot pot fi găsite în scripturile "Robots". Poți folosi blocul "reset timer" pentru a seta temporizatorul la zero:

![](../.gitbook/assets/image%20%2821%29.png)

Odată ce timerul este resetat la zero, acesta va începe să contorizeze imediat. Poți accesa mai târziu cât timp a trecut de la resetarea cronometrului utilizând acest bloc:

![](../.gitbook/assets/image%20%285%29.png)

În acest program simplu, apăsarea butonului de la bord reinițializează cronometrul și se execută ciclul de lucru până când cronometrul depășește 10 secunde.

![](../.gitbook/assets/image%20%2812%29.png)

În acest exemplu, efectul este că robotul va alerga înainte timp de 10 secunde. S-ar putea să te gândești "De ce nu pornești doar motoarele la viteza 100, așteptați 10 secunde și apoi le oprești?". Și ai avea dreptate. În acest caz, ar avea același efect. Dar dacă vrei să ai o viteză variabilă?

_Challenge_:

1. Scrie un program care să activeze LED-urile și apoi calculează cât timp îi ia cuiva să apese butonul on-board, afișând acel moment în mediul mBlock-ului.
2. Scrie un program care număraă de câte ori este apăsat bara de spațiu în 5 secunde și afișează numărul în mediul mBlock.
3. Scrie un program prin care mBot-ul  să miște la viteze variabile timp de 10 secunde.







## Contorizarea liniilor

Senzorul de urmărire a liniei este de obicei folosit pentru a urmări o linie, dar în acest exercițiu vei învăța cum poate fi folosit pentru a număra liniile în schimb. Pentru aceasta, vei avea nevoie de o variabilă prin care să numere. De ce alte lucruri ai nevoie în program? Notează un pseudocod înainte de a continua.

```text
Declare a variable.
Move forward.
Loop:
---- If we see a line
---- ---- Add one to the variable.
End Loop
```

La sfârșitul acestui program, numărul de linii peste care a trecut mBot-ul trebuie să fie salvat în variabila. Poți scrie acest lucru în codul mBlock. Mergi mai departe și să numără linii timp de 10 secunde:

![](../.gitbook/assets/image%20%2879%29.png)

Există 2 probleme codul în acest moment. Prima este că nu există nicio modalitate de citire a variabilei de numărare. 

_Challenge:_

1. Adăugă o modalitate de verificare a valorii variabilei.
2. Cu acest cod, valoarea variabilei înregistrate nu va fi corectă. Îți poți da seama de ce? Și cum să corectezi asta?



## Scrierea programului prestabilit cu funcții\(Blocks\)

Diferitele secțiuni ale unui program fac deseori lucruri diferite. Un program poate fi împărțit în părți separate, fiecare parte realizând o anumită funcție. Din programul principal, aceste funcții pot fi "numite" sau executate. Acest lucru face codul mult mai ușor de citit.

În mBlock, faci o funcție \(sau bloc\) făcând clic pe "Make a Block" în script-ul "Data&Blocks":

![](../.gitbook/assets/image%20%2854%29.png)

Apoi alegeți un nume care reprezintă ceea ce face blocul:

![](../.gitbook/assets/image%20%2850%29.png)

Apoi, blocul este definit și gata de utilizare.  
Deci, în acest exercițiu trebuie să se recreeze programul implicit. Va fi o aproximație a programul implicit, deși nu este o replică completă. Mai întâi, robotul inițializează cu beep-uri și lumini:

![](../.gitbook/assets/image%20%2878%29.png)

Vei pune acest lucru în propriul bloc de inițializare și îl vei chema\(call\) din programul mBot:

![](../.gitbook/assets/image%20%2841%29.png)

Acest lucru rulează exact la fel ca în cazul în care comenzile LED-urilor setate și comenzile tonurilor de redare au fost "chemate/called" direct din programul mBot. Codul este mult mai ușor de citit ca asta. Apoi, scrie codul pentru partea de telecomandă. Din nou, vei scrie acest cod în propriul bloc:

![](../.gitbook/assets/image%20%2852%29.png)

Apoi scrie blocuri similare pentru line follower și evitarea obiectului. Acum, trebuie să scrii aceste instrucțiuni în programul tău principal. După cum poți vedea, programul final arată foarte simplu:

![](../.gitbook/assets/image%20%2882%29.png)

_Challenge:_

1. Scrie programe pentru funcțiile de  Object Avoidanceși Line Follower și adăugă-le la program.
2. Uneori când este apăsat butonul, un mod sau 2 este omis. Poți rezolva acest bug?
3. Cât de aproape de Programul implicit real poți să faci programul?

