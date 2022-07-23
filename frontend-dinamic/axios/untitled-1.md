# Rest api PUT

{% swagger baseUrl="https://ggit.mysevidu.com" path="/api/posts/:id" method="put" summary="PUT" %}
{% swagger-description %}
This endpoint allows you to get free cakes.
{% endswagger-description %}

{% swagger-parameter in="body" name="descriere" type="string" %}
descrierea postarii
{% endswagger-parameter %}

{% swagger-parameter in="body" name="participanta" type="string" %}
Numele participantei
{% endswagger-parameter %}

{% swagger-parameter in="body" name="titlu" type="string" %}
Titlul postarii
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
{
    "message": "Ain't no cake like that."
}
```
{% endswagger-response %}
{% endswagger %}

