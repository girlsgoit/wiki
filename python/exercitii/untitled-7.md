---
description: "\U0001F4C2\U0001F4C2\U0001F4C2\U0001F4C2"
---

# Fișiere

1. Scrieți un program Python pentru a citi primele n linii ale unui fișier.
2. Scrieți un program Python pentru a citi ultimele n rânduri ale unui fișier.
3. Scrieți un program Python pentru a scrie un dicționar Python într-un fișier CSV. După scrierea fișierului CSV, citiți fișierul CSV și afișați conținutul.

```python
import csv
csv_columns = ['id','Column1', 'Column2', 
'Column3', 'Column4', 'Column5']
dict_data = {'id':['1', '2', '3'],
    'Column1':[33, 25, 56],
    'Column2':[35, 30, 30],
    'Column3':[21, 40, 55],
    'Column4':[71, 25, 55],
    'Column5':[10, 10, 40], }
csv_file = "temp.csv"
try:
   with open(csv_file, 'w') as csvfile:
       writer = csv.DictWriter(csvfile, fieldnames=csv_columns)
       writer.writeheader()
       for data in dict_data:
           writer.writerow(dict_data)
except IOError:
   print("I/O error")
data = csv.DictReader(open(csv_file))
print("CSV file as a dictionary:\n")
for row in data:
   print(row)
```

