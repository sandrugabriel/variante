#pragma once
#include "functii.h"
#include "backing.h"

/*Scrieţi programul C/C++ care citeşte de la tastatură un şir de cel mult 40 de caractere,
format doar din litere ale alfabetului englez, şi care afişează pe ecran toate şirurile obţinute
prin eliminarea succesivă a câte unei singure litere din şirul citit, ca în exemplu. Şirurile se
vor afişa câte unul pe câte o linie a ecranului.
Exemplu: dacă se citeşte şirul abbc atunci pe ecran se va afişa:
bbc
abc
abc
abb*/
void solutia1() {
	char c[100] = "abbc";
	elim(c);
	
}

/*1. Utilizând metoda backtracking se generează toate cuvintele de câte 3 litere din mulţimea
{a,b,c}. Dacă primele patru cuvinte generate sunt, în acestă ordine: aaa, aab, aac,
aba, care este cel de-al optulea cuvânt generat? (4p.)
a. acb b. acc c. aca d. bca */
void solutia2() {

	back(0);

}

/*2. Subprogramul f are definiţia alăturată. Ce valoare are
f(4)? Dar f(11)? (6p.)
int f(int x)
{if(x<1)return 1;
 else return f(x-3)+1;
} */
void solutia3() {

	cout << f(4) << " " << f(11);

}

/*3. Scrieţi programul C/C++ care citeşte de la tastatură numărul natural n (0<n<100) şi un şir
format din n numere reale. Aceste numere au atât partea întreagă cât şi partea fracţionară
formate din cel mult trei cifre. Programul determină şi afişează pe ecran toate numerele din
şir care apar o singură dată în acesta.
Exemplu: dacă n=7, iar şirul este format din elementele (3.4, -151, 0.291, 3.4,
4.09, 3.4, 0.291), atunci pe ecran se va afişa -151 4.09. */
void solutia4() {
	int n = 7;
	float a[100] = { 3.4, -151, 0.291, 3.4, 4.09, 3.4, 0.291 };
	afisare(n, a);

}

/*. Fişierul text numere.txt conţine pe prima linie un număr natural n (0<n<100000), iar pe a
doua linie n numere naturale, formate din cel mult două cifre, separate prin câte un spaţiu.
a) Scrieţi un program C/C++, eficient atât din punct de vedere al timpului de executare, care
afişează pe ecran toate numerele situate pe a doua linie a fişierului, în ordinea crescătoare
a valorilor lor, separate prin câte un spaţiu.
Exemplu: dacă fişierul numere.txt are următorul conţinut:
7
12 21 22 11 9 12 3
atunci pe ecran se va afişa: 3 9 11 12 12 21 22*/
void solutia5() {

	afisarea();

}






