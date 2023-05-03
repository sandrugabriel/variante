#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*În secventa de instrucțiuni de mai jos, variabilele i și j sunt de tip întreg, iar variabila A memorează un
tablou bidimensional de tip char, cu 5 linii şi 5 coloane, numerotate de la
care pot înlocui
punctele de suspensie astfel încât, în urma executării secvenței obținute, tabloul memorat in
0 la 4. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni
(6 puncte)
variabila A să aibă elementele din figura de mai jos.
(6 puncte)
a b c d e
b a b c d
c b a b c
d c b a b
e d c b a*/
void generare() {

	char a[100][100]{};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) a[i][j] = 'a';
			else {
				if (j < i) a[i][j] = a[i - 1][j] + 1;
				else a[i][j] = a[i][i] + j - i;
			}
		}
	}

	for (int i = 0; i < 5; i++, cout << endl)
		for (int j = 0; j < 5; j++)
			cout << a[i][j] << " ";
}

/*2. Subprogramul prime primește prin parametrul n un număr natural (2<n<50) și prin parametrul a primește un tablou
unidimensional, format din n numere naturale nenule şi distincte, fiecare număr având cel mult 9 cifre. Subprogramul
returnează numărul de perechi distincte formate din elemente din tabloul v, prime între ele. Două numere naturale sunt
prime între ele dacă au un singur divizor comun: numărul 1. Scrieți în limbajul C++ definiția completă a subprogramuluiprime.
Exemplu: Dacă n = 6 și a = (42, 3, 14, 43, 8, 6) atunci, după apel, subprogramul va returna valoarea 7, deoarece vectorul
are 7 perechi de numere ce verifică proprietatea dată: (42, 43); (3, 14); (3, 43); (3, 8); (14, 43); (43, 8); (43, 6).
*/
int prime(int n, int a[]) {

	int ct = 0, x, y;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {

			x = a[i];
			y = a[j];

			int r = 0;
	
			do {

				r = x % y;
				x = y;
				y = r;

			} while (r != 0);

			if (x == 1) ct++;

		}
	}


	return ct;
}

/*
Fişierul bac.txt conține pe prima linie un număr natural n, care este multiplu de 7 (7<n<70000) şi pe a doua linie un
şir de n numere întregi nenule, având cel mult trei cifre.Şirul de numere se împarte în secvențe de câte 7 numere
denumite benzi şi pentru fiecare
afişează
C++, eficient ca timp de execuție și spațiu de memorie utilizat, care afişează pe ecran, bandă se determină cele
mai mici două numere distincte min1 şi min2. Scrieți pentru fiecare dintre benzi, în ordine crescătoare cele două
valori min1 şi min2 sau a
Exemplu: Pentru n = 21, şirul de numere -3, 10, 1, 2,-5, 6,-5, 1, 1, 1, 1, 1, 1, 1, 10,9,1.
numărul 0, dacă banda nu conține două valori distincte min1 şi min2.
2.3, 6,7 se va afişa-5-30 12.*/
void afisarea() {

	ifstream f("bac.txt");
	int n;
	f >> n;
	
	int x,min1=9999,min2=9999;

	for (int i = 1; i <= n; i++) {

		f >> x;

		if (x < min1) {
			min2 = min1;
			min1 = x;

		}
		else {

			if (x<min2 && x>min1) min2 = x;
		}

		if (i % 7 == 0) {
			if (min1 != 9999 && min2 != 9999 && min1 != min2) {
				cout << min1 << " " << min2 << " ";
			}
			else cout << 0 << " ";

			min1 = min2 = 9999;
		}



	}


}















