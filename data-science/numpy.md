# Numpy

## Numpy

### Ce este Numpy?

Numpy este cea mai populara biblioteca(o colecție de clase, module si funcții) pentru calcul științific în Python. Oferă un obiect matricial multidimensional de înaltă performanță și instrumente pentru lucrul cu aceste obiecte.

exemple(imagini):

* [jocuri](https://youtu.be/Y7t5B69G0Dw?t=35)&#x20;
* deep learning
* molecular dymanic
* [silumations](https://youtu.be/ffgRC3kvA\_k?t=44)

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FjGvtYPjMEXzoSmwdAHkd%2Ffile.png?alt=media)

Oviective:

* Înțelegeți diferența dintre tablouri(arrays) de dimeniunile unu, două și n-dimensionale în NumPy;
* Înțelegeți cum să aplicați unele operații de algebră liniară pe tabourile n-dimensionale fără a utiliza bucle/cicluri;
* Înțelegeți proprietățile axei și formei pentru tablourile n-dimensionale.

Obiectul principal al NumPy este tabloul multidimensional. Este un tabel de elemente (de obicei numere), toate de același tip, indexate de un tuple de numere întregi non-negative. Dimensiunile unui tablou se numesc axe.

De exemplu, coordonatele unui punct din spațiul 3D \[1, 2, 1] au o axă. Acea axă are 3 elemente în ea, deci spunem că are o lungime de 3. În exemplul ilustrat mai jos, tabloul are 2 axe. Prima axa are o lungime de 2, a doua axa are o lungime de 3.

```python
lista = [[ 1., 0., 0.],
         [ 0., 1., 2.]]
lista
```

```
[[1.0, 0.0, 0.0], [0.0, 1.0, 2.0]]
```

```python
# asa importam un modul dintr-o librarie

import numpy as np

# cuvantul cheie 'as' ne permite sa prescurtam numele numpy ---> np
```

```python
matrice = np.array(lista)
matrice*2
```

```
array([[2., 0., 0.],
       [0., 2., 4.]])
```

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2F2P0mUBK8t6ujOn9sxGBg%2Ffile.png?alt=media)

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FPPnz81ZOHERWmk8fqa0f%2Ffile.png?alt=media)

```python
#exemple
np.zeros((2,3))
```

```
array([[[0., 0., 0.],
        [0., 0., 0.]],

       [[0., 0., 0.],
        [0., 0., 0.]]])
```

```python
#exemple
np.zeros((2,4,3))
```

```
array([[[0., 0., 0.],
        [0., 0., 0.],
        [0., 0., 0.],
        [0., 0., 0.]],

       [[0., 0., 0.],
        [0., 0., 0.],
        [0., 0., 0.],
        [0., 0., 0.]]])
```

### Proprietati

Clasa de matrice NumPy se numește ndarray. Atributele mai importante ale unui obiect ndarray sunt:

**ndarray.ndim**

* numărul de axe (dimensiuni) ale tabloului.

**ndarray.shape**

* dimensiunile tabloului. Acesta este un tuple de numere întregi care indică dimensiunea tabloului în fiecare dimensiune. Pentru o matrice cu n rânduri și m coloane, forma va fi (n, m). Lungimea tuplei de formă este, prin urmare, numărul axelor, ndim.

**ndarray.size**

* numărul total de elemente ale tabloului. Aceasta este egală cu produsul elementelor de formă.

**ndarray.dtype**

* un obiect care descrie tipul elementelor din tablou. Se poate crea sau specifica tipul de tip folosind tipurile Python standard. În plus, NumPy oferă tipuri proprii. numpy.int32, numpy.int16 și numpy.float64 sunt câteva exemple.

**ndarray.itemsize**

* dimensiunea în octeți a fiecărui element al tabloului. De exemplu, o serie de elemente de tip float64 are dimensiunea de articole 8 (= 64/8), în timp ce una de tip complex32 are dimensiunea articolelor 4 (= 32/8). Este echivalent cu ndarray.dtype.itemsize.

**ndarray.data**

* bufferul care conține elementele reale ale tabloului. În mod normal, nu va trebui să folosim acest atribut, deoarece vom accesa elementele dintr-un tablou folosind facilități de indexare.

```python
# print(matrice.ndim)
# print(matrice.size)
# print(matrice.shape)
# print(matrice.dtype)
```

### Crearea tablourilor

Putem inițializa matricii numpy din listele de liste Python și accesa elemente folosind paranteze pătrate:

```python
a = np.array([1, 2, 3])   # cream un vector, tablou de dimensiunea 1
# print(type(a))            
# print(a.shape)            
# print(a[0], a[1], a[2])   
# a[0] = 5                  # Schimbam elementele unui tablou
# print(a)                  

# b = np.array([[1,2,3],[4,5,6]])    # cream un vector, tablou de dimensiunea 2
# print(b.shape)                     
# print(b[0, 0], b[0, 1], b[1, 0])
```

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FV5qzhTjpd90EX0y0SbYX%2Ffile.png?alt=media)

```python
#metoda 1

#metoda 2
```

Numpy oferă, de asemenea, multe funcții pentru a crea tablouri:

```python
a = np.zeros((2,2))   # cream un tablou de zerouri
# print(a)              

# b = np.ones((1,2))    # cream un tablou de cifre de unu
# print(b)              


# e = np.random.random((2,2))  # cream un tablou de valori random
# print(e)
```

```python
#metoda 3??
```

### Indexarea

Similar cu listele Python, tablourile numpy pot fi tăiate. Deoarece tablourile pot fi multidimensionale, trebuie să specificați o felie(slice) pentru fiecare dimensiune a tabloului

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FBqJBOG3sG8kxUjaEymQm%2Ffile.png?alt=media)

```python
a = np.array([[1,2,3,4], [5,6,7,8], [9,10,11,12]])

# Use slicing to pull out the subarray consisting of the first 2 rows
# and columns 1 and 2; b is the following array of shape (2, 2):
# [[2 3]
#  [6 7]]
b = a[:2, 1:3]

# A slice of an array is a view into the same data, so modifying it
# will modify the original array.
print(a[0, 1])   # Prints "2"
b[0, 0] = 77     # b[0, 0] is the same piece of data as a[0, 1]
print(a[0, 1])   # Prints "77"
```

```
2
77
```

```python
a = np.arange(36).reshape((6,6))
a
```

```
array([[ 0,  1,  2,  3,  4,  5],
       [ 6,  7,  8,  9, 10, 11],
       [12, 13, 14, 15, 16, 17],
       [18, 19, 20, 21, 22, 23],
       [24, 25, 26, 27, 28, 29],
       [30, 31, 32, 33, 34, 35]])
```

```python
# printati prima coloana
```

De asemenea, puteți amesteca indexarea cu numere cu indexarea feliilor.

```python
# Two ways of accessing the data in the middle row of the array.
# Mixing integer indexing with slices yields an array of lower rank,
# while using only slices yields an array of the same rank as the
# original array:
row_r1 = a[1, :]    # Rank 1 view of the second row of a
row_r2 = a[1:2, :]  # Rank 2 view of the second row of a
print(row_r1, row_r1.shape)  # Prints "[5 6 7 8] (4,)"
print(row_r2, row_r2.shape)  # Prints "[[5 6 7 8]] (1, 4)"

# We can make the same distinction when accessing columns of an array:
col_r1 = a[:, 1]
col_r2 = a[:, 1:2]
print(col_r1, col_r1.shape)  # Prints "[ 2  6 10] (3,)"
print(col_r2, col_r2.shape)  # Prints "[[ 2]
                             #          [ 6]
                             #          [10]] (3, 1)"
```

```
[5 6 7 8] (4,)
[[5 6 7 8]] (1, 4)
[77  6 10] (3,)
[[77]
 [ 6]
 [10]] (3, 1)
```

Puteti folosi liste si array pentru indexare

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FoIe8GoTARnf0DtkW3wlC%2Ffile.png?alt=media)

```python
a = np.array([[1,2], [3, 4], [5, 6]]) # complicat si nu folosim -> delete

# An example of integer array indexing.
# The returned array will have shape (3,) and
print(a[[0, 1, 2], [0, 1, 0]])  # Prints "[1 4 5]"

# The above example of integer array indexing is equivalent to this:
print(np.array([a[0, 0], a[1, 1], a[2, 0]]))  # Prints "[1 4 5]"

# When using integer array indexing, you can reuse the same
# element from the source array:
print(a[[0, 0], [1, 1]])  # Prints "[2 2]"

# Equivalent to the previous integer array indexing example
print(np.array([a[0, 1], a[0, 1]]))  # Prints "[2 2]"
```

```
[1 4 5]
[1 4 5]
[2 2]
[2 2]
```

Puteti folosi si tablouri cu variabile boolean

```python
a = np.array([[1,2], [3, 4], [5, 6]])

bool_idx = (a > 2)   # Find the elements of a that are bigger than 2;
                     # this returns a numpy array of Booleans of the same
                     # shape as a, where each slot of bool_idx tells
                     # whether that element of a is > 2.

print(bool_idx)      # Prints "[[False False]
                     #          [ True  True]
                     #          [ True  True]]"

# We use boolean array indexing to construct a rank 1 array
# consisting of the elements of a corresponding to the True values
# of bool_idx
print(a[bool_idx])  # Prints "[3 4 5 6]"

# We can do all of the above in a single concise statement:
print(a[a > 2])     # Prints "[3 4 5 6]"
```

```
[[False False]
 [ True  True]
 [ True  True]]
[3 4 5 6]
[3 4 5 6]
```

### Tipuri de date

```python
x = np.array([1, 2])   # Let numpy choose the datatype
print(x.dtype)         # Prints "int64"

x = np.array([1.0, 2.0])   # Let numpy choose the datatype
print(x.dtype)             # Prints "float64"

x = np.array([1, 2], dtype=np.int64)   # Force a particular datatype
print(x.dtype)
```

```
int64
float64
int64
```

#### Nan

```python
myarr = np.array([1., 0., np.nan, 3.])
# print(myarr == np.nan)

# np.nan == np.nan  # is always False! Use special numpy functions instead.

# myarr[myarr == np.nan] = 0. # doesn't work
# print(myarr)

# myarr[np.isnan(myarr)] = 0. # use this instead find
# print(myarr)
```

```
(array([], dtype=int64),)
[ 1.  0. nan  3.]
[1. 0. 0. 3.]
```

### Operatii matematice

Se efectuiaza operatiile element cu element

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FeZQCqLlxhJX75mkukxo3%2Ffile.png?alt=media)

```python
x = np.array([[1,2],[3,4]], dtype=np.float64)
y = np.array([[5,6],[7,8]], dtype=np.float64)

# Elementwise sum; both produce the array
# [[ 6.0  8.0]
#  [10.0 12.0]]
print(x + y)
print(np.add(x, y))

# Elementwise difference; both produce the array
# [[-4.0 -4.0]
#  [-4.0 -4.0]]
print(x - y)
print(np.subtract(x, y))

# Elementwise product; both produce the array
# [[ 5.0 12.0]
#  [21.0 32.0]]
print(x * y)
print(np.multiply(x, y))

# Elementwise division; both produce the array
# [[ 0.2         0.33333333]
#  [ 0.42857143  0.5       ]]
print(x / y)
print(np.divide(x, y))

# Elementwise square root; produces the array
# [[ 1.          1.41421356]
#  [ 1.73205081  2.        ]]
print(np.sqrt(x))

def f(x):
   return x+3

print(f(x))
```

```
[[ 6.  8.]
 [10. 12.]]
[[ 6.  8.]
 [10. 12.]]
[[-4. -4.]
 [-4. -4.]]
[[-4. -4.]
 [-4. -4.]]
[[ 5. 12.]
 [21. 32.]]
[[ 5. 12.]
 [21. 32.]]
[[0.2        0.33333333]
 [0.42857143 0.5       ]]
[[0.2        0.33333333]
 [0.42857143 0.5       ]]
[[1.         1.41421356]
 [1.73205081 2.        ]]
[[4. 5.]
 [6. 7.]]
```

#### operatii pe axe

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2F9Az5QTXzy2MoTiB55slZ%2Ffile.png?alt=media)

```python
x = np.array([[1,2],[3,4]])

#todo: add a image

print(np.sum(x))  # Compute sum of all elements; prints "10"
print(np.sum(x, axis=0))  # Compute sum of each column; prints "[4 6]"
print(np.sum(x, axis=1))  # Compute sum of each row; prints "[3 7]"
```

```
10
[4 6]
[3 7]
```

## Functii/Metode utile

#### numpy.arange

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2F9jDYmky33anUudcSEa6W%2Ffile.png?alt=media)

```python
np.arange(6,10,2)
```

```
array([6, 8])
```

#### numpy.reshape - schimba forma taboului

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FaJg4mX7kLKh3F7aH0CyU%2Ffile.png?alt=media)

#### numpy.pad() - adauga elemente la sfarsitul tabloului

```python
a = [1, 2, 3, 4, 5]
np.pad(a, (2, 3), 'constant', constant_values=(4, 6))
```

```
array([4, 4, 1, 2, 3, 4, 5, 6, 6, 6])
```

#### numpy.concatinate - uneste 2 sau mai multe tabouri

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FsGqB9reVz4S8W4KJc8oK%2Ffile.png?alt=media)

```python
a = np.array([[1, 2], [3, 4]])
b = np.array([[5, 6]])
np.concatenate((a, b), axis=0)



print(np.concatenate((a, b.T), axis=1))


print(np.concatenate((a, b), axis=None))
```

```
[[1 2 5]
 [3 4 6]]
[1 2 3 4 5 6]
```

#### numpy.amax - calculeaza valoare maxima din tablou

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2F4qlzHApKm0Yk7Vne5fdA%2Ffile.png?alt=media)

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FxDk5O8165FgOt4A2QKfa%2Ffile.png?alt=media)

```python
a = np.array([[1, 2], [3, 4]])
print(a)
np.amax(a, 1)
```

```
[[1 2]
 [3 4]]





array([2, 4])
```

#### numpy.argmax - calculeaza index-ul la valoarea maxima din tablou

```python
a = np.array([[1, 2], [3, 4]])
print(a)
np.argmax(a, 1)
```

```
[[1 2]
 [3 4]]





array([1, 1])
```

#### numpy mean, median - calculeaza valoarea mediana/media din tablou

```python
a = np.array([[1, 2], [3, 4]])
print(a)
np.mean(a, 1)
```

```
[[1 2]
 [3 4]]





array([1.5, 3.5])
```

#### numpy.astype  - face cast, schimba dtype-ul

```python
a = np.array([[1, 2], [3, 4]])
print(a)
a.astype('float')
```

```
[[1 2]
 [3 4]]





array([[1., 2.],
       [3., 4.]])
```

#### numpy.linspace - creaza un array cu valori in intervale egale

```python
a = np.linspace(0, 1, 4)
a
```

```
array([0.        , 0.33333333, 0.66666667, 1.        ])
```

```python
import matplotlib.pyplot as plt 
a = np.linspace(0, 3.14*4, 400)
plt.plot(a, np.sin(a))
```

```
[<matplotlib.lines.Line2D at 0x7fd785777208>]
```

#### np.random.choice

```python
np.random.choice(a,3)
```

```
array([10.10466165,  1.8887218 ,  0.44070175])
```

```python
np.random.rand()
```

```
0.5298602291142653
```

```python
np.random.randint(10)
```

```
3
```

#### numpy.round - seteaza valoarea la cel mai apropiat intreg

```python
a = [3.4, 1.2, 0.6, 5.55]
np.round(a,1)
```

```
array([3.4, 1.2, 0.6, 5.6])
```

## salvare/citirea din fisier folosind numpy

```python
np.save('/tmp/123', np.array([[1, 2, 3], [4, 5, 6]]))
np.load('/tmp/123.npy')
# tot advanced section
```

```
array([[1, 2, 3],
       [4, 5, 6]])
```

[resurse](https://numpy.org/doc/stable/reference/generated/numpy.concatenate.html)

Exercitii:

* creati o matrice cu valori de la 0 la 24 cu forma (6,4)
* selectati prima coloana din taboul a

```python
#??
```

## Board Game Data

citesc cu csv si fac liste apoi array

```python
import urllib, csv
path = "https://girlsgoitpublic.z6.web.core.windows.net/books.csv"
response = urllib.request.urlopen(path)
lines = [l.decode('utf-8') for l in response.readlines()]
content = csv.reader(lines)
books = list(content)
books[:2]
```

```
[['id',
  'name',
  'authour',
  'score',
  'rating',
  'rating_count',
  'review_count',
  'page_count',
  'year',
  'genres'],
 ['2767052',
  'The Hunger Games (The Hunger Games, #1)',
  'Suzanne Collins',
  '2959668',
  '4.33',
  '6223460',
  '169961',
  '374',
  '2008',
  'Young Adult']]
```

Acest set de date conține 200 de cărți(rânduri) și 13 coloane pe care le puteți vedea mai jos.

Mai jos aveți o funcție care iterează printr-o listă de liste și numără intr-o coloană cate valori de același fel sunt, rezultatele stocându-le într-un dicționar. Intr-un final funcția va returna un dicționar cu cheile sortate în ordine numerică sau alfabetică crescătoare.

```python
def column_tolist(data, index):
    list_name = []
    for row in data[1:]:
        list_name.append(float(row[index]))
    return list_name
```

Mai jos vedeti o variatie a functiei, care mai adauga niste parametri pentru a extrage o felie din setul de date, si mai multe coloane

```python
def column_tolist(data, index_start, index_sfarsit, start=1, sfarsit=12):
    list_name = []
    for row in data[start: sfarsit]:
        list_name.append([row[index] for index in range(index_start, index_sfarsit)])
    return list_name
```

```python
a = 4
b = 1 if a > 3 else 2
print(b)

a = [i+3 for i in range(3)]
print(a)
```

```
1
[3, 4, 5]
```

```python
db1 = column_tolist(books, 3, 9)
db2 = column_tolist(books, 3, 9, 13, 23)
np.array(db1)
```

```
array([[2959668,       4, 6223460,  169961,     374,    2008],
       [2603171,       4, 2429708,   40758,     870,    2004],
       [2235010,       4, 4377280,   89241,     324,    2006],
       [1942736,       4, 2905431,   64486,     279,    2000],
       [1452846,       3, 4839503,  102492,     501,    2006],
       [1343484,       4, 1779061,  111157,     552,    2006],
       [1253753,       3, 2652114,   53595,     141,    1996],
       [1225547,       4,  501176,   10177,     767,    2002],
       [1139751,       4,  108111,    1736,    1728,    2012],
       [1082448,       4, 1057937,   19446,    1037,    1999],
       [1071625,       4, 3439515,  154103,     313,    2012]])
```

```python
db2
```

```
[['1012345', '4.38', '882195', '17375', '64', '1964'],
 ['966234', '3.86', '1308276', '35729', '464', '2002'],
 ['867513', '3.85', '1887312', '46482', '489', '2006'],
 ['856841', '4.12', '1687317', '29556', '503', '2005'],
 ['845532', '4.08', '932074', '29142', '272', '2004'],
 ['825095', '4.06', '446019', '10321', '239', '2000'],
 ['812420', '4.12', '1585265', '40876', '532', '2003'],
 ['803967', '4.17', '670386', '17090', '1463', '1987'],
 ['783461', '4.2', '2827116', '107478', '487', '2012'],
 ['775373', '3.99', '1623608', '46066', '194', '2011']]
```

```python
np.concatenate((db1, db2), axis=0)
```

```
array([['2959668', '4.33', '6223460', '169961', '374', '2008'],
       ['2603171', '4.5', '2429708', '40758', '870', '2004'],
       ['2235010', '4.28', '4377280', '89241', '324', '2006'],
       ['1942736', '4.26', '2905431', '64486', '279', '2000'],
       ['1452846', '3.59', '4839503', '102492', '501', '2006'],
       ['1343484', '4.37', '1779061', '111157', '552', '2006'],
       ['1253753', '3.94', '2652114', '53595', '141', '1996'],
       ['1225547', '4.26', '501176', '10177', '767', '2002'],
       ['1139751', '4.6', '108111', '1736', '1728', '2012'],
       ['1082448', '4.3', '1057937', '19446', '1037', '1999'],
       ['1071625', '4.21', '3439515', '154103', '313', '2012'],
       ['1012345', '4.38', '882195', '17375', '64', '1964'],
       ['966234', '3.86', '1308276', '35729', '464', '2002'],
       ['867513', '3.85', '1887312', '46482', '489', '2006'],
       ['856841', '4.12', '1687317', '29556', '503', '2005'],
       ['845532', '4.08', '932074', '29142', '272', '2004'],
       ['825095', '4.06', '446019', '10321', '239', '2000'],
       ['812420', '4.12', '1585265', '40876', '532', '2003'],
       ['803967', '4.17', '670386', '17090', '1463', '1987'],
       ['783461', '4.2', '2827116', '107478', '487', '2012'],
       ['775373', '3.99', '1623608', '46066', '194', '2011']], dtype='<U7')
```

```python
np.amax(np.array(db1).astype(float).astype(int), 0)
```

```
array([2959668,       4, 6223460,  169961,    1728,    2012])
```

```python
```

Exercitii:

* care este numarul randului cu cartea cea mai veche?
* Care este rating-ul mediu pentru cartile publicate dupa anii 2000?
* Care este rating-ul maxim pentru cartile publicate dupa anii 2000?
* Care este rating-ul maxim pentru cartile publicate inainte de anii 2000?

```python
#??
```

## Teme avansate

### Broadcasting

```python
# Compute outer product of vectors
v = np.array([1,2,3])  # v has shape (3,)
w = np.array([4,5])    # w has shape (2,)
# To compute an outer product, we first reshape v to be a column
# vector of shape (3, 1); we can then broadcast it against w to yield
# an output of shape (3, 2), which is the outer product of v and w:
# [[ 4  5]
#  [ 8 10]
#  [12 15]]
print(np.reshape(v, (3, 1)) * w)
```

```
[[ 4  5]
 [ 8 10]
 [12 15]]
```

```python
# We will add the vector v to each row of the matrix x,
# storing the result in the matrix y
x = np.array([[1,2,3], [4,5,6], [7,8,9], [10, 11, 12]])
v = np.array([1, 0, 1])
y = x + v  # Add v to each row of x using broadcasting
print(y)  # Prints "[[ 2  2  4]
          #          [ 5  5  7]
          #          [ 8  8 10]
          #          [11 11 13]]"
```

```
[[ 2  2  4]
 [ 5  5  7]
 [ 8  8 10]
 [11 11 13]]
```

### Operatii matematice avansate: inmultirea matricelor

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FuGWiVDcvkIiwW0BS8ruT%2Ffile.png?alt=media)

```python
x = np.array([[1,2],[3,4]])
y = np.array([[5,6],[7,8]])

v = np.array([9,10])
w = np.array([11, 12])

# Inner product of vectors; both produce 219
print(v.dot(w))
print(np.dot(v, w))

# Matrix / vector product; both produce the rank 1 array [29 67]
print(x.dot(v))
print(np.dot(x, v))

# Matrix / matrix product; both produce the rank 2 array
# [[19 22]
#  [43 50]]
print(x.dot(y))
print(np.dot(x, y))
```

```
219
219
[29 67]
[29 67]
[[19 22]
 [43 50]]
[[19 22]
 [43 50]]
```

### Matrice transpusa

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FcO3CdgDBmS62pKb2KhAo%2Ffile.png?alt=media)

```python
x = np.array([[1,2], [3,4]])
print(x)    # Prints "[[1 2]
            #          [3 4]]"
print(x.T)  # Prints "[[1 3]
            #          [2 4]]"

# Note that taking the transpose of a rank 1 array does nothing:
v = np.array([1,2,3])
print(v)    # Prints "[1 2 3]"
print(v.T)  # Prints "[1 2 3]"
```

```
[[1 2]
 [3 4]]
[[1 3]
 [2 4]]
[1 2 3]
[1 2 3]
```

```python
```
