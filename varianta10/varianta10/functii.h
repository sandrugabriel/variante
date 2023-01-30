#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*
 5. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi p
(2≤n≤20, 1≤p≤20) şi construieşte în memorie un tablou bidimensional cu n linii şi p
coloane. Tabloul va fi construit astfel încât, parcurgând matricea linie cu linie de sus în jos şi
fiecare linie de la stânga la dreapta, să se obţină şirul primelor n*p pătrate perfecte pare,
ordonat strict crescător, ca în exemplu. Tabloul astfel construit va fi afişat pe ecran, fiecare
linie a tabloului pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=2, p=3 programul va afişa tabloul alăturat:
(10p.)
 0 4 16
 36 64 100*/
void afisare(int n, int p) {

	int A[20][20];

	int i, j, k = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < p; j++) {
			A[i][j] = k * k;
			k = k + 2;
		}

	for (i = 0; i < n; i++) {
		for (j = 0; j < p; j++)
			cout << A[i][j] << " ";
		cout << '\n';
	}

}

/* Se consideră subprogramul cu definiţia
alăturată. Ce valoare are f(3,1)?
(4p.)
int f(int n,int y)
{ if(n!=0)
 { y=y+1;
 return y+f(n-1,y);
 }
 else return 0;
}
a. 9 b. 6 c. 7 d. 8*/
int f(int n, int y)
{
	if (n != 0)
	{
		y = y + 1;
		return y + f(n - 1, y);
	}
	else return 0;
}

/*
 3. Scrieţi definiţia completă a subprogramului sub cu trei parametri: n (număr natural,
5<n≤30000), a şi b; subprogramul furnizează prin intermediul parametrilor a şi b cele mai
mari două numere prime distincte mai mici decât n.
Exemplu: dacă n= 28 la apelul subprogramului se va furniza prin parametrul a valoarea
23 şi prin parametrul b valoarea 19. (10p.)*/
void sub(int n, int& a, int& b) {

	int i;
	a = 0;
	b = 0;
	for (i = n - 1; i > 1; i--) {

		int d, ok = 0;
		for (d = 2; d <= i / 2; d++)
			if (i % d == 0) {
				ok = 1;
				break;
			}
		if (ok == 0) {

			if (a == 0)
				a = i;
			else if (b == 0)
				b = i;
			else
				return;
		}
	}

}

/*
 4. Evidenţa produselor vândute de o societate comercială este păstrată în fişierul
PRODUSE.TXT. Pentru fiecare vânzare se cunosc: tipul produsului (un număr natural de cel
mult 4 cifre), cantitatea vândută exprimată in kilograme (un număr natural mai mic sau egal
cu 100) şi preţul unui kilogram (un număr natural mai mic sau egal cu 100).
Fişierul PRODUSE.TXT are cel mult 200000 de linii şi fiecare linie conţine trei numere
naturale, separate prin câte un spaţiu, ce reprezintă, în această ordine tipul, cantitatea şi
preţul de vânzare al unui produs la momentul vânzării respective.
a) Să se scrie un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
timpului de executare, determină pentru fiecare tip de produs vândut suma totală obţinută
în urma vânzărilor. Programul va afişa pe câte o linie a ecranului tipul produsului şi suma
totală obţinută, separate prin câte un spaţiu, ca în exemplu.
Exemplu: dacă fişierul PRODUSE.TXT are conţinutul alăturat, programul va afişa
perechile următoare, nu neapărat în această ordine:
1 150
2 30
3 5 (6p.)
3 1 5
1 20 5
2 10 3
1 10 5*/
void afisareProd() {

	ifstream f("produse.txt");

	int frecv[10000], tip, can, pret, i;
	for (i = 0; i < 10000; i++)
		frecv[i] = 0;
	while (f >> tip) {
		f >> can >> pret;
		frecv[tip] += can * pret;

	}

	for (i = 0; i < 10000; i++) {

		if (frecv[i] != 0) {
			cout << i << " " << frecv[i] << '\n';
		}
	}


}



















































