# Lifecycle hooks

Fiecare instanță Vue parcurge o serie de pași de inițializare atunci când este creată oferind utilizatorilor posibilitatea de a adăuga propriul cod în etape specifice.

De exemplu, cârligul `created` poate fi utilizat pentru a rula cod după crearea unei instanțe:

```javascript
created: function () {
    console.log('Created a fost apelata');
}
```

Cârligul created va fi apelat de îndată ce instanța a fost creată. La această etapă, instanța nu este montată în DOM.

Există, de asemenea, alte cârlige care vor fi apelate în diferite etape ale ciclului de viață al instanței, cum ar fi `mounted`, `updated` și `destroyed`.

#### Mounted

Acest cârlig este apelat după ce instanța Vue este montată în DOM.

```javascript
mounted: function () {
  console.log('Mounted a fost apelata');
}
```

Apelarea cârligului `mounted` nu garantează montarea componentelor din interior. Dacă e necesară montarea componentelor din interior, puteți utiliza `$nextTick` în felul următor:

```javascript
mounted: function () {
  this.$nextTick(function () {
    // Codul care va rula după ce toate
    // componentele au fost montate
  })
}
```

