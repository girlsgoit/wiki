# 1.3 Execută un program de pe mBlock IDE sau încarcă pe Board

#### mBlock IDE

Când execuți un program în mBlock IDE, comenzile sunt trimise de pe computer pe placa robotului, unde sunt interpretate și apoi executate. Acest lucru înseamnă că utilizatorii pot folosi calculatoarele împreună cu robotul. De exemplu, poți utiliza tastatura pentru a controla robotul:

![](../.gitbook/assets/image%20%28136%29.png)

Sau poți utiliza cronometrul furnizat în software-ul mBlock:

![](../.gitbook/assets/image%20%2844%29.png)

Poți, de asemenea, să utilizezi camera web, zona de execuție în mBlock IDE și multe altele.

Unul dintre dezavantajele utilizării IDE-ului mBlock este că, deoarece calculatorul și robotul pasează mesaje unul altuia, există un decalaj mic, deoarece aceste mesaje necesită ceva timp pentru a merge înainte și înapoi. În multe programe, acest lucru nu va avea un efect mare asupra modului în care rulează robotul, dar pe alții, de exemplu, o linie care urmează programul, va însemna că programul nu funcționează cum ne-ar plăcea.

Un alt lucru pe care trebuie să-l luați în considerare este faptul că, dacă executat de pe mBlock IDE, vei avea, desigur, nevoie de un computer și de o conexiune la computer. 

Când vrei să execuți un program prin mBlock IDE, "Upgrade Firmware" înainte de a începe. Selectează Connect -&gt; Upgrade Firmware:

![](../.gitbook/assets/image%20%2814%29.png)

Acest lucru va rescrie toate programele aflate în prezent pe placa de robot cu firmware care vă asigură că computerul și robotul pot comunica corect. Dacă utilizați mBot Ranger trebuie de asemenea să selectezi "Bluetooth Mode":

![](../.gitbook/assets/image%20%2818%29.png)

Odată ce firmware-ul este upgrade-at, ești gata să începi programarea din ID-ul mBlock.

\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_\_

#### Robot Board

Când se încarcă pe placa robotului, programul rulează ca un **standalone**. Aceasta înseamnă că toate scripturile de programare care au fost relevante doar pentru programarea mediului mBlock \(cum ar fi "Motion" și "Looks"\) nu sunt disponibile. În plus, deoarece codul este încărcat pe placă, nu există un interval între citirea senzorilor și acționarea corespunzătoare.

Când doriți să încărcați un program pe placa Arduino, ar trebui să intrați în modul Arduino. Puteți face acest lucru fie prin selectarea din meniu:

![](../.gitbook/assets/image%20%2876%29.png)

Sau prin glisarea și plasarea programului "\(Board Name\)" în zona de programare și făcând clic pe acesta \(aici sunt blocurile de antet comune\):

![](../.gitbook/assets/image%20%28189%29.png)

Când folosești Arduino, stage layout-ul \(în cazul în care panda este în stânga\) este ascuns și codul Arduino este afișat în partea dreaptă. În plus, toate scenariile de programare care au fost relevante doar pentru programarea mediului de mBlock \(cum ar fi "Motion" și "Looks"\) sunt blocate. Pe măsură ce scrieți programul mBlock, codul Arduino va fi generat automat în fereastra de editare Arduino.

![](../.gitbook/assets/image%20%28164%29.png)

  
După ce ai terminat de scris programul, fă clic pe butonul "Upload to Arduino" și programul va începe să fie difuzat imediat ce a fost încărcat cu succes.

![](../.gitbook/assets/image%20%2865%29.png)

NOTĂ: Odată ce ai încărcat un program pe placa robotului, fie că este vorba de upgrade-ul firmware-ului, fie de unul pe care l-ai scris, acesta va fi suprascris programul preîncărcat. Dacă trebuie să reintroduci acest program pe placa robotului, mergi la Connect -&gt; Reset Default Program -&gt; \(Robot Name\):

![](../.gitbook/assets/image%20%28157%29.png)

