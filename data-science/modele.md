# DecisionTrees

## Decision trees - Arbori de decizie

#### Problema if-uri

![alt text](https://drive.google.com/uc?id=1Syc6cRRkcC649JWVBxfdKwKCdcih7kIh)

Task: De implementat un algoritm cu if-uri conform schemei de mai sus

```python
def decision(age, pizza, hamburger, exercise):
  if age < 30:
    elif
```

Ș### Problema Decision trees

(e imagine aici muahahahaha)

![alt text](https://drive.google.com/uc?export=view\&id=1aoegCUMP5s9HHMfO1xlwizbNg9vJGSb1)

TODO:

```python
# TODO:
from sklearn.datasets import load_iris
from sklearn import tree
X, y = load_iris(return_X_y=True)

import matplotlib.pyplot as plt
plt.plot(X[:, 2], 'o')
```

```
[<matplotlib.lines.Line2D at 0x7f8682238c88>]
```

![png](../.gitbook/assets/output\_8\_1.png)

```python
# TODO: de facut DecisionTreeClassifier
#
```

```python
from sklearn.tree import DecisionTreeClassifier, plot_tree

plot_tree(clf)
```

```python
```

## Clasificarea setului de date despre ciuperci - practica

Acest set de date include descrierile eșantioanelor ipotetice corespunzătoare a 23 de specii de ciuperci. Fiecare specie este identificată ca fiind definitiv comestibilă, definitiv otrăvitoare sau de comestibilitate necunoscută și nu este recomandată. Această ultimă clasă a fost combinată cu cea otrăvitoare. Ghidul precizează clar că nu există o regulă simplă pentru a determina comestibilitatea unei ciuperci;

**descrierea coloanelor**

* cap-shape: bell=b,conical=c,convex=x,flat=f, knobbed=k,sunken=s
* cap-surface: fibrous=f,grooves=g,scaly=y,smooth=s
* ....
* habitat: grasses=g,leaves=l,meadows=m,paths=p,urban=u,waste=w,woods=d
* more info here [https://www.kaggle.com/uciml/mushroom-classification](https://www.kaggle.com/uciml/mushroom-classification)

Vom prezice coloana **"class"**, care poate avea 2 valori:

* **'e' - edible (comestibil)** sau
* &#x20;**'p' - 'poisonous' (otravitor)**

#### Importam cateva librarii necesare

```python
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
```

#### Încărcăm setul de date

```python
# https://www.kaggle.com/uciml/mushroom-classification
# DATASET_PATH = 'mushrooms.csv'

DATASET_PATH = 'https://girlsgoitpublic.z6.web.core.windows.net/mushrooms.csv'

data = pd.read_csv(DATASET_PATH)
data.head()
```

|   | class | cap-shape | cap-surface | cap-color | bruises | odor | gill-attachment | gill-spacing | gill-size | gill-color | stalk-shape | stalk-root | stalk-surface-above-ring | stalk-surface-below-ring | stalk-color-above-ring | stalk-color-below-ring | veil-type | veil-color | ring-number | ring-type | spore-print-color | population | habitat |
| - | ----- | --------- | ----------- | --------- | ------- | ---- | --------------- | ------------ | --------- | ---------- | ----------- | ---------- | ------------------------ | ------------------------ | ---------------------- | ---------------------- | --------- | ---------- | ----------- | --------- | ----------------- | ---------- | ------- |
| 0 | p     | x         | s           | n         | t       | p    | f               | c            | n         | k          | e           | e          | s                        | s                        | w                      | w                      | p         | w          | o           | p         | k                 | s          | u       |
| 1 | e     | x         | s           | y         | t       | a    | f               | c            | b         | k          | e           | c          | s                        | s                        | w                      | w                      | p         | w          | o           | p         | n                 | n          | g       |
| 2 | e     | b         | s           | w         | t       | l    | f               | c            | b         | n          | e           | c          | s                        | s                        | w                      | w                      | p         | w          | o           | p         | n                 | n          | m       |
| 3 | p     | x         | y           | w         | t       | p    | f               | c            | n         | n          | e           | e          | s                        | s                        | w                      | w                      | p         | w          | o           | p         | k                 | s          | u       |
| 4 | e     | x         | s           | g         | f       | n    | f               | w            | b         | k          | t           | e          | s                        | s                        | w                      | w                      | p         | w          | o           | e         | n                 | a          | g       |

```python
data.describe()
```

|        | class | cap-shape | cap-surface | cap-color | bruises | odor | gill-attachment | gill-spacing | gill-size | gill-color | stalk-shape | stalk-root | stalk-surface-above-ring | stalk-surface-below-ring | stalk-color-above-ring | stalk-color-below-ring | veil-type | veil-color | ring-number | ring-type | spore-print-color | population | habitat |
| ------ | ----- | --------- | ----------- | --------- | ------- | ---- | --------------- | ------------ | --------- | ---------- | ----------- | ---------- | ------------------------ | ------------------------ | ---------------------- | ---------------------- | --------- | ---------- | ----------- | --------- | ----------------- | ---------- | ------- |
| count  | 8124  | 8124      | 8124        | 8124      | 8124    | 8124 | 8124            | 8124         | 8124      | 8124       | 8124        | 8124       | 8124                     | 8124                     | 8124                   | 8124                   | 8124      | 8124       | 8124        | 8124      | 8124              | 8124       | 8124    |
| unique | 2     | 6         | 4           | 10        | 2       | 9    | 2               | 2            | 2         | 12         | 2           | 5          | 4                        | 4                        | 9                      | 9                      | 1         | 4          | 3           | 5         | 9                 | 6          | 7       |
| top    | e     | x         | y           | n         | f       | n    | f               | c            | b         | b          | t           | b          | s                        | s                        | w                      | w                      | p         | w          | o           | p         | w                 | v          | d       |
| freq   | 4208  | 3656      | 3244        | 2284      | 4748    | 3528 | 7914            | 6812         | 5612      | 1728       | 4608        | 3776       | 5176                     | 4936                     | 4464                   | 4384                   | 8124      | 7924       | 7488        | 3968      | 2388              | 4040       | 3148    |

```python
data.info()
```

```
<class 'pandas.core.frame.DataFrame'>
RangeIndex: 8124 entries, 0 to 8123
Data columns (total 23 columns):
 #   Column                    Non-Null Count  Dtype 
---  ------                    --------------  ----- 
 0   class                     8124 non-null   object
 1   cap-shape                 8124 non-null   object
 2   cap-surface               8124 non-null   object
 3   cap-color                 8124 non-null   object
 4   bruises                   8124 non-null   object
 5   odor                      8124 non-null   object
 6   gill-attachment           8124 non-null   object
 7   gill-spacing              8124 non-null   object
 8   gill-size                 8124 non-null   object
 9   gill-color                8124 non-null   object
 10  stalk-shape               8124 non-null   object
 11  stalk-root                8124 non-null   object
 12  stalk-surface-above-ring  8124 non-null   object
 13  stalk-surface-below-ring  8124 non-null   object
 14  stalk-color-above-ring    8124 non-null   object
 15  stalk-color-below-ring    8124 non-null   object
 16  veil-type                 8124 non-null   object
 17  veil-color                8124 non-null   object
 18  ring-number               8124 non-null   object
 19  ring-type                 8124 non-null   object
 20  spore-print-color         8124 non-null   object
 21  population                8124 non-null   object
 22  habitat                   8124 non-null   object
dtypes: object(23)
memory usage: 1.4+ MB
```

* **Ce concluzii deducem?**&#x20;
* Ce **tipuri de date** avem?
* Avem **date lipsa?**

#### Vizualizam datele

```python
# ce conditii if putem crea aici?
plt.scatter(data['odor'], data['class'])
plt.title('Odor vs class')
plt.xlabel('Odor')
plt.ylabel('Class')
# plt.legend()
plt.show()
```

![png](../.gitbook/assets/output\_22\_0.png)

#### Preprocesăm datele

**Date categoriale - Encoding**

```python
# Exemplu cu LabelEncoder:
from sklearn.preprocessing import LabelEncoder

lista_categorii = ['edible', 'poisonous']

le = LabelEncoder()

le.fit(lista_categorii)

lista_categorii_encoded = le.transform(lista_categorii)

np.unique(lista_categorii_encoded)
```

```
array([0, 1])
```

```python
#ce va returna 
le.transform(['edible', 'poisonous','poisonous'])
```

```
array([0, 1, 1])
```

```python
mapare = dict(poisonous=1, edible=0)# {'edible': 0, 'poisonous': 1}
mapat = []
for i in ['edible', 'poisonous','poisonous']:
  mapat.append(mapare[i])
mapat
```

```
[0, 1, 1]
```

mai intai vom face o copie a datelor

```python
data_encoded = data.copy()
```

```python
# from sklearn.tree import DecisionTreeClassifier
from sklearn.preprocessing import LabelEncoder


# Transformam toate coloanele in date numerice
for (columnName, columnData) in data_encoded.iteritems():
  le = LabelEncoder()

  le.fit(columnData)

  data_encoded[columnName] = le.transform(columnData)


# print(np.unique(data_encoded['class']))
data_encoded.head()
```

|   | class | cap-shape | cap-surface | cap-color | bruises | odor | gill-attachment | gill-spacing | gill-size | gill-color | stalk-shape | stalk-root | stalk-surface-above-ring | stalk-surface-below-ring | stalk-color-above-ring | stalk-color-below-ring | veil-type | veil-color | ring-number | ring-type | spore-print-color | population | habitat |
| - | ----- | --------- | ----------- | --------- | ------- | ---- | --------------- | ------------ | --------- | ---------- | ----------- | ---------- | ------------------------ | ------------------------ | ---------------------- | ---------------------- | --------- | ---------- | ----------- | --------- | ----------------- | ---------- | ------- |
| 0 | 1     | 5         | 2           | 4         | 1       | 6    | 1               | 0            | 1         | 4          | 0           | 3          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 2                 | 3          | 5       |
| 1 | 0     | 5         | 2           | 9         | 1       | 0    | 1               | 0            | 0         | 4          | 0           | 2          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 3                 | 2          | 1       |
| 2 | 0     | 0         | 2           | 8         | 1       | 3    | 1               | 0            | 0         | 5          | 0           | 2          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 3                 | 2          | 3       |
| 3 | 1     | 5         | 3           | 8         | 1       | 6    | 1               | 0            | 1         | 5          | 0           | 3          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 2                 | 3          | 5       |
| 4 | 0     | 5         | 2           | 3         | 0       | 5    | 1               | 1            | 0         | 4          | 1           | 3          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 0         | 3                 | 0          | 1       |

```python
data_encoded.info()
```

```
<class 'pandas.core.frame.DataFrame'>
RangeIndex: 8124 entries, 0 to 8123
Data columns (total 23 columns):
 #   Column                    Non-Null Count  Dtype
---  ------                    --------------  -----
 0   class                     8124 non-null   int64
 1   cap-shape                 8124 non-null   int64
 2   cap-surface               8124 non-null   int64
 3   cap-color                 8124 non-null   int64
 4   bruises                   8124 non-null   int64
 5   odor                      8124 non-null   int64
 6   gill-attachment           8124 non-null   int64
 7   gill-spacing              8124 non-null   int64
 8   gill-size                 8124 non-null   int64
 9   gill-color                8124 non-null   int64
 10  stalk-shape               8124 non-null   int64
 11  stalk-root                8124 non-null   int64
 12  stalk-surface-above-ring  8124 non-null   int64
 13  stalk-surface-below-ring  8124 non-null   int64
 14  stalk-color-above-ring    8124 non-null   int64
 15  stalk-color-below-ring    8124 non-null   int64
 16  veil-type                 8124 non-null   int64
 17  veil-color                8124 non-null   int64
 18  ring-number               8124 non-null   int64
 19  ring-type                 8124 non-null   int64
 20  spore-print-color         8124 non-null   int64
 21  population                8124 non-null   int64
 22  habitat                   8124 non-null   int64
dtypes: int64(23)
memory usage: 1.4 MB
```

[https://scikit-learn.org/stable/modules/generated/sklearn.preprocessing.LabelEncoder.html](https://scikit-learn.org/stable/modules/generated/sklearn.preprocessing.LabelEncoder.html)

#### Separam datele de antrenare de clase

printam numele coloanelor mai intai

```python
print(data_encoded.columns)
```

```
Index(['class', 'cap-shape', 'cap-surface', 'cap-color', 'bruises', 'odor',
       'gill-attachment', 'gill-spacing', 'gill-size', 'gill-color',
       'stalk-shape', 'stalk-root', 'stalk-surface-above-ring',
       'stalk-surface-below-ring', 'stalk-color-above-ring',
       'stalk-color-below-ring', 'veil-type', 'veil-color', 'ring-number',
       'ring-type', 'spore-print-color', 'population', 'habitat'],
      dtype='object')
```

* X-ul va contine features (caracteristici) - toate coloanele in afara de clase
* Y-ul va contine doar denumirile claselor

```python
# X = data_encoded[['cap-shape', 'cap-surface', 'cap-color', 'bruises', 'odor',
#        'gill-attachment', 'gill-spacing', 'gill-size', 'gill-color',
#        'stalk-shape', 'stalk-root', 'stalk-surface-above-ring',
#        'stalk-surface-below-ring', 'stalk-color-above-ring',
#        'stalk-color-below-ring', 'veil-type', 'veil-color', 'ring-number',
#        'ring-type', 'spore-print-color', 'population', 'habitat']]
Y = data_encoded[['class']].copy()
X = data_encoded.drop(columns=['class'])
# Y = data_encoded['class'].values.flatten() ## to_numpy()
```

```python
X.head()
```

|   | cap-shape | cap-surface | cap-color | bruises | odor | gill-attachment | gill-spacing | gill-size | gill-color | stalk-shape | stalk-root | stalk-surface-above-ring | stalk-surface-below-ring | stalk-color-above-ring | stalk-color-below-ring | veil-type | veil-color | ring-number | ring-type | spore-print-color | population | habitat |
| - | --------- | ----------- | --------- | ------- | ---- | --------------- | ------------ | --------- | ---------- | ----------- | ---------- | ------------------------ | ------------------------ | ---------------------- | ---------------------- | --------- | ---------- | ----------- | --------- | ----------------- | ---------- | ------- |
| 0 | 5         | 2           | 4         | 1       | 6    | 1               | 0            | 1         | 4          | 0           | 3          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 2                 | 3          | 5       |
| 1 | 5         | 2           | 9         | 1       | 0    | 1               | 0            | 0         | 4          | 0           | 2          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 3                 | 2          | 1       |
| 2 | 0         | 2           | 8         | 1       | 3    | 1               | 0            | 0         | 5          | 0           | 2          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 3                 | 2          | 3       |
| 3 | 5         | 3           | 8         | 1       | 6    | 1               | 0            | 1         | 5          | 0           | 3          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 2                 | 3          | 5       |
| 4 | 5         | 2           | 3         | 0       | 5    | 1               | 1            | 0         | 4          | 1           | 3          | 2                        | 2                        | 7                      | 7                      | 0         | 2          | 1           | 0         | 3                 | 0          | 1       |

```python
Y.head()
```

|   | class |
| - | ----- |
| 0 | 1     |
| 1 | 0     |
| 2 | 0     |
| 3 | 1     |
| 4 | 0     |

#### Train test split

```python
from sklearn.model_selection import train_test_split

X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.33, random_state=42)

print("X_train shape:", X_train.shape)
print("Y_train shape:", Y_train.shape)

print("X_test shape:", X_test.shape)
print("Y_test shape:", Y_test.shape)
```

```
X_train shape: (5443, 22)
Y_train shape: (5443, 1)
X_test shape: (2681, 22)
Y_test shape: (2681, 1)
```

[https://scikit-learn.org/stable/modules/generated/sklearn.model\_selection.train\_test\_split.html](https://scikit-learn.org/stable/modules/generated/sklearn.model\_selection.train\_test\_split.html)

#### Construim modelul

```python
from sklearn.tree import DecisionTreeClassifier

clf = DecisionTreeClassifier(max_depth=3)
print(clf)
```

```
DecisionTreeClassifier(ccp_alpha=0.0, class_weight=None, criterion='gini',
                       max_depth=3, max_features=None, max_leaf_nodes=None,
                       min_impurity_decrease=0.0, min_impurity_split=None,
                       min_samples_leaf=1, min_samples_split=2,
                       min_weight_fraction_leaf=0.0, presort='deprecated',
                       random_state=None, splitter='best')
```

#### Antrenam modoelul

```python
clf.fit(X_train, Y_train)
```

```
DecisionTreeClassifier(ccp_alpha=0.0, class_weight=None, criterion='gini',
                       max_depth=3, max_features=None, max_leaf_nodes=None,
                       min_impurity_decrease=0.0, min_impurity_split=None,
                       min_samples_leaf=1, min_samples_split=2,
                       min_weight_fraction_leaf=0.0, presort='deprecated',
                       random_state=None, splitter='best')
```

#### Plot decision tree

```python
from sklearn.tree import DecisionTreeClassifier, plot_tree
plt.figure(figsize=(20, 20))
plot_tree(clf)
```

```
NameError                                 Traceback (most recent call last)

<ipython-input-1-34989c638434> in <module>()
      1 from sklearn.tree import DecisionTreeClassifier, plot_tree
----> 2 plt.figure(figsize=(20, 20))
      3 plot_tree(clf)


NameError: name 'plt' is not defined
```

#### Evaluarea modelului

```python
Y_predict = clf.predict(X_test)
```

```python
Y_predict.sum(), Y_predict.shape
```

```
(1330, (2681,))
```

```python
from sklearn.metrics import accuracy_score, f1_score, recall_score

print("Accuracy score:", accuracy_score(Y_test, Y_predict))
print("F1 score:", f1_score(Y_test, Y_predict))
print("Recall score:", recall_score(Y_test, Y_predict))
```

```
Accuracy score: 0.9772472957851548
F1 score: 0.97683251044436
Recall score: 0.9869531849577897
```

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FZdzbRHuQMRgoNgKMs8IR%2Ffile.png?alt=media)

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FFBwlLPihuN1HG4kXMIho%2Ffile.png?alt=media)

```python
from sklearn.metrics import confusion_matrix

confusion_matrix(Y_test, Y_predict)
```

```
array([[1334,   44],
       [  17, 1286]])
```

```python
# calculati acuraterea folosind numpy
```

```python
from sklearn.metrics import classification_report

target_names = ['edible', 'poisonous']
print(classification_report(Y_test, Y_predict, target_names=target_names))
```

```
              precision    recall  f1-score   support

      edible       0.99      0.97      0.98      1378
   poisonous       0.97      0.99      0.98      1303

    accuracy                           0.98      2681
   macro avg       0.98      0.98      0.98      2681
weighted avg       0.98      0.98      0.98      2681
```

**Cross-validation score**

```python
from sklearn.model_selection import cross_val_score

cross_val_score(clf, X_test, Y_test, cv=3)
```

```
array([0.9753915 , 0.9753915 , 0.95296753])
```

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FzoiYtEEUX9kci0ksgCBT%2Ffile.png?alt=media)

```python
from sklearn.model_selection import KFold

kf = KFold(n_splits=3)
kf.get_n_splits(X_train)
#X_train, Y_train
print(kf)
fold = 1

for train_index, test_index in kf.split(X_train):
    print("TRAIN:", train_index, "TEST:", test_index)
    x_train, x_test = X_train.to_numpy()[train_index], X_train.to_numpy()[test_index]
    y_train, y_test = Y_train.to_numpy()[train_index], Y_train.to_numpy()[test_index]

    clf = DecisionTreeClassifier(max_depth=4)
    clf.fit(x_train, y_train)

    Y_predict = clf.predict(x_test)
    print('Fold {}'.format(fold))
    fold+=1
    print("Accuracy score:", accuracy_score(y_test, Y_predict))
    print("F1 score:", f1_score(y_test, Y_predict))
    print("Recall score:", recall_score(y_test, Y_predict))
```

```
KFold(n_splits=3, random_state=None, shuffle=False)
TRAIN: [1815 1816 1817 ... 5440 5441 5442] TEST: [   0    1    2 ... 1812 1813 1814]
Fold 1
Accuracy score: 0.9696969696969697
F1 score: 0.9684089603676048
Recall score: 0.9429530201342282
TRAIN: [   0    1    2 ... 5440 5441 5442] TEST: [1815 1816 1817 ... 3626 3627 3628]
Fold 2
Accuracy score: 0.9746416758544653
F1 score: 0.9735327963176065
Recall score: 0.9848661233993015
TRAIN: [   0    1    2 ... 3626 3627 3628] TEST: [3629 3630 3631 ... 5440 5441 5442]
Fold 3
Accuracy score: 0.9779492833517089
F1 score: 0.9770114942528736
Recall score: 0.9883720930232558
```

#### Tuning - ajustarea modelului

**Parametri**

Ce parametri avem pentru DecisionTreeClassifier?

* _**criterion**_ {“gini”, “entropy”}, default=”gini” The function to measure the quality of a split
* _**splitter**_ {“best”, “random”}, default=”best” The strategy used to choose the split at each node. Supported strategies are “best” to choose the best split and “random” to choose the best random split.
* _**max\_depthint**_, default=None The maximum depth of the tree. If None, then nodes are expanded until all leaves are pure or until all leaves contain less than min\_samples\_split samples
* **random\_stateint\***, RandomState instance, default=None Controls the randomness of the estimator
* _**max\_leaf\_nodesint**_, default=None Grow a tree with max\_leaf\_nodes in best-first fashion. Best nodes are defined as relative reduction in impurity. If None then unlimited number of leaf nodes.
* _**class\_weightdict**_, list of dict or “balanced”, default=None Weights associated with classes in the form {class\_label: weight}. If None, all classes are supposed to have weight one. For multi-output problems, a list of dicts can be provided in the same order as the columns of y.

\
&#x20;Mai multi parametri aici: [https://scikit-learn.org/stable/modules/generated/sklearn.tree.DecisionTreeClassifier.html](https://scikit-learn.org/stable/modules/generated/sklearn.tree.DecisionTreeClassifier.html)

#### Train test validation split

```python
#train, validate, test = np.split(df.sample(frac=1), [int(.6*len(df)), int(.8*len(df))])
dataX, dataY = X, Y
```

```python
train_ratio = 0.75
validation_ratio = 0.15
test_ratio = 0.10

# train is now 75% of the entire data set
# the _junk suffix means that we drop that variable completely
x_train, x_test, y_train, y_test = train_test_split(dataX, dataY, test_size=1 - train_ratio)

# test is now 10% of the initial data set
# validation is now 15% of the initial data set
x_val, x_test, y_val, y_test = train_test_split(x_test, y_test, test_size=test_ratio/(test_ratio + validation_ratio)) 

print(x_train.shape, x_val.shape, x_test.shape)
```

```
(6093, 22) (1218, 22) (813, 22)
```

**Ajustam modelul cu diversi parametri**

```python
import random
from sklearn.metrics import accuracy_score, f1_score, recall_score

# Exemplu cu train test validation for ... sa incercam mai multi parametri

random_states_list = [0,1, 2]
# If None then unlimited number of leaf nodes.
# max_leaf_nodes_list = [None, 5, 10, 100]
# max_depth_list = [1, 2, 20, 50]

acc_scores = []
f1_scores = []
recall_scores = []
Y_predicts = []

for random_state in random_states_list:
  max_leaf_nodes = None
  max_depth = 4
  # for max_leaf_nodes in max_leaf_nodes_list:
    # for max_depth in max_depth_list:

  clf = DecisionTreeClassifier(random_state=random_state, max_leaf_nodes=max_leaf_nodes, max_depth=max_depth)
  clf.fit(x_train, y_train)

  Y_predict = clf.predict(x_val)
  Y_predicts.append(Y_predict)

  # print("Accuracy score:", accuracy_score(Y_test, Y_predict))
  acc_scores.append(accuracy_score(y_val, Y_predict))
  # print("F1 score:", f1_score(Y_test, Y_predict))
  f1_scores.append(f1_score(y_val, Y_predict))
  # print("Recall score:", recall_score(Y_test, Y_predict))
  recall_scores.append(recall_score(y_val, Y_predict))

# TODO: subplots
plt.title("Cum influenteaza random state asupra accuracy")


plt.title("Cum influenteaza random state asupra recall")
plt.plot(random_states_list, acc_scores, 'x')
plt.xlabel('Random state')
plt.ylabel('Accuracy score')
```

```
Text(0, 0.5, 'Accuracy score')
```

![png](../.gitbook/assets/output\_69\_1.png)

```python
max_leaf_nodes_list = [None] + list(range(4,30))

acc_scores = []
f1_scores = []
recall_scores = []


for max_leaf_nodes in max_leaf_nodes_list:
      clf = DecisionTreeClassifier(max_leaf_nodes=max_leaf_nodes)
      clf.fit(x_train, y_train)

      Y_predict = clf.predict(x_val)
      Y_predicts.append(Y_predict)

      # print("Accuracy score:", accuracy_score(Y_test, Y_predict))
      acc_scores.append(accuracy_score(y_val, Y_predict))
      # print("F1 score:", f1_score(Y_test, Y_predict))
      f1_scores.append(f1_score(y_val, Y_predict))
      # print("Recall score:", recall_score(Y_test, Y_predict))
      recall_scores.append(recall_score(y_val, Y_predict))

# max_leaf_nodes_list[0] = -1

plt.title("Cum influenteaza nr de frunze asupra accuracy")
plt.plot(max_leaf_nodes_list, acc_scores, 'x')
# plt.plot(max_leaf_nodes_list, f1_scores, 'o')
# plt.plot(max_leaf_nodes_list, recall_scores, 'x')
plt.xlabel('Max leaf nodes')
plt.ylabel('Accuracy score')
```

```
Text(0, 0.5, 'Accuracy score')
```

![png](../.gitbook/assets/output\_70\_1.png)

```python
acc_scores = []
f1_scores = []
recall_scores = []

# max_depth_list = [1, 2, 30, 50]

# for max_depth in max_depth_list:
for max_depth in range(1, 20, 2):

      clf = DecisionTreeClassifier(max_depth=max_depth)
      clf.fit(x_train, y_train)

      Y_predict = clf.predict(x_val)
      Y_predicts.append(Y_predict)

      # print("Accuracy score:", accuracy_score(Y_test, Y_predict))
      acc_scores.append(accuracy_score(y_val, Y_predict))
      # print("F1 score:", f1_score(Y_test, Y_predict))
      f1_scores.append(f1_score(y_val, Y_predict))
      # print("Recall score:", recall_score(Y_test, Y_predict))
      recall_scores.append(recall_score(y_val, Y_predict))


plt.title("Cum influenteaza nr de frunze asupra accuracy")
plt.plot(range(1, 20, 2), acc_scores, 'x')
# plt.plot(max_leaf_nodes_list, f1_scores, 'o')
# plt.plot(max_leaf_nodes_list, recall_scores, 'x')
plt.xlabel('Max depth')
plt.ylabel('Accuracy score')
```

```
Text(0, 0.5, 'Accuracy score')
```

![png](../.gitbook/assets/output\_71\_1.png)

### alegem cei mai buni parametri

```python
clf = DecisionTreeClassifier(max_depth=6)
clf.fit(x_train, y_train)
Y_predict = clf.predict(x_test)
print("Accuracy score:", accuracy_score(y_test, Y_predict))
print("F1 score:", f1_score(y_test, Y_predict))
print("Recall score:", recall_score(y_test, Y_predict))
```

```
Accuracy score: 1.0
F1 score: 1.0
Recall score: 1.0
```

#### Interpretarea rezultatelor

```python
clf = DecisionTreeClassifier(max_depth=4)
clf.fit(X_train, Y_train)
```

```
DecisionTreeClassifier(ccp_alpha=0.0, class_weight=None, criterion='gini',
                       max_depth=6, max_features=None, max_leaf_nodes=None,
                       min_impurity_decrease=0.0, min_impurity_split=None,
                       min_samples_leaf=1, min_samples_split=2,
                       min_weight_fraction_leaf=0.0, presort='deprecated',
                       random_state=None, splitter='best')
```

```python
from sklearn.tree import DecisionTreeClassifier, plot_tree
plt.figure(figsize=(20, 20))
plot_tree(clf)
```

```
[Text(485.2173913043478, 1009.5428571428572, 'X[8] <= 3.5\ngini = 0.499\nsamples = 5443\nvalue = [2830, 2613]'),
 Text(242.6086956521739, 854.2285714285715, 'X[20] <= 3.5\ngini = 0.277\nsamples = 2214\nvalue = [368, 1846]'),
 Text(97.04347826086956, 698.9142857142858, 'X[19] <= 1.5\ngini = 0.215\nsamples = 399\nvalue = [350, 49]'),
 Text(48.52173913043478, 543.6, 'gini = 0.0\nsamples = 31\nvalue = [0, 31]'),
 Text(145.56521739130434, 543.6, 'X[7] <= 0.5\ngini = 0.093\nsamples = 368\nvalue = [350, 18]'),
 Text(97.04347826086956, 388.28571428571433, 'gini = 0.0\nsamples = 350\nvalue = [350, 0]'),
 Text(194.08695652173913, 388.28571428571433, 'gini = 0.0\nsamples = 18\nvalue = [0, 18]'),
 Text(388.17391304347825, 698.9142857142858, 'X[10] <= 2.0\ngini = 0.02\nsamples = 1815\nvalue = [18, 1797]'),
 Text(339.6521739130435, 543.6, 'X[12] <= 0.5\ngini = 0.008\nsamples = 1804\nvalue = [7, 1797]'),
 Text(291.1304347826087, 388.28571428571433, 'X[7] <= 0.5\ngini = 0.434\nsamples = 22\nvalue = [7, 15]'),
 Text(242.6086956521739, 232.97142857142865, 'gini = 0.0\nsamples = 15\nvalue = [0, 15]'),
 Text(339.6521739130435, 232.97142857142865, 'gini = 0.0\nsamples = 7\nvalue = [7, 0]'),
 Text(388.17391304347825, 388.28571428571433, 'gini = 0.0\nsamples = 1782\nvalue = [0, 1782]'),
 Text(436.695652173913, 543.6, 'gini = 0.0\nsamples = 11\nvalue = [11, 0]'),
 Text(727.8260869565217, 854.2285714285715, 'X[19] <= 1.5\ngini = 0.362\nsamples = 3229\nvalue = [2462, 767]'),
 Text(582.2608695652174, 698.9142857142858, 'X[10] <= 0.5\ngini = 0.211\nsamples = 485\nvalue = [58, 427]'),
 Text(533.7391304347826, 543.6, 'gini = 0.0\nsamples = 58\nvalue = [58, 0]'),
 Text(630.7826086956521, 543.6, 'gini = 0.0\nsamples = 427\nvalue = [0, 427]'),
 Text(873.391304347826, 698.9142857142858, 'X[7] <= 0.5\ngini = 0.217\nsamples = 2744\nvalue = [2404, 340]'),
 Text(727.8260869565217, 543.6, 'X[14] <= 1.5\ngini = 0.048\nsamples = 2320\nvalue = [2263, 57]'),
 Text(679.304347826087, 388.28571428571433, 'gini = 0.0\nsamples = 26\nvalue = [0, 26]'),
 Text(776.3478260869565, 388.28571428571433, 'X[17] <= 1.5\ngini = 0.027\nsamples = 2294\nvalue = [2263, 31]'),
 Text(727.8260869565217, 232.97142857142865, 'gini = 0.0\nsamples = 2042\nvalue = [2042, 0]'),
 Text(824.8695652173913, 232.97142857142865, 'X[19] <= 6.0\ngini = 0.216\nsamples = 252\nvalue = [221, 31]'),
 Text(776.3478260869565, 77.65714285714284, 'gini = 0.0\nsamples = 31\nvalue = [0, 31]'),
 Text(873.391304347826, 77.65714285714284, 'gini = 0.0\nsamples = 221\nvalue = [221, 0]'),
 Text(1018.9565217391304, 543.6, 'X[9] <= 0.5\ngini = 0.444\nsamples = 424\nvalue = [141, 283]'),
 Text(970.4347826086956, 388.28571428571433, 'X[21] <= 1.5\ngini = 0.346\nsamples = 364\nvalue = [81, 283]'),
 Text(921.9130434782609, 232.97142857142865, 'gini = 0.0\nsamples = 188\nvalue = [0, 188]'),
 Text(1018.9565217391304, 232.97142857142865, 'X[3] <= 0.5\ngini = 0.497\nsamples = 176\nvalue = [81, 95]'),
 Text(970.4347826086956, 77.65714285714284, 'gini = 0.146\nsamples = 88\nvalue = [81, 7]'),
 Text(1067.4782608695652, 77.65714285714284, 'gini = 0.0\nsamples = 88\nvalue = [0, 88]'),
 Text(1067.4782608695652, 388.28571428571433, 'gini = 0.0\nsamples = 60\nvalue = [60, 0]')]
```

![png](../.gitbook/assets/output\_76\_1.png)

#### sa ne uitam la niste exemple

```python
test_data = X_test.copy()
test_data['y_true'] = Y_test['class']
test_data['y_pred'] = clf.predict(X_test)
```

```python
test_data.head()
```

|      | cap-shape | cap-surface | cap-color | bruises | odor | gill-attachment | gill-spacing | gill-size | gill-color | stalk-shape | stalk-root | stalk-surface-above-ring | stalk-surface-below-ring | stalk-color-above-ring | stalk-color-below-ring | veil-type | veil-color | ring-number | ring-type | spore-print-color | population | habitat | y\_true | y\_pred |
| ---- | --------- | ----------- | --------- | ------- | ---- | --------------- | ------------ | --------- | ---------- | ----------- | ---------- | ------------------------ | ------------------------ | ---------------------- | ---------------------- | --------- | ---------- | ----------- | --------- | ----------------- | ---------- | ------- | ------- | ------- |
| 1971 | 2         | 0           | 4         | 0       | 5    | 1               | 1            | 0         | 3          | 1           | 3          | 2                        | 0                        | 7                      | 7                      | 0         | 2          | 1           | 0         | 3                 | 3          | 1       | 0       | 0       |
| 6654 | 2         | 2           | 2         | 0       | 8    | 1               | 0            | 1         | 0          | 1           | 0          | 2                        | 2                        | 6                      | 6                      | 0         | 2          | 1           | 0         | 7                 | 4          | 2       | 1       | 1       |
| 5606 | 5         | 3           | 4         | 0       | 2    | 1               | 0            | 1         | 0          | 1           | 0          | 1                        | 2                        | 7                      | 6                      | 0         | 2          | 1           | 0         | 7                 | 4          | 2       | 1       | 1       |
| 3332 | 2         | 3           | 3         | 1       | 5    | 1               | 0            | 0         | 5          | 1           | 1          | 2                        | 2                        | 3                      | 6                      | 0         | 2          | 1           | 4         | 3                 | 5          | 0       | 0       | 0       |
| 6988 | 2         | 2           | 2         | 0       | 7    | 1               | 0            | 1         | 0          | 1           | 0          | 2                        | 2                        | 6                      | 6                      | 0         | 2          | 1           | 0         | 7                 | 4          | 2       | 1       | 1       |

![image.png](https://firebasestorage.googleapis.com/v0/b/gitbook-x-prod.appspot.com/o/spaces%2F-LC\_5HzGN5YrUWcolXKK%2Fuploads%2FIXZjpJ4d78im6o7llFhx%2Ffile.png?alt=media)

```python
test_data['TP'] = (test_data['y_true'] == test_data['y_pred']) & (test_data['y_true'] == 1)
```

```python
test_data[test_data['TP']].head()
```

|      | cap-shape | cap-surface | cap-color | bruises | odor | gill-attachment | gill-spacing | gill-size | gill-color | stalk-shape | stalk-root | stalk-surface-above-ring | stalk-surface-below-ring | stalk-color-above-ring | stalk-color-below-ring | veil-type | veil-color | ring-number | ring-type | spore-print-color | population | habitat | y\_true | y\_pred | TP   |
| ---- | --------- | ----------- | --------- | ------- | ---- | --------------- | ------------ | --------- | ---------- | ----------- | ---------- | ------------------------ | ------------------------ | ---------------------- | ---------------------- | --------- | ---------- | ----------- | --------- | ----------------- | ---------- | ------- | ------- | ------- | ---- |
| 6654 | 2         | 2           | 2         | 0       | 8    | 1               | 0            | 1         | 0          | 1           | 0          | 2                        | 2                        | 6                      | 6                      | 0         | 2          | 1           | 0         | 7                 | 4          | 2       | 1       | 1       | True |
| 5606 | 5         | 3           | 4         | 0       | 2    | 1               | 0            | 1         | 0          | 1           | 0          | 1                        | 2                        | 7                      | 6                      | 0         | 2          | 1           | 0         | 7                 | 4          | 2       | 1       | 1       | True |
| 6988 | 2         | 2           | 2         | 0       | 7    | 1               | 0            | 1         | 0          | 1           | 0          | 2                        | 2                        | 6                      | 6                      | 0         | 2          | 1           | 0         | 7                 | 4          | 2       | 1       | 1       | True |
| 5761 | 5         | 3           | 4         | 0       | 8    | 1               | 0            | 1         | 0          | 1           | 0          | 1                        | 2                        | 7                      | 6                      | 0         | 2          | 1           | 0         | 7                 | 4          | 2       | 1       | 1       | True |
| 5798 | 5         | 2           | 3         | 1       | 2    | 1               | 0            | 0         | 3          | 1           | 1          | 2                        | 0                        | 7                      | 7                      | 0         | 2          | 1           | 4         | 1                 | 3          | 5       | 1       | 1       | True |

```python
test_data[test_data['TP']].describe()
```

|       | cap-shape   | cap-surface | cap-color   | bruises     | odor        | gill-attachment | gill-spacing | gill-size   | gill-color  | stalk-shape | stalk-root  | stalk-surface-above-ring | stalk-surface-below-ring | stalk-color-above-ring | stalk-color-below-ring | veil-type | veil-color | ring-number | ring-type   | spore-print-color | population | habitat     | y\_true | y\_pred |
| ----- | ----------- | ----------- | ----------- | ----------- | ----------- | --------------- | ------------ | ----------- | ----------- | ----------- | ----------- | ------------------------ | ------------------------ | ---------------------- | ---------------------- | --------- | ---------- | ----------- | ----------- | ----------------- | ---------- | ----------- | ------- | ------- |
| count | 1302.000000 | 1302.000000 | 1302.000000 | 1302.000000 | 1302.000000 | 1302.000000     | 1302.000000  | 1302.000000 | 1302.000000 | 1302.000000 | 1302.000000 | 1302.000000              | 1302.000000              | 1302.000000            | 1302.000000            | 1302.0    | 1302.0     | 1302.000000 | 1302.000000 | 1302.000000       | 1302.00000 | 1302.000000 | 1302.0  | 1302.0  |
| mean  | 3.447773    | 2.058372    | 4.404762    | 0.168203    | 3.951613    | 0.996160        | 0.026882     | 0.565284    | 2.920891    | 0.505376    | 0.710445    | 1.360215                 | 1.402458                 | 5.505376               | 5.506912               | 0.0       | 2.0        | 1.011521    | 1.559140    | 3.969278          | 4.02381    | 1.905530    | 1.0     | 1.0     |
| std   | 1.439518    | 1.102566    | 2.640617    | 0.374190    | 2.571043    | 0.061874        | 0.161800     | 0.495910    | 3.303837    | 0.500163    | 0.809170    | 0.561416                 | 0.588849                 | 2.196962               | 2.193807               | 0.0       | 0.0        | 0.163614    | 1.565615    | 2.839110          | 0.59479    | 1.805573    | 0.0     | 0.0     |
| min   | 0.000000    | 0.000000    | 0.000000    | 0.000000    | 1.000000    | 0.000000        | 0.000000     | 0.000000    | 0.000000    | 0.000000    | 0.000000    | 0.000000                 | 0.000000                 | 0.000000               | 0.000000               | 0.0       | 2.0        | 0.000000    | 0.000000    | 1.000000          | 1.00000    | 0.000000    | 1.0     | 1.0     |
| 25%   | 2.000000    | 2.000000    | 2.000000    | 0.000000    | 2.000000    | 1.000000        | 0.000000     | 0.000000    | 0.000000    | 0.000000    | 0.000000    | 1.000000                 | 1.000000                 | 6.000000               | 6.000000               | 0.0       | 2.0        | 1.000000    | 0.000000    | 1.000000          | 4.00000    | 0.000000    | 1.0     | 1.0     |
| 50%   | 3.000000    | 2.000000    | 4.000000    | 0.000000    | 2.000000    | 1.000000        | 0.000000     | 1.000000    | 2.000000    | 1.000000    | 1.000000    | 1.000000                 | 1.000000                 | 6.000000               | 6.000000               | 0.0       | 2.0        | 1.000000    | 2.000000    | 3.000000          | 4.00000    | 1.000000    | 1.0     | 1.0     |
| 75%   | 5.000000    | 3.000000    | 5.000000    | 0.000000    | 7.000000    | 1.000000        | 0.000000     | 1.000000    | 7.000000    | 1.000000    | 1.000000    | 2.000000                 | 2.000000                 | 7.000000               | 7.000000               | 0.0       | 2.0        | 1.000000    | 2.000000    | 7.000000          | 4.00000    | 4.000000    | 1.0     | 1.0     |
| max   | 5.000000    | 3.000000    | 9.000000    | 1.000000    | 8.000000    | 1.000000        | 1.000000     | 1.000000    | 11.000000   | 1.000000    | 3.000000    | 2.000000                 | 3.000000                 | 7.000000               | 8.000000               | 0.0       | 2.0        | 2.000000    | 4.000000    | 7.000000          | 5.00000    | 5.000000    | 1.0     | 1.0     |

```python
# cum gasim pe TN?
```

```python
# cum gasim pe FN?
```

```python
# cum gasim pe FP?
```

#### Boundaries plot

```python
import numpy as np

col1 = 8
col2 = 19
x_min, x_max = -1,  X_test.iloc[:,col1].max()+1
y_min, y_max = -1,  X_test.iloc[:,col2].max()+1
h = 0.1
# cream un grid de puncte cu 2 coordonate care se incadreaza in coordonatele de sus
xx, yy = np.meshgrid(np.arange(x_min, x_max, h), np.arange(y_min, y_max, h))
# xx - matrice cu 2 dimensiuni (randuri, coloane), cu coordonatele lui x pentru toate punctele
x_grid = np.c_[xx.ravel(), yy.ravel()] # -> (randuri * coloane, 2)
x_new = np.zeros((x_grid.shape[0], 22))
x_new[:, col1] = x_grid[:,0]
x_new[:, col2] = x_grid[:,1]
Z = clf.predict(x_new).reshape(xx.shape)
plt.figure(figsize=(x_max,y_max))
plt.title('hotare de decizii pentru coloanele {} si  {}'.format(col1,col2))
plt.contourf(xx, yy, Z, alpha=0.4)
plt.xlabel(data_encoded.columns[col1]+ "col_nr:{}".format(col1))
plt.ylabel(data_encoded.columns[col2]+ "col_nr:{}".format(col2))
plt.scatter(X_test.iloc[:,col1], X_test.iloc[:,col2], c=Y_test['class'], alpha=0.8)
```

![png](../.gitbook/assets/output\_88\_1.png)

* [https://numpy.org/doc/stable/reference/generated/numpy.meshgrid.html](https://numpy.org/doc/stable/reference/generated/numpy.meshgrid.html)
* [https://numpy.org/doc/stable/reference/generated/numpy.ravel.html](https://numpy.org/doc/stable/reference/generated/numpy.ravel.html)
*   [https://numpy.org/doc/stable/reference/generated/numpy.c\_.html](https://numpy.org/doc/stable/reference/generated/numpy.c\_.html)

    \*[https://matplotlib.org/api/\_as\_gen/matplotlib.pyplot.contourf.html](https://matplotlib.org/api/\_as\_gen/matplotlib.pyplot.contourf.html)

```python
```
