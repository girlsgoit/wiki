# Django REST Framework

![](<../.gitbook/assets/image (367).png>)

**Instalarea și importurile inițiale**

Django Rest Framework (DRF) este o librărie pentru Django care permite crearea rapida a API-urilor.

Pentru instalarea frameworkului este necesara utilizarea comenzii de mai jos in terminal:

pip install djangorestframework

Și adăugarea librăriei ‘rest\_framework’ in lista aplicațiilor instalate din file-ul settings.py din mapa mysite:

```
INSTALLED_APPS = [
```

```
    ...
```

```
    'rest_framework',
```

```
]
```

Precum a fost menționat anterior, toata logica aplicației noastre se va afla in fișierul views.py. Respectiv, aici vor fi implementate acțiunile de selecție, adăugare, update si ștergere ce vor fi întreprinse de backend.

Pentru interacționarea cu obiectele din baza de date si trimiterea informației către website va fi nevoie de o serie de importuri la începutul fișierului views.py.

`from rest_framework.decorators import api_view`

`from rest_framework.response import Response`

`from .serializers import PostSerializer`

`from .models import *`

&#x20;

Prima linie de import oferă accesul la un tip de decorator, a doua linie – accesul la un tip de răspuns specific librăriei DRF, care e mai convenabil utilizării decât cel standard oferit de Django. A treia linie va importa niște clase specifice librăriei numite serializatori (serializers), pe care le vom crea pentru fiecare model definit in baza noastră de date. Și ultima linie va importa însăși modelele cu care lucrăm în blog.

&#x20;

**Decorators**

Decorators (Decoratorii) sunt un set de antete la funcții care restricționează anumite funcționalități sau uniformizează anumite răspunsuri a acestor funcții pentru a asigura un lucru mai previzibil a API-ului.

Ca exemple de decoratori care se pot utiliza in cadrul aplicației noastre pot servi:

api\_view – restricționează ce metode HTTP se pot adresa funcției.

permission\_classes – restricționează apelarea la funcție de către oaspeți neautorizați

etc

&#x20;

`@api_view(['GET'])`

`def post_list(request):`

&#x20;   `posts = Post.objects.all()`

&#x20;   `serializer = PostSerializer(posts, many=True)`

&#x20;   `return Response(serializer.data)`

&#x20;

**Serializers**

Serializers(serializatorii) sunt clase responsabile pentru convertirea obiectelor în tipuri de date ce pot fi înțelese de JavaScript și librăriile pentru front-end. Pentru a utiliza serializatori in API-ul nostru este nevoie de crearea unui fisier serializers.py in mapa aplicatiei noastre(blog).

![](<../.gitbook/assets/image (366).png>)

&#x20;

In acest fișier serializers.py vom importa clasa de ModelSerializer oferită de librăria DRF și modelele pe care le-am create pentru blogul nostru.

from rest\_framework.serializers import ModelSerializer

`from .models import *`

&#x20;

După aceasta urmează să creăm câte o clasă serializator pentru fiecare model care va moșteni de la ModelSerializer. Mai jos a fost declarată clasă serializator pentru clasa Post.

&#x20;

`from rest_framework.serializers import ModelSerializer`

`from .models import *`

&#x20;``&#x20;

`class PostSerializer(ModelSerializer):`

&#x20;

În interiorul fiecărei clase serializator va fi creată o clasă Meta, care va conține informație despre modelul pentru care se face serializatorul. Această informație va fi prezentată printr-o serie de proprietăți de mai jos:

model – indică modelul din baza de date în baza căruia a fost creat serializatorul;

fields – lista de proprietăți ce vor fi transmise frontendului;

exclude – lista de proprietăți din model ce nu vor fi transmise front-endului;

&#x20;

`from rest_framework.serializers import ModelSerializer`

`from .models import *`

&#x20;``&#x20;

`class PostSerializer(ModelSerializer):`

&#x20;   `class Meta:`

&#x20;       `model = Post`

&#x20;       `fields = '__all__'`

În cazul serializatorului pentru Post a fost indicată ca model clasa Post și ca fields string-ul ‘\_\_all\_\_’ ce este interpretat ca selectarea tuturor proprietăților din Post.

După necesitate în clasa de serializator mai pot fi adăugate funcții precum create/update/get etc. pentru prelucrarea adăugătoare a anumitor date din obiect.

**Crearea de views**

Pentru a avea o aplicație care lucrează este nevoie de cel puțin câte un view pentru selectare, creare, update și ștergere a modelelor.

**GET**

În cazul blogului nostru, pentru crearea unui view de tip funcție pentru selectare a tuturor postărilor, la început se declara decoratorul api\_view pentru metoda GET, după care se declară funcția cu denumire explicită și se înscrie cel puțin un parametru (ca de exemplu request).

&#x20;

`from rest_framework.decorators import api_view`

`from rest_framework.response import Response`

`from .serializers import PostSerializer`

`from .models import *`

`# Create your views here.`

`@api_view(['GET'])`

`def post_list(request):`

&#x20;

Pentru că vrem să selectăm toate postările create, creăm un obiect posts prin care solicităm de la baza de date toate obiectele de model Post.

&#x20;

`@api_view(['GET'])`

`def post_list(request):`

&#x20;   `posts = Post.objects.all()`

&#x20;

Aceste obiecte le serializăm, indicând variabila posts ca parametru și True pentru posibilitatea de primire a mai multe obiecte. După care datele primite de la serializator le returnăm printr-un răspuns.

`@api_view(['GET'])`

`def post_list(request):`

&#x20;   `posts = Post.objects.all()`

&#x20;   `serializer = PostSerializer(posts, many=True)`

&#x20;   `return Response(serializer.data)`

&#x20;

Acum rămâne doar adăugarea unui nou URL în blog/urls.py care să direcționeze datele primite de la frontend spre această funcție când se apelează o adresă indicată.

&#x20;

`urlpatterns=[`

&#x20;   `path('post-list/', views.post_list, name='post-list'),`

&#x20;

Aici primul element din path este adresa la care se apelează de la directoria de bază,  al doilea este funcția din view.py apelată si al treilea element e o denumire simbolica pentru acest path.

&#x20;

În cazul în care vrem să selectăm doar anumite bloguri, putem crea un parametru adițional la funcție(pk) în baza căruia să obținem informația din baza de date. În cazul de mai jos, vom primi un blog anumit în baza id-ului acestuia.

&#x20;

`@api_view(['GET'])`

`def post_detail(request, pk):`

&#x20;   `posts = Post.objects.get(id = pk)`

&#x20;   `serializer = PostSerializer(posts, many=False)`

&#x20;   `return Response(serializer.data)`

Pentru a primi parametri adiționali prin adresa din path, putem adăuga parametrii doriți direct în path, între <> sub format de \<tip\_date:denumire>.

&#x20;   `path('post-detail/<str:pk>/', views.post_detail, name='post-detail'),`

&#x20;

**POST**

Pentru a adăuga un nou post in blogul nostru, urmăm inițial aceeași pași ca și pentru a obține toate posturile, dar schimbăm metoda din decorator pe POST.

`@api_view(['POST'])`

`def post_create(request):`

Datele obținute în request le trecem prin serializator și le pastrăm într-o variabilă, dupa care le verificăm validitatea prin intermediul metodei is\_valid() ce există initial in ModelSerializer de la care moștenesc toți serializatorii noștri. Iar în caz că informația este validă, salvăm aceasta și transmitem răspunsul dorit (în cazul nostru pur și simplu postarea nou creată).

&#x20;

`@api_view(['POST'])`

`def post_create(request):`

&#x20;   `serializer = PostSerializer(data=request.data)`

&#x20;``&#x20;

&#x20;   `if serializer.is_valid():`

&#x20;       `serializer.save()`

&#x20;``&#x20;

&#x20;   `return Response(serializer.data)`

&#x20;

Pentru a face update la un post, combinăm declarația pentru crearea unui post nou cu declarația pentru selectare a unui singur post.

`@api_view(['POST'])`

`def post_update(request, pk):`

&#x20;

Ca și în situația trecută, selectarea postului din baza de data va fi făcută în baza id-ului acestuia, iar informația noua ce va trebui să fie inclusă în postare va fi serializată. Această serializare, însă, va avea un parametru adițional “instance”, pentru a indica că nu se creează un obiect nou, ci se face update la un obiect  existent. Acestui parametru i se transmite postul primit de la baza de date.

&#x20;

`@api_view(['POST'])`

`def post_update(request, pk):`

&#x20;   `post = Post.objects.get(id = pk)`

&#x20;   `serializer = PostSerializer(instance= post, data=request.data)`

&#x20;

&#x20;

După care iarăși se verifică validitatea obiectului serializat, se salvează acesta și se transmite răspunsul dorit.

&#x20;

`@api_view(['POST'])`

`def post_update(request, pk):`

&#x20;   `post = Post.objects.get(id = pk)`

&#x20;   `serializer = PostSerializer(instance= post, data=request.data)`

&#x20;``&#x20;

&#x20;   `if serializer.is_valid():`

&#x20;       `serializer.save()`

&#x20;``&#x20;

&#x20;   `return Response(serializer.data)`

&#x20;

**DELETE**

Stergerea unui post din blog se va efectua în felul următor. Se va declara decoratorul cu metoda DELETE, se va declara funcția cu parametrul request și pk, pentru indicarea id-ului blogului ce va fi șters. Se va selecta obiectul din baza de date ce corespunde id-ului. Se va apela la metoda .delete() ce există pentru toate obiectele. Și se va transmite un răspuns după ștergere.

`@api_view(['DELETE'])`

`def post_delete(request, pk):`

&#x20;   `post = Post.objects.get(id = pk)`

&#x20;   `post.delete()`

&#x20;``&#x20;

&#x20;   `return Response(status=200)`

&#x20;

**Login-urile**

Tratarea Login-ului unui utilizator poate fi efectuată manual, sau prin intermediul unui sistem mai sigur din punct de vedere al securității, ce deja există în cadrul DRF. Pentru a accesa acesta, în interiorul blog/urls.py putem importa view-ul obtain\_auth\_token.

from rest\_framework.authtoken.views import obtain\_auth\_token

&#x20;După care acest view trebuie pur și simplu introdus într-un path ca și view-urile create anterior manual.

path('users/login', obtain\_auth\_token, name='login'),

Pentru mai multe informații legate de django-rest-framework vizitați unul din link-urile de mai jos:

[https://www.geeksforgeeks.org/creating-and-using-serializers-django-rest-framework/?ref=lbp](https://www.geeksforgeeks.org/creating-and-using-serializers-django-rest-framework/?ref=lbp)

[https://www.django-rest-framework.org/](https://www.django-rest-framework.org/)

&#x20;

&#x20;****&#x20;

&#x20;
