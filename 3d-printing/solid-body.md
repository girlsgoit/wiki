---
description: >-
  Aici mai jos sunt mici tutoriale care explică comenzile cu care operezi pe
  obiectele solide din meniurile „Create” și „Modify”
---

# Solid body

## Model Felinar

Urmând instrucțiunile din acest acest model, vei învăța despre cum să lucrezi cu mai multe componente într-un design, vei învăța despre comenzile „**Sweep**” și „**Circular Pattern**”

![](../.gitbook/assets/image%20%2862%29.png)

1. Save
2. New component
3. Create sketch
4. Select plane

![](../.gitbook/assets/image%20%28161%29.png)

5. Sketch -&gt; Rectangle from center point -&gt; dimensions 35 x 35 mm  
6. Create -&gt; Extrude -&gt; Distance 10 mm.

![](../.gitbook/assets/image%20%28136%29.png)

7. Modify -&gt; Shell \(selectați fața de jos\) -&gt; Inside Thickness - 1.6 mm

![](../.gitbook/assets/image%20%28129%29.png)

8. Create sketch -&gt; Sketch -&gt; Circle D=5 mm -&gt; Offset D=0.8 mm -&gt; Exit sketch

![](../.gitbook/assets/image%20%28151%29.png)

9. Selectează cercul interior -&gt; Modify -&gt; Extrude -&gt; Select profile -&gt; Extent \(select "to Object"\) -&gt; selectează fața opusă pentru a avea o „tăiere” până la fața selectată

![](../.gitbook/assets/image%20%28118%29.png)

![](../.gitbook/assets/image%20%2832%29.png)

10. Schița a devenit invizibilă. Pentru a vedea schița, în browser apăsați pe triungiul din față, va apărea un drop down, găsește acolo sketches și repetă aceeași acțiune. Fă click pe beculețul din fața schiței 2, aceasta va făcea vizibilă schița.  
11. Selectați profilul între cercurile create anterior -&gt; Create -&gt; Extrude d=10 mm.

12. În browser fă click dreapta pe componenta principală care are numele fișierului salvat. Selectați „Activate”. Aceasta vă întoarce la lucrul cu componenta principală.  
13. Creează o componentă nouă cu „New component”. Componenta precedentă a devenit transparentă.  
14. Create sketch, selectează fața de sus a bazei \( componenta 1\)

![](../.gitbook/assets/image%20%28134%29.png)

15. Pentru a crea o relație parametrică între componente, selectăm Sketch, „Project / Include” -&gt; Project -&gt; Selectăm cercul exterior a barei din prima componentă.   
16. Sketch -&gt; Offset -&gt; Selectează linia proiectată în pasul 15, d=0.3mm  
17. Sketch -&gt; Offset -&gt; Selectează linia proiectată în pasul 15, d=1.5mm  
 

![](../.gitbook/assets/image%20%2871%29.png)

18. Create -&gt; Extrude, d=120mm  
19. Creăm următoarea componentă repetând pașii 12-13.

![](../.gitbook/assets/image%20%28120%29.png)

Pentru a începe următoarea componentă vom crea un plan ajutător

20. Construct -&gt; Offset Plane -&gt; Selectăm planul de pe fața de sus  barei create în componenta 2 -&gt; D= -7mm  
21. Create sketch -&gt; Selectează planul construit la pasul 20.

![](../.gitbook/assets/image%20%28152%29.png)

22. Proiectează liniile de bară din componenta 1, din pasul 11.  
23. Create -&gt; Extrude d=7mm  


![](../.gitbook/assets/image%20%2869%29.png)

24. Create Sketch -&gt; Selecteaza fața da sus a cilindrului creat în pasul 23. -&gt; Sketch -&gt; Rectangle d=13 x 13 mm -&gt; Exit Sketch -&gt; Create -&gt; Extrude d=1mm.

![](../.gitbook/assets/image%20%2840%29.png)

25. Construct -&gt; Offset plane -&gt; Selecteaza fata de sus pentru corpul creat în pasul 24, d=20mm.

![](../.gitbook/assets/image%20%2831%29.png)

26.Create sketch  -&gt; Rectangle d - 25 x 25 mm -&gt; Stop sketch -&gt; Create -&gt; Extrude 4mm, Taper Angle -45deg.

![](../.gitbook/assets/image%20%28122%29.png)

27. Modify -&gt; Shell d=1.1 mm

![](../.gitbook/assets/image%20%2896%29.png)

28. Create sketch -&gt; Selecteaza fața cu ajutorul căreia a fost făcut Shell -&gt; Sketch -&gt; Rectangle -&gt; din dialogul Sketch palette bifează „3D sketch” -&gt; Sketch -&gt; Line -&gt; Unește vârfurile cu o linie ca în imaginea de mai sus.

![](../.gitbook/assets/image%20%2895%29.png)

29. Create -&gt; Sweep -&gt; Profile \(selectează profilul din pasul 28\) -&gt; Path \(linia creată în pasul 28 care unește vârfurile\) -&gt;  Operation -&gt; New body

![](../.gitbook/assets/image%20%28101%29.png)

30. Create - Circular Pattern -&gt; Pattern type -&gt; Bodies -&gt; Objects - Selectează corpul creat în pasul 29 -&gt; Axis - selectează aza Z -&gt; Quantity - 4.

Felicitări! Ai lucrat deja cu mai multe componente, ai învățat cum operezi cu mai mult obiecte într-o componentă și am învățat 2 comenzi noi - **Sweep** și **Pattern**.



