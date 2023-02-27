#pragma once
#include "functii.h"



/*5. Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt format din cel mult 50
caractere, doar litere mari ale alfabetului englez, şi afişează pe ecran, fiecare pe câte o linie,
toate sufixele acestuia, în ordine crescătoare a lungimilor. Un sufix de lungime k al unui
cuvânt este un subşir format din ultimele k caractere ale acestuia. (10p.)
Exemplu: dacă se citeşte cuvântul EXAMEN se vor afişa sufixele :
N
EN
MEN
AMEN
XAMEN
EXAMEN */
void solutia1() {
	char c[100] = "EXAMEN";
	sufix(c);

}

/*2. Se consideră subprogramul recursiv definit
alăturat. Ce valoare are alfa(6)? Pentru ce
valoare a parametrului u, alfa(u) are
valoarea 25 ? (6p.)
int alfa(int u)
{if (u==0) return 3;
 else return alfa(u-1)+3*u-2;
}*/
int alfa(int u)
{
	if (u == 0) return 3;
	else return alfa(u - 1) + 3 * u - 2;
}
void solutia2() {

	cout << alfa(6);

}

/*3. Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin intermediul parametrului n un număr natural nenul (1≤n≤10000), iar prin intermediul
parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre
aceste valori având cel mult 9 cifre. Subprogramul returnează numărul de numere prime
din tablou. (10p.)
Exemplu: pentru n=5 şi tabloul unidimensional (12,37,43,6,71) în urma apelului se va
returna 3. */
void solutia3() {

	int n = 5, a[100] = { 12,37,43,6,71 };

	cout << calcul(n, a);

}

/*4. Fişierul text NUMERE.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie un şir crescător de n numere naturale, fiecare având cel mult 9 cifre. Numerele
de pe a doua linie sunt separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care, utilizând o metodă eficientă din punct de vedere al
timpului de executare şi al spaţiului de memorie, afişează pe ecran elementele distincte ale
şirului aflat pe a doua linie a fişierului. (6p.)
Exemplu: dacă fişierul NUMERE.TXT are
conţinutul alăturat
7
111 111 111 2111 4111 71111 71111
atunci programul va afişa pe ecran 111 2111 4111 71111.*/
void solutia4() {

	afisarea();

}

















































































