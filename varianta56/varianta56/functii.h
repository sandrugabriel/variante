#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi k
(2<n<25, 0<k<n) şi construieşte în memorie o matrice cu n linii şi n coloane formată
numai din valori 1,2,3 şi 4 astfel încât: elementele aflate la intersecţia primelor k linii cu
primele k coloane sunt egale cu 1, elementele aflate la intersecţia primelor k linii cu ultimele
n-k coloane sunt egale cu 2, elementele aflate la intersecţia ultimelor n-k linii cu primele k
coloane sunt egale cu 3, elementele aflate la intersecţia ultimelor n-k linii cu ultimele n-k
coloane sunt egale cu 4 ca în exemplul de mai jos.
5.
Programul afişează pe ecran matricea construită, fiecare linie a
matricei pe o linie a ecranului şi elementele de pe aceeaşi linie
separate prin câte un singur spaţiu.
Exemplu: pentru n=5, k=3 se construieşte în memorie şi se afişează
matricea alăturată. (10p.)
1 1 1 2 2
1 1 1 2 2
1 1 1 2 2
3 3 3 4 4
3 3 3 4 4 */
void generare(int n,int k) {


	int a[25][25];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i < k && j < k)
				a[i][j] = 1;
			else if (i < k)
				a[i][j] = 2;
			else if (j < k)
				a[i][j] = 3;
			else
				a[i][j] = 4;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}


}

/*Fişierul text numere.txt conţine, pe o singură linie, cel mult 1000 de numere naturale
nenule cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un
program C/C++ care citeşte toate numerele din fişier şi scrie pe ecran toate numerele pare
citite, ordonate crescător. Dacă fişierul numere.txt nu conţine niciun număr par, atunci se
va afişa pe ecran mesajul nu exista.
Exemplu: dacă fişierul numere.txt conţine numerele 2 3 1 4 7 2 5 8 6, atunci pe
ecran se va afişa: 2 2 4 6 8 */
void afisare() {

	ifstream f("numere.txt");
	int v[1000], i, nrEl = 0, a;

	while (f >> a) {
		if (a % 2 == 1)
			continue;

		i = 0;
		while (i < nrEl&& a >= v[i])
			i++;

		int pozitieInserare = i;
		for (i = nrEl; i > pozitieInserare; i--)
			v[i] = v[i - 1];

		v[pozitieInserare] = a;
		nrEl++;
	}

	for (i = 0; i < nrEl; i++)
		cout << v[i] << " ";



}

/*4. Se consideră subprogramele
– prim, care primeşte prin intermediul unicului său parametrului x un număr natural nenul
de cel mult 4 cifre şi returnează valoarea 1 dacă x este un număr prim şi 0 în caz contrar;
– numar, care primeşte prin intermediul parametrului x un număr natural nenul de cel mult
4 cifre şi furnizează prin intermediul parametrului nrp numărul de numere prime mai mici
decât x.
a) Scrieţi numai antetul subprogramului prim şi definiţia completă a subprogramului
numar. (6p.)
b) Scrieţi un programul C/C++ în care se citesc de la tastatură două numere naturale
nenule de cel mult 4 cifre, a şi b (a<b), şi, prin apeluri utile ale subprogramului numar, se
verifică dacă intervalul închis [a,b] conţine cel puţin un număr prim. Programul va afişa pe
ecran, în caz afirmativ, mesajul DA, iar în caz contrar, mesajul NU*/

int prim(int x) {

	int d;
	for (d = 2; d < x / 2; d++)
		if (x % d == 0)
			return 0;

	return 1;
}

void numar(int x, int& nrp) {


	int i;
	nrp = 1;
	for (i = 3; i < x; i = i + 2) {
		if (prim(i))
			nrp++;
	}

}

void afisarea(int a, int b) { 
	int nrpB, nrpA;

	numar(b, nrpB);
	numar(a, nrpA);

	if (nrpB - nrpA >= 1 || prim(b))
		cout << "DA";
	else
		cout << "NU";

 }


