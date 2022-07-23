# Rest API

{% swagger baseUrl="http://ggit.mysevidu.com" path="/api/posts" method="get" summary="Get Cakes" %}
{% swagger-description %}
This endpoint allows you to get free cakes.
{% endswagger-description %}

{% swagger-parameter in="path" name="id" type="integer" %}
ID of the cake to get, for free of course.
{% endswagger-parameter %}

{% swagger-parameter in="header" name="Authentication" type="string" %}
Authentication token to track down who is emptying our stocks.
{% endswagger-parameter %}

{% swagger-parameter in="query" name="recipe" type="string" %}
The API will do its best to find a cake matching the provided recipe.
{% endswagger-parameter %}

{% swagger-parameter in="query" name="gluten" type="boolean" %}
Whether the cake should be gluten-free or not.
{% endswagger-parameter %}

{% swagger-response status="200" description="Cake successfully retrieved." %}
```javascript
[{
    "id":1
    "participanta": "Alexandra Ion",
    "titlu": "Primul meu articol",
    "descriere": "descrierea articolului"
},
{
    "id":2
    "participanta": "Alexandra Ion",
    "titlu": "Al doilea meu articol",
    "descriere": "descrierea articolului"
}...
]
```
{% endswagger-response %}

{% swagger-response status="404" description="Could not find a cake matching this query." %}
```javascript
```
{% endswagger-response %}
{% endswagger %}

