#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Se consideră o matrice cu n linii şi m coloane (1≤n≤30, 1≤m≤30),
ce memorează numere întregi de cel mult 4 cifre fiecare. Scrieţi un
program C/C++ care citeşte de la tastatură valorile n, m şi
elementele matricei şi care afişează pe ecran, separate prin câte
un spaţiu, valorile minime de pe fiecare coloană, în ordine de la
ultima la prima coloană.
Exemplu: pentru n=4, m=4 şi matricea alăturată
3 4 90 10
25 2 7 9
18 3 10 4
3 7 20 3
se vor afişa pe
ecran valorile 3 7 2 3. */
void generare(int n, int m) {
	int a[100][100]{};
	ifstream f("matricea.txt");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			f >> a[i][j];

	for (int j = m - 1; j >= 0; j--) {
		int minim = a[0][j];

		for (int i = 1; i < n; i++)
			if (a[i][j] < minim)
				minim = a[i][j];

		cout << minim << " ";
	}



}


/*1. Subprogramul scif returnează suma cifrelor unui număr natural transmis ca parametru.
Care este valoarea expresiei scif(scif(518)+scif(518))? (4p.)
a. 14 b. 10 c. 28 d. 1*/
int scif(int n) {

	int s = 0;

	while (n!=0)
	{
		s += n % 10;
		n /= 10;
	}

	return s;
}

/*Subprogramul cifra primeşte prin intermediul parametrului a un număr natural cu cel mult
4 cifre şi returnează ultima cifră pară a sa. Dacă numărul nu conţine cifre pare,
subprogramul returnează valoarea -1. De exemplu, dacă a=8345, subprogramul va
returna 4.
a) Să se scrie definiţia completă a subprogramului cifra. (10p.)
b) Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤15000), iar pe
a doua linie a fişierului se află un şir de n numere naturale, despărţite prin câte un spaţiu,
fiecare număr fiind format din cel mult 4 cifre.
Scrieţi un program C/C++ care citeşte numerele din fişier şi afişează pe ecran, folosind
apeluri utile ale subprogramului cifra, cel mai mare număr care se poate forma cu
ultimele cifre pare ale fiecărui element, dacă acestea există. Alegeţi o metodă de rezolvare
eficientă ca timp de executare. Dacă toate numerele de pe a doua linie a fişierului au
numai cifre impare, programul va afişa mesajul NU EXISTA.
Exemplu: dacă fişierul bac.in are conţinutul
alăturat, pe ecran se va afişa: 64220 (6p.)
7
369 113 2 0 33 1354 42
 c) Descrieţi succint în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 - 4 rânduri). */

int cifra(int a) {

	if (a == 0)
		return 0;
	while (a > 0) {
		if (a % 2 == 0)
			return a % 10;
		a = a / 10;
	}
	return -1;

}
void afisarea() {
ifstream f("bac.in");
	int n, a, frecv[5];
	for (int i = 0; i < 5; i++)
		frecv[i] = 0;
	f >> n;
	for (int i = 0; i < n; i++) {

		f >> a;
		if (cifra(a) != -1)
			frecv[cifra(a) / 2]++;

	}

	for (int i = 4; i >= 0; i--) {

		while (frecv[i] > 0) {

			cout << i * 2;
			frecv[i]--;
		}

	}


}





