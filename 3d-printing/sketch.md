---
description: >-
  Schița e elementul de bază a unui model 3D. Aici mai jos sunt mici tutoriale
  cu tips & tricks pentru un design după bunele practici pe care propun să le
  urmezi pentru viitoarele proiecte. Spor!
---

# Sketch

## Your first design

![](../.gitbook/assets/image%20%28150%29.png)

1. Save your design
2. Create a new component
3. Create sketch
4. Select a plane

![](../.gitbook/assets/image%20%2824%29.png)

5. In the "Sketch" menu select command "Line"  
6. Start always from origin  
7. First click puts the first point of your line. Release the left click and move the cursor in the desired direction. Second click sets the length and orientation of your line. Hit "Esc" button to exit the "Line" command.

![](../.gitbook/assets/image%20%28102%29.png)

8. In the "Sketch" menu select "Sketch dimension" to give dimension to the lines. Dimension of the line is determined by the distance between its points. Select two points of the line, release the left mouse button, move your cursor aside, at a distance of 5-10 mm, so it is not intersecting any other objects or lines, and dimension is visible.  
9. Exist sketch

![](../.gitbook/assets/image%20%2826%29.png)

10. From the menu "Create" select "Extrude" command. A dialog will appear on the right which will guide you in the operations of the command. Extrude command "grows" a closed profile into a 3D body.  
First, you have to select your profile and then you indicate the distance or height for the profile to be extruded. After you decided the dimension, hit ok. Now you have your first 3D body created.

## Pineapple paperclip



Urmatorul exercitiu este introductiv in Fusion 360 in care invatat cum sa incepem o schita. Care sunt pasii importanti cu care incepem si cum modificam schita noastra in 3 dimensiuni.

Vom invata functii ca :

* **Line** - trasam o linie
* **Constraction** - constringere care face linia intrerupta \(linii ajutatoare, orientative\)
* **Mirror** - oglindirea elementelor selectate pe partea opusa a axei
* **Trim** - taierea liniilor 
* **Fillet** - rotungirea unghiurilor
* **Offset** - copierea liniilor la o distanta anumita
* **Extrude** - cresterea profilului in inaltime



1. Ducem liniile orientative. Sketch&gt; Line si incepem linia din punctul de origine si trasam in sus. Apoi o sa ducem urmatoarele 2 linii orizontale.

![](../.gitbook/assets/tempsnip%20%281%29.png)



2. Selectam toate liniile si din submeniul Sketch Palette facem click pe constringerea Constraction. In asa fel liniile noastre au devenit constructive. Pastrind liniile selectate la fel din Sketch Palette facem click pe constringerea Horizontal/Vertical pentru a seta liniile orizontal, si respectiv vertical.



3. Dupa ce am impartit obiectul nostru in 3 parti incepem cu modelarea pineapple-ului. Vom modela doar jumatate din el, Sketch&gt;Line si incepind din punctul de intersectia a axei verticale cu cea orizontala si finisind in al doilea punct de intersectie ducem o serie de linii formind o linie frinta.

4. Sketch&gt;Mirror  ne ajuta sa oglindim in partea opusa. Apare o fereastra mica, selectam toate liniile care trebuie oglindite si Mirror line selectam axa verticala.

![](../.gitbook/assets/tempsnip2.png)

5. In acelasi mod cream si frunzele pineapple-ului si le oglindim cu functia Mirror.

![](../.gitbook/assets/image%20%2893%29.png)

6. Pentru a rotungi unghiurile selectam functia Fillet apoi selectam liniile care formeaza unghiul sau selectam punctul lor de intersectie. Raza fillet-ului o fixam de 0.5mm

![](../.gitbook/assets/tempsnip3.png)

7. La fel ducem o linie pentru clamele paperclip-ului. Folosind functia Offset din meniul Create, selectam liniile duse pentru clame si setam o distanta dintre copie si original.La fel cream inca 2 copii. In total sa avem 4 linii care formeaza clamele.

![](../.gitbook/assets/image%20%28139%29.png)

8. Selectam functia Trim din meniul Create si taiem liniile din interiorul pineapple.

![](../.gitbook/assets/image%20%28168%29.png)

9. Create&gt;Extrude crestem obiectul nostru in inaltime de 5mm.

![](../.gitbook/assets/image%20%2834%29.png)

Obiectul final. 

![](../.gitbook/assets/image%20%2846%29.png)

## Breloc Batman

În acest exercițiu vom face un breloc în formă de Batman folosid "**Line**" , "**Fillet**" ,"**Extrude**" și "**Mirror**" .  

![](../.gitbook/assets/image%20%285%29.png)

  
Hai să o facem pas cu pas.

1. Save
2. New component
3. Create sketch
4. Select plan

![](../.gitbook/assets/image%20%28153%29.png)

5. Sketch -&gt;Line -&gt; Creem o schiță ca în modelul de mai sus  cu dimensiunile:

* Partea de mijloc **până** la ureche  25mm, 2.5mm.
* Urechea - 2.5mm x 112 deg, 5mm x 95d eg.
* Partea de sus a aripei - 8mm x 150 deg, 10mm x 150 deg.
* Partea din stânga - 12.5mm x 116 deg, 12.5 x 64 deg.
* Partea de jos - 16 mm x 39 deg.
* Gaura brelocului 3mm.

6. Sketch -&gt; Fillet  -  11mm x 12mm x 5mm.

![](../.gitbook/assets/image%20%28177%29.png)

7. Oglindim modelul  prin : Sketch -&gt; Mirror 

![](../.gitbook/assets/image%20%28114%29.png)

8. Sketch -&gt; Extrude  - Distance - 2mm

![](../.gitbook/assets/image%20%2881%29.png)

Bravo ! Ai realizat propriul tău breloc, învățând astfel să folosești comenzile "**Line**", "**Fillet**", "**Mirror**" și "**Extrude**" .

