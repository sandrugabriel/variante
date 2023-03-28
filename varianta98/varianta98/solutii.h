#pragma once
#include "functii.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane care să conţină primele n2
 numere
naturale pare. Prima linie a matricei va conţine, în ordine crescătoare, valorile 0, 2,.., 2n-2;
a doua linie va conţine, în ordine, valorile 2n, 2n+2,.., 4n-2; a treia linie va conţine, în
ordine, valorile 4n, 4n+2,.., 6n-2, iar ultima linie va conţine, în ordine, valorile 2n2
-2n,
2n2
-2n+2,.., 2n2
-2.
5.
Programul afişează pe ecran matricea construită, câte o linie a matricei
pe câte o linie a ecranului, elementele de pe aceeaşi linie fiind despărţite
prin câte un spaţiu.
Exemplu: pentru n=3 se va afişa matricea alăturată. (10p.)
0 2 4
6 8 10
12 14 16*/
void solutia1() {

	int n = 3;
	generare(n);

}

/*3. Scrieţi în limbajul C/C++ definiţia completă a subprogramului numar, cu exact doi parametri,
care primeşte prin intermediul parametrului x un număr natural nenul de cel mult 2 cifre, şi
prin intermediul parametrului y un număr natural nenul de cel mult 9 cifre. Subprogramul
returnează cel mai mare număr natural z pentru care există un număr natural k astfel încât
z=xk şi z≤y.
Exemplu: pentru y=18 şi x=2 subprogramul va returna valoarea 16(=24
<18)*/
void solutia2() {

	cout<<numar(18, 2);

}

/*4. Pe prima linie a fişierului text DATE.TXT se află două numere naturale nenule n şi m
(n≤3000, m≤3000), pe a doua linie un şir de n numere naturale, ordonate crescător, având
fiecare cel mult 9 cifre, iar pe linia a treia un şir de m numere naturale, ordonate
descrescător, având fiecare cel mult 9 cifre. Numerele sunt despărţite, în cadrul liniilor, prin
câte un spaţiu.
a) Scrieţi programul C/C++ care citeşte numerele din fişier şi afişează, pe ecran, doar
numerele pare din cele două şiruri, ordonate crescător. Programul nu va afişa nimic dacă nu
există numere pare în cele două şiruri. Alegeţi o metodă de rezolvare eficientă ca timp de
executare.
Exemplu: dacă fişierul are conţinutul alăturat, pe ecran se
va afişa: 2 4 4 32 42 42 88 88 (6p.)
b) Descrieţi succint, în limbaj natural, metoda utilizată,
justificând eficienţa acesteia. (4p.)
5 8
2 4 7 37 42
88 88 67 45 42 32 4 1 
*/
void solutia3() {

	afisarea();

}




































