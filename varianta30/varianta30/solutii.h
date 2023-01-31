#pragma once
#include "functii.h"
#include "backing.h"

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr
natural n (2<n<=15) şi construieşte în memorie o matrice A cu n linii
şi n coloane în care orice element aflat pe prima linie sau pe prima
coloană are valoarea 1 şi oricare alt element Aij din matrice este
egal cu suma a două elemente din matrice, primul aflat pe linia i şi pe
coloana j-1, iar cel de-al doilea pe coloana j şi pe linia i-1.
Matricea va fi afişată pe ecran, linie cu linie, numerele de pe
aceeaşi linie fiind separate prin câte un spaţiu.
Exemplu: pentru n=4 , se obţine matricea alăturată. */
void solutia1() {
	int n = 4;
	generare(n);

}

/*1. Pentru generarea numerelor cu n cifre formate cu elementele mulţimii {0,4,8} se
utilizează un algoritm backtracking care, pentru n=2, generează, în ordine, numerele
40,44,48,80,84,88.
Dacă n=4 şi se utilizează acelaşi algoritm, care este numărul generat imediat după numărul
4008 ? (4p.)
a. 4040 b. 4004 c. 4080 d. 8004 */
void solutia2() {

	b();
}

/*Subprogramul f este definit alăturat.
Ce se afişează ca urmare a apelului
f(1,3);? (6p.)
void f (int x,int y)
{int i;
 for (i=x;i<=y;i++)
 {
 cout<<i; | printf(“%d”,i);
 f(i+1,y);
 }
}*/
void solutia3() {

	f(1, 3);

}

/*3. Scrieţi definiţia completă a subprogramului suma, care primeşte prin cei 4 parametri,
v,n,i,j:
- v, un tablou unidimensional cu maximum 100 de elemente întregi din intervalul
[-1000,1000], numerotate de la 1 la n;
- n, un număr natural reprezentând numărul de elemente din tabloul v;
- i şi j, două valori naturale cu 1≤i≤j≤100
şi returnează suma elementelor v1,…vi-1, vj+1,…,…,vn din tabloul v. */
void solutia4() {
	int v[101] = { 23,5,246,24,56,75,23,75 }, n = 8, i = 3, j = 6;
	cout << suma(v, n, i, j);
}

/*Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (1≤n≤100) şi pe
următoarea linie n numere reale pozitive ordonate crescător, separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte din fişierul NUMERE.IN numărul natural n, şi
determină, utilizând un algoritm eficient din punct de vedere al timpului de executare şi al
memoriei utilizate, numărul minim de intervale închise de forma [x,x+1], cu x număr
natural, a căror reuniune include toate numerele reale din fişier.
Exemplu: Dacă fişierul NUMERE.IN are conţinutul:
6
2.3 2.3 2.8 5.7 5.7 6.3
atunci se afişează 3 (intervalele [2,3], [5,6], [6,7] sunt cele 3 intervale de forma
cerută care conţin numere din şir). (6p.)
 b) Descrieţi în limbaj natural metoda utilizată şi explicaţi în ce constă eficienţa ei.*/
void solutia5() {

	afisare();

}














































