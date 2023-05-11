#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*1. Scrieți un program C++ care citeşte de la tastatură un număr natural n şi elementele, numere naturale,
ale unui tablou bidimensional A, având n linii şi n coloane (2 ≤ n ≤50) şi înlocu-ieşte toate elementele
care sunt numere pare, formate din cel mult 3 cifre, cu cel mai mare element situat pe diagonala principală
sau diagonala secundară a matricei, apoi afişează matricea transformată.Exemplu: Pentru n = 3 şi tabloul A = 
2 1000 7
40 8 27
5 2 9 
se va afisa matricea 9 1000 7
9 9 27
5 9 9
*/
void generare() {

	int n, i, j, A[50][50], nmax = 0; 
	cin >> n;
	for (i = 0; i < n; i++) for (j = 0; j < n; j++)
		cin >> A[i][j];


	for (i = 0; i < n; i++)
	{
		if (A[i][i] > nmax)nmax = A[i][i];
		if (A[i][n - i - 1] > nmax) nmax = A[i][n - i - 1];
	}


	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (A[i][j] % 2 == 0 && A[i][j] < 1000)
				A[i][j] = nmax; for (i = 0; i < n; i++) {
				for (j = 0; j < n; j++)
					cout << A[i][j] << " ";
				cout << endl;


			}

}

/*
Subprogramul cifre primește prin parametrul n un număr natural nenul, format din cel mult 9 cifre, elimină
toate cifrele pare ale numărului n și furnizează prin parametrul n numărul modificat şi prin parametrul k
un număr format din cifrele pare distincte ale numărului n, în ordinea scrierii lor. Parametrul k este egal
cu -1 dacă numărul n nu are cifre pare.
Exemplu: Pentru numărul n = 12267488, se obține n = 17 şi k = 2648, iar pentru n = 1331, se obține
n = 1331 şi k = -1. Scrieți în limbajul C++ definiția completă a subprogramului cifre.
*/
void cifre(int& n, int& k) {
	int nr = 0, p1 = 1, p2 = 1, cif, cn, f[10]{};

	k = 0;
	cn = n;
	while (cn != 0) {
		cif = cn % 10;
		if (cif % 2 == 0 && f[cif] == 0) {
			k = k + cif * p2;
			p2 *= 10;
			f[cif] = 1;
		}
		if (cif % 2 == 1) {
			nr = nr + cif * p1;
			p1 *= 10;
		}
		cn /= 10;
	}

	if (nr == n)
		k = -1;
	else {
		n = nr;
	}

}

/*
Fişierul bac.in conține un şir format din cel mult 10° litere ce aparțin mulțimii M = {a, A, b, B, c, C, d, D e, E}.
Scrieți un program C++, eficient ca timp de execuție, ce afişează pe ecran prin litere mici, caracterele ce apar de
un număr impar de ori în şirul dat, în ordinea enumerării lor în mulțimea M, fără a face distincție între litere
mari şi litere mici sau afişează mesajul Nu există, dacă şirul dat nu conține niciun caracter cu proprietatea menţionată.
Dacă fişierul bac.txt conține caracterele cbcCdEaAdBacCDEaacc atunci pe ecran se va afişa aaaaacccccccddd. Dacă
fișierul bac.txt conține caracterele cbcBaa, pe ecran se va afişa mesajul Nu există*/
void afisarea() {

	ifstream fin("bac.txt");
	int f[5]{};

	char c, ch;
	int exista = 0;
	while (fin >> c) {
		ch = tolower(c);
		f[ch - 'a'] ++;
	}
	for (int i = 0; i < 5; i++)
		if (f[i] % 2 != 0)
		{
			exista = 1; c = 'a' + i;
			for (int j = 1; j <= f[i]; j++)
				cout << c;
		}
	if (exista == 0)
		cout << "Nu exista";
}



















































