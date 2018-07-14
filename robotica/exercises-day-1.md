# 2.1 Programe Simple

## **2.1.1 Play Music** 

Unul dintre cele mai simple lucruri pe care le putem face, pentru a realiza ceva cool cu robotul nostru, este comanda "Play note". O notă este doar o notă, dar pune notele corecte împreună în ordinea corectă și ai o capodoperă. Să începem:

În primul rând, să cânte o notă. Orice notă.

Plasează acest bloc în zona de programare. Apoi fă clic pe ea. Și va cânta muzica. Ei bine, numindu-l muzică este o întindere a imaginației, dar va cânta o notă. Deci, adaugă o altă notă.

![](../.gitbook/assets/image%20%2843%29.png)

Când plasezi al doilea blog sub primul bloc, partea de jos a primului bloc devine alb. Aceasta înseamnă că atunci când vei "finisa mișcarea"\(\*\), se vor potrivi/alipi împreună. De asemenea, poți schimba lungimea și culoarea notei. Aici, schimbă lungimea notei a doua:

\*finisa mișcarea= drop \(engl.\)

![](../.gitbook/assets/image%20%2816%29.png)

Bine, acum vrei mai multe note? Pentru mai multe note, ai nevoie de mai multe comenzi/blocuri  "play tone on…". O scurtătură pe care o poți face, în loc să tragi și să renunți este să copii și să lipești. Dacă faci clic dreapta pe blocurile din zona de programare, îmi dă un meniu:

![](../.gitbook/assets/image%20%2884%29.png)

Selectând "duplicate" copiază blocurile. Reține că acest lucru va duplica toate blocurile de mai jos și inclusiv blocul pe care ai făcut clic. Deci, dacă ai fi făcut clic pe blocul de jos, doar un bloc ar fi fost duplicat. Când vei face clic pe blocul superior, ambele blocuri vor fi duplicate:

![](../.gitbook/assets/image%20%2855%29.png)

Acum le poți adăuga la sfârșitul cântecului tău:

![](../.gitbook/assets/image%20%282%29.png)

Și continuă să dezvolți programul:

![](../.gitbook/assets/image%20%2845%29.png)

Ok. Acum, vrei să ai o pauză? - Ai nevoie de un alt bloc. Trebuie să aștepți. Sub scripturile "Control", există un bloc "wait":

![](../.gitbook/assets/image%20%2891%29.png)

Adăuga asta la sfârșitul cântecului tău, apoi repetă prima jumătate cu câteva schimbări:

![](../.gitbook/assets/image%20%2835%29.png)

Un aspect important al scrierii codului este includerea comentariilor. În timp ce acestea nu afectează modul în care rulează un program, ele sunt un ajutor uriaș pentru persoanele care citesc codul. Aceștia ar putea fi și alți oameni care lucrează în aceeași echipă cu tine, sau chiar tu, după ce ai scris inițial codul \(și ai uitat unele detalii\). Comentariile trebuie incluse în toate programele pentru a ghida persoanele care le citesc ulterior. Pentru a adăuga comentarii, fă clic dreapta pe blocul în care dorești să adaugi comentariul și apoi selectează "add comment":

![](../.gitbook/assets/image%20%2885%29.png)

Aici adaugă comentarii la melodia ta:

![](../.gitbook/assets/image%20%2863%29.png)

Asigură-te că adaugi comentarii la toate programele și actualizezi comentariile acolo unde este necesar dacă faci modificări în programe.

_Challenge:_

1. Știi ce este o piesă? Poți termina melodia? Poți modifica comentariile pentru a reflecta starea actualizată? 

    2. Poți scrie piesa " Merry Christmas"? Asigură-te că adaugi comentarii.

    3. Îți poți scrie propriul cântec? Adaugă comentarii.



## **2.1.2  The LED Display**

Există 2 LED-uri RGB pe mCore. RGB-ul reprezintă Red-Green-Blue și LED-ul reprezintă dioda emițătoare de lumină. Fiecărui LED i se poate atribui un nivel de lumină roșie, un nivel de lumină verde și un nivel de lumină albastră de la 0 \(lumina este oprită\) la 255 \(lumina se aprinde pe întreaga putere\). Prin combinarea acestor lumini, poți face o gamă largă de culori diferite:

![](../.gitbook/assets/image%20%2834%29.png)

Pentru a testa LED-urile de la bord, trebuie să tragi și să plasezi acest bloc:

![](../.gitbook/assets/image%20%2830%29.png)

Primul meniu drop-down îți oferă posibilitatea de a alege ce LED-uri de la bord vrei să controlezi. Pe mBot, ai 3 opțiuni:

![](../.gitbook/assets/image%20%2824%29.png)

Pentru a controla toate LED-urile selectează "all". Celelalte 3 drop-down-uri îți permit să controlezi cât de strălucitor LED-ul afișează culoarea relevantă.Îți oferă opțiuni de 0, 20, 60, 150 și 255, dar dacă niciuna dintre acestea nu este bună pentru tine, poți, de asemenea, să introduci valoarea dorită. Să setezi LED-ul de culoare roșie la 35 și fă clic pe bloc pentru a vedea dacă LED-ul se aprinde. 

![](../.gitbook/assets/image%20%2822%29.png)

S-ar putea să fie distractiv ca robotul să lumineze ca o mașină de poliție, mergând de la roșu la albastru și înapoi. Vrei asta să ruleze în continuu?  Din fericire, există un bloc "Forever" în scripturile "Control":

![](../.gitbook/assets/image%20%2854%29.png)

După cum poți vedea, forma acestui bloc este diferită de forma celorlalte blocuri pe care le-am văzut până acum. Acest lucru se datorează faptului că acesta este un bloc de control care permite programului să intre într-o buclă. În programare, o buclă este o caracteristică care permite repetarea unei părți a codului. În acest exemplu, buclăa se va repeta pentru totdeauna/infinit, repetând toate blocurile care se află în "forever loop":

![](../.gitbook/assets/image%20%2886%29.png)

LED-urile vor fi setate pe roșu, apoi pe albastru. Apoi, programul se va întoarce în partea de sus a buclei, iar LED-urile vor fi redate din nou în roșu, apoi albastru, apoi buclă etc. etc pentru totdeauna. Asta-i bine…. Dar luminile își schimbă culoarea mult prea rapidă. Le poți  încetini prin adăugarea unui bloc "Wait":

![](../.gitbook/assets/image%20%2819%29.png)

Observă că este nevoie de 2 blocuri de așteptare - una după ce LED-ul roșu este aprins și unul în partea de jos a buclei, unde LED-ul albastru este pornit.

_Challenge:_

1. Testează diferite setări ale LED-urilor. Ce culori poți să faci? Ce setări ale LED-ului RGB creează aceste culori? 

    2. Scrie un program care setează LED-ul stâng și LED-ul drept la culoarae ta favorită îb momente diferite diferite de timp. Deci, dacă LED-ul drept este "on" LED-ul stâng este "off", și vice-versa. 

   3. Puteți scrie un program care oferă un spectacol de lumini care este însoțit și de muzică? Nu uitați să adăugați comentarii



## 2.1.3 Move in a Square

NOTĂ: În timp ce urmați acest tutorial și dezvoltați propriul program, asigurați-vă că robotul dvs. este fie sprijinit, astfel încât roțile să nu fie în contact cu o suprafață sau într-un spațiu în care să se poată mișca liber - Vă rugăm să vă asigurați că nu cad de pe vreun birou sau mesă.

O altă NOTĂ: Acest tutorial rulează programe din IDE-ul mBlock. Nu actualizează niciun program pe placa robotului.

Roboții sunt făcuți să se miște și în acest tutorial, vom învăța cum. Blocul care controlează mișcarea robotului are 2 meniuri drop-down. Primul meniu controlează direcția în care se mișcă robotul:

![](../.gitbook/assets/image%20%2880%29.png)

Al doilea meniu controlează alimentarea. Puterea maximă este 255, 0 oprește motoarele, iar numerele negative inversează direcția. \(NOTĂ: Nivelul de putere mai lent poate să nu fie suficient de puternic pentru ca robotul să se miște.\)

Deci, pentru a începe, fă robotul să meargă înainte cu o viteză de 100:

![](../.gitbook/assets/image%20%2815%29.png)

Este posibil ca robotul tău să nu funcționeze perfect drept. Acest lucru ar putea fi din câteva motive, cum ar fi una dintre roți nu este perfect aliniată sau una dintre roți este fixată mai strâns la robot care/ceea ce cauzează mai multă frecare. Dacă este cazul, puteți remedia acest lucru prin înlocuirea blocului următor cu 2 blocuri care reglează nivelurile de putere ale motorului separat:

![](../.gitbook/assets/image%20%2852%29.png)

Robotul merge direct, deci voi continua sa folosesc blocul "run forward". Vreau să scriu un program care se mișcă într-un pătrat. Deci, să mergem înainte o secundă, apoi să mergem la dreapta. Vreau să mă întorc până la 90 de grade. Voi încerca mai întâi să mă întorc o secundă și apoi să văd dacă este prea departe sau nu suficient de departe:



### 



