# Seturi

1. Scrieți un program pentru a afișa numărul de vocale in `string` utilizând seturi
2. Scriți un program care va converta set in disționar.
3. Aflați dacă un șir are caractere unice, dacă conține duplicate returnează False
4. Scrieți un program Python pentru a găsi valoarea maximă și cea minimă într-un set.

```python
#1
def vowel_count(str):
	count = 0
	vowel = set("aeiouAEIOU")

	for alphabet in str:
		if alphabet in vowel:
			count = count + 1
	
	print("No. of vowels :", count)

str = "GirlsGOIT"
vowel_count(str)

#2
set1 = {1, 2, 3, 4, 5}

print ("initial string", set1 )
print (type(set1 ))

res = dict.fromkeys(set1 , 0)
 
print ("final list", res)
print (type(res))
```

