---
description: >-
  Lifecycle hooks sunt o serie de metode cu nume specific în componente, care ne
  permit sa „ne legăm” de anumite evenimente din viața componentei și să
  executăm acțiuni.
---

# Lifecycle hooks

## Lifecycle hooks

Fiecare instanță Vue parcurge o serie de pași de inițializare atunci când este creată oferind utilizatorilor posibilitatea de a adăuga propriul cod în etape specifice.

De exemplu, cârligul `created` poate fi utilizat pentru a rula cod după crearea unei instanțe:

```javascript
created: function () {
    console.log('Created a fost apelata');
}
```

Cârligul created va fi apelat de îndată ce instanța a fost creată. La această etapă, instanța nu este montată în DOM.

Există, de asemenea, alte cârlige care vor fi apelate în diferite etape ale ciclului de viață al instanței, cum ar fi `mounted`, `updated` și `destroyed`.

### Mounted

Acest cârlig este apelat după ce instanța Vue este montată în DOM.

```javascript
mounted: function () {
  console.log('Mounted a fost apelata');
}
```

Apelarea cârligului `mounted` nu garantează montarea componentelor din interior. Dacă e necesară montarea componentelor din interior, putem utiliza `$nextTick` în felul următor:

```javascript
mounted: function () {
  this.$nextTick(function () {
    // Codul care va rula după ce toate
    // componentele au fost actualizate
  })
}
```

### Updated

Acest cârlig este apelat după ce o componentă a fost modificată. Ca și pentru `mounted`, putem utiliza `$nextTick` pentru a ne asigura că toate celelalte componente au fost actualizate.

```javascript
updated: function () {
  this.$nextTick(function () {
    // Codul care va rula după ce toate
    // componentele au fost actualizate
  })
}
```

### Destroyed

Acest cârlig este apelat după ce o instanță Vue a fost distrusă.

```javascript
destroyed: function () {
  console.log('Instanta Vue a fost distrusa');
}
```

## Schema de viață a unei componente

Pentru mai multe detalii și o idee reprezentativă cum arată viața unei componente puteți vedea schema de mai jos. 

În ea veți găsi punctele unde sunt definite funcțiile, inclusiv cele care au fost descrise mai sus - ele sunt cele care ne interesează deobicei cel mai tare.

![Referint&#x103; - ghidul oficial Vue.js](../../.gitbook/assets/image%20%28316%29.png)

