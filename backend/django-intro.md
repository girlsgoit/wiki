# Django

## Setarea Mediului de Lucru

### 1. Instalarea Django

![](../.gitbook/assets/webp.net-resizeimage.png)

&#x20;   **Django** (/ dʒæŋɡoʊ / jang-goh) este un _framework_ web gratuit și open source, scris în Python. Un **framework** este un set de componente care vă ajută să dezvoltați site-urile web mai repede și mai ușor. &#x20;

&#x20;   Când creați un site web, aveți întotdeauna nevoie de un set similar de componente: o modalitate de a gestiona autentificarea utilizatorilor (înscrierea, conectarea, deconectarea), o modalitate de a încărca fișiere,  formulare, etc. .

&#x20;   Din fericire pentru dvs., alți oameni au observat demult faptul că programatorii se confruntă cu probleme similare atunci când construiesc un web site nou, așa că au colaborat și au creat _framework_-uri (Django fiind unul dintre ele) care vă oferă componente gata de utilizat.

&#x20;   Există framework-uri pentru a vă scuti de necesitatea de a reinventa roata și de a vă ajuta la micșorarea necesităților atunci când construiți un site nou.

&#x20;   Pentru a instala **Django**, apăsam Start și în search scriem “**cmd**”, pentru a deschide Linia de Comanda.

![](../.gitbook/assets/cmd.png)

   **Linia de Comanda** (Command Prompt) este o unealtă care interacționează cu utilizatorul prin linii de text (comenzi), folosită încă de la începutul dezvoltării calculatoarelor.

![](../.gitbook/assets/capture.PNG)

&#x20;   În linia de comandă scriem **`pip install django`** și așteptăm ca instalarea să se termine , ultima linie afișând : "**`Successfully Installed Django`**"

## Crearea Proiectului Django

    Pe Desktop sau în orice alt directoriu creați un folder cu denumirea dorită a proiectului. În cazul nostru va fi **my project.**

&#x20;   Ținând butonul **shift** apăsați **click dreapta** pe folderul creat. Veți vedea o opțiune **Copy as Path**, selectați.

![](../.gitbook/assets/untitled.png)

&#x20;Sau în cazul când nu puteți accesa această opțiune, deschideți folderul creat și duceți cursorul peste secțiunea dată:

<img src="../.gitbook/assets/picture (1).png" alt="" data-size="original">&#x20;

și apasă **Alt + D.** Acest shortcut va copia automat locația folderului.

Deschideți din nou **Linia de comanda ,** și scrieți următoarea comanda:

cd (_aici folosind Ctrl+V , scrieți adresa directoriului copiată anterior_ ),&#x20;

&#x20;   Astfel sunteți siguri că orice comenzi rulate prin consolă vor acționa asupra fișierului cu care lucrăm.

![](<../.gitbook/assets/captureq (1).PNG>)

&#x20;   Pentru a crea proiectul, rulam urmatoarea comanda in Linia de Comanda:&#x20;

{% code title="Command Prompt" %}
```
django-admin.exe startproject mysite .
```
{% endcode %}

&#x20;unde ultimul cuvânt **mysite** este denumirea proiectului. Punctul `.`  la sfârșitul comenzii este crucial, deoarece indică ca proiectul Django să fie instalat în directoriul curent.

&#x20;   Aceasta comanda automat va genera toate fișierele necesare noua ca să lucrăm în continuare la proiectul nostru.

![](<../.gitbook/assets/captudsdre (1).PNG>)

&#x20;   După rularea acestei comenzi, deschideți directoriul în care lucrați, dacă totul a decurs bine, folderul trebuie să conțină următoarele fișiere.

![](../.gitbook/assets/captu.PNG)

`manage.py` ne va ajuta la gestionarea site-ului. Cu aceasta vom putea (printre multe altele) să pornim un server web pe calculatorul nostru fără a instala altceva.

Pentru moment deschideți editorul **Visual Studio Code**. Folosind opțiunea `Open folder...`&#x20;

![](../.gitbook/assets/sdfg.PNG)

Găsiți folderul `My Project` care conține proiectul și deschideți-l în Visual Studio Code.

&#x20;   După cum observați în stânga editorului s-a deschis un tab unde este afișat conținutul folderului care a fost selectat. Acesta ne ajuta mai ușor să ne orientăm în fișierele noastre fără ca să părăsim editorul.

![](../.gitbook/assets/captfhure.PNG)

### Baza de date a proiectului&#x20;

&#x20;   Pentru a crea o bază de date pentru proiectul nostru,  trebuie executată următoarea comandă în consola:

{% code title="Command Prompt" %}
```
python manage.py migrate
```
{% endcode %}

\*(trebuie să fim în directorul **My Project** care conține fișierul **manage.py**). Dacă merge bine, ar trebui să vedeți ceva de genul:

![](../.gitbook/assets/captugrsdfgsre.PNG)

## Obiecte

&#x20;   Există un concept în programare numit _programare orientată pe obiecte_. Ideea este că, în loc să scriem totul ca o secvență plictisitoare de instrucțiuni, putem modela lucrurile și putem defini modul în care interacționează între ele.

&#x20;   Deci, ce este un obiect? Este o colecție de proprietăți și acțiuni. Sună ciudat, dar vă vom da un exemplu.

&#x20;   Dacă vrem să modelăm o pisică, vom crea un obiect `Pisica` care are anumite proprietăți precum `culoarea, vârsta, dispozitie` (cum ar fi `somnoroasă, flămândă` ) și `proprietarul` (care ar putea fi atribuit un obiect `persoană` - sau poate , în cazul unei pisici rătăcite, această proprietate ar putea fi goală).

&#x20;   Apoi, `Pisica` are unele acțiuni:  `toarce, zgârâie, hrănește` (în acest caz, vom da pisicii `mâncare`, care ar putea fi un obiect separat cu proprietăți, cum ar fi `gustul`).

#### Pisică

* culoare
* vârstă
* dispoziție
* toarce()
* zgârâie()
* hrănește(mâncare)

#### Mâncare

* gust

&#x20;   Pentru a fi mai aproape de proiectul nostru luăm ca exemplu o postare, `Post` și ce proprietăți poate avea aceasta .

```
Post
--------
title
text
author
created_date
published_date
publish()
```

&#x20;   Un **model** în Django este un tip special de obiect - este salvat în `database`(baza de date). O bază de date este o colecție de date. Acesta este un loc în care veți stoca informații despre utilizatori, postările de pe blog etc. Puteți să vă gândiți la un model din baza de date ca o foaie de calcul cu coloane (câmpuri) și rânduri (date).

## Partea de aplicație



&#x20;   Pentru a păstra totul ordonat, vom crea o aplicație separată în cadrul proiectului nostru. Pentru a crea o aplicație, trebuie să executați următoarea comandă în consolă,&#x20;

\*aveți grijă ca directorul sa fie `my project`

{% code title="Command Prompt" %}
```bash
python manage.py startapp blog
```
{% endcode %}

**blog** este denumirea aplicației.

&#x20;  Acesta comandă va crea o applicație în proiectul dorit, aici se vor conține toate fișierele care vor fi direct responsabile de site-ul care il creăm(URL-uri, imagini, text etc)

În urma executării acestei comande, în folderul proiectului trebuie sa apara un nou folder `blog` .&#x20;

&#x20;   După crearea aplicației, trebuie să-i comunicăm proiectului că ar trebui să o folosească. Facem asta în fișierul `mysite / settings.py`, deschis cu aplicația **Visual Studio Code**. Trebuie să găsim INSTALLED\_APPS și să adăugăm o linie care conține "blog".

{% code title="mysite/settings.py" %}
```python
INSTALLED_APPS = [
    'django.contrib.admin',
    'django.contrib.auth',
    'django.contrib.contenttypes',
    'django.contrib.sessions',
    'django.contrib.messages',
    'django.contrib.staticfiles',
    'blog',
]
```
{% endcode %}

și salvați fișierul.

&#x20;  În fișierul `blog / models.py` definim toate obiectele numite _Models_ - acesta este un loc în care vom defini postarea pe blog.

&#x20;  Hai să deschidem `blog / models.py`, să eliminăm totul din el și să scriem următoarele linii:

{% code title="blog/models.py" %}
```python
from django.db import models
from datetime import datetime


class Post(models.Model):
    author = models.ForeignKey('auth.User', on_delete=models.CASCADE)
    title = models.CharField(max_length=200)
    text = models.TextField()
    created_date = models.DateTimeField(
            default=datetime.now)
    published_date = models.DateTimeField(
            blank=True, null=True)

    def publish(self):
        self.published_date = datetime.now()
        self.save()

    def __str__(self):
        return self.title
```
{% endcode %}

&#x20;   Toate liniile care încep cu `from` sau `import` sunt linii care adaugă informații din alte fișiere. Deci, în loc să copiem și să lipim aceleași lucruri în fiecare fișier, putem include unele părți cu `from... import...`

`class Post (models.Model)`: - această linie definește modelul nostru (este un obiect).

`class` este un cuvânt cheie special care indică faptul că definim un obiect.&#x20;

`Post` este numele modelului nostru. Îi putem da un nume diferit (dar trebuie să evităm caracterele speciale și spațiul alb). Porniți întotdeauna un nume de clasă cu o literă mare.

&#x20;`models.Model` înseamnă că Post este un model Django, astfel încât Django știe că ar trebui salvat în baza de date.

Acum definim proprietățile despre care vorbeam: `title, text, created_date, published_date , author.` Pentru a face acest lucru trebuie să definim tipul fiecărui câmp (Este text? Un număr? O dată calendaristică ? O relație cu un alt obiect?)

* `models.CharField` –așa definim un text cu număr limitat de caractere.
* `models.TextField` – acesta este pentru un text lung, fără limită.
* `models.DateTimeField` – așa definim o dată calendaristică
* `models.ForeignKey` –  ForeignKey face legătura cu alt obiect.

&#x20;   Ultimul pas aici este să adăugăm noul nostru model la baza noastră de date. Mai întâi trebuie să-l facem pe Django să știe că avem unele modificări în modelul nostru.  Mergeți la fereastra consolei și tastați `python manage.py makemigrations blog`. Acesta va arata astfel:

![](../.gitbook/assets/sdfghjkls.PNG)

* _Aveți grijă să salvați mereu fișierele în care faceți modificări pentru a nu obține erori ulterior._

&#x20;   Următorul pas ar fi să transmitem modificările create și pregătite de Django bazei de date prin următoarea comandă:

{% code title="Command Prompt" %}
```
python manage.py migrate blog
```
{% endcode %}

![Acesta fiind rezultatul.](../.gitbook/assets/asd.PNG)

Astfel Modelul nostru `Post` este transmis bazei de date.

### Pornirea unui webserver

În linia de comandă scrieți următoarea comandă:

```bash
python manage.py runserver
```

Asigurați-vă ca linia de comanda este deschis din folderul proiectului.

![Rezultatul ar trebui să arate așa.](../.gitbook/assets/hgdf.PNG)

Deschideți pagina [http://127.0.0.1:8000/](http://127.0.0.1:8000/) unde ulteriorul nostru proiect ar trebui să opereze.&#x20;

[http://127.0.0.1:8000/](http://127.0.0.1:8000/) este cunoscut ca _localhost_ ceea ce înseamna că proiectul nostru rulează doar pe calculatorul nostru și nu este încă online.

![](../.gitbook/assets/fff.PNG)

_În linia de comandă nu puteți scrie o altă comandă cât timp lucrează serverul. Pentru a întrerupe serverul folosiți combinația CTRL+C._

### Django admin

&#x20;   Fiecare pagina web are nevoie de cel puțin un administrator care să editeze postări, să șteargă sau să publice elemente pe pagina. Pentru aceasta vom folosi _**Django admin.**_

&#x20;   Pentru început deschidem fișierul `blog/admin.py` și înlocuim componentele acestuia cu liniile de mai jos.&#x20;

{% code title="blog/admin.py" %}
```python
from django.contrib import admin
from .models import Post

admin.site.register(Post)
```
{% endcode %}

&#x20;   După cum puteți vedea, vom includem modelul Post definit în precedent. Pentru a face modelul nostru vizibil pe pagina de admin, trebuie să înregistrăm modelul cu `admin.site.register (Post)`. Repornind serverul cu comanda `python manage.py runserver`  în consolă și accesând pagina [http://127.0.0.1:8000/admin/](http://127.0.0.1:8000/admin/) ar trebui să obțineți următoarea fereastră.

![](../.gitbook/assets/hdsfg.PNG)

&#x20;   Pentru a ne autentifica avem nevoie de un _superuser  ,_ utilizatorul ce va avea acces la toată pagina. Pentru aceasta ne reântoarcem la Linia de comanda, și scrim următoarea comanda &#x20;

```
python manage.py createsuperuser
```

Urmați prin a introduce numele de utilizator (în litere mici, fără spații), adresa de e-mail și parola. _Nu vă faceți griji că nu puteți vedea parola pe care o introduceți - așa este din motive de securitate_. Doar tastați și apăsați pe Enter pentru a continua. Rezultatul ar trebui să arate astfel:

{% code title="Command Prompt" %}
```
Username: admin
Email address: admin@admin.com
Password:
Password (again):
Superuser created successfully
```
{% endcode %}

Reporniți serverul din nou și autentificați-vă. Pagina ar trebui să arate cam așa.

![](../.gitbook/assets/django\_admin3.png)

Acum puteți explora puțin pagina, adăugând chiar și unele postari.

### Django URL's

&#x20;   O adresă URL este pur și simplu o adresă web. Puteți vedea o adresă URL de fiecare dată când vizitați un site web - este vizibil în bara de adrese a browserului dvs. Fiecare pagină de pe Internet are nevoie de o adresă URL proprie. În acest fel, aplicația dvs. știe ce ar trebui să arate unui utilizator care deschide acea adresă URL. În Django, folosim ceva numit URLconf (configurație URL). URLconf este un set de modele pe care Django va încerca să le corespundă adresei URL solicitate pentru a găsi vizualizarea corectă.

În fișierul `mysite/urls.py` observăm un URL deja setat care este responsabil de pagina de admin&#x20;

{% code title="mysite/urls.py" %}
```python
path('admin/', admin.site.urls)
```
{% endcode %}

Pentru a păstra fișierul `mysite/urls.py`  cât mai simplu și curat vom importa adresele din aplicația `blog` pentru aceasta vom adăuga linia&#x20;

{% code title="mysite/urls.py" %}
```python
path('', include('blog.urls')),
```
{% endcode %}

&#x20;observați că am folosit funcția `include`  deci ea trebuie importată. Fișierul nostru trebuie să arate așa:

{% code title="mysite/urls.py" %}
```python
from django.conf.urls import include
from django.urls import path
from django.contrib import admin

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', include('blog.urls')),
]
```
{% endcode %}

&#x20;   Deoarece în aplicația **blog** nu avem un fișier responsabil de URLs, acesta trebuie creat sub numele `urls.py` in directoriul **blog,** iar în interiorul acestuia adaugați următoarele linii:

{% code title="blog/urls.py" %}
```python
from django.urls import path
from . import views
```
{% endcode %}

Acum este timpul să adăugăm primul URL. Adăugați următoarea linie.

{% code title="blog/urls.py" %}
```python
urlpatterns = [
    path('', views.post_list, name='post_list'),
]
```
{% endcode %}

&#x20;   După cum puteți vedea, acum atribuim un `view` numit `post_list` la adresa URL.  Acest model îi va spune lui Django că `views.post_list` este locul potrivit pentru a merge dacă cineva intră pe site-ul dvs. web la adresa "[http://127.0.0.1:8000/](http://127.0.0.1:8000/)".

&#x20;   Ultima parte, `name = 'post_list'`, este numele adresei URL care va fi folosit pentru a identifica un `view`. Aceasta poate fi identică cu numele unui `view`, dar poate avea și alt nume. Vom utiliza URL-urile numite mai târziu în proiect, deci este important să denumim fiecare adresă URL din aplicație. De asemenea, ar trebui să încercăm să păstrăm numele de URL-uri unice și ușor de reținut.

### Django `view`

&#x20;   Un `view` este un loc în care punem "logica" aplicației noastre. Acesta va cere informații din `models` pe care l-ați creat înainte și îl veți transmite unui `template`. `Templates` sunt pagini HTML create. `View` sunt doar funcții Python care sunt puțin mai complicate decât cele pe care le-am scris în capitolul Introducere în Python.

`Views` sunt plasate în fișierul `views.py`. Vom adăuga `view` -urile noastre în fișierul `blog / views.py.`

Adăugați următoarele în fișier:

{% code title="blog/views.py" %}
```python
from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.
def post_list(request):
    return HttpResponse("return this string")

```
{% endcode %}

![](../.gitbook/assets/hdfghdfg.PNG)

&#x20;   După cum puteți vedea, am creat o funcție (def) numită post\_list care ia cererea(request) și returnează `HttpResponse` care primește ca parametru un string,  care va fi afișat pe pagină la deschiderea paginii.

### Django ORM&#x20;

&#x20;   Una dintre cele mai puternice caracteristici ale lui Django este _Object-Relational Mapper_ (ORM), care vă permite să interacționați cu baza de date.&#x20;

&#x20;   Un QuerySet este, în esență, o listă de obiecte ale unui model dat. Seturile QuerySets vă permit să citiți datele din baza de date, să le filtrați și să le comandați.

Pentru a folosi Django ORM rulăm următoarea comandă în Command Prompt

```
python manage.py shell
```

![](<../.gitbook/assets/image (186).png>)

Vă aflați acum în consola interactivă Django. Ca să putem folosi modelul `Post` acesta trebuie importat folosind următoarea comandă:

{% code title="command Prompt" %}
```python
>>> from blog.models import Post
```
{% endcode %}

Folosind comanda următoare vom afișa toate postările create anterior folosind interfața Django admin.

```python
>>> Post.objects.all()
<QuerySet [<Post: my post title>, <Post: another post title>]>
```

Tot în consola dată putem lucra cu utilizatorii.&#x20;

```
>>> from django.contrib.auth.models import User
```

```
>>> User.objects.all()
```

Care va avea următorul rezultat.&#x20;

```
<QuerySet [<User: ola>]>
```

Putem atribui utilizatorii unor variabile.

```
>>> me = User.objects.get(username='ola')
```

La fel cât și să creem postări noi&#x20;

```
>>> Post.objects.create(author=me, title='Sample title', text='Test')
<Post: Sample title>
```

Adăugați cat mai multe postări pentru a avea cu ce lucra în continuare.

&#x20;   O mare parte din importanța  QuerySets este capacitatea lor de a se filtra. Să presupunem că vrem să găsim toate postările pe care le-a scris autorul. Vom folosi `filter` în loc de`all` în `Post.objects.all ()`. În paranteze, menționăm ce condiție trebuie să se întâlnească într-o postare de blog pentru a ajunge în queryset-ul nostru. În cazul nostru, condiția este ca autorul să fie egal cu `me`. Modalitatea de a scrie în Django este `author=me`. Acum, codul nostru arată astfel:&#x20;

```
>>> Post.objects.filter(author=me)
<QuerySet [<Post: Sample title>, <Post: Post number 2>, <Post: My 3rd post!>, <Post: 4th title of post>]>
```

Altă modalitate de filtrare a informației este :

```
>>> Post.objects.filter(title__contains='title')
<QuerySet [<Post: Sample title>, <Post: 4th title of post>]>
```

{% hint style="info" %}
Există două caractere de subliniere (\_) între `title` și `contains`. ORM-ul lui Django utilizează această regulă pentru a separa numele câmpurilor ("title") și operațiile sau filtrele ("contains"). Dacă utilizați doar o subliniere, veți primi o eroare ca "FieldError:  Cannot resolve keyword title\_contains".
{% endhint %}

&#x20; Seturile QuerySets vă permit, de asemenea, să ordonați lista obiectelor. Să încercăm să le ordonăm după câmpul `created_date`:

```
>>> Post.objects.order_by('created_date')
<QuerySet [<Post: Sample title>, <Post: Post number 2>, <Post: My 3rd post!>, <Post: 4th title of post>]>
```

Putem la fel ordona descrescător prin plasarea simbolului `-` în fața criteriului.

```
>>> Post.objects.order_by('-created_date')
<QuerySet [<Post: 4th title of post>,  <Post: My 3rd post!>, <Post: Post number 2>, <Post: Sample title>]>
```

Pentru a închide shell-ul, tastați:

```
>>> exit()
```

