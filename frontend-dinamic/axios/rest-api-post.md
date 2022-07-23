# Rest api POST

{% swagger baseUrl="https://ggit.mysevidu.com" path="/api/posts" method="post" summary="Get Cakes" %}
{% swagger-description %}
This endpoint allows you to get free cakes.
{% endswagger-description %}

{% swagger-parameter in="body" name="participanta" type="string" %}
Numele participantei care a facut postarea
{% endswagger-parameter %}

{% swagger-parameter in="body" name="titlu" type="string" %}
Titlul postarii
{% endswagger-parameter %}

{% swagger-parameter in="body" name="descriere" type="string" %}
Corpul postarii
{% endswagger-parameter %}

{% swagger-response status="200" description="Cake successfully retrieved." %}
```javascript
{
    "participanta": "Ana Maria",
    "titlu": "Titlul postarii",
    "descriere": "Descrierea postarii"
}
```
{% endswagger-response %}

{% swagger-response status="404" description="Could not find a cake matching this query." %}
```javascript
500
```
{% endswagger-response %}
{% endswagger %}

{% swagger baseUrl="http://ggit.mysevidu.com" path="/api/posts" method="get" summary="" %}
{% swagger-description %}

{% endswagger-description %}

{% swagger-parameter in="body" name="participanta" type="string" %}
numele participantei
{% endswagger-parameter %}

{% swagger-parameter in="body" name="" type="string" %}
Titlul postarii
{% endswagger-parameter %}

{% swagger-parameter in="body" name="" type="string" %}
Descrierea postarii
{% endswagger-parameter %}

{% swagger-response status="200" description="" %}
```javascript
{
    "id":1
    "participanta": "Alexandra Ion",
    "titlu": "Primul meu articol",
    "descriere": "descrierea articolului"
},
```
{% endswagger-response %}
{% endswagger %}

