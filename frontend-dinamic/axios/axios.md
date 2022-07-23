# Rest api GET

{% swagger baseUrl="https://ggit.mysevidu.com" path="/api/posts" method="get" summary="Get Cakes" %}
{% swagger-description %}
This endpoint allows you to get free cakes.
{% endswagger-description %}

{% swagger-response status="200" description="Cake successfully retrieved." %}
```javascript
[{
    "participanta": "Ana Maria",
    "titlu": "Titlul postarii",
    "descriere": "Descrierea postarii"
},
{
    "participanta": "Ana Maria",
    "titlu": "Titlul postarii",
    "descriere": "Descrierea postarii"
}....
]
```
{% endswagger-response %}

{% swagger-response status="404" description="Could not find a cake matching this query." %}
```javascript
```
{% endswagger-response %}
{% endswagger %}

