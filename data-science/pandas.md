# Pandas

```python
import matplotlib.pyplot as plt
import numpy as np
```

### De ce Pandas?

Am vazut mai devreme ca libraria Numpy ne ofera libertatea de a lucra mai ușor cu mai multe dimensiuni decât listele de liste. Cu ajutorul oparțiilor vectorizate putem mai rapid și mai ușor să transformăm datele decât folosind loop-ul `for`.

![alt text](https://lh3.google.com/u/0/d/1ZdBEaPjKjixBzesAU433SdJF6Zo5sMr6=w1920-h888-iv1)

Totuși Numpy are câteva limitări:

* Numpy nu oferă posibilitatea de a avea denumirile de coloane
* Numpy permite de a avea doar un singur tip de date intr-un tensor și doar date de tip numerice\(nu putem avea string-uri\)
* Nu conține metode gata facute\(pre-built\) care să faciliteze procesul de analiză a datelor.

Limitările de mai sus sunt rezolvate de Pandas. Pandas nu este o ”înlocuire” a librăriei Numpy, ci mai degraba e o extensie a lui Numpy. Codul din spatele funcțiilor și metodelor din Pandas se bazează pe libraria Numpy astfel multe din conceptele anterior învățate le vom regăsi și aici.

## Import pandas

```python
import pandas as pd
```

Pandas are 2 clase principale: pandas.Series și pandas.DataFrame.

Care este diferența dintre aceste două clase?

## Pandas.DataFrame

```python
pd.DataFrame([[1,2,3,4],
              [5,6,7,8],
              [9,10,11,12]])
```

|  | 0 | 1 | 2 | 3 |
| :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | 2 | 3 | 4 |
| 1 | 5 | 6 | 7 | 8 |
| 2 | 9 | 10 | 11 | 12 |

```python
pd.DataFrame({'a':[1,2,3,4], 'b':[5,6,7,8], 'c':[9,10,11,12]})
```

|  | a | b | c |
| :--- | :--- | :--- | :--- |
| 0 | 1 | 5 | 9 |
| 1 | 2 | 6 | 10 |
| 2 | 3 | 7 | 11 |
| 3 | 4 | 8 | 12 |

```python
df = pd.DataFrame([[1,2,3,4],
              [5,6,7,8],
              [9,10,11,12]], columns = ['a', 'b', 'c', 'd'])

df
```

|  | a | b | c | d |
| :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | 2 | 3 | 4 |
| 1 | 5 | 6 | 7 | 8 |
| 2 | 9 | 10 | 11 | 12 |

Ce diferență este între primul, al doilea si al treilea tabel?

## Pandas.Series

```python
pd.Series([1, 2, 3, 4])
```

```text
0    1
1    2
2    3
3    4
dtype: int64
```

```python
pd.Series([1, 2, 3, 4], name = 'numbers')
```

```text
0    1
1    2
2    3
3    4
Name: numbers, dtype: int64
```

```python
df['a']
```

```text
0    1
1    5
2    9
Name: a, dtype: int64
```

Documentație:

* [pandas.Series](https://pandas.pydata.org/pandas-docs/stable/reference/api/pandas.Series.html)
* [pandas.DataFrame](https://pandas.pydata.org/pandas-docs/stable/reference/api/pandas.DataFrame.html)

## Elementele unui DataFrame

![alt text](https://lh3.google.com/u/0/d/1dfaugfz52unbXtlHFk6VkYDcgd6N25kH=w1920-h888-iv1)

## Cum convertim din Pandas in Numpy?

```python
df = pd.DataFrame([[1,2,3,4],
              [5,6,7,8],
              [9,10,11,12]], columns = ['a', 'b', 'c', 'd'])
```

```python
df.to_numpy()
```

```text
array([[ 1,  2,  3,  4],
       [ 5,  6,  7,  8],
       [ 9, 10, 11, 12]])
```

## Read a CSV with Pandas

Pentru a accesa un set de date, putem să folosim funcția read\_csv\(\) care primește ca argument path-ul, sau ”calea” spre fișierul CSV.

Această funcție ne returnează un DataFrame.

Documentație: [pandas.read\_csv\(\)](https://pandas.pydata.org/pandas-docs/stable/reference/api/pandas.read_csv.html)

```python
books = pd.read_csv('https://girlsgoitpublic.z6.web.core.windows.net/books_to_be_cleaned.csv')
```

Metoda head\(\), aparține clasei DataFrame. Această metodă ne permite să vizualizăm implicit primele 5 rânduri din tabel.

Însă putem să vizualizăm și mai multe rânduri dacă specificăm acest parametru.

```python
# indica argumentul 10 in functia head() si executa programul
# ce observi? dar daca scrii -5?

books.head()
```

  
    .dataframe tbody tr th:only-of-type {  
        vertical-align: middle;  
    }  
  
    .dataframe tbody tr th {  
        vertical-align: top;  
    }  
  
    .dataframe thead th {  
        text-align: right;  
    }  


|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |

Metoda tail\(\) este opusul metodei head\(\).

```python
books.tail()
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 195 | 17899948 | Rebecca | Daphne du Maurier | 328317 | 4.23 | 430751 | 22157 | 449p | 2013 | Classics |
| 196 | 32261 | Tess of the D'Urbervilles | Thomas Hardy | 88562 | 3.80 | 233821 | 8491 | 518p | 2003 | Classics |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas | 116688 | 4.25 | 731027 | 20622 | 1276p | 2003 | Classics |
| 198 | 17245 | Dracula | Bram Stoker | 636610 | 4.00 | 907768 | 24683 | 488p | 1986 | Classics |
| 199 | 662 | Atlas Shrugged | Ayn Rand | 247445 | 3.69 | 348149 | 17053 | 1168p | 1999 | Classics |

## Save a CSV file

```python
df.to_csv('saved_books.csv', index=False)
```

## Atribute

Atribute care ne ajuta sa investigam DataFrame-ului.

```python
books.columns
```

```text
Index(['Id', 'Name', 'Authour', 'Score', 'Rating', 'Rating Count',
       'Review Count', 'Page Count', 'Year', 'Genres'],
      dtype='object')
```

```python
books.dtypes
```

```text
Id                int64
Name             object
Authour          object
Score             int64
Rating          float64
Rating Count      int64
Review Count      int64
Page Count       object
Year              int64
Genres           object
dtype: object
```

```python
books.index
```

```text
RangeIndex(start=0, stop=200, step=1)
```

```python
books.shape
```

```text
(200, 10)
```

## Metode

### Metode de investigare a DataFrame-ului

```python
books.info()
```

```text
<class 'pandas.core.frame.DataFrame'>
RangeIndex: 200 entries, 0 to 199
Data columns (total 10 columns):
 #   Column        Non-Null Count  Dtype  
---  ------        --------------  -----  
 0   Id            200 non-null    int64  
 1   Name          200 non-null    object 
 2   Authour       200 non-null    object 
 3   Score         200 non-null    int64  
 4   Rating        191 non-null    float64
 5   Rating Count  200 non-null    int64  
 6   Review Count  200 non-null    int64  
 7   Page Count    200 non-null    object 
 8   Year          200 non-null    int64  
 9   Genres        186 non-null    object 
dtypes: float64(1), int64(5), object(4)
memory usage: 15.8+ KB
```

```python
# Ce informație ne oferă această metodă?
# Ce lucruri observați care trebuie să fie corectate?
```

```python
books.describe()
```

|  | Id | Score | Rating | Rating Count | Review Count | Year |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| count | 2.000000e+02 | 2.000000e+02 | 191.000000 | 2.000000e+02 | 200.000000 | 200.000000 |
| mean | 4.031287e+06 | 3.704144e+05 | 4.111152 | 1.001351e+06 | 28013.625000 | 2002.105000 |
| std | 1.050539e+07 | 4.211493e+05 | 0.234172 | 1.002018e+06 | 25818.271576 | 9.026147 |
| min | 1.000000e+00 | 7.125500e+04 | 3.410000 | 8.387000e+03 | 131.000000 | 1963.000000 |
| 25% | 5.123500e+03 | 1.046262e+05 | 3.970000 | 3.484505e+05 | 10847.000000 | 1999.750000 |
| 50% | 2.424650e+04 | 2.029340e+05 | 4.120000 | 6.543600e+05 | 19901.000000 | 2003.000000 |
| 75% | 2.756655e+05 | 4.999625e+05 | 4.270000 | 1.299898e+06 | 36667.500000 | 2006.000000 |
| max | 5.289286e+07 | 2.959668e+06 | 4.620000 | 6.808998e+06 | 169961.000000 | 2019.000000 |

#### Abaterea standarda

Ce este **std** sau **abaterea standarda** \(**standard deviation**\)?

Deja sunteți familiare cu histograma, știți ce înseamnă distribuția valorilor într-o histogramă. Un aspect interesant al distribuției este variabilitatea \(variability\) valorilor.

```python
a = [1, 1, 1, 1]
b = [1, 3, 3, 1]
c = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 19]

# In care din listele de mai sus, valorile variaza? In care variaza cel mai mult?
# Cat de mult variaza?
```

Ca sa ne dam seama cat de mult variaza valorile intr-o distributie trebuie sa investigam distanta valorilor de la media distributiei.

![alt text](https://lh3.google.com/u/0/d/1Mhr4YS-I5uluxcUXIgsyyseFarATTAZQ=w1920-h888-iv1)

Ulterior insumand aceste distante, si impartind totalul la numarul de valori din distributie vom obtine o medie aritmetica a distantelor care ne va indica cat de mult variaza valorile intr-o distributie.

```python
c = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 19]

c_mean = sum(c)/len(c)
distances = []
for num in c:
    distance = num - c_mean
    distances.append(distance)

distances
```

```text
[-1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5, -1.5, 16.5]
```

```python
sum(distances)
```

```text
0.0
```

De ce am obtinut suma = 0?

Din cate observam suma totala a volorilor sub medie este egala cu suma totala a valorilor deasupra mediei.

Ce trebuie sa facem ca sa nu obtinem suma = 0?

```python
# transformam distantele in valori absolute, astfel ne asiguram ca toate vor fi valori pozitive
distances = []
for num in c:
    distance = abs(num - c_mean)
    distances.append(distance)

distances
```

```text
[1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 1.5, 16.5]
```

```python
sum(distances)
```

```text
33.0
```

```python
# Impartim suma distantelor absolute la numarul de valori din distributie
sum(distances)/len(c)
```

```text
2.75
```

Valoarea de mai sus, 2.75, reprezinta **distanta medie absoluta** \(**mean absolute distance**\), sau in statistica se mai numeste **abaterea medie absoluta** \(**mean absolute deviation**\).

O alta solutie de a evita suma = 0, e sa ridicam la puterea a doua toate distantele.

```python
distances = []
for num in c:
    distance = (num - c_mean)**2
    distances.append(distance)

distances
```

```text
[2.25, 2.25, 2.25, 2.25, 2.25, 2.25, 2.25, 2.25, 2.25, 2.25, 2.25, 272.25]
```

Care este avantajul de a folosi valori patratice fata de valori absolute?

```python
# Impartim suma distantelor patratice la numarul de valori din distributie
sum(distances)/len(c)
```

```text
24.75
```

Valoarea 24.75 reprezinta **distanta medie patratica** \(**mean squared distance**\) sau **variatia** \(**variance**\) valorilor intr-o distributie.

Acum aceasta valoare trebuie sa fie standardizata sau adusa la o "starea normala", si vom face asta prin extragerea radacinii patratice.

```python
import math
math.sqrt(sum(distances)/len(c))
```

```text
4.9749371855331
```

Valoarea ~4.97 am obtinut-o extragand radacina patrata din distanta medie patratica, aceasta valoare reprezinta **abaterea standarda** \(**standard deviation**\).

La ce ne ajuta **abaterea standarda**?

Imaginati-va ca vreti sa cumparati o casa. Si pretul acestei case este de 60000 de euro. Va intrebati daca aceasta casa este scumpa, sau nu, fata de restul caselor de pe strada. Sa presupunem ca avem aceasta lista de preturi ale caselor de pe aceasta strada.

```python
preturi = [10700, 120000, 20000, 35000, 78000, 45500, 90000, 100000, 19000, 60000, 40000, 51000, 55000, 72000,
           20500, 35500, 79500, 45500, 90500, 105000, 19500, 65000, 43000, 51500, 135000, 55500, 72500, 115000, 29000, 150000]
mean = sum(preturi)/len(preturi)
print(mean)

import statistics
standard_dev = statistics.stdev(preturi)
print(standard_dev)


plt.hist(preturi)
plt.axvline(mean, color = 'r', label = 'medie')
plt.axvline(mean - standard_dev, color = 'g', label = 'std_sub_medie')
plt.axvline(mean + standard_dev, color = 'y', label = 'std_deasupra mediei')
plt.legend()
```

```text
63623.333333333336
36599.94990889104





<matplotlib.legend.Legend at 0x7f3c1d312c88>
```

Unde se plaseaza 60000 de euro? Intre axa verde si rosie, sau intre axa rosie si galbena? Observam ca 60000 de euro este un pret usor mai mic decat media preturilor caselor de pe strada dar totusi nu e un pret foarte mic pentru ca nu trece peste limita unei **abateri standarde** sub medie.

![alt text](https://lh3.google.com/u/0/d/1rYaOvCdqKBTKxErPwQgA1tTc5hTBcQmw=w1365-h888-iv1)

Surse aditionale:

* [Abatere standard](https://ro.wikipedia.org/wiki/Abatere_standard)

#### Percentile

Ce sunt **percentilele**?

Percentila este o mărime care se folosește în statistică și indică câte procente din populație distribuită crescător după o anumită valoare se află până la aceasta.

De exemplu până la a 10 percentilă se află 10 procente din populație. După a 10-a percentilă se află 90% din populație.

A 25-a, 50-a, 75-a percentila se mai numesc cuartile \(quartiles\): Q1, Q2, Q3.

```python
# Admitem că avem o populație de 10 persoane care au înălțimile de mai jos:
inaltimi = [150, 149, 168, 170, 190, 201, 182, 175, 163, 158]
```

```python
inaltimi_sortate = sorted(inaltimi)
inaltimi_sortate
```

```text
[149, 150, 158, 163, 168, 170, 175, 182, 190, 201]
```

```python
# La a câta percentilă se află persoana cu înălțimea 158? Ce înseamnă asta?

# Până la ce înălțime ajunge 50% din populație?

# Revenind la cărți: 
# Q1(25%) are valoarea rating-ului de 3.97. Ce inseamnă asta?
# Ce puteți să spuneți despre 75% din cărți si anul lor de editare?
```

### Metode: Series

```python
books['Rating'].max()
```

```text
4.62
```

```python
books['Rating'].min()
```

```text
3.41
```

```python
# Aflati minimul si maximul coloanei care indica numarul de pagini
# .....
```

```python
books['Rating'].sum()
```

```text
785.23
```

```python
# Aflati cate persoane in total au scris review-uri pentru carti?
# ....
```

```python
books['Rating'].mean()
```

```text
4.111151832460733
```

```python
books['Rating'].median()
```

```text
4.12
```

```python
books['Rating'].mode()
```

```text
0    4.23
dtype: float64
```

```python
books['Rating'].value_counts()
# ce observati referitor la functia model si valorile de mai jos?

# Parametri:
# normalize=True * 100
# sort = False
# ascending = True
# bins
# dropna = False
```

```text
4.23    7
4.12    5
4.36    5
3.98    5
4.26    5
       ..
3.69    1
3.95    1
4.54    1
3.83    1
3.77    1
Name: Rating, Length: 80, dtype: int64
```

Documentație: [Series.value\_counts\(\)](https://pandas.pydata.org/pandas-docs/stable/reference/api/pandas.Series.value_counts.html)

```python
# Aflati cate carti avem reprezentative pentru fiecare gen? 
# Depistati daca sunt date lipsa si aratati valorile in procente
# ...
```

```python
books['Rating'].sort_values(ascending=False)
```

```text
34     4.62
119    4.60
92     4.58
65     4.57
77     4.57
       ... 
151     NaN
155     NaN
160     NaN
185     NaN
186     NaN
Name: Rating, Length: 200, dtype: float64
```

```python
books['Authour'].unique()
```

```text
array(['Stephen Chbosky', 'Khaled Hosseini', 'Nicholas Sparks',
       'Margaret Wise Brown', 'Herman Melville', 'Cassandra Clare',
       'Mary Wollstonecraft Shelley', 'Dr. Seuss',
       'Gabriel García Márquez', 'Edgar Allan Poe', 'Louis Sachar',
       'Louisa May Alcott', 'Erich Maria Remarque', 'Richelle Mead',
       'Suzanne Collins', 'Rick Riordan', 'Arthur Conan Doyle',
       'William Goldman', "Madeleine L'Engle", 'Lewis Carroll',
       'Yann Martel', 'Jeffrey Eugenides', 'C.S. Lewis', 'Kahlil Gibran',
       'Alice Sebold', 'Jane Carruth', 'Fyodor Dostoyevsky',
       'Frank McCourt', 'Stephenie Meyer', 'William Golding',
       'Arthur Golden', 'Ken Follett', 'J.K. Rowling', 'Diana Gabaldon',
       'Eric Carle', 'Stieg Larsson', 'Umberto Eco', 'George R.R. Martin',
       'Patrick Rothfuss', 'Marion Zimmer Bradley', 'Jodi Picoult',
       'Alexandre Dumas', 'Franz Kafka', 'Wilson Rawls', 'Jack London',
       'J.D. Salinger', 'Kurt Vonnegut Jr.', 'Amy Tan', 'Ian McEwan',
       'Margaret Mitchell', 'Charles Dickens', 'Philip Pullman',
       'J.M. Barrie', 'Frank Herbert', 'George Orwell', 'Paulo Coelho',
       'Kathryn Stockett', 'John Steinbeck', 'S.E. Hinton', 'John Green',
       'Miguel de Cervantes Saavedra', 'John Irving', 'Betty  Smith',
       'Jay Asher', 'Charlotte Brontë', 'William Shakespeare',
       'Alan Moore', 'Stephen King', 'Christopher Paolini', 'Victor Hugo',
       'Elizabeth Gilbert', 'Hermann Hesse', 'Barbara Kingsolver',
       'Milan Kundera', 'Cormac McCarthy', 'Richard Bach', 'Homer',
       'Ernest Hemingway', 'Alice Walker', 'Antoine de Saint-Exupéry',
       'Margaret Atwood', 'Maurice Sendak', 'Dante Alighieri',
       'Agatha Christie', 'Katherine Paterson', 'A.A. Milne',
       'Norton Juster', 'Emily Brontë', 'Shel Silverstein', 'Roald Dahl',
       'Terry Pratchett', 'Jack Kerouac', 'Truman Capote',
       'Pearl S. Buck', 'Oscar Wilde', 'J.R.R. Tolkien', 'Joseph Conrad',
       'Anita Diamant', 'Colleen McCullough', 'Markus Zusak',
       'Zora Neale Hurston', 'Laura Ingalls Wilder', 'Neil Gaiman',
       'Richard  Adams', 'Geoffrey Chaucer', 'Nathaniel Hawthorne',
       'Larry McMurtry', 'Aldous Huxley', 'Frances Hodgson Burnett',
       'Joseph Heller', 'Mario Puzo', 'Veronica Roth', 'Gustave Flaubert',
       'Audrey Niffenegger', 'Douglas Adams', 'L.M. Montgomery',
       'Vladimir Nabokov', 'Anne Rice', 'Orson Scott Card', 'E.L. James',
       'Leo Tolstoy', 'Carlos Ruiz Zafón', 'Mitch Albom', 'Sara Gruen',
       'Mikhail Bulgakov', 'Ray Bradbury', 'Mark Twain',
       'F. Scott Fitzgerald', 'Michael Ende', 'E.B. White',
       'Patrick Süskind', 'Becca Fitzpatrick', 'Mark Haddon',
       'James Dashner', 'L. Frank Baum', 'Anthony Burgess', 'Ken Kesey',
       'Sylvia Plath', 'Daniel Keyes', 'Lois Lowry', 'James Joyce',
       'Dan Brown', 'Chuck Palahniuk', 'Jean M. Auel', 'Albert Camus',
       'Harper Lee', 'Reduced Shakespeare Company',
       'Robert Louis Stevenson', 'Jane Austen', 'Sue Monk Kidd',
       'Daphne du Maurier', 'Thomas Hardy', 'Bram Stoker', 'Ayn Rand'],
      dtype=object)
```

```python
books['Authour'].nunique()
```

```text
154
```

### Metode înlănțuite

```python
books['Rating'].value_counts()

# .sum()
```

```text
4.23    7
4.12    5
4.36    5
3.98    5
4.26    5
       ..
3.69    1
3.95    1
4.54    1
3.83    1
3.77    1
Name: Rating, Length: 80, dtype: int64
```

```python
books['Rating'].value_counts().head()
```

```text
4.23    7
4.12    5
4.36    5
3.98    5
4.26    5
Name: Rating, dtype: int64
```

```python
books['Rating'].value_counts().head().hist()
```

## Selectarea cu loc\[\] și iloc\[\]

### loc\[\]

```python
books.head()
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |

```python
#sintaxa pentru selectare unui item din DataFrame: 

# df.loc[row_label,column_label]

books.loc[0,'Id']
```

```text
22628
```

```python
# Selectăm o coloană

books.loc[:,'Id']

# prescurtare convențională:
# books['Id']
```

```text
0         22628
1         77203
2      35545737
3         32929
4        153747
         ...   
195    17899948
196       32261
197        7126
198       17245
199         662
Name: Id, Length: 200, dtype: int64
```

```python
# selectam o lista de coloane
books.loc[:,['Name', 'Score']]

# prescurtare conventionala:
# books[['Name', 'Score']]
```

|  | Name | Score |
| :--- | :--- | :--- |
| 0 | The Perks of Being a Wallflower | 745557 |
| 1 | The Kite Runner | 427631 |
| 2 | A Walk to Remember | 104093 |
| 3 | Goodnight Moon | 93488 |
| 4 | Moby-Dick or, the Whale | 200963 |
| ... | ... | ... |
| 195 | Rebecca | 328317 |
| 196 | Tess of the D'Urbervilles | 88562 |
| 197 | The Count of Monte Cristo | 116688 |
| 198 | Dracula | 636610 |
| 199 | Atlas Shrugged | 247445 |

200 rows × 2 columns

```python
# selectam un slice de coloane
books.loc[:,'Id':'Authour']
```

|  | Id | Name | Authour |
| :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky |
| 1 | 77203 | The Kite Runner | Khaled Hosseini |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville |
| ... | ... | ... | ... |
| 195 | 17899948 | Rebecca | Daphne du Maurier |
| 196 | 32261 | Tess of the D'Urbervilles | Thomas Hardy |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas |
| 198 | 17245 | Dracula | Bram Stoker |
| 199 | 662 | Atlas Shrugged | Ayn Rand |

200 rows × 3 columns

```python
# selecteaza un rand
books.loc[0]
```

```text
Id                                        22628
Name            The Perks of Being a Wallflower
Authour                         Stephen Chbosky
Score                                    745557
Rating                                      4.2
Rating Count                            1219410
Review Count                              56409
Page Count                                 213p
Year                                       1999
Genres                                      NaN
Name: 0, dtype: object
```

```python
# selecteaza mai multe randuri
books.loc[[2, 4, 6]]
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |
| 6 | 35031085 | Frankenstein: The 1818 Text | Mary Wollstonecraft Shelley | 430783 | 3.80 | 1132408 | 31805 | 288p | 2018 | Classics |

```python
# selecteaza un slice de randuri dintr-un DataFrame
books.loc[0:2]

# prescurtare conventionala:
# books[0:2]
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |

```python
# exercitiu: vrem sa selectăm de la rândul 2 până la 4 și de la coloana 'name' la coloana 'score'
# .....
```

```python
# selectează un item din Series
books['Name'].loc[4]

# prescurtare convențională:
# books['Name'][4]
```

```text
'Moby-Dick or, the Whale'
```

```python
# selectează o listă de itemi din Series
books['Name'].loc[[2, 5, 8]]

# prescurtare convențională:
# books['Name'][[2, 5, 8]]
```

```text
2                            A Walk to Remember
5    City of Bones (The Mortal Instruments, #1)
8                 One Hundred Years of Solitude
Name: Name, dtype: object
```

```python
# selectează un slice de itemi din Series
books['Name'].loc[3:4]

# prescurtare convențională:
# books['Name'][3:5]
```

```text
3             Goodnight Moon
4    Moby-Dick or, the Whale
Name: Name, dtype: object
```

![alt text](https://lh3.google.com/u/0/d/1ITLNj2WgmSJmI7pBesq9L2vckQgwxlux=w1920-h888-iv1)

```python
# sarcini.....

# .......
```

### iloc\[\]

```python
books.head()
```

  
    .dataframe tbody tr th:only-of-type {  
        vertical-align: middle;  
    }  
  
    .dataframe tbody tr th {  
        vertical-align: top;  
    }  
  
    .dataframe thead th {  
        text-align: right;  
    }  


|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |

```python
# sintaxă pentru iloc[]: df.iloc[row_index, column_index]

books.iloc[0, 0]
```

```text
22628
```

```python
books.iloc[[2, 4, 6]]
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |
| 6 | 35031085 | Frankenstein: The 1818 Text | Mary Wollstonecraft Shelley | 430783 | 3.80 | 1132408 | 31805 | 288p | 2018 | Classics |

```python
# sarcini..........
# ...........
```

## Selectearea prin indexarea cu boolean

```python
books['Year']==2006
```

```text
0      False
1      False
2      False
3      False
4      False
       ...  
195    False
196    False
197    False
198    False
199    False
Name: Year, Length: 200, dtype: bool
```

```python
bool_2006 = books['Year'] == 2006
```

![alt text](https://lh3.google.com/u/0/d/1SFcbyt9IqkgkRCq4qF31g3a1kjwCBeLS=w1920-h888-iv1)

```python
books[bool_2006]
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 20 | 4214 | Life of Pi | Yann Martel | 485940 | 3.91 | 1309184 | 46807 | 460p | 2006 | Fiction |
| 24 | 12232938 | The Lovely Bones | Alice Sebold | 508104 | 3.81 | 1977504 | 40105 | 372p | 2006 | Fiction |
| 28 | 41865 | Twilight \(Twilight, \#1\) | Stephenie Meyer | 1452846 | 3.59 | 4839503 | 102492 | 501p | 2006 | Young Adult |
| 51 | 7763 | The Joy Luck Club | Amy Tan | 81845 | 3.93 | 590245 | 9020 | 288p | 2006 | Fiction |
| 64 | 28187 | The Lightning Thief \(Percy Jackson and the Oly... | Rick Riordan | 573399 | 4.25 | 1922316 | 58816 | 375p | 2006 | Fantasy |
| 69 | 14891 | A Tree Grows in Brooklyn | Betty Smith | 307886 | 4.27 | 380787 | 20170 | 496p | 2006 | Classics |
| 77 | 1 | Harry Potter and the Half-Blood Prince \(Harry ... | J.K. Rowling | 155771 | 4.57 | 2363861 | 38035 | 652p | 2006 | Fantasy |
| 86 | 99561 | Looking for Alaska | John Green | 138376 | NaN | 1084064 | 55417 | 221p | 2006 | Young Adult |
| 87 | 6288 | The Road | Cormac McCarthy | 298802 | 3.97 | 700221 | 45005 | 241p | 2006 | Fiction |
| 88 | 71728 | Jonathan Livingston Seagull | Richard Bach | 80428 | 3.84 | 196608 | 7693 | 112p | 2006 | NaN |
| 90 | 1381 | The Odyssey | Homer | 488592 | 3.77 | 844968 | 11868 | 541p | 2006 | Classics |
| 113 | 12067 | Good Omens: The Nice and Accurate Prophecies o... | Terry Pratchett | 90852 | 4.25 | 520130 | 26583 | 491p | 2006 | Fantasy |
| 123 | 19063 | The Book Thief | Markus Zusak | 1343484 | 4.37 | 1779061 | 111157 | 552p | 2006 | NaN |
| 125 | 37415 | Their Eyes Were Watching God | Zora Neale Hurston | 95935 | 3.92 | 253858 | 12964 | 219p | 2006 | Classics |
| 153 | 28186 | The Sea of Monsters \(Percy Jackson and the Oly... | Rick Riordan | 82179 | 4.24 | 717600 | 25902 | 279p | 2006 | Fantasy |
| 161 | 24583 | The Adventures of Tom Sawyer | Mark Twain | 146031 | 3.91 | 739818 | 9690 | 244p | 2006 | Classics |
| 175 | 6514 | The Bell Jar | Sylvia Plath | 345502 | 4.01 | 573995 | 22336 | 294p | 2006 | Classics |
| 177 | 3636 | The Giver \(The Giver, \#1\) | Lois Lowry | 407467 | 4.13 | 1729590 | 64308 | 208p | 2006 | Young Adult |
| 182 | 968 | The Da Vinci Code \(Robert Langdon, \#2\) | Dan Brown | 867513 | 3.85 | 1887312 | 46482 | 489p | 2006 | Fiction |
| 190 | 2657 | To Kill a Mockingbird | Harper Lee | 2235010 | 4.28 | 4377280 | 89241 | 324p | 2006 | Classics |

![alt text](https://lh3.google.com/u/0/d/1gzaMpPpzMc8XQrF2XNbxQIf-R-IH5Ckt=w1920-h888-iv1)

Indexarea boolean de fapt e selectarea unui slice de rânduri.

```python
# sa ne amintim cum selectăm un slice într-un DataFrame 
books.loc[2:3, 'Name']
```

```text
2    A Walk to Remember
3        Goodnight Moon
Name: Name, dtype: object
```

![alt text](https://lh3.google.com/u/0/d/1_qRyOSpKmex2Bx6JrRxXlvzAECcAAhh_=w1920-h888-iv1)

```python
# acelasi principiu il folosim cand vrem sa selectam doar numele cartilor din anul 2006
books.loc[bool_2006, 'Name']
```

```text
20                                            Life of Pi
24                                      The Lovely Bones
28                               Twilight (Twilight, #1)
51                                     The Joy Luck Club
64     The Lightning Thief (Percy Jackson and the Oly...
69                              A Tree Grows in Brooklyn
77     Harry Potter and the Half-Blood Prince (Harry ...
86                                    Looking for Alaska
87                                              The Road
88                           Jonathan Livingston Seagull
90                                           The Odyssey
113    Good Omens: The Nice and Accurate Prophecies o...
123                                       The Book Thief
125                         Their Eyes Were Watching God
153    The Sea of Monsters (Percy Jackson and the Oly...
161                         The Adventures of Tom Sawyer
175                                         The Bell Jar
177                            The Giver (The Giver, #1)
182               The Da Vinci Code (Robert Langdon, #2)
190                                To Kill a Mockingbird
Name: Name, dtype: object
```

```python
# exercițiu: 
# 1. selectati toate cartile din genul "Historical" si afisati doar numele acestora

# 2. selectati toate cartile din genul 'Romance' si afisati numele si scorul acestora

# 3. selectati toate cartile din genul 'Horror' care sa contina coloanele de la 'rating' pana la 'page_count'
```

Variabila bool\_2006 e doar o variabila. Putem sa scriem expresia boolean direct in sintaxa de selectare.

`bool_2006 = books['Year'] == 2006`

expresia boolean: `books['Year'] == 2006`

```python
books.loc[books['Year']==2006, 'Name']
```

```text
20                                            Life of Pi
24                                      The Lovely Bones
28                               Twilight (Twilight, #1)
51                                     The Joy Luck Club
64     The Lightning Thief (Percy Jackson and the Oly...
69                              A Tree Grows in Brooklyn
77     Harry Potter and the Half-Blood Prince (Harry ...
86                                    Looking for Alaska
87                                              The Road
88                           Jonathan Livingston Seagull
90                                           The Odyssey
113    Good Omens: The Nice and Accurate Prophecies o...
123                                       The Book Thief
125                         Their Eyes Were Watching God
153    The Sea of Monsters (Percy Jackson and the Oly...
161                         The Adventures of Tom Sawyer
175                                         The Bell Jar
177                            The Giver (The Giver, #1)
182               The Da Vinci Code (Robert Langdon, #2)
190                                To Kill a Mockingbird
Name: Name, dtype: object
```

Ce alte expresii boolean mai cunoastem? Putem sa le folosim cand vrem ca și condiții de selectare?

```python
# Enumerați exemple de expresii boolean și executati 3 selecții din tabel
# ....
```

## Selectarea cu operatorii boolean

![alt text](https://lh3.google.com/u/0/d/1oslJ4JTELZ2E_E8uMZ7n4cAL-gHuh1Wt=w1920-h888-iv1)

```python
books[(books['Year'] == 2006) & (books['Rating'] >= 4)]
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 64 | 28187 | The Lightning Thief \(Percy Jackson and the Oly... | Rick Riordan | 573399 | 4.25 | 1922316 | 58816 | 375p | 2006 | Fantasy |
| 69 | 14891 | A Tree Grows in Brooklyn | Betty Smith | 307886 | 4.27 | 380787 | 20170 | 496p | 2006 | Classics |
| 77 | 1 | Harry Potter and the Half-Blood Prince \(Harry ... | J.K. Rowling | 155771 | 4.57 | 2363861 | 38035 | 652p | 2006 | Fantasy |
| 113 | 12067 | Good Omens: The Nice and Accurate Prophecies o... | Terry Pratchett | 90852 | 4.25 | 520130 | 26583 | 491p | 2006 | Fantasy |
| 123 | 19063 | The Book Thief | Markus Zusak | 1343484 | 4.37 | 1779061 | 111157 | 552p | 2006 | NaN |
| 153 | 28186 | The Sea of Monsters \(Percy Jackson and the Oly... | Rick Riordan | 82179 | 4.24 | 717600 | 25902 | 279p | 2006 | Fantasy |
| 175 | 6514 | The Bell Jar | Sylvia Plath | 345502 | 4.01 | 573995 | 22336 | 294p | 2006 | Classics |
| 177 | 3636 | The Giver \(The Giver, \#1\) | Lois Lowry | 407467 | 4.13 | 1729590 | 64308 | 208p | 2006 | Young Adult |
| 190 | 2657 | To Kill a Mockingbird | Harper Lee | 2235010 | 4.28 | 4377280 | 89241 | 324p | 2006 | Classics |

```python
books[(books['Year'] == 2006) | (books['Rating'] >= 4)]
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 5 | 256683 | City of Bones \(The Mortal Instruments, \#1\) | Cassandra Clare | 713154 | 4.10 | 1577035 | 60639 | 485p | 2007 | Fantasy |
| ... | ... | ... | ... | ... | ... | ... | ... | ... | ... | ... |
| 193 | 1885 | Pride and Prejudice | Jane Austen | 1942736 | 4.26 | 2905431 | 64486 | 279p | 2000 | Classics |
| 194 | 37435 | The Secret Life of Bees | Sue Monk Kidd | 178535 | 4.05 | 1098795 | 30073 | 302p | 2003 | Fiction |
| 195 | 17899948 | Rebecca | Daphne du Maurier | 328317 | 4.23 | 430751 | 22157 | 449p | 2013 | Classics |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas | 116688 | 4.25 | 731027 | 20622 | 1276p | 2003 | Classics |
| 198 | 17245 | Dracula | Bram Stoker | 636610 | 4.00 | 907768 | 24683 | 488p | 1986 | Classics |

144 rows × 10 columns

```python
books[~(books['Year'] == 2006)]
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |
| ... | ... | ... | ... | ... | ... | ... | ... | ... | ... | ... |
| 195 | 17899948 | Rebecca | Daphne du Maurier | 328317 | 4.23 | 430751 | 22157 | 449p | 2013 | Classics |
| 196 | 32261 | Tess of the D'Urbervilles | Thomas Hardy | 88562 | 3.80 | 233821 | 8491 | 518p | 2003 | Classics |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas | 116688 | 4.25 | 731027 | 20622 | 1276p | 2003 | Classics |
| 198 | 17245 | Dracula | Bram Stoker | 636610 | 4.00 | 907768 | 24683 | 488p | 1986 | Classics |
| 199 | 662 | Atlas Shrugged | Ayn Rand | 247445 | 3.69 | 348149 | 17053 | 1168p | 1999 | Classics |

180 rows × 10 columns

```python
# Exercitii
```

## Înlocuirea datelor din coloană

```python
books['Genres'].value_counts()
```

```text
Classics           72
Fiction            34
Fantasy            30
Young Adult        17
Childrens          11
Horror              4
Science Fiction     4
Nonfiction          3
Romance             3
Historical          3
Poetry              1
Plays               1
Cultural            1
Sequential Art      1
Mystery             1
Name: Genres, dtype: int64
```

```python
books.loc[books['Genres']=='Science Fiction', 'Genres'] = 'SciFi'

books['Genres'].value_counts()
```

```text
Classics          72
Fiction           34
Fantasy           30
Young Adult       17
Childrens         11
Horror             4
SciFi              4
Nonfiction         3
Romance            3
Historical         3
Poetry             1
Plays              1
Cultural           1
Sequential Art     1
Mystery            1
Name: Genres, dtype: int64
```

## Crearea coloanelor noi

```python
df = pd.DataFrame([[1,2,3,4],
              [5,6,7,8],
              [9,10,11,12]], columns = ['a', 'b', 'c', 'd'])
df
```

|  | a | b | c | d |
| :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | 2 | 3 | 4 |
| 1 | 5 | 6 | 7 | 8 |
| 2 | 9 | 10 | 11 | 12 |

```python
df['e'] = 1
```

```python
df
```

|  | a | b | c | d | e |
| :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | 2 | 3 | 4 | 1 |
| 1 | 5 | 6 | 7 | 8 | 1 |
| 2 | 9 | 10 | 11 | 12 | 1 |

## Operațiuni vectorizate

```python
df['de'] = df['d']+df['e']
```

```python
df
```

|  | a | b | c | d | e | de |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | 2 | 3 | 4 | 1 | 5 |
| 1 | 5 | 6 | 7 | 8 | 1 | 9 |
| 2 | 9 | 10 | 11 | 12 | 1 | 13 |

Operatii:

* `series_a + series_b` - **Adunare**
* `series_a - series_b` - **Scadere**
* `series_a * series_b` - **înmulțire**
* `series_a / series_b` - **Împărțire**

```python
df['f'] = df['d']**df['de']
df
```

|  | a | b | c | d | e | de | f |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | 2 | 3 | 4 | 1 | 5 | 1024 |
| 1 | 5 | 6 | 7 | 8 | 1 | 9 | 134217728 |
| 2 | 9 | 10 | 11 | 12 | 1 | 13 | 106993205379072 |

```python
df = pd.DataFrame([['a', 'b'],
              ['c', 'd'],
              ['e', 'f']], columns = ['A', 'B'])
```

```python
df
```

|  | A | B |
| :--- | :--- | :--- |
| 0 | a | b |
| 1 | c | d |
| 2 | e | f |

```python
df['C'] = df['A'] + df['B']
```

```python
df
```

|  | A | B | C |
| :--- | :--- | :--- | :--- |
| 0 | a | b | ab |
| 1 | c | d | cd |
| 2 | e | f | ef |

```python
# exercitiu: Aflati diferenta dintre numarul de persoane care dau review si numarul de peroane care pun note. Creati o coloana noua pentru rezultat.
```

## Curățirea datelor

### Modificarea denumirilor de coloane

```python
books.columns
```

```text
Index(['Id', 'Name', 'Authour', 'Score', 'Rating', 'Rating Count',
       'Review Count', 'Page Count', 'Year', 'Genres'],
      dtype='object')
```

Convențional numele coloanelor din Pandas trebuie sa fie în formatul `snake_case`.

```python
books_copy = books.copy()
books_copy.rename(columns={
    'Id':'id',
    'Name':'name',
    'Authour':'authour',
    'Score':'score',
    'Rating':'rating',
    'Rating Count': 'rating_count',
    'Review Count': 'review_count',
    'Page Count': 'page_count',
    'Year':'year',
    'Genres':'genres'
    })
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |
| ... | ... | ... | ... | ... | ... | ... | ... | ... | ... | ... |
| 195 | 17899948 | Rebecca | Daphne du Maurier | 328317 | 4.23 | 430751 | 22157 | 449p | 2013 | Classics |
| 196 | 32261 | Tess of the D'Urbervilles | Thomas Hardy | 88562 | 3.80 | 233821 | 8491 | 518p | 2003 | Classics |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas | 116688 | 4.25 | 731027 | 20622 | 1276p | 2003 | Classics |
| 198 | 17245 | Dracula | Bram Stoker | 636610 | 4.00 | 907768 | 24683 | 488p | 1986 | Classics |
| 199 | 662 | Atlas Shrugged | Ayn Rand | 247445 | 3.69 | 348149 | 17053 | 1168p | 1999 | Classics |

200 rows × 10 columns

```python
books_copy
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |
| ... | ... | ... | ... | ... | ... | ... | ... | ... | ... | ... |
| 195 | 17899948 | Rebecca | Daphne du Maurier | 328317 | 4.23 | 430751 | 22157 | 449p | 2013 | Classics |
| 196 | 32261 | Tess of the D'Urbervilles | Thomas Hardy | 88562 | 3.80 | 233821 | 8491 | 518p | 2003 | Classics |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas | 116688 | 4.25 | 731027 | 20622 | 1276p | 2003 | Classics |
| 198 | 17245 | Dracula | Bram Stoker | 636610 | 4.00 | 907768 | 24683 | 488p | 1986 | Classics |
| 199 | 662 | Atlas Shrugged | Ayn Rand | 247445 | 3.69 | 348149 | 17053 | 1168p | 1999 | Classics |

200 rows × 10 columns

```python
# ce trebuie sa facem ca sa salvam modificarea?
# .....
```

```python
# salvam modificarile:
# solutia 1
books_copy_renamed_col =  ...
```

```python
# salvam modificarile:
# solutia 2
books_copy.rename(columns={
    'Id':'id',
    'Name':'name',
    'Authour':'authour',
    'Score':'score',
    'Rating':'rating',
    'Rating Count': 'rating_count',
    'Review Count': 'review_count',
    'Page Count': 'page_count',
    'Year':'year',
    'Genres':'genres'
    }, inplace = True)
```

```python
books.head()
```

|  | Id | Name | Authour | Score | Rating | Rating Count | Review Count | Page Count | Year | Genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |

```python
'Name'.lower()
```

```text
'name'
```

```python
'Rating Count'.replace(' ', '_')


# folosește conceptul de metode inlanțuite
# .lower()
```

```text
'Rating_Count'
```

```python
def clean_col(col):
    col = col.replace(' ', '_').lower()
    return col
```

```python
new_columns = []
for col in books.columns:
    column = clean_col(col)
    new_columns.append(column)

new_columns
```

```text
['id',
 'name',
 'authour',
 'score',
 'rating',
 'rating_count',
 'review_count',
 'page_count',
 'year',
 'genres']
```

```python
books.columns = new_columns
```

```python
books.head()
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |

### Datele lipsă

```python
books.isnull()
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | False | False | False | False | False | False | False | False | False | True |
| 1 | False | False | False | False | False | False | False | False | False | False |
| 2 | False | False | False | False | False | False | False | False | False | False |
| 3 | False | False | False | False | False | False | False | False | False | False |
| 4 | False | False | False | False | False | False | False | False | False | False |
| ... | ... | ... | ... | ... | ... | ... | ... | ... | ... | ... |
| 195 | False | False | False | False | False | False | False | False | False | False |
| 196 | False | False | False | False | False | False | False | False | False | False |
| 197 | False | False | False | False | False | False | False | False | False | False |
| 198 | False | False | False | False | False | False | False | False | False | False |
| 199 | False | False | False | False | False | False | False | False | False | False |

200 rows × 10 columns

```python
books.isnull().sum()
```

```text
id               0
name             0
authour          0
score            0
rating           9
rating_count     0
review_count     0
page_count       0
year             0
genres          14
dtype: int64
```

#### Date numerice

**Ștergerea datelor**

Cea mai ușoară abordare e să ștergem aceste date.

```python
books_notnull = books.dropna()
books_notnull.info()
```

```text
<class 'pandas.core.frame.DataFrame'>
Int64Index: 177 entries, 1 to 199
Data columns (total 10 columns):
 #   Column        Non-Null Count  Dtype  
---  ------        --------------  -----  
 0   id            177 non-null    int64  
 1   name          177 non-null    object 
 2   authour       177 non-null    object 
 3   score         177 non-null    int64  
 4   rating        177 non-null    float64
 5   rating_count  177 non-null    int64  
 6   review_count  177 non-null    int64  
 7   page_count    177 non-null    object 
 8   year          177 non-null    int64  
 9   genres        177 non-null    object 
dtypes: float64(1), int64(5), object(4)
memory usage: 15.2+ KB
```

```python
import seaborn as sns

sns.heatmap(books.isnull(), cbar=False)
```

```python
books.dropna(axis='columns')
```

|  | id | name | authour | score | rating\_count | review\_count | page\_count | year |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 1219410 | 56409 | 213p | 1999 |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 2365531 | 72036 | 371p | 2004 |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 658664 | 12918 | 215p | 2000 |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 296501 | 5729 | 32p | 2007 |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 470744 | 15149 | 654p | 2003 |
| ... | ... | ... | ... | ... | ... | ... | ... | ... |
| 195 | 17899948 | Rebecca | Daphne du Maurier | 328317 | 430751 | 22157 | 449p | 2013 |
| 196 | 32261 | Tess of the D'Urbervilles | Thomas Hardy | 88562 | 233821 | 8491 | 518p | 2003 |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas | 116688 | 731027 | 20622 | 1276p | 2003 |
| 198 | 17245 | Dracula | Bram Stoker | 636610 | 907768 | 24683 | 488p | 1986 |
| 199 | 662 | Atlas Shrugged | Ayn Rand | 247445 | 348149 | 17053 | 1168p | 1999 |

200 rows × 8 columns

```python
books.dropna(subset=['rating'])
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | NaN |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |
| ... | ... | ... | ... | ... | ... | ... | ... | ... | ... | ... |
| 195 | 17899948 | Rebecca | Daphne du Maurier | 328317 | 4.23 | 430751 | 22157 | 449p | 2013 | Classics |
| 196 | 32261 | Tess of the D'Urbervilles | Thomas Hardy | 88562 | 3.80 | 233821 | 8491 | 518p | 2003 | Classics |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas | 116688 | 4.25 | 731027 | 20622 | 1276p | 2003 | Classics |
| 198 | 17245 | Dracula | Bram Stoker | 636610 | 4.00 | 907768 | 24683 | 488p | 1986 | Classics |
| 199 | 662 | Atlas Shrugged | Ayn Rand | 247445 | 3.69 | 348149 | 17053 | 1168p | 1999 | Classics |

191 rows × 10 columns

O altă abordare este înlocuirea datelor lipsă cu valori.

**Estimarea valorilor lipsă**

Puteți să investigați setul de date și să estimați valorile lipsă bazându-vă pe dependențele față de valorile din alte coloane.

![alt text](https://lh3.google.com/u/0/d/1qUPSMSbXOfZ_ekvDAOUPvI9FdZ5RYCZ6=w1920-h888-iv1)

Dependența rating-ului față de celelalte valori este foarte mică, respectiv nu putem estima valorile lipsă după acest criteriu.

**Înlocuirea cu media valorilor din coloană.**

```python
books_miss_val1 = books.copy()
```

```python
rating_mean = books_miss_val1['rating'].mean()
rating_mean
```

```text
4.111151832460733
```

```python
books_miss_val1['rating'].fillna(rating_mean, inplace=True)
```

**Înlocuirea cu mediana valorilor din coloană.**

```python
books_miss_val2 = books.copy()
```

```python
rating_median = books_miss_val2['rating'].median()
rating_median
```

```text
4.12
```

```python
books_miss_val2['rating'].fillna(rating_median, inplace=True)
```

```python
plt.hist(books['rating']);
plt.axvline(books['rating'].mean(), color='r', label = "mean")
plt.axvline(books['rating'].median(), color='y', label = "median")
plt.legend()
```

```text
/usr/local/lib/python3.6/dist-packages/numpy/lib/histograms.py:839: RuntimeWarning: invalid value encountered in greater_equal
  keep = (tmp_a >= first_edge)
/usr/local/lib/python3.6/dist-packages/numpy/lib/histograms.py:840: RuntimeWarning: invalid value encountered in less_equal
  keep &= (tmp_a <= last_edge)





<matplotlib.legend.Legend at 0x7f8ddc0785c0>
```

Ce abordare să folosiți?

Depinde de scopul proiectului.

Dacă aveți nevoie de o acuratețe maximă în date pentru a efectua studii statistice, atunci este indicat ca datele să fie șterse.

Dacă aceste date trebuie sa le folosiți pentru a antrena un model în Machine Learning și setul de date este foarte mic, atunci puteți sa înlocuiți aceste date cu media sau mediana.

Înlocuiți cu media aritmetică atunci când distribuția este aproximativ normală, pentru că media și mediana se află la mijloc și aproape coincid, respectiv valorile lor nu se vor schimba foarte mult.

Atunci cand aveți o distribuție asimetrică, cu multe valori extreme, este indicat să folosiți mediana, pentru că în cazul dat media aritmetică este deplasată față de zona unde se concentrează cele mai multe valori și va influența distribuția.

Dacă datele poti fi estimate pe baza dependențelor față de alți parametri din setul de date, atunci asta ar fi o soluție care ne garantează valori cât de cât apropiate de realitate.

În cazul dat, vom opta pentru ștergerea datelor.

```python
books.dropna(subset=['rating'], inplace = True)
```

#### Date categoriale

**Crearea categoriei valorilor lipsă.**

```python
books['genres'].value_counts(dropna = False)
```

```text
Classics          68
Fiction           34
Fantasy           27
Young Adult       16
NaN               14
Childrens         11
Horror             4
SciFi              4
Nonfiction         3
Historical         3
Romance            2
Poetry             1
Plays              1
Cultural           1
Sequential Art     1
Mystery            1
Name: genres, dtype: int64
```

```python
books['genres'].fillna('Unknown', inplace = True)
```

```python
books.head()
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213p | 1999 | Unknown |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371p | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215p | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32p | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654p | 2003 | Classics |

```python
books.isnull().sum()
```

```text
id              0
name            0
authour         0
score           0
rating          0
rating_count    0
review_count    0
page_count      0
year            0
genres          0
dtype: int64
```

### Modificarea datelor

```python
books.info()
```

```text
<class 'pandas.core.frame.DataFrame'>
Int64Index: 191 entries, 0 to 199
Data columns (total 10 columns):
 #   Column        Non-Null Count  Dtype  
---  ------        --------------  -----  
 0   id            191 non-null    int64  
 1   name          191 non-null    object 
 2   authour       191 non-null    object 
 3   score         191 non-null    int64  
 4   rating        191 non-null    float64
 5   rating_count  191 non-null    int64  
 6   review_count  191 non-null    int64  
 7   page_count    191 non-null    object 
 8   year          191 non-null    int64  
 9   genres        191 non-null    object 
dtypes: float64(1), int64(5), object(4)
memory usage: 16.4+ KB
```

```python
books['page_count'].head()
```

```text
0    213p
1    371p
2    215p
3     32p
4    654p
Name: page_count, dtype: object
```

```python
books["page_count"] = books["page_count"].str.replace('p','')
```

```python
books['page_count'].head()
```

```text
0    213
1    371
2    215
3     32
4    654
Name: page_count, dtype: object
```

```python
books['page_count'] = books['page_count'].astype('int')
```

```python
books.info()
```

```text
<class 'pandas.core.frame.DataFrame'>
Int64Index: 191 entries, 0 to 199
Data columns (total 10 columns):
 #   Column        Non-Null Count  Dtype  
---  ------        --------------  -----  
 0   id            191 non-null    int64  
 1   name          191 non-null    object 
 2   authour       191 non-null    object 
 3   score         191 non-null    int64  
 4   rating        191 non-null    float64
 5   rating_count  191 non-null    int64  
 6   review_count  191 non-null    int64  
 7   page_count    191 non-null    int64  
 8   year          191 non-null    int64  
 9   genres        191 non-null    object 
dtypes: float64(1), int64(6), object(3)
memory usage: 16.4+ KB
```

### Verficarea existenței rândurilor duplicate

```python
books.duplicated(keep=False).sum()
```

```text
0
```

## DataFrame.groupby\(\)

```python
grouped = books.groupby('genres')
```

```python
grouped.get_group('Classics')
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654 | 2003 | Classics |
| 6 | 35031085 | Frankenstein: The 1818 Text | Mary Wollstonecraft Shelley | 430783 | 3.80 | 1132408 | 31805 | 288 | 2018 | Classics |
| 9 | 23919 | The Complete Stories and Poems | Edgar Allan Poe | 213957 | 4.38 | 213034 | 2166 | 821 | 1984 | Classics |
| 11 | 1934 | Little Women | Louisa May Alcott | 340652 | 4.08 | 1637926 | 29378 | 449 | 2004 | Classics |
| 19 | 24213 | Alice's Adventures in Wonderland & Through the... | Lewis Carroll | 825095 | 4.06 | 446019 | 10321 | 239 | 2000 | Classics |
| ... | ... | ... | ... | ... | ... | ... | ... | ... | ... | ... |
| 195 | 17899948 | Rebecca | Daphne du Maurier | 328317 | 4.23 | 430751 | 22157 | 449 | 2013 | Classics |
| 196 | 32261 | Tess of the D'Urbervilles | Thomas Hardy | 88562 | 3.80 | 233821 | 8491 | 518 | 2003 | Classics |
| 197 | 7126 | The Count of Monte Cristo | Alexandre Dumas | 116688 | 4.25 | 731027 | 20622 | 1276 | 2003 | Classics |
| 198 | 17245 | Dracula | Bram Stoker | 636610 | 4.00 | 907768 | 24683 | 488 | 1986 | Classics |
| 199 | 662 | Atlas Shrugged | Ayn Rand | 247445 | 3.69 | 348149 | 17053 | 1168 | 1999 | Classics |

68 rows × 10 columns

![alt text](https://lh3.google.com/u/0/d/156xqvj1RfyPEx2JDWqnnvMbI5SXeZw7G=w1920-h888-iv1)

```python
grouped.sum()
```

|  | id | score | rating | rating\_count | review\_count | page\_count | year |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| genres |  |  |  |  |  |  |  |
| Childrens | 1043945 | 3097363 | 47.19 | 5538095 | 97202 | 878 | 21933 |
| Classics | 207659489 | 27940853 | 270.39 | 60793160 | 1445289 | 30084 | 136033 |
| Cultural | 7144 | 748386 | 4.22 | 604962 | 18302 | 671 | 2002 |
| Fantasy | 61867472 | 10901437 | 117.11 | 41654719 | 943451 | 14352 | 54131 |
| Fiction | 134737368 | 10567705 | 139.38 | 32195941 | 1096432 | 14056 | 68111 |
| Historical | 365729 | 681659 | 12.48 | 1491980 | 59886 | 1608 | 5994 |
| Horror | 1035120 | 855307 | 16.81 | 2934501 | 77510 | 3270 | 7961 |
| Mystery | 16299 | 157229 | 4.26 | 776718 | 31245 | 264 | 2004 |
| Nonfiction | 195043 | 355939 | 11.74 | 2713505 | 94842 | 921 | 6001 |
| Plays | 1423 | 107208 | 4.44 | 8387 | 131 | 137 | 1994 |
| Poetry | 2547 | 86141 | 4.23 | 226839 | 9199 | 127 | 2010 |
| Romance | 69193868 | 330261 | 8.28 | 1960017 | 32645 | 442 | 4000 |
| SciFi | 45529435 | 2265723 | 17.11 | 3493204 | 98022 | 2020 | 8032 |
| Sequential Art | 472331 | 114982 | 4.36 | 479760 | 13770 | 416 | 2005 |
| Unknown | 115383431 | 4698484 | 57.26 | 8797566 | 390736 | 6117 | 28052 |
| Young Adult | 142467241 | 7889683 | 65.97 | 25512111 | 881068 | 6718 | 32141 |

```python
grouped.size()
```

```text
genres
Childrens         11
Classics          68
Cultural           1
Fantasy           27
Fiction           34
Historical         3
Horror             4
Mystery            1
Nonfiction         3
Plays              1
Poetry             1
Romance            2
SciFi              4
Sequential Art     1
Unknown           14
Young Adult       16
dtype: int64
```

```python
grouped_df = pd.DataFrame(grouped.size(), columns=['size'])
grouped_df.head()
```

|  | size |
| :--- | :--- |
| genres |  |
| Childrens | 11 |
| Classics | 68 |
| Cultural | 1 |
| Fantasy | 27 |
| Fiction | 34 |

```python
grouped['review_count'].max()
```

```text
genres
Childrens          17375
Classics           89241
Cultural           18302
Fantasy           108606
Fiction            84112
Historical         30707
Horror             24460
Mystery            31245
Nonfiction         53431
Plays                131
Poetry              9199
Romance            19727
SciFi              42828
Sequential Art     13770
Unknown           111157
Young Adult       169961
Name: review_count, dtype: int64
```

```python
grouped_df['reviews_max'] =  grouped['review_count'].max()
```

```python
grouped_df.head()
```

|  | size | reviews\_max |
| :--- | :--- | :--- |
| genres |  |  |
| Childrens | 11 | 17375 |
| Classics | 68 | 89241 |
| Cultural | 1 | 18302 |
| Fantasy | 27 | 108606 |
| Fiction | 34 | 84112 |

```python
books.groupby(['genres', 'year']).mean()
```

|  |  | id | score | rating | rating\_count | review\_count | page\_count |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| genres | year |  |  |  |  |  |  |
| Childrens | 1964 | 3.704930e+05 | 1.012345e+06 | 4.380000 | 8.821950e+05 | 17375.0 | 64.000000 |
| 1985 | 2.330930e+05 | 1.188860e+05 | 4.170000 | 4.111130e+05 | 5702.0 | 61.000000 |  |
| 1988 | 2.377200e+04 | 4.941850e+05 | 4.300000 | 5.957690e+05 | 9208.0 | 62.000000 |  |
| 1990 | 1.911390e+05 | 7.856300e+04 | 4.360000 | 3.186370e+05 | 5158.0 | 44.000000 |  |
| 1994 | 4.948000e+03 | 1.360590e+05 | 4.300000 | 3.843860e+05 | 7754.0 | 26.000000 |  |
| ... | ... | ... | ... | ... | ... | ... | ... |
| Young Adult | 2008 | 2.617167e+06 | 1.052897e+06 | 4.323333 | 2.281277e+06 | 64110.0 | 381.333333 |
| 2009 | 1.486557e+07 | 9.250550e+04 | 4.085000 | 5.686180e+05 | 25399.0 | 367.000000 |  |
| 2010 | 7.938275e+06 | 7.803000e+04 | 4.480000 | 1.853180e+05 | 6824.0 | 1155.000000 |  |
| 2012 | 1.231370e+07 | 6.528380e+05 | 4.146667 | 2.467991e+06 | 106683.0 | 441.666667 |  |
| 2016 | 2.984423e+07 | 7.125500e+04 | 3.930000 | 7.544910e+05 | 51512.0 | 352.000000 |  |

104 rows × 6 columns

```python

```

## GroupBy.agg\(\)

```python
grouped.agg(np.sum)
```

|  | id | score | rating | rating\_count | review\_count | page\_count | year |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| genres |  |  |  |  |  |  |  |
| Childrens | 1043945 | 3097363 | 47.19 | 5538095 | 97202 | 878 | 21933 |
| Classics | 207659489 | 27940853 | 270.39 | 60793160 | 1445289 | 30084 | 136033 |
| Cultural | 7144 | 748386 | 4.22 | 604962 | 18302 | 671 | 2002 |
| Fantasy | 61867472 | 10901437 | 117.11 | 41654719 | 943451 | 14352 | 54131 |
| Fiction | 134737368 | 10567705 | 139.38 | 32195941 | 1096432 | 14056 | 68111 |
| Historical | 365729 | 681659 | 12.48 | 1491980 | 59886 | 1608 | 5994 |
| Horror | 1035120 | 855307 | 16.81 | 2934501 | 77510 | 3270 | 7961 |
| Mystery | 16299 | 157229 | 4.26 | 776718 | 31245 | 264 | 2004 |
| Nonfiction | 195043 | 355939 | 11.74 | 2713505 | 94842 | 921 | 6001 |
| Plays | 1423 | 107208 | 4.44 | 8387 | 131 | 137 | 1994 |
| Poetry | 2547 | 86141 | 4.23 | 226839 | 9199 | 127 | 2010 |
| Romance | 69193868 | 330261 | 8.28 | 1960017 | 32645 | 442 | 4000 |
| SciFi | 45529435 | 2265723 | 17.11 | 3493204 | 98022 | 2020 | 8032 |
| Sequential Art | 472331 | 114982 | 4.36 | 479760 | 13770 | 416 | 2005 |
| Unknown | 115383431 | 4698484 | 57.26 | 8797566 | 390736 | 6117 | 28052 |
| Young Adult | 142467241 | 7889683 | 65.97 | 25512111 | 881068 | 6718 | 32141 |

```python
grouped['score'].agg([np.sum, np.mean, np.max])
```

|  | sum | mean | amax |
| :--- | :--- | :--- | :--- |
| genres |  |  |  |
| Childrens | 3097363 | 281578.454545 | 1012345 |
| Classics | 27940853 | 410894.897059 | 2235010 |
| Cultural | 748386 | 748386.000000 | 748386 |
| Fantasy | 10901437 | 403756.925926 | 2603171 |
| Fiction | 10567705 | 310814.852941 | 867513 |
| Historical | 681659 | 227219.666667 | 388909 |
| Horror | 855307 | 213826.750000 | 386882 |
| Mystery | 157229 | 157229.000000 | 157229 |
| Nonfiction | 355939 | 118646.333333 | 134797 |
| Plays | 107208 | 107208.000000 | 107208 |
| Poetry | 86141 | 86141.000000 | 86141 |
| Romance | 330261 | 165130.500000 | 226168 |
| SciFi | 2265723 | 566430.750000 | 1051406 |
| Sequential Art | 114982 | 114982.000000 | 114982 |
| Unknown | 4698484 | 335606.000000 | 1343484 |
| Young Adult | 7889683 | 493105.187500 | 2959668 |

```python
def diff_min_max(x):
    diff = x.max() - x.min()
    return diff
```

```python
grouped['rating'].agg([diff_min_max])
```

|  | diff\_min\_max |
| :--- | :--- |
| genres |  |
| Childrens | 0.24 |
| Classics | 0.97 |
| Cultural | 0.00 |
| Fantasy | 0.72 |
| Fiction | 0.68 |
| Historical | 0.34 |
| Horror | 0.34 |
| Mystery | 0.00 |
| Nonfiction | 0.55 |
| Plays | 0.00 |
| Poetry | 0.00 |
| Romance | 0.08 |
| SciFi | 0.14 |
| Sequential Art | 0.00 |
| Unknown | 0.53 |
| Young Adult | 0.89 |

## Series, Dataframe: map\(\), apply\(\), applymap\(\)

```python
books.head()
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213 | 1999 | Unknown |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371 | 2004 | Fiction |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215 | 2000 | Romance |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32 | 2007 | Childrens |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654 | 2003 | Classics |

```python
books['page_count'].hist()
```

```python
def eticheta(book):
    if book <= 100:
        return 'Small'
    if 100 < book <= 500:
        return 'Medium'
    if book > 500:
        return 'Large'
```

```python
books['book_size'] = books['page_count'].map(eticheta)
```

```python
books.head()
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres | book\_size |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213 | 1999 | Unknown | Medium |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371 | 2004 | Fiction | Medium |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215 | 2000 | Romance | Medium |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32 | 2007 | Childrens | Small |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654 | 2003 | Classics | Large |

```python
def eticheta_2(book, x, y):
    if book <= x:
        return 'Small'
    if x < book <= y:
        return 'Medium'
    if book > y:
        return 'Large'
```

```python
books['review_count'].describe()
```

```text
count       191.000000
mean      27694.921466
std       25972.632881
min         131.000000
25%       10632.500000
50%       19767.000000
75%       35001.500000
max      169961.000000
Name: review_count, dtype: float64
```

```python
books['review_number'] = books['review_count'].apply(eticheta_2, x=10632, y=35001)
```

```python
books.head()
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres | book\_size | review\_number |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213 | 1999 | Unknown | Medium | Large |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371 | 2004 | Fiction | Medium | Large |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215 | 2000 | Romance | Medium | Medium |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32 | 2007 | Childrens | Small | Small |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654 | 2003 | Classics | Large | Medium |

```python
def scaling(valoare, col):
    scaled_val = valoare/books[col].max()*100
    return scaled_val
```

```python
books['score%'] = books['score'].apply(scaling, col='score')
```

```python
books.head()
```

|  | id | name | authour | score | rating | rating\_count | review\_count | page\_count | year | genres | book\_size | review\_number | score% |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 22628 | The Perks of Being a Wallflower | Stephen Chbosky | 745557 | 4.20 | 1219410 | 56409 | 213 | 1999 | Unknown | Medium | Large | 25.190562 |
| 1 | 77203 | The Kite Runner | Khaled Hosseini | 427631 | 4.30 | 2365531 | 72036 | 371 | 2004 | Fiction | Medium | Large | 14.448614 |
| 2 | 35545737 | A Walk to Remember | Nicholas Sparks | 104093 | 4.18 | 658664 | 12918 | 215 | 2000 | Romance | Medium | Medium | 3.517050 |
| 3 | 32929 | Goodnight Moon | Margaret Wise Brown | 93488 | 4.28 | 296501 | 5729 | 32 | 2007 | Childrens | Small | Small | 3.158733 |
| 4 | 153747 | Moby-Dick or, the Whale | Herman Melville | 200963 | 3.50 | 470744 | 15149 | 654 | 2003 | Classics | Large | Medium | 6.790052 |

```python
# creati o coloana care arata procentajul valorilor din rating_count din cea valoarea maxima de rating_count
# ....
books['rating_number%'] = books['rating_count'].apply(scaling, col='rating_count')
```

```python
col = ['score%', 'rating_number%']

books[col].describe()
```

|  | score% | rating\_number% |
| :--- | :--- | :--- |
| count | 191.000000 | 191.000000 |
| mean | 12.524109 | 14.546617 |
| std | 14.346202 | 14.907528 |
| min | 2.407534 | 0.123175 |
| 25% | 3.556919 | 4.953056 |
| 50% | 6.923243 | 9.515218 |
| 75% | 16.792373 | 18.754470 |
| max | 100.000000 | 100.000000 |

```python
def eticheta_3(book):
    if book <= 5:
        return 'Small'
    if 5 < book <= 20:
        return 'Medium'
    if book > 20:
        return 'Large'
```

```python
transformed_col = books[col].applymap(eticheta_3)
transformed_col
```

|  | score% | rating\_number% |
| :--- | :--- | :--- |
| 0 | Large | Medium |
| 1 | Medium | Large |
| 2 | Small | Medium |
| 3 | Small | Small |
| 4 | Medium | Medium |
| ... | ... | ... |
| 195 | Medium | Medium |
| 196 | Small | Small |
| 197 | Small | Medium |
| 198 | Large | Medium |
| 199 | Medium | Medium |

191 rows × 2 columns

```python
transformed_col.apply(pd.value_counts)
```

|  | score% | rating\_number% |
| :--- | :--- | :--- |
| Large | 40 | 43 |
| Medium | 67 | 99 |
| Small | 84 | 49 |

## pandas.concat\(\)

### Axa 0 - verticala. \(implicit\)

![alt text](https://lh3.google.com/u/0/d/1xJwYaW1uRXTFZwabeRYFH_H3oGaxRHQd=w1365-h888-iv1)

```python
df1 = pd.DataFrame([[1, 'Marc', 9],[2, 'Mioara', 10],[3, 'Maxim', 7]], columns = ['id','elev', 'nota'])
df1
```

|  | id | elev | nota |
| :--- | :--- | :--- | :--- |
| 0 | 1 | Marc | 9 |
| 1 | 2 | Mioara | 10 |
| 2 | 3 | Maxim | 7 |

```python
df2 = pd.DataFrame([[4, 'Monica', 7],[5, 'Maxim', 9],[6, 'Maia', 8]], columns = ['id','elev', 'nota'])
df2
```

|  | id | elev | nota |
| :--- | :--- | :--- | :--- |
| 0 | 4 | Monica | 7 |
| 1 | 5 | Maxim | 9 |
| 2 | 6 | Maia | 8 |

```python
elevi = pd.concat([df1, df2],  ignore_index=True)
elevi
```

|  | id | elev | nota |
| :--- | :--- | :--- | :--- |
| 0 | 1 | Marc | 9 |
| 1 | 2 | Mioara | 10 |
| 2 | 3 | Maxim | 7 |
| 3 | 4 | Monica | 7 |
| 4 | 5 | Maxim | 9 |
| 5 | 6 | Maia | 8 |

### Axa 1 - orizontala

```python
materii = pd.DataFrame([['Matematica', 5], ['L.Romana', 7], ['Informatica', 6], ['Desen', 9], ['Fizica', 7], ['Istorie', 10]], 
             columns = ['materie', 'clasa'])

materii
```

|  | materie | clasa |
| :--- | :--- | :--- |
| 0 | Matematica | 5 |
| 1 | L.Romana | 7 |
| 2 | Informatica | 6 |
| 3 | Desen | 9 |
| 4 | Fizica | 7 |
| 5 | Istorie | 10 |

```python
situatia_scolara = pd.concat([elevi, materii], axis=1)
situatia_scolara
```

|  | id | elev | nota | materie | clasa |
| :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | Marc | 9 | Matematica | 5 |
| 1 | 2 | Mioara | 10 | L.Romana | 7 |
| 2 | 3 | Maxim | 7 | Informatica | 6 |
| 3 | 4 | Monica | 7 | Desen | 9 |
| 4 | 5 | Maxim | 9 | Fizica | 7 |
| 5 | 6 | Maia | 8 | Istorie | 10 |

Ce s-ar fi intamplat daca in tabelul `materii` ar mai fi existat un rand?

```python
# Concatenati tabelul books cu tabelul transformed_col
# ....
```

## pandas.merge\(\)

```python
absente = pd.DataFrame([[3, 'Maxim', 30], [6, 'Maia', 0], [2, 'Mioara', 57], [1, 'Marc', 124], [5, 'Maxim', 0], [7, 'Marica', 21]], columns=['id', 'nume', 'absente'])
absente
```

|  | id | nume | absente |
| :--- | :--- | :--- | :--- |
| 0 | 3 | Maxim | 30 |
| 1 | 6 | Maia | 0 |
| 2 | 2 | Mioara | 57 |
| 3 | 1 | Marc | 124 |
| 4 | 5 | Maxim | 0 |
| 5 | 7 | Marica | 21 |

```python
pd.merge(left = situatia_scolara, right = absente, left_on = 'elev', right_on = 'nume', how = 'left')

# ce s-a intamplat in tabelul de mai jos?
# de ce sunt mai multe randuri?
```

|  | id\_x | elev | nota | materie | clasa | id\_y | nume | absente |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | Marc | 9 | Matematica | 5 | 1.0 | Marc | 124.0 |
| 1 | 2 | Mioara | 10 | L.Romana | 7 | 2.0 | Mioara | 57.0 |
| 2 | 3 | Maxim | 7 | Informatica | 6 | 3.0 | Maxim | 30.0 |
| 3 | 3 | Maxim | 7 | Informatica | 6 | 5.0 | Maxim | 0.0 |
| 4 | 4 | Monica | 7 | Desen | 9 | NaN | NaN | NaN |
| 5 | 5 | Maxim | 9 | Fizica | 7 | 3.0 | Maxim | 30.0 |
| 6 | 5 | Maxim | 9 | Fizica | 7 | 5.0 | Maxim | 0.0 |
| 7 | 6 | Maia | 8 | Istorie | 10 | 6.0 | Maia | 0.0 |

```python
pd.merge(left = situatia_scolara, right = absente, on = 'id', how = 'left')
```

|  | id | elev | nota | materie | clasa | nume | absente |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| 0 | 1 | Marc | 9 | Matematica | 5 | Marc | 124.0 |
| 1 | 2 | Mioara | 10 | L.Romana | 7 | Mioara | 57.0 |
| 2 | 3 | Maxim | 7 | Informatica | 6 | Maxim | 30.0 |
| 3 | 4 | Monica | 7 | Desen | 9 | NaN | NaN |
| 4 | 5 | Maxim | 9 | Fizica | 7 | Maxim | 0.0 |
| 5 | 6 | Maia | 8 | Istorie | 10 | Maia | 0.0 |

![alt text](https://lh3.google.com/u/0/d/1HZ5vjTSQPGiPnDjqEF72G1jvitA0aJtw=w1920-h888-iv1)

```python
# Uniti cele doua tabele: situatia_scolara si absente folosind intersectia 'right'
```

```python
# Uniti cele doua tabele: situatia_scolara si absente folosind intersectia 'inner'
```

```python
# Uniti cele doua tabele: situatia_scolara si absente folosind intersectia 'outer'
```

Ce observati?

```python

```

