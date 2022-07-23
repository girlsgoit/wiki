# Rest api GET one

{% swagger baseUrl="https://ggit.mysevidu.com" path="/api/posts/:id" method="get" summary="Get Cakes" %}
{% swagger-description %}
This endpoint allows you to get free cakes.
{% endswagger-description %}

{% swagger-parameter in="path" name="id" type="string" %}
ID of the cake to get, for free of course.
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
```
{% endswagger-response %}
{% endswagger %}

