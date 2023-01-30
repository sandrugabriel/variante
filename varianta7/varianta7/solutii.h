﻿#pragma once
#include "functii.h"
#include "backing.h"


/* Se consideră un text cu maximum 255 de caractere, format din litere mici ale alfabetului
englez şi spaţii. Textul conţine cel puţin o consoană. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi apoi determină transformarea acestuia, eliminând numai ultima
consoană care apare în text, ca în exemplu. Programul va afişa pe ecran textul obţinut.
Exemplu: dacă de la tastatură se introduce textul: mare frig saci
pe ecran se va afişa: mare frig sai */
void solutia1() {

    char s[100] = "mare frig saci";

    elimUltim(s);

}

/* Se consideră subprogramul f definit
alăturat. Ce se va afişa în urma
apelului f(12345);? (4p.)
void f(long int n)
{ if (n!=0)
 {if (n%2 == 0)
 cout<<n%10; | printf(“%d”,n%10);
 f(n/10);
 }
}
a. 513 b. 24 c. 42 d. 315 */
void solutia2() {

    f(12345);
    //c.42
}

/*Folosind tehnica bactracking un elev a scris un program care generează toate numerele de
câte n cifre (0<n≤9), cifrele fiind în ordine strict crescătoare. Dacă n este egal cu 5, scrieți
în ordine crescătoare toate numerele având cifra unităților 6, care vor fi generate de
program*/
void solutia3() {

    b();
}

/* Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤100)şi cele
3*n elemente ale tabloului unidimensional v, fiecare element fiind un număr natural cu cel
mult patru cifre fiecare. Tabloul este împărţit în trei zone, cu câte n elemente: prima zonă
conţine primele n elemente din tablou, a doua zonă conţine următoarele n elemente din
tablou, restul elementelor fiind în zona a treia. Programul va interschimba primul element
par (dacă există) al zonei unu cu ultimul element impar (dacă există) al zonei trei şi apoi va
scrie pe prima linie a fişierului text BAC.TXT toate elementele tabloului, separate prin câte
un spaţiu. În cazul în care unul dintre aceste două elemente, care urmează a fi
interschimbate, nu există, programul nu va efectua nici o modificare asupra tabloului dat.
Exemplu: pentru n=3 şi v=(1 2 3 4 5 6 7 8 9), fişierul BAC.TXT va conţine:
1 9 3 4 5 6 7 8 2 */
void solutia4() {
    int n = 3, v[100] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    afisare(n, v);

}

/*Se consideră şirul definit de relaţia de
recurenţă alăturată:

fn= n, daca n<=5 
    2*fn-1, daca n>5

a) Scrieţi definiţia completă a unui subprogram sub, care primeşte prin intermediul
singurului său parametru n un număr natural de maximum 8 cifre, şi care returnează cel
mai mare termen al şirului f care este mai mic sau cel mult egal cu n.
Exemplu: dacă n=83 atunci subprogramul va returna valoarea 80. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural s (s≤10000000)
şi determină scrierea lui s ca sumă de termeni distincţi ai şirului dat folosind apeluri utile ale
subprogramului sub. Numerele astfel determinate se vor scrie pe ecran, pe aceeaşi linie,
separate prin câte un spaţiu. i
Exemplu: dacă valoarea citită de la tastatură este 63, se va afişa:
40 20 3 */
void solutia5() {

    int s = 63;
    afisaref(s);
}









