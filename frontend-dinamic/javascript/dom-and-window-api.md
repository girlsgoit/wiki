# DOM & Window API

O utilizare des întâlnită a funcțiilor în JavaScript e apelarea lor la anumite evenimente care se întâmplă în pagina web. Pentru asta mai întâi trebuie să întelegem cum e reprezentată o pagină web în Browser și ce instrumente \(API\) ne oferă el la dispoziție.

## DOM

DOM \(Document Object Model\) e un API \(set de funcții si atribute\) ce ne permite să interacționăm cu documentul HTML. pentru asta el reprezintă pagina ca un obiect ierarhic.

![Structura unui obiect html](../../.gitbook/assets/image%20%28212%29.png)

Pentru a accesa conținutul documentului HTML, avem acces la o variabilă **`document`**, din care putem citi ca atribute toată informația care ne interesează.

![](https://lh6.googleusercontent.com/ktJWZsm_VJLNK5p4qdncH305hCbMuCaid2paKVABzhJmn-tngYX6UR9lm9klMOJzfmnlR5WKto9zkJbfiw1mkMTujrpNfi6q21uEwPiVwF0ZQm9K4P_RTqNVSzqC_Snwr4XIcQddVes)

### Elemente cu ID

Când declarăm un attribut id la un element html, acel element devine accesibil ca o variabilă cu același nume în JavaScript:

![Element cu Id-ul heading](https://lh6.googleusercontent.com/2me7QtURcCaw3UlrtmRLRcJAbE1Isfv1QpLh31vpBrwfNwQAhtHMn4NfbQvue1NszyJgZUdEJXwQAFUO27nt9tnBDeFM-f1uOMyGLDgIaljs5U8eoXc6MKK_wHDw_tnlSQJXOvKhNL0)

![Opera&#x21B;ii care le putem face cu acest obiect heading](https://lh4.googleusercontent.com/9LMc7_mobMvnx35IWlVMt_tanKc_muD7kreqUneOjCMO78tlCslecPTJIIpwG-S4NLNZ0wFSZgVaeQAgjUdrvq-GLSuhXBxCD7EADdkaJTS1oqj3MptoqBtnxa3uO0YKJ2Gwn7hb05A)

Astfel putem modifica conținutul dinamic în dependentă de o logică care o definim, ceea ce ne oferă o putere nemaipomenită, putem face paginile cu conținut dinamic!

### Input Value

Un alt exemplu de elemente în HTML sunt **`<input>`**, care ne permit sa citim valori care sunt introduse de utilizatori:

![Un element input cu id-ul - textInput](https://lh6.googleusercontent.com/0RcnPUH0Fr8H3BrVlK053Wvbrlc2N-i-nQp_sMClbHBsTKtAeNkiJ0pcBI52OMHaagvT2HVMnJUGIMrRLgpUTOqXTcvz6ndDu2pYiT-SZl5Hmm-DymO3MEIndpUYCurauegTeJcMwLg)

![Cum citim &#x219;i set&#x103;m valori pentru acest textInput](https://lh4.googleusercontent.com/yKFRrgljBGP7r62oZ7IIq6UPkiCjBIM908G1FoUgKwvseaoQU5Ya9EYAvVrMGw8LIHQiKCjE82FGe-c1adv2HYS5LG1qmNY2KRhRN-FFNGH2Uv1c--oPFrcsJJzbPtOfNww4vOHR9mY)

{% hint style="info" %}
Observați că putem atât citi cât și seta valori pentru un input accesând atributul `value`
{% endhint %}

## Evenimente DOM

În general avem 3 tipuri principale de evenimente în browser:

* **Mouse events** - click, hover, drag…
* **Keyboard events** - keydown, keyup, keypress…
* **Media events** - play, pause, ended, seeking...

Pentru a putea defini acțiuni care să se întâmple când un eveniment apare, trebuie să definim așa numitele ”Event Handlers”, care sunt doar niște funcții obișnuite!

![Exemplu de func&#x21B;ii obi&#x219;nuite care pot fi setate ca ac&#x21B;iuni la evenimente](https://lh4.googleusercontent.com/A5cSGuDM2TfCUIkMXj_e3A8gjguGXyy-_6CcKqV6oCDrayQkasUUS8_T6ISLEDnSHrBOWL4iAJUJ69po7Q5acgSS0XFvz496-8YBplZvnYZJE-WVhVBesx3U2wcfVc7jkj3UMKoLFQo)

Pentru a lega o funcție de un eveniment, trebuie sa-i spunem Browser-ului să o execute. Exemplul clasic e o acțiune la click pe un buton:

![Definim ac&#x21B;iunea de a zice salut](https://lh5.googleusercontent.com/Ij269F9T9fX896TfGkCKl9JzVCt73VF_9GefFYVSNA3fcSwoJqYFQDs7tPmwajypTR_YWxYOX1T6QsXlc426M_2gluk8FzhucmwH0uPi2GdcQfAchGp2bR1m8_KaWwnoH7dmY7uvvCc)

![Legam ac&#x21B;iunea sayHi\(\) de evenimentul onclick la buton](https://lh6.googleusercontent.com/UdhWSKmCx8XbrmEldiVFdlyv3uxRZr4MdZfR261PnO28JqlyJu7Eg9UAKjTebHDnqpQ2CBCMhRlXdlWSzRdAI4GeW_QwvSlJgaX3QBowZjPztiNXlStLqeRmj_7iUp89LVNsENl5sWg)

Atât! prin aceste câteva linii de cod am creat o acțiune care se va executa doar când utilizatorul va apăsa click pe buton.

### Evenimente și funcții cu parametri

Deseori e folositor sa creăm funcții generice care acceptă parametri, și vrem să-i transmitem în timpul unui eveniment, asta e la fel de ușor s-o facem:

![Func&#x21B;ie cu parametru](https://lh4.googleusercontent.com/2evPyFMulkUcs03VhyzFbtDOqLFaSvj9cQcba4MN35BaErOg0P9x2otsYMLD__MYqmtRAog9FG_oG92eHWu-WOrxkMrw_b6OgqwfD19FCnZfQCMh8qfsX3674qSGorfDL06itgnI094)

![Transmitem parametrul la declararea evenimentului](https://lh5.googleusercontent.com/3JaaxYQ-hqnFb3jev8iZUjsCo2-4TRSkT4x3YIUbpUoLQqymN2vx9l5By1-3bbOlz3IhXbN3_Qt7ZEyCr4oszVNvf4qtNkY7WCohB-2q67cwuoxNwvnpzUec8HvAQmrClVI95RXRyVY)

Deja ne putem imagina cum am folosi această idee pentru a crea funcționalitatea unui calculator simplu ;\)

### Vreau mai mult!

Pentru a folosi evenimente și funcționalități mai complexe si avansate, deobicei nu se folosește JavaScript curat, e folosită o librărie care ușurează mult lucrul cu aceste evenimente, dar acum am învățat baza și ce stă în spatele la orice librărie modernă pentru aplicațiile web. 

Exemplu de librării \(Frameworks\) moderne care permit să construim aplicații dinamice sunt: **React, Vue.js, Angular**

## Window API

Interfata **Window** reprezinta o fereastra care contine un `DOM document` despre care ati studiat mai sus. De fiecare data cind ati utilizat obiectul `document` , el reprezinta o referinta anume la DOM document incarcat in acea fereastra in care va aflati.  
  
Sunt o serie larga de instructiuni pe care voi cu siguranta le-ati utilizat, fara a sti neaparat ca ele sunt oferite anume de interfata Window -  **`console`**\(`console.log()`\), **`document`**\(`document.getElementById()`, `document.write()`\).  Aceste obiecte ni se ofera in limbajul JavaScript cu usurinta, fara a fi nevoiti sa precizam ca fac parte din interfata **Window**.  
  
Sunt cateva alte proprietati si functii importante care adauga dinamicitate si v-ar putea fi de folos cu siguranta in dezvoltarea unei interactiuni mai avansate cu utilizatorul

1. `setTimeout(functionName, x)` - functie care apeleaza functionName peste x milisecunde si returneaza un id.
2. `setInterval(functionName, x)` - functie care apeleaza functionName in fiecare x milisecunde si returneaza un id.
3. `clearInterval(x)` - function care opreste si sterge din functiune un setTimeout sau setInterval dupa un id - **x**
4. `alert(x)` - functie care porneste un alert box cu un mesaj **x** si un buton OK.
5. `prompt(x, y)` - function care porneste un prompt box care se aseamana cu un alert doar ca are un mesaj \(**x**\) care de regula este o intrebare pentru a introduce un raspuns si un camp pentru input \(care poate avea o valoare prestabilita - **y - optionala**\), pentru a introduce acel raspuns**.**  Aceasta functie returneaza **textul**/respunsul introdus de utilizator.
6. `innerWidth` - proprietate care reprezinta valoarea latimii paginii.
7. `innerHeight` - proprietate care reprezinta valoarea inaltimii paginii.



## Functia setTimeout\(\)

Aceasta functie este utila pentru a amina executarea unei functi pentru o anumite perioada de timp.

```javascript
function printHello() {
    console.log('Hello my friend!');
}

setTimeout(printHello, 3000);  // printHello() va fi apelata peste 3 secunde (3000 milisecunde)
```

Deci in exemplul de mai sus **Hello my friend!** va aparea in consola dupa ce se executa programul peste **3** secunde \(3000 milisecunde\)

Pentru a clarifica lucrurile - orice functie poate fi apelata de nenumarate ori, respectiv putem apela setTimeout\(printHello, x\), unde x numarul de milisecunde de cate ori vrem.  


```javascript
setTimeout(printHello, 1000); // Hello my friend va aparea peste 1 secunda
setTimeout(printHello, 2000); // Hello my friend va aparea peste 2 secunda
setTimeout(printHello, 4000); // Hello my friend va aparea peste 4 secunda
```

Mai mult ca atit putem apela aceiasi functie cu acelasi numar de milisecunde - in acelasi moment \(ele vor aparea intr-un mod necontrolat de noi, putem spune aleator\).

```javascript
setTimeout(printHello, 2000); // Hello my friend va aparea peste 2 secunda
setTimeout(printHello, 2000); // Hello my friend va aparea peste 2 secunda
```

Ordinea executarii acestor 2 chemari de functii nu este clar, in diferite executari a programului ea poate fi inversata.

## Functia setInterval\(\)

Aceasta functie este utila pentru executa o functie repetitiv, la o anumita perioada de timp \(milisecunde\).

```javascript
function printHello() {
    console.log('Hello my friend!');
}

setInterval(printHello, 3000);  // printHello() va fi apelata din 3 in 3 secunde (3000 milisecunde)
```

Aceasta functie urmeaza a fi apelata din 3 in 3 secunde, teoretic la inifinit. Toate principiile explicate cu `setTimeout()` se aplica si aici - referitor la apelarea nenumarata si apelarea pentru aceiasi functie si aceiasi perioada de timp.

## Functia clearInterval\(\) si clearTimeout\(\)

Aceasta functie permite oprirea programatica a functiilor `setTimeout()` sau `setInterval()`.

La fiecare apelare a uneia din aceste functii se creaza un identificator unic, pentru a fi posibila oprirea apelarii lor. Acest identificator este returnat odata ce se apeleaza functia.

```javascript
function printHello() {
    console.log('Hello my friend!');
}

const id = setInterval(printHello, 3000); 

clearInterval(id); // opreste executarea intervalului de mai sus cu acest id
```

Daca functia `clearInterval()` este apelata inainte de 3 secunde in acest care - atunci printHello\(\) nu va fi apelata niciodata.  
  
Aceasta functie isi are sensul in anumite conditii \(**if**\) care noi le-am dori.

### Example when to use clearTimeout\(\)

This code will create a counter and increment it each 2 seconds glad to setInterval from line 9 of `index.js` file.

When clicking the stop button the counter growing will stop because it will trigger the `stopCounter()`function which clears the interval created above.

![How it should look in the browser](../../.gitbook/assets/screen-shot-2020-06-07-at-3.25.59-pm.png)

{% code title="index.html" %}
```markup
<!DOCTYPE html>
<html>
<body>

<p>My growing counter:</p>
<p id="counter-text">1</p>
<button onclick="stopCounter()">Stop counter</button>

<script src="./index.js"></script>

</body>
</html>

```
{% endcode %}

{% code title="index.js" %}
```javascript
let counter = 1;

function incrementCounter() {
  counter+=1;
  document.getElementById("counter-text").innerHTML = counter;
}

var id = setInterval(incrementCounter, 2000);

function stopCounter() {
  clearInterval(id);
}
```
{% endcode %}

#### Functia clearTimeout\(\) este analogica la `clearInterval()` doar ca se foloseste asupra la `setTimeout()`.

