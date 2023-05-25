#pragma once
#include "functii.h"



/*for (i=0; i<5; i++) {
for(j=0; j<5; j++)
{ ....
cout<<endl; }
6 7 8 9 10
7 8 9 10 11
8 9 10 11 12
9 10 11 12 13
10 11 12 13 14
*/
void solutia1() {

	generare();
}

/*
1. Scrieți un program în limbaj pseudocod care citeşte de la tastatură un număr natural n (2≤n≤50) şi n 
numere naturale distincte, fiecare număr având cel mult 9 cifre şi afişează numărul de perechi din şir,
formate din numere introduse consecutiv, cu proprietatea că un număr este oglindit pentru celălalt număr.
Exemplu: Dacă n = 7 şi v = (41, 14, 324, 423, 6, 82, 28) atunci se va afişa valoarea 3, deoarece şirul 
de numere conține 3 perechi de numere ce verifică proprietatea dată: (41, 14); (324, 423); (82, 28).
*/
void solutia2() {
	int n = 7, v[100] = { 41, 14, 324, 423, 6, 82, 28 };
	perechi(n, v);
}

/*
2. Se citesc de la tastatură un număr natural n (1<n<50) şi un tablou unidimensional v format format din n 
numere naturale nenule. Scrieți un program C++ care afişează cel mai mic factor prim comun tuturor elementelor
din tabloul v notat fp şi puterea factorului fp, notată cu p, pentru care numărul fp² este divizor pentru
fiecare element din tabloul v, cu p>0. Dacă elementele tabloului v nu au un factor prim comun atunci fp are
valoarea -1 și p are valoarea 0.
Exemplu: Pentru n = 4 și tabloul v= (60, 36, 18, 24), se va afișa fp=2, p=1, iar 
şi pentru n = 4 şi tabloul v= (22, 60, 21, 25), se va afişa fp=-1 şi p=0.
*/
void solutia3() {
	int n = 4, v[100] = { 60, 36, 18, 24 },fp,p;
	afisare(n,v,fp,p);
	
}

/*
3. Scrieți un program C++, eficient ca timp de execuție și spațiu de memorie utilizat, care afişează în fişierul
bac.txt, în ordine strict crescătoare, pe câte o linie, toate palindroamele formate din 6 cifre impare. Primele
3 numere afişate în fişier sunt: 111111,113311,115511*/
void solutia4() {
	afisarea();
}

















































