---
description: comunicarea request/response
---

# AJAX

Comunicarea intre doua aplicatii care pot fi pe acelasi calculator sau pe calculatoare diferite poate fi realizata in diferite moduri. Un mod foarte popular pe larg raspindit in lume este 

AJAX este arta de a schimba datele cu serverul si modificarea partilor din pagina - fara a face refresh la intreaga pagina.

jQuery are implementat deja diferite metode pentru interactiunea cu AJAX.

With the jQuery AJAX methods, you can request text, HTML, XML, or JSON from a remote server using both HTTP Get and HTTP Post - And you can load the external data directly into the selected HTML elements of your web page!



**Without jQuery, AJAX coding can be a bit tricky!**  
  
Writing regular AJAX code can be a bit tricky, because different browsers have different syntax for AJAX implementation. This means that you will have to write extra code to test for different browsers. However, the jQuery team has taken care of this for us, so that we can write AJAX functionality with only one single line of code.

## HTTP

HyperText  transfer protocol. 

Are anumite standarde de a comunica intre client si server. 

Mesajul care este transmis de la client la server se caracterizeaza la general prin niste headere si un body care poate fi prezent sau nu, in dependenta de tipul de mesaj care este transmis.

#### Cele mai importante Headere HTTP:

* Method
* Status
* Content-type



## REST  \(client - server architecture\)

REST este un stil arhitectural care se bazeaza pe protocolul \(setul de reguli\) HTTP, care ne permite sa divizam clientul de server in doua aplicatii complet diferite si ne defineste cum sa comunicam intre ele.

Pentru comunicarea intre client si server sunt deja definite anumite reguli in protocolul HTTP, care este recomandat sa le implementam si sa le utilizam de ambii client si server.

### Cateva metode HTTP

* GET \(folisita la citirea datelor de pe server de catre client\)
* POST \(folosita la crearea datelor pe server de catre client\)
* PUT \(folosita pentru modificarea datelor pe server de catre client\)
* DELETE \(folosita pentru stergerea datelor de pe server de catre client\)



### Cum implementam metodele pe Client 

Considerind ca am invatat jQuery si Ajax o sa apelam la o solutie folosind aceste tehnologii

#### **Syntax**

{% code-tabs %}
{% code-tabs-item title="GET request" %}
```javascript
$.ajax(requestObject);

function handleResponse(data, status) {
   console.log(data);
}

const requestObject = {
   url: "http://carevaServer.com",
   type: 'GET',
   success: handleResponse,
   contentType: "application/json”
};

```
{% endcode-tabs-item %}
{% endcode-tabs %}

URL  - linkul catre server care implementeaza metoda GET pe acesta adresa.



Pentru exemplul cu Dorin folositi urmatorul URL

url = **192.168.1.148:3000/posts**

#### 

#### Exemplu pentru \(GET/POST\) mai simplificat

{% code-tabs %}
{% code-tabs-item title="GET request" %}
```javascript
$.get('www.careva-server.com', handleResponse);

function handleResponse(data, status) {
    console.log(data);
    console.log(status);
}
```
{% endcode-tabs-item %}
{% endcode-tabs %}



