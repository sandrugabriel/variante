#pragma once
#include <iostream>
#include <fstream>

using namespace std;




/*Se citeşte de la tastatură un cuvânt c, format din cel mult 20 de litere mici şi un text cu separate prin spațiu şi
se încheie cu punct. Scrieți un program C++ care va afişa pe ecran cel mult 200 de caractere format din mai multe
propozitii. O propoziţie contine cuvinte o propoziție din text care conține cuvântul c de cele mai multe ori.
De exemplu, dacă se citeşte cuvântul avion şi textul Din avion vezi un cer albastru şi un alt avion. Pe
aeroport aterizează un avion. Se va afişa propoziția Din avion vezi un cer albastru și un port alt avion.
*/
void afisareProp() {

	/*char c[21], t[201], prop_max[201] = "", * p, prop[201],
		cprop[201], * cuv;
	int nr, nrmax = 0;
	cin.getline(c, 21); 
	cin.getline(t, 201);
	p = strchr(t, '.');
	while (p) {
		nr = 0;
		strncpy(prop, t, p - t + 1);
		prop[p - t + 1] = NULL;
		strcpy(cprop, prop);

		cuv - strtok(cprop, " "); while (cuv)
		{
			if (strcmp(cuv, c) == 0)nr++;
			cuv = strtok(NULL, " ");
		}
		if (nr > nrmax)
		{
			nrmax = nr;
			strcpy(prop_max, prop);
		}
		strcpy(t, p + 1);
		p = strchr(t, '.');
	}


	cout << prop_max;
*/

}

/*2. Subprogramul perechi primeşte prin parametrul n un număr natural (2<n<50) şi prin para-v primește un 
tablou unidimensional, format din n numere naturale distincte, fiecare număr având cel mult 9 cifre. 
Subprogramul returnează numărul de perechi distincte formate din elemente din tabloul v, cu 
proprietatea că un număr este oglindit pentru celălalt număr. Scrieți în limbajul C++ definiția 
completă a subprogramului perechi.
Exemplu: Dacă n = 7 și v = (41, 324, 14, 423, 82, 6, 28) atunci, după apel, subprogramul 
va returna valoarea 3, deoarece vectorul are 3 perechi de numere ce verifică proprietatea dată: (41,14); (324, 423); (82, 28).*/
int perechi(int n, int v[]) {

	int ct = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			int nr = 0;

			while (v[j]!=0)
			{
				int c = v[j] % 10;
				nr = nr * 10 + c;
				v[j] /= 10;
			}

			v[j] = nr;

			if (v[i] == v[j]) {
				ct++;
			}
		}
	}


	return ct;
}

/*
3. Fișierul bac. txt conține un șir format din cel mult 10 000 numere naturale separate prin spațiu, fiecare număr având cel
mult 5 cifre. Prin alegerea cifrelor distincte din șir, care au modulul diferenței cifrelor egal cu 2 se pot obține mai multe
numere. Scrieți un program C++ eficient ca timp de execuție și spațiu de memorie utilizat, care determină şi afişează pe
ecran cel mai mare număr format din toate cifrele numerelor din fișier, cu proprietatea că modulul diferenței cifrelor
distincte este egal cu 2 sau afișează mesajul Nu există, dacă din șir nu se poate obține un asemenea număr.
Exemplul 1: Dacă fișierul bac. txt conține numerele 1012 3367 9837 369 96 183, se pot obține mai multe numere care au
modulul diferenței cifrelor distincte egal cu 2 : 20, 31, 311, 97, 79, 886, 9977 etc. Numărul care se va afişa este 33333111.
Exemplul 2: Dacă fişierul bac.txt conține numerele 27 388 723 82, se va afişa mesajul Nu există*/
void afisarea() {

	ifstream f("bac.txt");

	int n, cif, contor = 0;
	int s = 0, c, frec[100]{};

	while (f>>n)
	{
		while (n)
		{
			frec[n % 10]++;
			n /= 10;
		}
	}

	for (c = 9; c >= 2; c--) {
		if (frec[c] != 0 && frec[c - 2] != 0) {
			s = frec[c] + frec[c - 2];
			if (s > contor) {
				contor = s;
				cif = c;
			}
		}
	}
		if (s == 0) {
			cout << "NU EXISTA";

		}
		else
		{
			for (c = 1; c <= frec[cif]; c++)
				cout << cif;
			for (c = 1; c <= frec[c - 2]; c++)
				cout << cif - 2;
		}
}




















