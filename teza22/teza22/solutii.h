#pragma once
#include "functii.h"


/*În secventa de instrucțiuni de mai jos, variabilele i și j sunt de tip întreg, iar variabila A memorează un
tablou bidimensional de tip char, cu 5 linii şi 5 coloane, numerotate de la
care pot înlocui
punctele de suspensie astfel încât, în urma executării secvenței obținute, tabloul memorat in
0 la 4. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni
(6 puncte)
variabila A să aibă elementele din figura de mai jos.
> Specializarea Matematică-Informatică
e concurenții participanti
(6 puncte)
a b c d e 
b a b c d 
c b a b c 
d c b a b
e d c b a*/
void solutia1() {

	generare();

}

/*2. Subprogramul prime primește prin parametrul n un număr natural (2<n<50) și prin parametrul a primește un tablou 
unidimensional, format din n numere naturale nenule şi distincte, fiecare număr având cel mult 9 cifre. Subprogramul 
returnează numărul de perechi distincte formate din elemente din tabloul v, prime între ele. Două numere naturale sunt
prime între ele dacă au un singur divizor comun: numărul 1. Scrieți în limbajul C++ definiția completă a subprogramuluiprime.
Exemplu: Dacă n = 6 și a = (42, 3, 14, 43, 8, 6) atunci, după apel, subprogramul va returna valoarea 7, deoarece vectorul
are 7 perechi de numere ce verifică proprietatea dată: (42, 43); (3, 14); (3, 43); (3, 8); (14, 43); (43, 8); (43, 6).
*/
void solutia2() {
	int a[100] = { 42, 3, 14, 43, 8, 6 };
	cout << prime(6, a);

}

/*
Fişierul bac.txt conține pe prima linie un număr natural n, care este multiplu de 7 (7<n<70000) şi pe a doua linie un 
şir de n numere întregi nenule, având cel mult trei cifre.Şirul de numere se împarte în secvențe de câte 7 numere 
denumite benzi şi pentru fiecare
afişează
C++, eficient ca timp de execuție și spațiu de memorie utilizat, care afişează pe ecran, bandă se determină cele 
mai mici două numere distincte min1 şi min2. Scrieți pentru fiecare dintre benzi, în ordine crescătoare cele două 
valori min1 şi min2 sau a
Exemplu: Pentru n = 21, şirul de numere -3, 10, 1, 2,-5, 6,-5, 1, 1, 1, 1, 1, 1, 1, 10,9,1.
numărul 0, dacă banda nu conține două valori distincte min1 şi min2.
2.3, 6,7 se va afişa -5 -3 0 1 2.*/
void solutia3() {

	afisarea();

}
















