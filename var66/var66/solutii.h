#pragma once
#include "functii.h"


/*5. Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt format din cel mult 50 de
caractere, doar litere mari ale alfabetului englez, şi afişează pe ecran, fiecare pe câte o linie,
toate prefixele acestuia, în ordine crescătoare a lungimilor. Un prefix de lungime k al unui
cuvânt este un subşir format din primele k caractere ale acestuia. (10p.)
Exemplu: dacă se citeşte cuvântul BACALAUREAT se vor afişa prefixele:
B
BA
BAC
BACA
BACAL
BACALA
BACALAU
BACALAUR
BACALAURE
BACALAUREA
BACALAUREAT*/
void solutia1() {
	char c[100] = "BACALAUREAT";
	prefix(c);

}

/*2. Se consideră subprogramul recursiv definit
alăturat. Ce valoare are functie(1)? Dar
functie(4)? (6p.)
int functie(int x)
{
 if (x<=0) return 3 ;
 else return functie(x-3)*4 ;
}*/
int functie(int x)
{
	if (x <= 0) return 3;
	else return functie(x - 3) * 4;
}
void solutia2() {

	functie(4);

}

/*3. Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin intermediul parametrului n un număr natural nenul (1≤n≤10000), iar prin intermediul
parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre
aceste valori având cel mult 9 cifre. Subprogramul returnează cel mai mare divizor comun
al elementelor tabloului a. (10p.)
Exemplu: în urma apelului, pentru n=5 şi tabloul unidimensional (12,36,48,6,60) se va
returna 6. */
void solutia3() {
	int n = 5, a[100] = { 12,36,48,6,60 };
	cout << calcul(n, a);

}

/*4. Fişierele text A.TXT şi B.TXT conţin cel mult 10000 de numere naturale cu cel mult 9
cifre fiecare, scrise fiecare pe câte o linie.
a) Scrieţi un program C/C++ care citeşte numerele din cele două fişiere şi, printr-o metodă
eficientă din punct de vedere al timpului de executare şi al spaţiului de memorie utilizat,
afişează pe ecran câte dintre numerele din fişierul A.TXT sunt strict mai mici decât toate
numerele memorate în fişierul B.TXT. (6p.)
Exemplu: dacă fişierul
A.TXT are conţinutul alăturat,
41111
81111
11111
91111
51111
111111
31111
431111
61111
201111
iar fişierul B.TXT are conţinutul
alăturat:
91111
91111
61111
91111
91111
81111
61111
91111
atunci programul va afişa valoarea 4, deoarece 41111, 11111, 51111, 31111 sunt mai
mici decât toate elementele din fişierul B.TXT. */
void solutia4() {

	afisarea();

}



























