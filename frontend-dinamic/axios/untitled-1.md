# Rest api PUT

{% api-method method="put" host="https://ggit.mysevidu.com" path="/api/posts/:id" %}
{% api-method-summary %}
PUT
{% endapi-method-summary %}

{% api-method-description %}
This endpoint allows you to get free cakes.
{% endapi-method-description %}

{% api-method-spec %}
{% api-method-request %}
{% api-method-form-data-parameters %}
{% api-method-parameter name="descriere" type="string" required=false %}
descrierea postarii
{% endapi-method-parameter %}

{% api-method-parameter name="participanta" type="string" required=false %}
Numele participantei
{% endapi-method-parameter %}

{% api-method-parameter name="titlu" type="string" required=false %}
Titlul postarii
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
{
    "message": "Ain't no cake like that."
}
```
{% endapi-method-response-example %}
{% endapi-method-response %}
{% endapi-method-spec %}
{% endapi-method %}



