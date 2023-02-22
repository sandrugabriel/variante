#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi un program în limbajul C/C++ care citeşte de la tastatură două valori naturale n şi m
(1≤n≤24, 1≤m≤24) şi construieşte în memorie un tablou bidimensional cu n linii şi m coloane
format din toate numerele naturale de la 1 la n*m, ca în exemplu. Programul va afişa pe
ecran, pe n linii, tabloul obţinut, elementele fiecărei linii fiind separate prin câte un spaţiu.
Exemplu: pentru n=5 şi m=4 se va afişa:
5 10 15 20
4 9 14 19
3 8 13 18
2 7 12 17
1 6 11 16*/
void generare(int n, int m) {

	int a[24][24], i, j, k = 1;

	for (j = 0; j < m; j++)
		for (i = 0; i < n; i++)
			a[i][j] = k++;


	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}


}

/*3. Subprogramul verif primeşte prin singurul său parametru, x, un număr natural nenul cu
cel mult 9 cifre şi returnează valoarea 1 dacă numărul conţine cel puţin o secvenţă de 3
cifre impare alăturate şi 0 în caz contrar.
Exemplu: dacă x=7325972 se va returna valoarea 1.
a) Scrieţi definiţia completă a subprogramului verif. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n cu exact
6 cifre şi, folosind apeluri utile ale subprogramului verif, verifică dacă n are primele trei
cifre impare. Programul afişează pe ecran mesajul Da în caz afirmativ şi mesajul Nu în caz
contrar. */
int verif(int x) {

	while (x >= 100) {
		if (x % 2 == 1 && (x / 10) % 2 == 1 && (x / 100) % 2 == 1)
			return 1;
		x = x / 10;
	}

	return 0;

}

/*4. Pentru un şir de numere naturale, numim ”nod” al şirului un termen din şir care are doi
vecini, termenul precedent şi termenul următor din şir, şi valoarea termenului respectiv este
strict mai mică decât suma valorilor celor doi vecini ai săi.
a) Fişierul text date.in conţine un şir de cel puţin două şi cel mult 10000 de numere
naturale având maximum 6 cifre fiecare, numere separate prin câte un spaţiu. Scrieţi un
program C/C++ care citeşte toate numerele din fişier şi afişează numărul de ”noduri“ ale
şirului citit, folosind un algoritm eficient din punctul de vedere al memoriei utilizate. (6p.)
Exemplu: dacă fişierul date.in are următorul conţinut:
51 20 100 43 43 618 5000 31 2020 114 116 4
atunci pe ecran se afişează 6 (cele şase numere subliniate reprezintă ”noduri“ ai şirului)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). */
void afisarea() {


	ifstream f("date.in");
	int prec, a, urm, nr = 0;
	f >> a;
	prec = -1;

	while (f >> urm) {

		if (a < prec + urm && prec != -1)
			nr++;

		prec = a;
		a = urm;
	}

	cout << nr;


}






