#pragma once
#include "functii.h"


/*2. Pentru declaraţia alăturată precizaţi care din
instrucţiunile de atribuire este greşită:
(6p.)
struct elev
 {char nume[20];
 int nota1;
 int nota2;} e1,e2;
a. e1=e2+1; b. e1.nume[2]=’x’;
c. e1=e2; d. e1.nota1=e2.nota2+1;*/
struct elev
{
	char nume[20];
	int nota1;
	int nota2;
} e1, e2;
void solutia1() {
//a.	e1 = e2+1;

}

/*Scrieţi un program C/C++ care citeşte de la tastatură numerele naturale m şi n din intervalul
[1,24], apoi construieşte în memorie şi afişează pe ecran un tablou bidimensional cu m
linii şi n coloane astfel încât prin parcurgerea acestuia linie cu linie de sus în jos şi fiecare
linie de la stânga la dreapta, se obţin în ordine descrescătoare toate numerele naturale de
la 1 la m*n, ca în exemplu.
5.
Fiecare linie a tabloului este afişată pe câte o linie a ecranului, elementele
aceleiaşi linii fiind separate prin câte un spaţiu.
Exemplu: pentru m=4 şi n=3 se va construi şi afişa tabloul alăturat. (10p.)
12 11 10
 9 8 7
 6 5 4
 3 2 1 */
void solutia2() {
	int m = 4, n = 3;
	generare(m, n);

}

/* 1. In timpul procesului de generare a permutărilor mulţimii {1,2,…,n} prin metoda
backtracking, în tabloul unidimensional x este plasat un element xk (1≤k≤n). Acesta este
considerat valid dacă este îndeplinită condiţia: (6p.)
a. xk∉{x1, x2, …, xk-1} b. xk≠xk-1
c. xk∉{x1, x2, …, xn} d. xk≠xk-1 şi xk≠xk+1*/
void solutia3() {

	//c. xk∉{x1, x2, …, xn}
}

/*Considerăm subprogramul recursiv definit
alăturat. Ce se va afişa în urma apelului de
mai jos?
f(’C’); (4p.)
void f(char c)
{ if (c>’A’) f(c-1);
 cout<<c; | printf(”%c”,c);
 if (c>’A’) f(c-1);
} */
void solutia4() {

	f('C');

}

/* 3. a) Scrieţi definiţia completă a unui subprogram, nz, cu un parametru întreg n (0<n≤32000),
care returnează numărul zerourilor de la sfârşitul numărului n!. (6p.)
b) Scrieţi programul C/C++ care citește de la tastatură un număr natural k (0<k≤3) și
determină, folosind apeluri ale subprogramului nz, cel mai mic număr natural n pentru care
n! are cel puţin k zerouri la sfârşit. Numărul determinat se afișează pe ecran. */
void solutia5() {
	int k = 3;
	afisare(k);

}

/* 4. Scrieţi programul C/C++ care citeşte din fişierul text BAC.TXT numărul întreg n
(1≤n≤10000) şi un şir de n perechi de numere întregi a b (1≤a≤b≤32000), fiecare pereche
fiind scrisă pe o linie nouă a fişierului, cu un spaţiu între cele două numere. Programul
afişează pe ecran pentru fiecare pereche a,b cel mai mare număr natural din intervalul
închis [a,b]care este o putere a lui 2 sau numărul 0 dacă nu există nicio putere a lui 2 în
intervalul respectiv. Numerele afișate pe ecran se scriu în linie, separate prin câte un
spașiu. Un număr p este putere a lui 2 dacă există un număr natural k astfel încât p=2k
.
Exemplu: dacă fişierul BAC.TXT conţine numerele
3
2 69
10 20
19 25
se va afişa: 64 16 0.*/
void solutia6() {

	afisarea();

}
