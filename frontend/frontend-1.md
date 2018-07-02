# Exerciții

## HTML

Transformă textul de mai jos într-un link spre – [https://www.google.com](https://www.google.com)

```markup
<!DOCTYPE html>
<html>
<body>
    This is a link
</body>
</html>
```

Adaugă o linie orizontală `<hr>` între titlu și paragraf.

```markup
<!DOCTYPE html>
<html>
<body>
    <h1>London</h1>
    <p>London is the capital city of England. It is the most populous city in the United Kingdom, with a metropolitan area of over 13 million inhabitants.</p>
</body>
</html>
```

Adaugă șase titluri în pagină cu textul “Hello”. Începe cu cel mai important titlu și finisează cu cel mai puțin important.

```markup
<!DOCTYPE html>
<html>
<body>
  
</body>
</html>
```

Marchează textul de mai jos cu tag-urile corespunzătoare.

* Universal Studios Presents – este cel mai important text.
* Jurassic Park – este puțin mai neimportant decât precedentul.
* About – e și mai neimportant decât – Jurassic Park.
* Ultima propoziție este un simplu paragraf.

```markup
<!DOCTYPE html>
<html>
<body>
    Universal Studios Presents
    Jurassic Park
    About
    On the Island of Isla Nublar, a new park has been built: Jurassic Park is a theme park of cloned dinosaurs!!
</body>
</html>
```

Afișează fiecare vers a poeziei de mai jos din rând nou.

```markup
<!DOCTYPE html>
<html>
<body>
  <p>
    În oraşu-n care plouă de trei ori pe săptămână
    Un bătrân şi o bătrână -
    Două jucării stricate -
    Merg ţinându-se de mână ...
  </p>
</body>
</html>
```

Formează o listă din elementele de mai jos.

```markup
<!DOCTYPE html>
<html>
<body>
    Pâine
    Lapte
    Zahăr
    Unt
</body>
</html>
```

Adaugă pe tag-ul `h1` de mai jos clasa “titlu”.

```markup
<!DOCTYPE html>
<html>
<body>
    <h1>Universal Studios Presents</h1>
</body>
</html>
```

Adaugă comentarii în codul de mai jos.

```markup
<!DOCTYPE html>
<html>
<body>
   <h1> Luceafărul</h1>
   <h4>de Mihai Eminescu</h4>
   <p>A fost odată ca-n poveşti,<br>
      A fost ca niciodată.<br>
      Din rude mari împărăteşti,<br>
      O prea frumoasă fată.
   </p>
</body>
</html>
```

Cum se descifrează HTML?

1. Hyperlinks and Text Markup Language
2. Hyper Text Markup Language
3. Home Tool Markup Language
4. Hyper-Phrase Marketing Language

Care tag conține partea vizuală a unei pagini web?

1. `<section>`
2. `<head>`
3. `<body>`

Modifică codul de mai jos așa încât să ai o listă de imagini.

```markup
<!DOCTYPE html>
<html>
<body>
  <h2>Imaginile mele</h2>
    imagine 1
    imagine 2
    imagine 3
    imagine 4
</body>
</html>
```

Flosește tagul `<table>` pentru a crea un tabel cu 4 rânduri si 3 coloane.

```markup
<!DOCTYPE html>
<html>
<body>
  
</body>
</html>
```

Include paragrafele de mai jos într-o diviziune \(bloc\) cu clasa “container”.

```markup
<!DOCTYPE html>
<html>
<body>
    <p>Paragraf 1</p>
    <p>Paragraf 2</p>
    <p>Paragraf 3</p>
    <p>Paragraf 4</p>  
</body>
</html>
```

Care este diferența dintre  `<head>` și `<header>`?

Ce trebuie să conțină atributul `href=” ”`?

* Numele paginii pe care trebuie să fii transferat.
* URL-ul paginii pe care trebuie să fii transferat.
* Dacă noua pagină ar trebui să fie deschisă în aceeași fereastră sau într-o fereastră nouă.

Completează spațiile libere și vezi ce v-a apărea în pagina ta web.

```markup
<!DOCTYPE html>
<html>
  <____>
    <title>My Page</____>        
  </head>
<body>
  <div class="section">
    <h2> Ștefan cel Mare ...<h2>        
    <img ____="https://historia.adhst.ro/img/articles/2017/03/22/s2_0.jpg">
    <p>
    Fost-au acestu Ștefan vodă om nu mare de statu, mânios și de grabu vărsătoriu de sânge nevinovat; de multe ori la ospéțe omorâea fără județu. Amintrilea era om întreg la fire, neleneșu, și lucrul său îl știia a-l acoperi și unde nu gândiiai, acolo îl aflai. La lucruri de războaie meșter, unde era nevoie însuși se vârâia, ca văzându-l ai săi să nu să indărăpteaze și pentru acéia, raru războiu de nu biruia. Și unde-l biruia alții, nu pierdea nădéjdea, că știindu-să căzut jos, să rădica deasupra biruitorilor.
    </p>
   </div>    
</____>
</html>
```

## CSS Selectori

Selectează toate tag-urile `<p>` din pagină.

```markup
<div>
  <p>Dog</p>
  <p>Cat</p>
</div>
```

Selectează toate tag-urile `<span>` din pagină.

```markup
<div>
  <span>Dog</span>
  <p>Cat</p>
  <span>Fish</span>
</div>
```

Selectează tag-ul `<span>` cu clasa „black”.

```markup
<div>
  <span class="black">Dog</span>
  <p>Cat</p>
  <span>Fish</span>
</div>
```

Selectează tag-ul `<span>` care se află în tag-ul `<p>`.

```markup
<div>
  <span class="black">Dog</span>
  <p>
    <span>Cat</span>
  </p>
  <span class="ultimul">Fish</span>
</div>
```

Selectează tag-ul `<img>` care se află în tag-ul `<span>` cu clasa „black”.

```markup
<div>
  <span class="black">
    <img src="dog.jpg">
  </span>
  <span>
    <img src="cat.jpg">
  </span>
  <img src="fish.jpg">
</div>
```

Selectează tag-urile `<img>` cu clasa „animals”.

```markup
<div>
  <p>
    <img src="dog.jpg" class="animals">
  </p>
  <span>
    <img src="cat.jpg">
  </span>
  <img src="fish.jpg" class="animals">
</div>
```

Selectează tag-urile `<img>` cu clasa „animals” care se află în tag-urile `<p>`.

```markup
<div>
  <p>
    <img src="dog.jpg" class="animals">
  </p>
  <span>
    <img src="cat.jpg" class="animals">
  </span>
  <img src="fish.jpg" class="animals">
</div>
```

Selectează toate tag-urile `<img>` și `<p>`.

```markup
<div>
  <p>
    <img src="dog.jpg" class="animals">
  </p>
  <span>
    <img src="cat.jpg" class="animals">
  </span>
  <img src="fish.jpg" class="animals">
</div>
```

Selectează doar tag-urile `<span>` cu clasa „fancy”.

```markup
<div>
  <h2>Poetry</h2>
  <p class="fancy">Roses are red,</p>
  <span class="fancy">Violets are blue.</span>
  <p>CSS is awesome</p>
  <span class="fancy">And pandas eat bamboo!</span>
  <span>The End!</span>
</div>
```

Selectează tag-ul `<span>` cu clasa „hidden” și conținutul „_I am the most hidden”_.

```markup
<div>
  <span class="outside">I am outside</span>
  <div>
    <span class="hidden">I am hidden</span>
    <div>
      <span class="hidden">I am the most hidden</span>
    </div>
  </div>
</div>
```

## CSS Proprietăți

Modifică culoarea următorului paragraf în „blue”.

```markup
<p class="albastru">
    Lorem ipsum dolor sit amet, sed dictas patrioque et. Ex efficiendi concludaturque vix, lorem utroque qui an. Pro semper timeam conceptam ad, pro vulputate deseruisse definitionem ad. Ex eos invidunt expetendis, hinc dolorem blandit no nam. Ne sed honestatis complectitur.
</p>
```

Pentru următorul citat, aliniază numele autorului pe partea dreaptă.

```markup
<p class="citat">
    „Dacă am făcut descoperiri valoroase în viaţă, aceasta se datorează mai mult răbdării şi atenţiei decât oricărui alt talent.”
</p>
<h4 class="autor">Isaac Newton</h4>
```

Pentru următorul citat, mărește textul citatului la „18px”, iar numele autorului la „21px”.

```markup
<p class="citat">
	„Mulţi dintre cei care eşuează în viaţă sunt persoane care nu au realizat cât de aproape au fost de succes în momentul în care au renunţat.”
</p>
<h4 class="autor">Thomas A. Edison</h4>
```

Subliniază cu o linie și mărește grosimea termenului următoarei noțiuni. Modifică culoarea pe fundal în „hotpink”.

```markup
<div class="definitie">
  <span class="notiune">Ninja</span> - luptător bine antrenat, cu costum special. Uneori acest termen se atribuie unei persoane care excelează într-o anumită abilitate sau în îndeplinirea unei sarcini.
</div>
```

Modifică spațiul între litere la „1.5px” în textul următorului citat.

```markup
<p class="citat">
	Timpul este limitat, nu ţi-l pierde trăind viaţă altcuiva. Nu te lasă prins în teoriile altora. Nu lasă opiniile zgomotoase ale altora să-ţi acopere vocea interioară. Şi cel mai important, ai curajul să-ţi urmezi inima şi intuiţia. Într-un fel, cele două ştiu ce vrei să devii. Toate celelalte sunt pe planul secund.
</p>
<h4 class="autor">Steve Jobs</h4>
```

## CSS Poziționare

Poziționează butonul {save} în colțul dreapta-jos „10px x 10px” fiind disponibil chiar dacă scrolăm pagina.

```markup
<section>
	<button>SAVE</button>
	<img src="https://picsum.photos/1280/500?image=460" alt="">
	<p>You love having a second home but the mortgage is putting a crater in your wallet. Many second home owners turn to renting their property as a vacation rental to help defray the costs of ownership. How do you price a vacation home rental without overcharging but making enough to cover your costs? Do your research.</p>

	<p>Find out what other owners of, similar sized homes in the area are charging. You can ask a local real estate agent for a price range, scan local papers or go online. There are also vacation rental sites like eVaca.com. These types of sites have advertisements from owners around the world and weekly rates for the properties are listed.</p>
	<img src="https://picsum.photos/1280/500?image=464" alt="">
	<p>The time of year you rent out a property is important as well. If you want to rent out a ski lodge in Vermont, August is not going to be your “high time” of year, but January will. If you are going to rent the property in an “off” time of year you will not be able to charge as much as if you were renting the property in a peak time.</p>

	<p>You also want to figure out what lengths you want to rent your property for. A Florida property in July near the beach will go for top dollar for a week. However, that same property in January you might only attract the snowbirds who want to rent at a lower price and rent it out on a monthly basis. You have to answer questions like, “do I want to mess around with weekend or nightly rentals” and “is it worth the hassle”.</p>
</section>
```

```css
button {
	width: 50px;
	height: 50px;
	border-radius: 50%;
	border: none;
	color: #fff;
	background-color: #27a8f7;
	cursor: pointer;
}

img {
	width: 100%;
}

p {
	font-size: 20px;
	margin-bottom: 15px;
	margin-top: 15px;
}
```

Poziționează cardul astfel ca „70px” din el să fie pe imagine și spațiul inițial ocupat de card să rămână același.

```markup
<section>
	<img src="https://picsum.photos/1280/400?image=1076" alt="">

	<div class="card">
		<h1>Card</h1>
		<p>Lorem, ipsum dolor sit amet consectetur adipisicing elit. Facere, saepe quae doloribus recusandae praesentium odio eveniet in assumenda animi quisquam. Tempora voluptatem deleniti iure labore! Quas mollitia illo ad. Eos.</p>
	</div>

	<img src="https://picsum.photos/1280/400?image=1031" alt="">
	<div class="card">
		<h1>Card</h1>
		<p>Ipsum dolor sit, lorem, amet consectetur adipisicing elit. Facere, saepe quae doloribus recusandae praesentium odio eveniet in assumenda animi quisquam. Tempora voluptatem deleniti iure labore! Quas mollitia illo ad. Eos.</p>
	</div>
</section>
```

```css
body {
	background-color: #333;
}

img {
	width: 100%;
}

.card {
	width: 400px;
	max-width: 90%;
	background-color: rgba(255, 255, 255, 0.9);
	color: #333;
	text-align: center;
	margin: 0 auto;
	border-radius: 5px;
	padding: 15px;
}

h1 {
	font-size: 46px;
	margin-bottom: 15px;
}

p {
	font-size: 20px;
	margin-bottom: 10px;
}
```

Poziționează titlurile  și  pe imagine centru-jos.

```markup
<section class="hero">
	<img src="https://picsum.photos/1280/550?image=465" alt="">
	
	<div>
		<h1>The Amazing Hubble</h1>
		<h3>South Alfonsoville</h3>
	</div>
</section>

<section>
	<p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Laborum illo officia, eius, dicta dignissimos tempora ad optio, voluptate itaque ipsum eveniet quibusdam aliquam incidunt consequuntur enim repellendus ut! Animi, sequi!</p>
	<p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Sint, laborum consequuntur. Ducimus ea dolorum impedit laudantium accusamus doloribus unde! Aliquam, qui! Autem tenetur tempora commodi labore facilis expedita dolor porro.</p>
</section>
```

```css
img {
	width: 100%;
}

h1 {
	font-size: 46px;
	margin-bottom: 10px;
}

h3 {
	font-size: 28px; 
}

p {
	font-size: 20px;
	margin-top: 10px;
	margin-bottom: 10px;
}
```

Poziționează titlurile `<h1>` și `<h3>` pe imagine centru-jos și elementul cu clasa „overlay” pe imagine și în spatele titlurilor.

```markup
<section>
	<img src="https://picsum.photos/1280/500?image=40" alt="">
	
	<div class="titles">
		<h1>Title</h1>
		<h3>Lorem Ipsum Dolor</h3>
	</div>
	
	<div class="overlay"></div>
</section>
```

```css
body {
	background-color: #333;
}

img {
	width: 100%;
}

h1 {
	font-size: 46px;
	margin-bottom: 10px;
}

h3 {
	font-size: 28px;
}

h1, h3 {
	color: #fff;
}

.overlay {
	background: rgba(0, 0, 0, 0.85);
}
```

Poziționează elementul cu clasa „popup-overlay” pe toate elementele din pagină și elementul cu clasa boxa albă cu butoane centru-jos „50px”.

```markup
<section>
	<h1>Lorem</h1>
	<img src="https://picsum.photos/1280/720" alt="">
</section>
<section>
	<h1>Lorem</h1>
	<img src="https://picsum.photos/1280/720" alt="">
</section>
<div class="popup-overlay">
	<div class="popup-container">
		<div class="popup">
			<h4>Lorem Ipsum</h4>
			<button class="button">Yes</button>
			<button class="button">No</button>
		</div>
	</div>
</div>
```

```css
img {
	width: 100%;
}

h4 {
	text-align: center;
}

.button {
	margin: 0;
}

.popup-overlay {
	background-color: rgba(0,0,0,0.7);
	padding: 5px;
}

.popup {
	display: inline-block;
	background-color: #fff;
	padding: 15px;
	border-radius: 5px;
}
```

## Wireframes

### Articol

![](../.gitbook/assets/article-1%20%286%29.png)

![](../.gitbook/assets/article-2.png)

![](../.gitbook/assets/article-3%20%281%29.png)

![](../.gitbook/assets/article-4.png)

![](../.gitbook/assets/article-5.png)

![](../.gitbook/assets/article-6.png)

![](../.gitbook/assets/article-7.png)

![](../.gitbook/assets/article-8.png)

### Blog

![](../.gitbook/assets/blog-1.png)

![](../.gitbook/assets/blog-2.png)

![](../.gitbook/assets/blog-3.png)

![](../.gitbook/assets/blog-4.png)

![](../.gitbook/assets/blog-5.png)

![](../.gitbook/assets/blog-6.png)

![](../.gitbook/assets/blog-7.png)

![](../.gitbook/assets/blog-8.png)

### Contacte

![](../.gitbook/assets/contacts-1.png)

![](../.gitbook/assets/contacts-2.png)

![](../.gitbook/assets/contacts-3.png)

![](../.gitbook/assets/contacts-4.png)

![](../.gitbook/assets/contacts-5.png)

![](../.gitbook/assets/contacts-6.png)

![](../.gitbook/assets/contacts-7.png)

![](../.gitbook/assets/contacts-8.png)

### Content

![](../.gitbook/assets/content-1.png)

![](../.gitbook/assets/content-2.png)

![](../.gitbook/assets/content-3.png)

![](../.gitbook/assets/content-4.png)

![](../.gitbook/assets/content-5.png)

![](../.gitbook/assets/content-6.png)

![](../.gitbook/assets/content-7.png)

![](../.gitbook/assets/content-8.png)

### Galerie

![](../.gitbook/assets/gallery-1.png)

![](../.gitbook/assets/gallery-2.png)

![](../.gitbook/assets/gallery-3.png)

### Multimedia

![](../.gitbook/assets/multimedia-1%20%281%29.png)

![](../.gitbook/assets/multimedia-2%20%281%29.png)

![](../.gitbook/assets/multimedia-3.png)

![](../.gitbook/assets/multimedia-4.png)

![](../.gitbook/assets/multimedia-5.png)

### Produse

![](../.gitbook/assets/product-1.png)

![](../.gitbook/assets/product-2.png)

![](../.gitbook/assets/product-3.png)

![](../.gitbook/assets/product-4.png)

![](../.gitbook/assets/product-5.png)

![](../.gitbook/assets/product-6.png)

![](../.gitbook/assets/product-7.png)

![](../.gitbook/assets/product-8.png)

### Echipa

![](../.gitbook/assets/team-1.png)

![](../.gitbook/assets/team-2.png)

![](../.gitbook/assets/team-3.png)

![](../.gitbook/assets/team-4.png)

![](../.gitbook/assets/team-5.png)

![](../.gitbook/assets/team-6.png)



