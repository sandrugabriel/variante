#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*3. În secvența de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează
un tablou bidimensional cu 5 linii şi 5 coloane, numerotate de la 1 la 5. Elementele tabloului sunt numere
întregi. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de
suspensie astfel încât, în urma executării secvenței obținute, tabloul memorat în variabila A să aibă
elementele din figura de mai jos.
(6 puncte)
for (i=1;i<=5;i++) for(j=1;j<=5;j++)
1 1 1 1 1
1 2 3 4 5
13605
14005
15550*/
void generare() {
	int a[100][100]{};
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
			if (i == 1 || j == 1) a[i][j] = 1;
			else a[i][j] = (a[i][j - 1] + a[i - 1][j]) % 10;


	for (int i = 1; i <= 5; i++, cout << endl)
		for (int j = 1; j <= 5; j++)
			cout << a[i][j] << " ";
}

/*
2. Subprogramul numărare are doi parametri: n, prin care primeşte un număr natural (1≤n≤109):
m, prin care primeşte un număr natural (15m≤109, n≤m)
Subprogramul returnează numărul de cifre utilizate pentru construirea numerelor naturale din intervalul [n, m].
Scrieți în limbajul C/C++ definiția completă a subprogramului numărare. Exemplu: Dacă n = 7 și m=56 atunci, după
apel, subprogramul va returna valoarea 115.*/
int numarare(int n, int m) {

	int k, p, cn = n, cm = m, nrn=0, nrm=0, x, s;

	k = 0, p = 0;

	do {
		cn /= 10;
		k++;
	} while (cn);
	do {
		cm /= 10;
		p++;
	} while (cm);

	nrn = 0, x = 9, s = 9;

	for (int i = 1; i < k; i++) {

		nrn += i * x;
		s += x;
		x *= 10;
	}

	nrm += (n - 1 - s) * k;

	nrm = 0, x = 9, s = 9;

	for (int i = 1; i < p; i++) {
		nrm += i * x;
		s += x;
		x *= 10;
	}

	nrm += (m - s) * p;

	return nrm - nrn;
}

/*3. Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un şir cu cel mult 100 000 de numere întregi
formate din cel mult 2 cifre fiecare și afișează pe ecran separate printr-un spațiu, numărul sau numerele din fişier
cu număr maxim de apariții. Exemplu: Dacă în fişier sunt numerele 27 -8 43 27 -8 9 10 43 atunci pe ecran se vor afişa
nu neapărat în această ordine -8 43 27.*/
void afisarea() {

	ifstream fin("bac.txt");

	int x, vf[100], vfmax=-100;

	while (fin>>x)
	{
		vf[x + 99]++;
	}

	for (int i = -99; i <= 99; i++) {
		if (vf[i + 99] > vfmax)
			vfmax = vf[i + 99];
	}

	for (int i = -99; i <= 99; i++) {
		if (vf[i + 99] == vfmax)
			cout << i << " ";
	}

}






















