#pragma once
#include <iostream>
#include <fstream>

using namespace std;


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
void prefix(char c[]) {

	int i, n = strlen(c);
	for (i = 1; i < n + 1; i++) {
		char aux = c[i];
		c[i] = '\0';
		cout << c << '\n';
		c[i] = aux;
	}

}

/*3. Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin intermediul parametrului n un număr natural nenul (1≤n≤10000), iar prin intermediul
parametrului a, un tablou unidimensional care conţine n valori naturale, fiecare dintre
aceste valori având cel mult 9 cifre. Subprogramul returnează cel mai mare divizor comun
al elementelor tabloului a. (10p.)
Exemplu: în urma apelului, pentru n=5 şi tabloul unidimensional (12,36,48,6,60) se va
returna 6. */
int cmmdc(int a, int b) {
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}
int calcul(int n, int a[100]) {
	int c = cmmdc(a[1], a[2]);
	for (int i = 3; i <= n; i++)
		c = cmmdc(c, a[i]);
	return c;
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
void afisarea() {

	ifstream f1("A.TXT");
	ifstream f2("B.TXT");
	int a, b, nr = 0, minimB = -1;

	while (f2 >> b) {
		if (minimB == -1 || minimB > b)
			minimB = b;

	}

	while (f1 >> a) {

		if (a < minimB)
			nr++;
	}

	cout << nr;


}













































