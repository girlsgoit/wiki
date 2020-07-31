# Lifecycle Hooks

Fiecare instanță Vue parcurge o serie de pași de inițializare atunci când este creată oferind utilizatorilor posibilitatea de a adăuga propriul cod în etape specifice.

De exemplu, cârligul `created` poate fi utilizat pentru a rula cod după crearea unei instanțe:

```javascript
new Vue({
  created: function () {
    console.log('Created a fost apelata')
  }
})
```

Există, de asemenea, alte cârlige care vor fi apelate în diferite etape ale ciclului de viață al instanței, cum ar fi `mounted`, `updated` și `destroyed`.

#### Diagrama ciclului de viață

![](../../.gitbook/assets/image%20%28312%29.png)

