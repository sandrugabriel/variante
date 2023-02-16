#pragma once
#include "functii.h"




/*5. Scrieţi un program C/C++ care citeşte de la tastatură un şir de caractere format din
maximum 10 caractere, reprezentând un număr real în care partea întreagă este separată
de partea zecimală prin caracterul punct. Programul afişează pe ecran valoarea obţinută
prin adunarea numărului corespunzător părţii întregi şi a numărului corespunzător părţii
zecimale ale datei citite.
Exemplu: dacă se citeşte de la tastatură şirul de caractere 120.456 atunci se va afişa
576, iar dacă se citeşte de la tastatură şirul de caractere 121.090 atunci se va afişa 130*/
void solutia1() {
	char s[100] = "120.456";
	afis(s);

}

/*2. Se consideră subprogramul f, definit alăturat.
a) Ce valoare are f(25)?
b) Dar expresia f(1)+f(5)+f(15)? (6p.)
int f(int n)
{ if (n>20) return 0;
 else return 5+f(n+5);
}*/
int f(int n)
{
	if (n > 20) return 0;
	else return 5 + f(n + 5);
}
void solutia2() {

	cout << f(25);
	cout << f(1) + f(5) + f(15);
}

/*Se consideră subprogramul cifre, care primeşte prin intermediul primului parametru, a, un
număr natural cu maximum 8 cifre nenule şi returnează, prin intermediul celui de-al doilea
parametrul b, cel mai mic număr care se poate forma cu toate cifrele distincte ale lui a.
a) Scrieţi definiţia completă a subprogramului cifre. (4p.)
b) Se consideră fişierul text date.in ce conţine pe prima linie un număr natural nenul n
(n≤100), iar pe a doua linie n numere naturale, separate prin câte un spaţiu, fiecare număr
având maximum 8 cifre nenule. Scrieţi un program C/C++ care citeşte toate numerele din
fişierul text date.in şi afişează pe ecran, despărţite prin câte un spaţiu, numerele situate
pe a doua linie a fişierului, formate numai din cifre distincte ordonate strict crescător,
folosind apeluri utile ale subprogramului cifre. În cazul în care nu există niciun astfel de
număr se va afişa valoarea 0.
Exemplu: dacă fişierul date.in are conţinutul
alăturat
6
16 175 333 242477 321 269 , atunci se vor afişa numerele: 16 269 (6p.)

*/
void solutia3() {


	afisare();
}

/*4. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤100)
şi 2*n numere naturale de maximum 3 cifre; primele n reprezintă elementele tabloului
unidimensional a, iar următoarele n elementele tabloului unidimensional b; fiecare tablou
are elementele numerotate începând de la 1. Programul construieste în memorie şi
afişează pe ecran, cu spaţii între ele, cele n elemente ale unui tablou unidimensional c, în
care orice element ci (1≤i≤n) se obţine conform definiţiei următoare:
ci = ┌ ai concatenat cu bi, dacă ai<bi
     └ bi concatenat cu ai, altfel
Exemplu: dacă se citesc n=3, a=(12,123,345) şi b=(1,234,15), atunci se afişează
elementele tabloului c astfel:
112 123234 15345*/
void solutia4() {
	int n = 3, a[100] = { 12,123,345 }, b[100] = { 1,234,15 };
	afisarea(n, a, b);

}




























