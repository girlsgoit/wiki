# REST API's

## API - Application Programming Interface

Termenul de **API** este acronimul de la Application Programing Interface care in limba română se poate traduce ca interfață de programare a aplicațiilor și reprezintș un set de reguli și specificații cu ajutorul cărora un program poate accesa și folosi resursele oferite de un alt program. Cu alte cuvinte, un program care oferă API-uri permite altor programe să interacționeze cu acesta automat, de la program la program sau de la program la sistem de operare, fără să fie nevoie de folosirea unei interfețe grafice de utilizare \(GUI\) și fără cunoștințe legate de arhitectura sau elemente de programare ale programului ci doar folosirea specificațiilor de utilizare a API-ului oferit.

![](../.gitbook/assets/infographic-3.png)

## REST - Representational State Transfer

**REST** este un stil de arhitectură pentru sistemele informatice aflate într-o rețea.

## RESTful API

Un API REST \(cunoscută și sub numele de RESTful API\) este o interfață de programare a aplicației \(API sau API web\) care se conformează constrângerilor stilului arhitectural REST și permite interacțiunea cu serviciile web RESTful. REST reprezintă transferul reprezentativ al statului și a fost creat de informaticianul Roy Fielding.

Atunci când se executa o cerere de client printr-un API RESTful, acesta transferă o reprezentare a stării resursei către solicitant sau punct final. Aceste informații sau reprezentări sunt livrate într-unul din mai multe formate prin HTTP: JSON \(Javascript Object Notation\), HTML, sau text simplu. **JSON** este formatul de fișier cel mai popular în general, deoarece, în ciuda numelui său, este limbaj-agnostic, precum și lizibil atât de oameni, cât și de mașini.

Altceva de reținut: anteturile\(headers\) și parametrii sunt, de asemenea, importanți în metodele HTTP ale unei cereri HTTP RESTful API, deoarece conțin informații importante de identificare referitoare la metadatele cererii, autorizarea, identificatorul uniform al resurselor \(URI\), cache, cookie-uri și altele. Există anteturi de solicitare și anteturi de răspuns, fiecare cu propriile informații de conexiune HTTP și coduri de stare.Pentru ca un API să fie considerat RESTful, acesta trebuie să respecte aceste criterii:

Pentru ca un API să fie considerat RESTful, acesta trebuie să respecte aceste criterii:

* O arhitectură client-server formată din clienți, servere și resurse, cu cereri gestionate prin HTTP.
* Comunicare client-server fără păstrarea stării, ceea ce înseamnă că nu sunt stocate informații despre client între solicitări de obținere și fiecare cerere este separată și neconectată.

## HTTP - Hypertext Transfer Protocol

**Hypertext Transfer Protocol** este metoda cea mai des utilizată pentru accesarea informațiilor în Internet care sunt păstrate pe servere World Wide Web. Protocolul HTTP este un protocol de tip text, fiind protocolul "implicit" al WWW. Adică, dacă un URL nu conține partea de protocol, aceasta se consideră ca fiind http. HTTP presupune că pe calculatorul destinație rulează un program care înțelege protocolul. Fișierul trimis la destinație poate fi un document HTML, un fișier grafic, de sunet, animație sau video, de asemenea un program executabil pe server-ul respectiv sau și un editor de text.

### Cum funcționează HTTP

HTTP oferă o tehnică de comunicare prin care paginile web se pot transmite de la un computer aflat la distanță spre propriul computer. Dacă se apelează un link sau o adresă de web cum ar fi [http://girlsgoit.org/](http://girlsgoit.org), atunci se cere calculatorului host să afișeze o pagină web \(index.html sau altele\). În prima fază, adresa  www.girlsgoit.org este convertit de protocolul DNS într-o adresă IP. Urmează transferul prin protocolul TCP pe portul standard 80 al serverului HTTP, ca răspuns la cererea HTTP-GET. Informații suplimentare ca de ex. indicații pentru browser, limba dorită ș.a. se pot adăuga în header-ul pachetului HTTP. În urma cererii HTTP-GET urmează din partea serverului răspunsul cu datele cerute, ca de ex.: pagini în HTML, cu fișiere atașate ca imagini, fișiere de stil \(CSS\), scripturi \(JavaScript\), dar pot fi și pagini generate dinamic. Dacă dintr-un anumit motiv informațiile nu pot fi transmise, atunci serverul trimite înapoi un mesaj de eroare. Modul exact de desfășurare a acestei acțiuni \(cerere și răspuns\) este stabilit în specificațiile HTTP.

### Metodele HTTP

Metodele HTTP furnizează operațiile, cum ar fi crearea citirea, actualizarea și ștergerea unei resurse din baza de date. În tabelul de mai jos găsiți cele mai utilizate metode folosite:

|  **Metodă HTTP** | **Descrierea** | Status code |
| :--- | :--- | :--- |
| GET | Extrage o resursă. | `200` |
| POST | Creează o nouă resursă. | `200, 201` |
| PUT | Actualizează o resursă existentă. | `200, 201` |
| DELETE | Șterge o resursă. | `200, 204` |

Pentru o listă mai detaliată a metodelor disponibile puteți accesa acest [link](https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods).

### Codurile de răspuns HTTP

Codurile de stare a răspunsului HTTP indică dacă o anumită solicitare HTTP a fost finalizată cu succes. Răspunsurile sunt grupate în cinci clase: 

* 1xx - [răspunsuri informaționale](https://developer.mozilla.org/en-US/docs/Web/HTTP/Status#information_responses)
* 2xx - [răspunsuri reușite](https://developer.mozilla.org/en-US/docs/Web/HTTP/Status#successful_responses)
* 3xx - [redirecționări](https://developer.mozilla.org/en-US/docs/Web/HTTP/Status#redirection_messages)
* 4xx - [erori de client](https://developer.mozilla.org/en-US/docs/Web/HTTP/Status#client_error_responses)
* 5xx - [erori de server](https://developer.mozilla.org/en-US/docs/Web/HTTP/Status#server_error_responses)

Codurile de stare sunt definite în secțiunea [10 din RFC 2616](https://tools.ietf.org/html/rfc2616#section-10). Adițional, pentru o descriere mai detaliată, puteți accesa următorul [link](https://developer.mozilla.org/en-US/docs/Web/HTTP/Status).



## Resurse

* [What is a REST API?](https://www.redhat.com/en/topics/api/what-is-a-rest-api)

