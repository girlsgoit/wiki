# Rest api POST

{% api-method method="post" host="https://ggit.mysevidu.com" path="/api/posts" %}
{% api-method-summary %}
Get Cakes
{% endapi-method-summary %}

{% api-method-description %}
This endpoint allows you to get free cakes.
{% endapi-method-description %}

{% api-method-spec %}
{% api-method-request %}
{% api-method-form-data-parameters %}
{% api-method-parameter name="participanta" type="string" required=true %}
Numele participantei care a facut postarea
{% endapi-method-parameter %}

{% api-method-parameter name="titlu" type="string" required=true %}
Titlul postarii
{% endapi-method-parameter %}

{% api-method-parameter name="descriere" type="string" required=true %}
Corpul postarii
{% endapi-method-parameter %}
{% endapi-method-form-data-parameters %}
{% endapi-method-request %}

{% api-method-response %}
{% api-method-response-example httpCode=200 %}
{% api-method-response-example-description %}
Cake successfully retrieved.
{% endapi-method-response-example-description %}

```javascript
{
    "participanta": "Ana Maria",
    "titlu": "Titlul postarii",
    "descriere": "Descrierea postarii"
}
```
{% endapi-method-response-example %}

{% api-method-response-example httpCode=404 %}
{% api-method-response-example-description %}
Could not find a cake matching this query.
{% endapi-method-response-example-description %}

```javascript
500
```
{% endapi-method-response-example %}
{% endapi-method-response %}
{% endapi-method-spec %}
{% endapi-method %}

{% api-method method="get" host="http://ggit.mysevidu.com" path="/api/posts" %}
{% api-method-summary %}

{% endapi-method-summary %}

{% api-method-description %}

{% endapi-method-description %}

{% api-method-spec %}
{% api-method-request %}
{% api-method-form-data-parameters %}
{% api-method-parameter name="participanta" type="string" required=false %}
numele participantei
{% endapi-method-parameter %}

{% api-method-parameter name="" type="string" required=false %}
Titlul postarii
{% endapi-method-parameter %}

{% api-method-parameter name="" type="string" required=false %}
Descrierea postarii
{% endapi-method-parameter %}
{% endapi-method-form-data-parameters %}
{% endapi-method-request %}

{% api-method-response %}
{% api-method-response-example httpCode=200 %}
{% api-method-response-example-description %}

{% endapi-method-response-example-description %}

```javascript
{
    "id":1
    "participanta": "Alexandra Ion",
    "titlu": "Primul meu articol",
    "descriere": "descrierea articolului"
},
```
{% endapi-method-response-example %}
{% endapi-method-response %}
{% endapi-method-spec %}
{% endapi-method %}



