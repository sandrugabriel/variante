#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*5. Scrieţi un program în limbajul C/C++ care citeşte de la tastatură două valori naturale n şi m
(1≤n≤24, 1≤m≤24) şi construieşte în memorie un tablou bidimensional cu n linii şi m coloane
format din toate numerele naturale de la 1 la n*m, ca în exemplu. Programul va afişa pe
ecran, pe n linii, tabloul obţinut, elementele fiecărei linii fiind separate prin câte un spaţiu.
Exemplu: pentru n=4 şi m=5 se va afişa:
20 19 18 17 16
11 12 13 14 15
10 9 8 7 6
1 2 3 4 5*/
void generare(int n, int m) {


	int a[24][24], k = 1, deplasare = 0, i, j;

	for (i = 0; i < n; i++) {
		if (i % 2 == 0) {
			k = i * m + 1;
			deplasare = 1;
		}
		else {
			k = (i + 1) * m;
			deplasare = -1;
		}
		for (j = 0; j < m; j++) {
			a[i][j] = k;
			k = k + deplasare;
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}


}

/*3. Subprogramul sfx primeşte prin singurul său parametru, x, un număr natural din intervalul
[100,2000000000] şi returnează valoarea 1 dacă ultimele trei cifre ale numărului sunt în
ordine strict descrescătoare sau valoarea 0 în caz contrar.
Exemplu: dacă x=24973 se va returna valoarea 1.
a) Scrieţi definiţia completă a subprogramului sfx. (5p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n format din exact
6 cifre şi verifică, utilizând apeluri ale subprogramului sfx, dacă acest număr are toate cifrele
în ordine strict descrescătoare. Programul va afişa mesajul Da în caz afirmativ şi mesajul Nu
în caz contrar.
Exemplu: dacă n=756543 se va afişa Nu, iar dacă n=976532 se va afişa Da. */
int sfx(int x) {

	if ((x / 100) % 10 > (x / 10) % 10 && (x / 10) % 10 > x % 10)
		return 1;
	return 0;

}
void afisare(int n) {

	while (n >= 100) {
		if (!sfx(n))
			break;
		n = n / 10;
	}

	if (n < 100)
		cout << "Da";
	else
		cout << "Nu";
}

/*4. Pentru un şir de numere naturale, numim ”pol” al şirului un termen din şir care are doi vecini,
termenul precedent şi termenul următor din şir, şi valoarea termenului respectiv este strict
mai mare decât valoarea fiecăruia dintre cei doi vecini ai săi.
a) Fişierul text date.in conţine un şir de cel mult 10000 de numere naturale având
maximum 6 cifre fiecare, numere separate prin câte un spaţiu. Scrieţi un program C/C++
care citeşte toate numerele din fişier şi afişează numărul de ”poli“ ai şirului citit, folosind un
algoritm eficient din punctul de vedere al memoriei utilizate. (6p.)
Exemplu: dacă fişierul date.in are următorul conţinut:
51 20 100 43 43 618 5000 31 2020 114 116 4
atunci pe ecran se afişează 4 (cele patru numere subliniate reprezintă ”poli“ ai şirului)
 b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). */
void afisarea() {

	ifstream f("date.in");
	int a = -1, lastA = -1, nextA, nrPoli = 0;
	while (f >> nextA) {
		if (a > nextA && a > lastA && lastA != -1)
			nrPoli++;
		lastA = a;
		a = nextA;
	}

	cout << nrPoli;

}
