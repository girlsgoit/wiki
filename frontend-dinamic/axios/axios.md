# Rest api GET

{% api-method method="get" host="https://ggit.mysevidu.com" path="/api/posts" %}
{% api-method-summary %}
Get Cakes
{% endapi-method-summary %}

{% api-method-description %}
This endpoint allows you to get free cakes.
{% endapi-method-description %}

{% api-method-spec %}
{% api-method-request %}

{% api-method-response %}
{% api-method-response-example httpCode=200 %}
{% api-method-response-example-description %}
Cake successfully retrieved.
{% endapi-method-response-example-description %}

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
{% endapi-method-response-example %}

{% api-method-response-example httpCode=404 %}
{% api-method-response-example-description %}
Could not find a cake matching this query.
{% endapi-method-response-example-description %}

```javascript

```
{% endapi-method-response-example %}
{% endapi-method-response %}
{% endapi-method-spec %}
{% endapi-method %}



