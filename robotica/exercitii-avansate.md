# 2.3 Exerciții avansate - Scratch

## **Schimbarea culorilor utilizând variabilele.**

Fiecare LED are 3 culori diferite - roșu, verde și albastru \(RGB\) - toate dintre acestea putându-i fi atribuite o valoare între 0 și 255. Varietatea culorilor care pot fi obținute folosind aceste culori primare este afișată în această roată:

![](../.gitbook/assets/image%20%2819%29.png)

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

![](../.gitbook/assets/image%20%2860%29.png)

Când apeși butonul, îți va cere un nume:

![](../.gitbook/assets/image%20%2864%29.png)

Asigură-te că alegeți un nume care descrie informațiile pe care le va conține variabila. Odată ce ai definit o variabilă, va afișa câteva blocuri legate de variabila pe care o poți folosi pentru programare:

![](../.gitbook/assets/image%20%2812%29.png)

Cu excepția cazului în care variabilele vor fi modificate de la începutul unui program, se consideră o bună practică inițializarea variabilelor la începutul unui program. Pentru programul tău,  începe cu albastru pornit, și verde și roșu oprit. Vei transforma LED-urile pe o valoare maximă de 100:

![](../.gitbook/assets/image%20%2884%29.png)

Și acum setează LED-urile la valorile acestor variabile:

![](../.gitbook/assets/image%20%2824%29.png)

Acum scade setarea albastră unul câte unul până când ajung la zero. În același timp, mărește setarea verde până când ajunge la 100. Deci va trebui să repeți acest pas de 100 de ori:

![](../.gitbook/assets/image%20%2891%29.png)

_Challenge_:

1. Finisează programul astfel încât LED-urile să continue să se schimbe prin culorile roții.
2. Scrie un program care măsoară lumina \(utilizând senzorul de lumină de la bord\) pe măsură ce LED-urile se estompează. Ce setări LED oferă cele mai întunecate măsuri. Notează problemele cu care te confrunți în timp ce scrii acest program. Cum ai rezolvat problemele?

## 

## 

## 

## Butonul On-board și Timer-ul

 Butonul de la bord are 2 blocuri de programare asociate în mBlock. Primul este un header bloc:

![](../.gitbook/assets/image%20%28114%29.png)

Acesta poate fi folosită ca declanșator pentru ca un anumit cod să fie rulat.   
_NOTĂ: acest bloc poate fi folosit numai când rulează programe mBlock._

Al doilea bloc este un bloc boolean. Un bloc boolean este unul care poate fi folosit într-o condițional \(cum ar fi "if"\) și se va întoarce fie adevărat, fie fals:

![](../.gitbook/assets/image%20%28134%29.png)

Meniurile drop-down pentru ambele blocuri sunt fie "pressed", fie "released"

Există două timere în mBlock - una rulează în mediul mBlock, iar cealaltă rulează pe tablă. Prin urmare,  ce timer utilizezi ar trebui să depindă de locul în care intenționezi să rulezi programul. Blocurile temporizatorului de mediu mBlock pot fi găsite în scripturile "Sensing":

![](../.gitbook/assets/image%20%2842%29.png)

Blocurile cronometrului robot pot fi găsite în scripturile "Robots". Poți folosi blocul "reset timer" pentru a seta temporizatorul la zero:

![](../.gitbook/assets/image%20%2828%29.png)

Odată ce timerul este resetat la zero, acesta va începe să contorizeze imediat. Poți accesa mai târziu cât timp a trecut de la resetarea cronometrului utilizând acest bloc:

![](../.gitbook/assets/image%20%288%29.png)

În acest program simplu, apăsarea butonului de la bord reinițializează cronometrul și se execută ciclul de lucru până când cronometrul depășește 10 secunde.

![](../.gitbook/assets/image%20%2816%29.png)

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

![](../.gitbook/assets/image%20%28118%29.png)

Există 2 probleme codul în acest moment. Prima este că nu există nicio modalitate de citire a variabilei de numărare. 

_Challenge:_

1. Adăugă o modalitate de verificare a valorii variabilei.
2. Cu acest cod, valoarea variabilei înregistrate nu va fi corectă. Îți poți da seama de ce? Și cum să corectezi asta?







## Scrierea programului prestabilit cu funcții\(Blocks\)

Diferitele secțiuni ale unui program fac deseori lucruri diferite. Un program poate fi împărțit în părți separate, fiecare parte realizând o anumită funcție. Din programul principal, aceste funcții pot fi "numite" sau executate. Acest lucru face codul mult mai ușor de citit.

În mBlock, faci o funcție \(sau bloc\) făcând clic pe "Make a Block" în script-ul "Data&Blocks":

![](../.gitbook/assets/image%20%2880%29.png)

Apoi alegeți un nume care reprezintă ceea ce face blocul:

![](../.gitbook/assets/image%20%2872%29.png)

Apoi, blocul este definit și gata de utilizare.  
Deci, în acest exercițiu trebuie să se recreeze programul implicit. Va fi o aproximație a programul implicit, deși nu este o replică completă. Mai întâi, robotul inițializează cu beep-uri și lumini:

![](../.gitbook/assets/image%20%28117%29.png)

Vei pune acest lucru în propriul bloc de inițializare și îl vei chema\(call\) din programul mBot:

![](../.gitbook/assets/image%20%2857%29.png)

Acest lucru rulează exact la fel ca în cazul în care comenzile LED-urilor setate și comenzile tonurilor de redare au fost "chemate/called" direct din programul mBot. Codul este mult mai ușor de citit ca asta. Apoi, scrie codul pentru partea de telecomandă. Din nou, vei scrie acest cod în propriul bloc:

![](../.gitbook/assets/image%20%2876%29.png)

Apoi scrie blocuri similare pentru line follower și evitarea obiectului. Acum, trebuie să scrii aceste instrucțiuni în programul tău principal. După cum poți vedea, programul final arată foarte simplu:

![](../.gitbook/assets/image%20%28122%29.png)

_Challenge:_

1. Scrie programe pentru funcțiile de  Object Avoidanceși Line Follower și adăugă-le la program.
2. Uneori când este apăsat butonul, un mod sau 2 sunt omise. Poți rezolva acest bug?
3. Cât de aproape de Programul implicit real poți să faci programul?

## Evitarea Obiectelor cu Funcții și Parametri

Funcțiile sunt utile pentru a face codul tău ușor de citit și bine organizat. Puterea reală a funcțiilor vine cu parametri.Aici, vei explora această putere prin re-scrierea programului de evitare a obiectelor utilizând funcții și parametrii.

Acesta este codul original de evitare a obiectului:

![](../.gitbook/assets/image%20%2820%29.png)

Acum, pune codul într-o funcție nouă \(New Block\):

![](../.gitbook/assets/image%20%2847%29.png)

Pot apela funcția cu blocul ObiectAvoidance din partea de jos a imaginii de mai sus. Acum, dacă ao fi vrut să faci acest cod, dar în loc de o viteză de 100 de motoare, vreao 200? Sau 150? Sau 255? Aici intră parametrii. Un parametru permite transmiterea unei valori la această funcție.

Pentru a transmite un parametru în mBlock, trebuie să le creezi fie când creezi funcția, fie după ce ai creat funcția, faci clic dreapta pe oricare dintre blocurile funcționale și selectezi "editare":

![](../.gitbook/assets/image%20%28120%29.png)

Apoi în "Opțiuni":

![](../.gitbook/assets/image%20%2858%29.png)

Aici poți adăuga parametrii. Când adaugi un parametru, trebuie să specifici tipul de parametru: număr, șir sau Boolean. Un număr este doar o cifră sau mai multe, un șir poate fi numere sau litere și Boolean este fie adevărat, fie fals. În exemplul tau,  funcția ta trebuie să ruleze programul cu viteze diferite ale motorului. Deoarece viteza motorului este un număr, vei alege  "Add number input".

![](../.gitbook/assets/image%20%281%29.png)

După cum vezi, aceasta creează o intrare nouă/ new input \(parameter\) în blocul din partea de sus. Îl numește "number1", dar deoarece aceasta va reprezenta viteza în programul tău, vei schimba numele la "speed":

![](../.gitbook/assets/image%20%2894%29.png)

Acum, când apeșo ok, funcția are parametrul din blocul de definiție:

![](../.gitbook/assets/image%20%2863%29.png)

Și blocul său de apel:

![](../.gitbook/assets/image%20%28130%29.png)

Singurul lucru care rămâne de făcut este să folosești parametrul de viteză când setezi viteza motoarelor. Poți face acest lucru prin tragerea și plasarea parametrului de viteză din blocul de definire a  Avoidance Object în locurile în care ai setat viteza. Funcția finală arată astfel:

![](../.gitbook/assets/image%20%2874%29.png)

În partea de jos poți vedea funcția obiectAvoidance și se trece la o viteză de 125.

_Challenges:_

1. Schimbă în diferite valori ale vitezei și încearcă să modifici această funcție.
2. Adăugă un alt parametru care controlează direcția  - 0 pentru stânga, 1 pentru dreapta, 2 pentru aleatoriu.
3. Scrieți un alt program care utilizează funcții și parametri.

## 

## 

## 

## mBot IR Communications

Cerinţe: 2 sau mai multe boards mCore.

Introducere: Board-ul mCore este echipată cu un receptor IR și un transmițător IR, iar mBlock are 2 blocuri care pot fi utilizate pentru a trimite și primi mesaje:

![](../.gitbook/assets/image%20%2885%29.png)

Robotul de trimitere:

Un robot trebuie să trimită un mesaj. Ar trebui să introduci mesajul în mesajul "send mBot's message". Nu poți trimite variabile în mesaj și robotul recepționat nu poate folosi mesajul pentru a intra în alte funcții, astfel încât nu există avantajul de a scrie mesaje lungi. 

![](../.gitbook/assets/image%20%2836%29.png)

Aceste blocuri trebuie să fie în cicluri astfel încât trimiterea și primirea mesajului să se întâmple în același timp. Cu toate acestea, să fii conștientă de faptul că dacă trimiți în mod continuu mesajul mBot, acesta se va stinge după o perioadă de timp. Pentru a evita acest lucru, este recomandat să introduci o comandă de așteptare scurtă la fiecare 50 de trimiteri. Adăugarea comenzilor cu LED-uri îți permite, de asemenea, să afli când mesajele se declanșează și când nu sunt:

![](../.gitbook/assets/image%20%2848%29.png)

Robotul primitor:

Celălalt robot trebuie să asculte să o primească. Când primești, utilizează un bloc "wait until" pentru a primi mesajul. Trebuie să incluzi ghilimele " " în acest bloc:

![](../.gitbook/assets/image%20%28112%29.png)

Dacă nu incluzi ghilimele "", programul nu se va compila cu succes. Odată ce mesajul a fost primit, poți efectua acțiunea declanșată de acest mesaj. În acest exemplu, LED-ul va porni verde și aștepți 0,5 secunde:

![](../.gitbook/assets/image%20%2850%29.png)

Dacă trimiți mai multe mesaje de la robotul trimis, trebuie să aștepți până când mesajul primit nu este gol și apoi testezi pentru fiecare mesaj posibil trimis. În acest exemplu, aștepți până când mesajul nu este gol, apoi încerci pentru "a" și "b" unde "a" va roti LED-urile verzi și "b" va roti LED-urile albastre:

![](../.gitbook/assets/image%20%2895%29.png)

_Challenge_**:**

1. Scrie 2 programe astfel încât robotul de trimitere să trimită în mod aleatoriu un mesaj, iar robotul recepționat transformă LED-ul pe roșu sau verde în funcție de mesajul primit.
2. Scrie 2 programe în care robotul de trimitere trimite informații privind distanța pe care detectează senzorul său ultrasonic și robotul de recepție luminează corespunzător LED-urile.
3. Scrie 2 programe în care robotul expeditor trimite informații cu privire la distanța pe care o detectează senzorul său ultrasonic și robotul recepționat ajustează în mod corespunzător distanța.
4. Scrie un program  care are 2 roboți ce urmează linie. Primul robot are un senzor ultrasonic care se oprește dacă simte un obstacol și îi spune și celui de-al doilea robot să se oprească.

## 





## Serial Communications

Este posibil să comunici în serie cu mBot odată ce un program a fost actualizat la placă. Comunicarea prin serie poate fi prin USB, 2.4GHz sau Bluetooth. Pentru a comunica în serie, trebuie să selectezi extensia "Communication" din meniul Extensions:

![](../.gitbook/assets/image%20%2899%29.png)

Odată ce este selectat acest lucru, poți accesa script-urile "Robots", derulezi în jos până  vei găsi blocurile de comunicare. Este probabil să faci clic pe “Show Extension”:

![](../.gitbook/assets/image%20%2865%29.png)

Blocurile de comunicare arată astfel:

![](../.gitbook/assets/image%20%28109%29.png)

Comunicarea dintre robotul tău și computer se întâmplă în fereastra din partea dreaptă a mediului de programare mBlock:

![](../.gitbook/assets/image%20%28133%29.png)

Programare:

Valoarea actuală a senzorilor poate fi afișată prin această comunicare. Pentru a afișa valoarea curentă, utilizați blocul "Write line":

![](../.gitbook/assets/image%20%284%29.png)

Înlocuiește input-ul "hello" cu valoarea senzorului ultrasonic și pune-o într-un ciclu infinit:

![](../.gitbook/assets/image%20%28139%29.png)

Ar trebui să obții acest output:

![](../.gitbook/assets/image%20%2879%29.png)

Robotul poate fi, de asemenea, controlat prin citirea de la linia de intrare. Verifică mai întâi că datele sunt disponibile:

![](../.gitbook/assets/image%20%2810%29.png)

Dacă este, citește apoi linia cu aceasta:

![](../.gitbook/assets/image%20%28135%29.png)

Și compară-o cu aceasta:

![](../.gitbook/assets/image%20%2859%29.png)

În cele din urmă, programează-ți robotul să se comporte în funcție de dorințele tale. În acest program, un input de "r" va transforma LED-urile roșii și "o" le va dezactiva:

![](../.gitbook/assets/image%20%28102%29.png)

Apoi, în inputarea, lăsă luminile roșii, oprite și din nou pe roșu:

![](../.gitbook/assets/image%20%2854%29.png)

_Challenge:_

1. Scrie un program care controlează motoarele prin comunicație de serie.

