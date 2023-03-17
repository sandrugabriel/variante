#pragma once
#include <iostream>
#include <fstream>

using namespace std;




/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤20),
elementele unei matrice cu n linii şi n coloane, numere întregi din intervalul [-100,100] şi
afişează pe ecran media aritmetică a elementelor strict pozitive ale matricei, care sunt
situate sub diagonala principală, ca în exemplu. Dacă nu există elemente strict pozitive
situate sub diagonala principală, programul va afişa mesajul „NU EXISTA”.
 5.
Exemplu: pentru n=4 şi matricea alăturată se afişează valoarea 2.5
(sunt luate în considerare doar elementele marcate). (10p.)
 -1 2 4 5
 0 6 3 1
 2 4 2 0
 3 -5 1 -3*/
void generare(int n, int a[100][100]) {

	int nr = 0;
	float  suma = 0;
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
			if (a[i][j] > 0) {
				suma += a[i][j];
				nr++;
			}

	if (nr == 0)
		cout << "NU EXISTA";
	else
		cout << suma / nr;

}

/*3. Scrieţi definiţia completă a subprogramului reduce, cu doi parametri, care primeşte prin
intermediul parametrilor a şi b două numere naturale formate din cel mult 9 cifre fiecare.
Funcţia returnează o valoare obţinută din numărul a prin însumarea acelor cifre diferite de 0
ale numărului a care NU divid numărul b. Dacă nu există asemenea cifre, se va returna
valoarea 0.
Exemplu: pentru a=184465709 şi b=18, cifrele corespunzătoare cerinţei sunt 8, 4, 4, 5 şi
7, deci valoarea returnată va fi 28 (28=8+4+4+5+7). Dacă a=2402804 şi b=8000,
valoarea returnată va fi 0.*/
int reduce(int a, int b) {

	int suma = 0;


	while (a > 0) {
		if (a % 10 != 0 && b % (a % 10) != 0)
			suma += a % 10;
		a = a / 10;
	}

	return suma;

}

/*4. Fişierul text bac.txt conţine un şir de cel mult 2009 numere naturale, cu cel mult nouă
cifre fiecare, pe mai multe rânduri, numerele de pe acelaşi rând fiind separate prin câte un
spaţiu.
a) Scrieţi un program C/C++ care afişează pe ecran cel mai mic număr din fişier pentru care
suma cifrelor pare este egală cu suma cifrelor impare, precum şi numărul de apariţii în fişier
ale acestui număr, folosind o metodă eficientă din punctul de vedere al timpului de
executare. Cele două valori vor fi afişate pe o linie a ecranului, separate printr-un spaţiu.
Exemplu: dacă în fişier avem numerele 22031 9021 22031 1021 2011 10012 1021
457008 99882 atunci pe ecran se vor afişa numerele: 1021 2. (6p.)
b) Descrieţi succint, în limbaj natural, algoritmul utilizat, justificând eficienţa acestuia. */
int sumeEgale(int a) {

	int sumaPare = 0, sumaImpare = 0;
	if (a == 0)
		return 0;

	while (a > 0) {
		if (a % 2 == 0)
			sumaPare += a % 10;
		else
			sumaImpare += a % 10;

		a = a / 10;
	}

	if (sumaPare != sumaImpare)
		return 0;

	return 1;
}
void afisarea() {



		ifstream f("bac.txt");
		int nrAparitii = 0, minim = -1, a;

		while (f >> a) {

			if (sumeEgale) {
				if (minim == -1 || minim > a) {
					minim = a;
					nrAparitii = 0;
				}
				if (minim == a)
					nrAparitii++;
			}

		}

		cout << minim << " " << nrAparitii;


}

















