# DOM & Browser API

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

