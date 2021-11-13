# Tipuri de date

&#x20;În JavaScript, o valoare e întotdeauna de un anumit tip de date. În continuare vom vedea care sunt ele.

### **Undefined**

Undefined e un tip special de date care reprezintă conceptul unei valori care lipsește neintenționat. De exemplu, dacă o variabilă nu are setată o valoare, atunci tipul de date a variabilei este undefined.

```javascript
let bandersnatch;

console.log(bandersnatch); // undefined
```

### Null

Null e un tip special de date care reprezintă conceptul unei valori care lipsește intenționat. Null poate fi utilizat atunci când dorim să indicăm că valoarea lipsește sau e necunoscută.

![Tipul de date null](https://lh3.googleusercontent.com/mV\_yu2kYl\_e4pcFhWLUK2Pr9YPuUgQnJWTMY7VmPmTcy3yols3MyY8JLlR8BGa02CDYWIcyXB3hdCV7tmjndpT4LcJNJUqrzC6eCkU2U0ZFh0sOik7ZAn8PwgHvUcJ8Ip7pOAh4-LbA)

### Boolean

Tipul de date boolean poate avea doar 2 valori: **true** sau **false**.

Acest tip de date este utilizat pentru stocarea valorilor de tip **da** sau **nu**.

![Tipul de date boolean](https://lh3.googleusercontent.com/EBFZ911e7KsH0aH7mqVK9dh8mEuZMld2PbpPilBXh4\_UpNAdsvTpdYLIGv2DjsolsM7DSItiSiHUJmGa\_4Mx-mjMx-7O0oS2vWnDU1djvw3PsMJSEocD-6SDbB3yQc9nWnksC9\_ktoE)

### Number

Tipul de date number poate stoca atât numere întregi cât și numere reale.

![Tipul de date number](https://lh6.googleusercontent.com/IuvqzFRtEYfHi3KUuYgKi6jWHhr6UKLw6xjkKAsW\_kLTbbHp15\_L50\_1lDipnDTMlAEEezWFaqwUSs\_MWxKPPNE0Al7a8Y3MWk7ZJN65O6QaoW8LDw0euQiVLEqFyboD4G8Uf66i7\_A)

Din tipul de date number fac parte și valorile numerice speciale **Infinity**, **-Infinity** și **NaN**.

**Infinity** reprezintă infinitatea matematică și este o valoare specială mai mare decât orice număr.\
**NaN** reprezintă o eroare de calcul, este rezultatul unei operații matematice incorecte sau nedeterminate.

![Valori numerice speciale](https://lh6.googleusercontent.com/ALg05n80s7aazces0nAl74ncWKEyNn1nvSzXtxc7Fef-dFrDfrDBSdblFjlEmjR54Gxu1vfqMHxv4XNVNe0qrWTrV88NPgHzUIEByH7cm5Tuc5xxlfvSNfFi\_z1Kju2sxrer7LE5md4)

**BigInt**

În JavaScript, tipul de date number nu poate reprezenta valori mai mari decât 9007199254740991 sau mai mici decât -9007199254740992. În majoritatea cazurilor aceste valori sunt deajuns, însă atunci când dorim valori mai mari sau mai mici putem utiliza **BigInt**.

O variabilă sau constantă de tip **BigInt** are sufixul **n** după număr.

![Tipul de date BigInt](https://lh5.googleusercontent.com/34kfJVZgcPScUywMaDo6J2A9tJIPo3lU6eIxiOTKJSa5sujw45IkB5i0f2vnsyJEXJjpQKQKBXMHmqoPm28kBVE1-1O8YeEDmeismalJR10aGip9E-H8luIZ4X1i1NgVMVm8XOx\_qgI)

### String

Un șir de caractere are tipul de date string și se scrie între ghilimele.

![Tipul de date string](https://lh6.googleusercontent.com/oAN2seeTovReEjSChPyY07lUqkb438HdMt-OBnSu\_YN\_dQZdfyaW7FN\_grLH8vT6oaemu4\_3SsSoHQ9LSSbzWOXj67x87VwTFhW9vxZa8ytd3-n1jOnsAjsCKJLXc-zfELkUtH6wDJs)

Un string gol, este și el un string.

![Un string gol](https://lh4.googleusercontent.com/jPxROHlTrG4-dNUs303Fi74IZGU2cLdq7KFPNzuiy1i8QNjq1D-tx5AOk5MceIkgTZ\_cyygin6zkoT1EN44-dR830Mt\_83CyUs7ud\_WFmHI3MpiM24GOur0sH4F7\_hv8p-TZZhZ6818)

String'urile pot fi parte a unei expresii.

![Expresii cu string](https://lh4.googleusercontent.com/0EzRCAxJX0XeHVbniOaD6ScO5-Wa2oJW7rVntK01O0Y4JD2BDJht5kV1JOFNdqqaOCSirBGf\_Qo0utZix6qpSpLdvp51SCdVLqNiFPMqJK-9tXihZIw1\_fbhF62zfExjw\_cO03UYYwg)

### Symbol

Symbol este un tip de date special care este utilizat pentru crearea identificatorilor unici.

![Tipul de date symbol](https://lh5.googleusercontent.com/Gd8CMDqjnSRsFAwLSWSaX4XfkYFmPFTkKXBeGvV8YQm0PU1NUHlTWmOZEZrumFXEqvBhCp23W0cSC9nzaYgP\_Q56SMJf7W5n5-q48e8YVgGt\_bffpJpt14kQlHIf1i7xvNy5VVnsLyE)

### Mai departe

În capitolul următor vom vedea operațiile principale care le putem avea cu aceste tipuri de date.

{% content-ref url="operatori.md" %}
[operatori.md](operatori.md)
{% endcontent-ref %}

