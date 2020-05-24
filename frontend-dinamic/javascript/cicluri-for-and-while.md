# Cicluri \(for & while\)

Ciclurile oferă un mod rapid și ușor de a face ceva în mod repetat. În continuare vom discuta despre mai multe tipuri de cicluri.

### While

Ciclul **while** rulează un bloc de cod atât timp cât o condiție specificată este adevărată.

![Structura ciclului while](https://lh6.googleusercontent.com/xXh0CgtNJHBHvZZC9Z7msOYTMVhg0N9Y_xICZNgJ2m51oihXMrD_Mv9do9dOcWWMyNZsaRX5rFzRC18aY0lD-XDjbUU5GufkuTh2K-snxVZr6IhcY7-lJsTJLVwCJ4TKinPsD9cInd4)

Condiția se scrie între parantezele de după cuvântul cheie, iar în parantezele acoladă se indică blocul de cod ce trebuie rulat. În exemplul de mai jos variabila _n_ a fost inițializată cu valoarea 0. Condiția ciclului este _n &lt; friends.length_. Blocul de cod indicat între parantezele acoladă va fi rulat atât timp cât această condiție este **true**. Valoarea pentru _friends.length_ este 5, deoarece sunt 5 elemente în array. Astfel, blocul de cod indicat va rula atât timp cât n va fi mai mic ca 5. 

În acest caz, condiția nu este modificată pe parcursul rulării. Blocul de cod va rula la nesfârșit. Acesta este un ciclu infinit.

![Ciclul infinit](https://lh3.googleusercontent.com/Bfi2flGzjdOHL4tDpkyqwBBWD4SRmUS7Xl64272pBHkEmDVpXzXFqnPdGPtG28dKBL_RUeSbc67RsS3VZSCRWj2PLoRLesEfJcfwakaESZynWVb2hCSQ69pOCNni0xlMoHlm6IBECCw)

În exemplul de mai jos, în blocul de cod al ciclului a fost adăugată o instrucțiune care modifică valoarea variabilei n. Astfel, de fiecare dată când blocul de cod este rulat, valoarea variabilei crește cu o unitate. Când n este 5, condiția ciclului devine **false** și ciclul nu se mai execută. Execuția codului continuă după ciclu.

![Ciclul while](https://lh5.googleusercontent.com/EcctyVUFpf962G8tF_-UJ6ZbboPML3ZeZxUjzg9bBhFXBx3xK_5fTBOjLG507qkgV4kiCLykgjfBHcT7MubPp5Hx1EkCAqH1L04_OG0oxdfNqqqTPUBszDz76kyq6D77e4pHTzzzhgk)

### For

În exemplele de mai sus a trebuit să inițializăm variabila n cu valoarea 0, apoi în blocul de cod al ciclului să indicăm cum n se modifică. Ciclul **for** combină aceste instrucțiuni.

![Structura ciclului for](https://lh3.googleusercontent.com/GjrRDkr_54gB0uE3vWXQ4D2a-UkbaKE10dDTJjZWQ059apdqz9RC2eo6zrFvfH_7I4hBTpoawjjir5hN_59US2Gs6ILjkXLRl6_lo_g4pCm70KuA9GEy_ER8iL4gtS5N58w6rJeLRAI)

În paranteze după cuvântul cheie **for**, se indică expresia de inițializare, condiția ciclului și expresia de incrementare delimitate cu punct și virgulă. 

În exemplul de mai jos, variabila i este inițializată cu valoarea 0. Condiția ciclului este _i &lt; friends.length_, iar expresia de incrementare _i = i + 1_. Valoarea expresiei _friends.length_ este 5, pentru că sunt 5 elemente în array. Astfel, blocul de cod va rula atât timp cât variabila i va fi mai mică decât 5. Expresia de incrementare indică cum se modifică variabila _i_, în acest caz valoarea variabilei _i_ crește cu o unitate. Când valoarea variabilei _i_ este 5, ciclul finisează execuția. Execuția codului continuă după ciclu.

![Ciclul for](https://lh3.googleusercontent.com/8y5xARljx1RaivH7hSwkYgRmVfLCjiJ0vw-HPPcd-JoILsuFPS7wQH21q3ZuCnJ4xRzSwitsPPBAHjyqKVCJ7vU_mCE-NMz9dH5umjdichlqbO0LphnRuxuILgv2a8nBQgu7yeqo-OM)

### **For of**

Elementele unei colecții pot fi iterate cu ajutorul ciclului **for of**.

![Structura ciclului for of](https://lh5.googleusercontent.com/C8pJjR4GsIbGPKlU7JVQj8CSBcHkBhcRQSIPy77tzVuJS1VpDptd_uHBrLelXRTOC3MPZfd8dw8pI2Fey84SgaI4VSerXjMMu4ZvM0bsYnnf3FAd3KBN1v0WaG0qAM_cPRVbczzAYjM)

În paranteze după cuvântul cheie **for**, se indică numele variabilei valoarea căreia la fiecare iterație va corespunde valorii iterate din colecție. În exemplul de mai jos, valoarea variabilei _friendName_ va fi una din valorile din array. Astfel, prima iterație valoarea variabilei este _'Marc'._ Următoarele iterații, fiecare element din array va fi atribuit variabilei _friendName_. Acest proces se repetă până la ultima iterație când valoarea variabilei va fi _'Oleg'_.

![Ciclul for of](https://lh3.googleusercontent.com/yhn33aE14fXzUOB--Tnmrp-e0FYXq7oNzQWSNLq2LZSVm6u_YKmkqIsLRxdmcRZbRSuLviT_X7k3p2yhap7geBiziSNrsTW0iUIWTXquHZK7345UgnoYfipSK4-rYulY7mB-U7XxsEA)

  


