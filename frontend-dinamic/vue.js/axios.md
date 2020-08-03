# Axios

De multe ori când într-o aplicație web este nevoie de consumat și afișat date dintr-un API. Există mai multe modalități cum poate fi făcut acest lucru, dar o abordare foarte populară este utilizând clientul HTTP Axios.

Sunt mai multe modalități cum pot fi obținute date de la un API, dar mai întâi e bine să vedem cum sunt organizate. Pentru aceasta vom face un apel către endpoint și vom afișa conținutul. 

```javascript
mounted () {
  try {
    const response = await axios.get('https://ghibliapi.herokuapp.com/swagger.yaml');
    console.log(response);
  } catch (error) {
    console.error(error);
  }
}
```

Răspunsul va conține informații despre cum pot fi accesate datele din API. De exemplu, putem obține toate filmele studioului Ghibli în felul următor:

```javascript
async function getFilms() {
  try {
    const response = await axios.get('https://ghibliapi.herokuapp.com/films');
    console.log(response);
  } catch (error) {
    console.error(error);
  }
}
```





