---
description: >-
  Aici mai jos sunt mici tutoriale care explică comenzile cu care operezi pe
  obiectele solide din meniurile „Create” și „Modify”
---

# Solid body

## Inel

![](https://lh4.googleusercontent.com/bDkRK33zERfcdyXvasN4vSLCEFrJK2FJ6KCKi6PQrlp7uYyV_yJbeKMB5xyovypSoA5c6YPH8NcoLc4DaoxHnslP9fs-qEGsvUCHcQC68tok3Hzsp6koFgLvLr6xTG550S0fejm6)

Dacă ați urmarit tutorialele pentru Sketch sunteți experimentați si gata pentru a învăța lucrurile cu corpurile solide, dacă nu atunci va sfătui sa o faceți.                                                                                    Modelul inelului este un exercitiu simplu de a invata functia **Revolve - c**reaza obiectul in 3D si il invirteste la 360 grade.

1. Modelăm schița dupa modelul de mai jos.

![](https://lh6.googleusercontent.com/0Bb2dtOKSXu4bsidWIMMGZ4MZtwLIYB2vQCpe2qUpd39-jBT9gjb_EL7weN3fEl3eRnSbl19IB2Vdu2tMOQbD4A53zdG-NfUEzAwhUiu_X8RUA8tsoWf9GS8Id62064WXP6IMwW7)

2. Create&gt;Revolve  selectam profilul și axa in jurul carui se va roti.

![](../.gitbook/assets/tempsnip5.png)

3. Pentru a face mai draguț inelul o sa modificam putin design-ul, adaugind careva elemente pe partea exterioara. Pentru asta avem nevoie ca sa schimbam pozitia workplane-ul .                                                              **Construct&gt;Offset plane**  selectam planul paralel cu inelul si deplasam planul pe partea exterioara a inelului.

![](../.gitbook/assets/image%20%28114%29.png)

4. Sketch&gt;Create sketch si selectam planul nou creat. Si aici adaugam dupa dorinta elemente pentru inel.

![](../.gitbook/assets/image%20%2829%29.png)

5. Create&gt;Extrude si deplasam spre interiorul inelului astfel facind gauri.

![](../.gitbook/assets/image%20%28120%29.png)

Modelul este gata pentru imprimare. Vedeți nu a fost atît de greu, dacă ați urmărit cu atenție.

![](../.gitbook/assets/image%20%28169%29.png)

## Model de vază

![](../.gitbook/assets/image%20%2878%29.png)

Acest exercițiu este pentru a invata cum **Planul** ne ajuta sa facem mai ușor obiecte neobișnuite si cum am putea implementa mai mult design in obiectele noastre.

1. O sa avem nevoie de 3 planuri sau mai multe daca doriti forma mai neobișnuită. **Construct&gt;Offset plan** selectam planul de jos si construim unul nou setînd o distanta spre ex. de 50mm dintre ele.

![](../.gitbook/assets/image%20%289%29.png)

2. Create&gt;Create sketch selectam primul plan pentru a face schița.

![](../.gitbook/assets/image%20%2880%29.png)

3. Dupa ce finisam schita facem click pe **Stop Sketch** din meniul de sus si facem schita noua pe fiecare plan Create&gt;Create sketch.

![](../.gitbook/assets/image%20%28178%29.png)

4. Pentru schița anterioară am folosit functia Spline folosita pentru a desena linie curbă.

![](../.gitbook/assets/image%20%28176%29.png)

5. Acum folosim functia **Create&gt;Loft** pentru a combina proflurile noastre si a crea modelul 3D                               

![](../.gitbook/assets/image%20%2868%29.png)

6. Pentru a face interiorul gol folosim functia **Modify&gt;Shell,** selectam fata de sus si setam grosimea peretilor de 2mm.

![](../.gitbook/assets/image%20%286%29.png)

Daca dorim sa modificam obiectul nostru putem sa editam orice schita. Gasim meniul de jos **Timeline** facem click drept pe schita care dorim sa o modificam si selectam **Edit sketch**.

**1 Plan - dreptunghi                                                                                                                                                          2 Plan - cerc                                                                                                                                                                      3 Plan - hexagon**

![](../.gitbook/assets/image%20%28115%29.png)

## Model Felinar

Urmând instrucțiunile din acest acest model, vei învăța despre cum să lucrezi cu mai multe componente într-un design, vei învăța despre comenzile „**Sweep**” și „**Circular Pattern**”

![](../.gitbook/assets/image%20%2870%29.png)

1. Save
2. New component
3. Create sketch
4. Select plane

![](../.gitbook/assets/image%20%28181%29.png)

5. Sketch -&gt; Rectangle from center point -&gt; dimensions 35 x 35 mm  
6. Create -&gt; Extrude -&gt; Distance 10 mm.

![](../.gitbook/assets/image%20%28152%29.png)

7. Modify -&gt; Shell \(selectați fața de jos\) -&gt; Inside Thickness - 1.6 mm

![](../.gitbook/assets/image%20%28144%29.png)

8. Create sketch -&gt; Sketch -&gt; Circle D=5 mm -&gt; Offset D=0.8 mm -&gt; Exit sketch

![](../.gitbook/assets/image%20%28168%29.png)

9. Selectează cercul interior -&gt; Modify -&gt; Extrude -&gt; Select profile -&gt; Extent \(select "to Object"\) -&gt; selectează fața opusă pentru a avea o „tăiere” până la fața selectată

![](../.gitbook/assets/image%20%28133%29.png)

![](../.gitbook/assets/image%20%2835%29.png)

10. Schița a devenit invizibilă. Pentru a vedea schița, în browser apăsați pe triungiul din față, va apărea un drop down, găsește acolo sketches și repetă aceeași acțiune. Fă click pe beculețul din fața schiței 2, aceasta va făcea vizibilă schița.  
11. Selectați profilul între cercurile create anterior -&gt; Create -&gt; Extrude d=10 mm.

12. În browser fă click dreapta pe componenta principală care are numele fișierului salvat. Selectați „Activate”. Aceasta vă întoarce la lucrul cu componenta principală.  
13. Creează o componentă nouă cu „New component”. Componenta precedentă a devenit transparentă.  
14. Create sketch, selectează fața de sus a bazei \( componenta 1\)

![](../.gitbook/assets/image%20%28149%29.png)

15. Pentru a crea o relație parametrică între componente, selectăm Sketch, „Project / Include” -&gt; Project -&gt; Selectăm cercul exterior a barei din prima componentă.   
16. Sketch -&gt; Offset -&gt; Selectează linia proiectată în pasul 15, d=0.3mm  
17. Sketch -&gt; Offset -&gt; Selectează linia proiectată în pasul 15, d=1.5mm  
 

![](../.gitbook/assets/image%20%2882%29.png)

18. Create -&gt; Extrude, d=120mm  
19. Creăm următoarea componentă repetând pașii 12-13.

![](../.gitbook/assets/image%20%28135%29.png)

Pentru a începe următoarea componentă vom crea un plan ajutător

20. Construct -&gt; Offset Plane -&gt; Selectăm planul de pe fața de sus  barei create în componenta 2 -&gt; D= -7mm  
21. Create sketch -&gt; Selectează planul construit la pasul 20.

![](../.gitbook/assets/image%20%28170%29.png)

22. Proiectează liniile de bară din componenta 1, din pasul 11.  
23. Create -&gt; Extrude d=7mm  


![](../.gitbook/assets/image%20%2879%29.png)

24. Create Sketch -&gt; Selecteaza fața da sus a cilindrului creat în pasul 23. -&gt; Sketch -&gt; Rectangle d=13 x 13 mm -&gt; Exit Sketch -&gt; Create -&gt; Extrude d=1mm.

![](../.gitbook/assets/image%20%2846%29.png)

25. Construct -&gt; Offset plane -&gt; Selecteaza fata de sus pentru corpul creat în pasul 24, d=20mm.

![](../.gitbook/assets/image%20%2834%29.png)

26.Create sketch  -&gt; Rectangle d - 25 x 25 mm -&gt; Stop sketch -&gt; Create -&gt; Extrude 4mm, Taper Angle -45deg.

![](../.gitbook/assets/image%20%28137%29.png)

27. Modify -&gt; Shell d=1.1 mm

![](../.gitbook/assets/image%20%28108%29.png)

28. Create sketch -&gt; Selecteaza fața cu ajutorul căreia a fost făcut Shell -&gt; Sketch -&gt; Rectangle -&gt; din dialogul Sketch palette bifează „3D sketch” -&gt; Sketch -&gt; Line -&gt; Unește vârfurile cu o linie ca în imaginea de mai sus.

![](../.gitbook/assets/image%20%28107%29.png)

29. Create -&gt; Sweep -&gt; Profile \(selectează profilul din pasul 28\) -&gt; Path \(linia creată în pasul 28 care unește vârfurile\) -&gt;  Operation -&gt; New body

![](../.gitbook/assets/image%20%28113%29.png)

30. Create - Circular Pattern -&gt; Pattern type -&gt; Bodies -&gt; Objects - Selectează corpul creat în pasul 29 -&gt; Axis - selectează aza Z -&gt; Quantity - 4.

Felicitări! Ai lucrat deja cu mai multe componente, ai învățat cum operezi cu mai mult obiecte într-o componentă și am învățat 2 comenzi noi - **Sweep** și **Pattern**.



