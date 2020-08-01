# Comunicare între componente

## Organizarea Componentelor

În general, se obișnuiește organizarea aplicației într-un arbore de componente imbricate:

![](../../.gitbook/assets/image%20%28300%29.png)

Spre exemplu, ai putea avea componente pentru header, sidebar și content area, fiecare conținând, de obicei, alte componente pentru blog posts, link-uri de navigare ș.a.

Pentru a utiliza componentele date în șabloanele noastre, acestea trebuie înregistrate astfel încât Vue să știe de existența acestora. Sunt 2 tipuri de înregistrare a componentelor: **global** și __**local.** Pentru mai multe detalii, [accesează-mă](https://vuejs.org/v2/guide/components-registration.html).

