# Comunicare între componente

## Organizarea Componentelor

Aplicațiile Web deobicei nu sunt compuse dintr-o singură componentă, ci din mai multe componente care toate impreună îndeplinesc funcționalitatea noastră. În general, se obișnuiește organizarea aplicației într-un arbore de componente imbricate:

![](<../../.gitbook/assets/image (318).png>)

Deobicei avem o coponenta parinte, care reprezintă însăși pagina, și ea include o serie de componente copii, care la rândul său pot avea alți copii.

Spre exemplu, am putea avea componente pentru header, sidebar și content area, fiecare conținând, de obicei, alte componente pentru blog posts, link-uri de navigare ș.a.

Aceste componente trebuie să comunice intre ele pentru a oferi o funcționalitate integrată. Avem 2 direcții de comunicare:&#x20;

1. **De la părinte spre copil** - componenta parinte transmite informație catre o componentă copil
2. **De la copil spre părinte** - componenta copil informează părintele că au intervenit modificări

## Proprietăți (comunicarea părinte - copil)

Să presupunem că vrem să implementăm o pagină, care ar avea o listă de comentarii, și fiecare comentariu are text, un autor, si un număr like-uri care le-a primit.&#x20;

![Exemplu cum ar arăta componentele](<../../.gitbook/assets/image (324).png>)

O structură clasică a acestei funcționalități ar fi o componentă care reprezintă un comentariu, și o componentă părinte - pagina. Pagina va include o listă de componente `Comment` în ea.&#x20;

Desigur comentariile vor fi păstrate în pagina părinte, ca o listă de obiecte, respectiv avem nevoie de un mecanism să transmitem către elementul copil informația necesară.

### Proprietăți simple

Pentru a defini o componentă care acceptă o proprietate, folosim attributul **`props`** în declararația JavaScript. Astfel acel prop poate fi folosit în mod similar ca și **`data`**

```markup
<template>
  <div class="comment">
    <p>{{ text }}</p>
  </div>
</template>

<script>
export default {
  name: "Comment",
  props: {
    text: String,
  },
};
</script>
```

{% hint style="info" %}
Pentru fiecare proprietate a componentei e recomandabil să setăm tipul de date care-l așteptăm. În acest caz - `String`
{% endhint %}

Pentru a folosi această componentă, doar îi transmitem proprietatea cerută când o declarăm:

```markup
<template>
  <div>
    <h1>My Comments</h1>
    <Comment text="This is my first Comment!" />
    <Comment text="This is my second Comment!" />
  </div>
</template>

<script>
import Comment from "./components/Comment";

export default {
  components: {
    Comment
  }
  ...
};
</script>
```

{% hint style="warning" %}
E important să importăm componenta folosită, și să o declarăm în **`components`**
{% endhint %}

### Proprietăți dinamice

Desigur, nu e cel mai practic să transmitem un text static. Vue permite să transmitem valori dinamice către sub-componente în mod similar cum transmitem și pentru atribute standarte `html`

```markup
<template>
  <div>
    <h1>My Comments</h1>
    <Comment v-for="c in comments" :text="c" />
  </div>
</template>

<script>
import Comment from "./components/Comment";

export default {
  components: {
    Comment
  },
  data: function() {
    return {
      comments: [
        "The first comment, which is very much awesome",
        "The second comment long comment that makes more sense in my head"
      ]
    };
  }
};
</script>
```

### CamelCase vs kebab-case

În programare avem câțiva termeni care definesc convenții de unire a mai multor cuvinte într-o singură expresie, 2 din ele:

* **CameCase** - înseamnă că fiecare cuvânt nou din expresia noastră va începe cu literă mare. Toate și funcțiile în JavaScript, spre exemplu, e recomandat să respecte această convenție
* **kebab-case** - înseamnă că unim cuvintele în expresia noastră cu **`-` ** , și toate sunt cu litere mici. Un exemplu unde se utilizează această convenție sunt atributele în html

Având această diferență de convenții între html și JavaScript, Vue a adoptat o regulă simplă: Definim proprietățile în JavaScript sub convenția **CamelCase**, iar când le transmitem din html, le transmitem sub **kebab-case**, și el va avea grijă să știe care și cui aparține:

```markup
<script>
export default {
  name: "Comment",
  props: {
    text: String,
    author: String,
    likesCount: Number
  }
};
</script>
```

```markup
<Comment
      text="My First comment"
      author="Marc"
      likes-count="3"
    />
```

{% hint style="info" %}
Observați **`likesCount`** în definiția JavaScript a componentei, și **`likes-count`** când o utilizăm din componenta părinte.
{% endhint %}

### Exemplul complet

Combinând toate învățate până acum ajungem la următoarele definiții pentru componenta copil **`Comment.vue`**:

```markup
<template>
  <div class="comment">
    <p>{{ text }}</p>
    <div class="meta">
      <span class="author">{{ author }}</span>
      <span class="like">{{ likesCount }} likes</span>
    </div>
  </div>
</template>

<script>
export default {
  name: "Comment",
  props: {
    text: String,
    author: String,
    likesCount: Number
  }
};
</script>

<style scoped>
.comment {
  display: flex;
  flex-direction: column;
  border: 1px solid lightgray;
  border-radius: 5px;
  padding: 0.5em 2em;
  margin: 1em 2em;
}

.meta {
  display: flex;
  justify-content: space-between;
  border-top: 1px solid #DDD;
  padding-top: 0.5em;
}

.author {
  color: gray;
}
</style>
```

Și pagina părinte **`App.Vue`**:

```markup
<template>
  <div>
    <h1>My Comments</h1>
    <Comment
      v-for="c in comments"
      :key="c.id"
      :text="c.text"
      :author="c.author"
      :likes-count="c.likesCount"
    />
  </div>
</template>

<script>
import Comment from "./components/Comment";

export default {
  name: "App",
  components: {
    Comment
  },
  data: function() {
    return {
      comments: [
        {
          id: 1,
          text: "The first comment",
          author: "Marc",
          likesCount: 4
        },
        {
          id: 2,
          text: "The second comment ",
          author: "Dorin",
          likesCount: 2
        }
      ]
    };
  }
};
</script>

<style scoped>
div {
  font-family: "Avenir", Helvetica, Arial, sans-serif;
}
h1 {
  text-align: center;
}
</style>

```

{% hint style="info" %}
Array-ul de comentarii deja sunt obiecte, cu mai multe atribute în ele, și am inclus și un `id`, care îl folosim ca `:key` în `v-for`
{% endhint %}

## Evenimente (comunicarea copil - părinte)

Pe parcursul anilor de dezvoltare a tehnologiilor web, au fost învățate o serie de lecții și practici care par să fie cele mai bune. Una din aceste practici, este ideea de direcția de parcurgere a datelor.

În termeni simpli, toată ideea se bazeaza pe faptul că componentele copii primesc direct datele de la componente părinți prin proprietăți, dar nu pot modifica direct datele componentelor parinti. Dacă vor să comunice o schimbare, trebuie să **emită** un eveniment.

![](<../../.gitbook/assets/image (323).png>)

{% hint style="warning" %}
O altă concluzie a acestei practici este că interpretăm toate datele care le primim prin **`props`** ca date **nemodificabile.** Asta inseamnă că nu putem să le folosim direct în forme prin **`v-model`**, dacă vrem să le includem intr-o formă, le copiem întrun **`data` ** local, și îl folosim pe acela.
{% endhint %}

Extindem un pic lista noastră de comentarii, și adăguăm posibilitatea ca oamenii să dea like la fiecare comentariu. De asemenea vrem sa metinem un contor cu numărul total de like-uri care le-am primit:

![Exemplu de comentarii cu funcționalități de like / dislike](<../../.gitbook/assets/image (320).png>)

### Modificarea internă a valorilor

Pentru a implementa funcționalitatea de a da like la fiecare comentariu, trebuie să adăugăm un buton care crește acel numă la fiecare click. Din cauza că nu putem modifica direct `props` care le primim, trebuie să copiem valoarea care vine într-o variabilă locală a componentei:

```markup
<template>
    ...
    <span class="like">{{ internalLikes }}</span>
    <button @click="likeComment">like</button>
    ...
</template>

<script>
export default {
  name: "Comment",
  props: {
    ...
    likesCount: Number
  },
  data: function() {
    return {
      internalLikes: this.likesCount
    };
  },
  methods: {
    likeComment() {
      this.internalLikes++;
    }
  }
};
</script>
```

{% hint style="info" %}
Observați că `likesCount` nu se modifică, doar copiem valoarea în `internalLikes` și mai departe lucrăm doar cu ea.
{% endhint %}

În acest moment, fiecare număr din fiecare comentariu poate fi crescut, doar că numărul total de comentarii din pagina părinte nu se modifică, trebuie cumva să-i transmitem informația când se întâmplă un like.

### Emiterea evenimentelor proprii

Pentru a transmite din componenta copil către componenta părinte informația că a avut loc un like,  trebuie să emitem un eveniment. Pentru asta trebuie să adaugăm o singură linie de cod în metoda `likeComment()`:

```javascript
likeComment() {
  this.internalLikes++;
  this.$emit("like-change");
},
```

Pentru a prelucra acest eveniment în componenta părinte, folosim aceeași sintaxă ca pentru evenimentele standarte html:

```markup
<template>
  <div>
    <h1>My Comments</h1>
    <Comment
      v-for="c in comments"
      :key="c.id"
      :text="c.text"
      :author="c.author"
      :likes-count="c.likesCount"
      @like-change="onLikeChange()"
    />
    <p class="total-likes">
      Total Likes:
      <strong>{{ totalLikes }}</strong>
    </p>
  </div>
</template>

<script>
import Comment from "./components/Comment";

export default {
  ...
  methods: {
    onLikeChange() {
      this.totalLikes++;
    }
  }
};
</script>
```

{% hint style="info" %}
Spre deosebire de proprietăți, evenimentele e recomandat să le scriem întotdeauna cu **kebab-case**.&#x20;

Motivul principal este că html nu face deosebire între litere mici și mari la atributele elementelor, respectiv **`likeChange` ** nu ar avea sens.
{% endhint %}

{% hint style="info" %}
O convenție pentru numele metodelor care prelucrează evenimente e să le incepem cu `on..`
{% endhint %}

### Emiterea evenimentelor cu date

Dacă vrem să adaugăm și butonul **dislike** și să nu creăm eveniment cu nume nou, putem să transmitem date în evenimentele noastre:



```markup
<template>
    ...
    <span class="like">{{ internalLikes }}</span>
    <button @click="likeComment">like</button>
    <button @click="dislikeComment">dislike</button>
    ...
</template>

<script>
export default {
  name: "Comment",
  props: {
    ...
    likesCount: Number
  },
  data: function() {
    return {
      internalLikes: this.likesCount
    };
  },
  methods: {
    likeComment() {
      this.internalLikes++;
      this.$emit("like-change", {likeDelta: 1});
    },
    dislikeComment() {
      this.internalLikes--;
      this.$emit("like-change", {likeDelta: -1});
    }
  }
};
</script>
```

{% hint style="info" %}
Ca date într-un eveniment putem transmite atât tipuri simple de date (numere, string), cât și obiecte complexe, cum in cazul de mai sus - un obiect cu proprietatea `likeDelta`&#x20;

Deobicei e recomandat să transmitem obiecte cu proprietăți, pentru a fi mai expliciți care e informația transmisă.
{% endhint %}

Pentru a prelucra aceste evenimente în componenta părinte trebuie să modificăm un pic prelucrarea pentru a primi evenimentul cu date:

```markup
<template>
  <div>
    <h1>My Comments</h1>
    <Comment
      v-for="c in comments"
      :key="c.id"
      :text="c.text"
      :author="c.author"
      :likes-count="c.likesCount"
      @like-change="onLikeChange($event)"
    />
    <p class="total-likes">
      Total Likes:
      <strong>{{ totalLikes }}</strong>
    </p>
  </div>
</template>

<script>
import Comment from "./components/Comment";

export default {
  ...
  methods: {
     onLikeChange(event) {
      this.totalLikes += event.likeDelta;
    }
  }
};
</script>
```

{% hint style="info" %}
Observați că în template transmitem variabila **`$event`** când apelăm metoda **`onLikeChange($event)`**. această variabilă e automat disponibilă și conține datele care au fost transmite de componenta `Comment`&#x20;

De asemenea la declarația metodei în javascript am definit un parametru de intrare **`event`**- care îl folosim pentru a modifica valoarea lui `totalLikes`&#x20;
{% endhint %}

### Exemplul complet

Astfel am implementat complet comunicarea inversă de la copil către părinte prin evenimente cu date.

Componenta **`Comment.vue`**:

```markup
<template>
  <div class="comment">
    <p>{{ text }}</p>
    <div class="meta">
      <span class="author">{{ author }}</span>
      <div>
        <span class="like">{{ internalLikes }} &#x2764;</span>
        <button @click="likeComment">like</button>
        <button @click="dislikeComment">dislike</button>
      </div>
    </div>
  </div>
</template>

<script>
export default {
  name: "Comment",
  props: {
    text: String,
    author: String,
    likesCount: Number
  },
  data: function() {
    return {
      internalLikes: this.likesCount
    };
  },
  methods: {
    likeComment() {
      this.internalLikes++;
      this.$emit("like-change", {likeDelta: 1});
    },
    dislikeComment() {
      this.internalLikes--;
      this.$emit("like-change", {likeDelta: -1});
    }
  }
};
</script>

<style scoped>
.comment {
  display: flex;
  flex-direction: column;
  border: 1px solid lightgray;
  border-radius: 5px;
  padding: 0.5em 2em;
  margin: 1em 2em;
}

.meta {
  display: flex;
  justify-content: space-between;
  border-top: 1px solid #DDD;
  padding-top: 0.5em;
}

.author {
  color: gray;
}

.meta button,
.meta .like {
  color: navy;
}

.meta button {
  background-color: rgb(231, 242, 250);
  border: none;
  padding: 0.3em 0.6em;
  margin-left: 0.5em;
}
</style>
```

Și pagina părinte `App.vue`:

```markup
<template>
  <div>
    <h1>My Comments</h1>
    <Comment
      v-for="c in comments"
      :key="c.id"
      :text="c.text"
      :author="c.author"
      :likes-count="c.likesCount"
      @like-change="onLikeChange($event)"
    />
    <p class="total-likes">
      Total Likes:
      <strong>{{ totalLikes }}</strong>
    </p>
  </div>
</template>

<script>
import Comment from "./components/Comment";

export default {
  name: "App",
  components: {
    Comment
  },
  data: function() {
    return {
      totalLikes: 0,
      comments: [
        {
          id: 1,
          text: "The first comment, which is very much awesome",
          author: "Marc",
          likesCount: 4
        },
        {
          id: 2,
          text: "The second comment long comment that makes more sense in my head",
          author: "Dorin",
          likesCount: 2
        }
      ]
    };
  },
  created() {
    for (let comment of this.comments) {
      this.totalLikes += comment.likesCount;
    }
  },
  methods: {
    onLikeChange(event) {
      this.totalLikes += event.likeDelta;
    }
  }
};
</script>

<style scoped>
div {
  font-family: "Avenir", Helvetica, Arial, sans-serif;
}
h1 {
  text-align: center;
}
.total-likes {
  text-align: right;
  margin-right: 2em;
}
</style>
```
