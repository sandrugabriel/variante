#pragma once
#include <iostream>
#include <fstream>

using namespace std;




/*Elementele matricei vor fi afişate pe ecran
linie cu linie separate printr-un spațiu.
Exemplu: Dacă N=3 atunci tabloul este:
(10 puncte)
1 2 2 2 1
2 1 2 1 2
2 2 1 2 2
*/
void generare(int n) {
	int a[100][100]{};
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < 2 * n; j++) {
			if (i == j || i + j == 2 * n) a[i][j] = 1;
			else
			{
				a[i][j] = 2;
			}
		}
	}

	for (int i = 1; i <= n; i++, cout << endl)
		for (int j = 1; j < 2 * n; j++) cout << a[i][j] << " ";
	

}

/*
2. Un tablou unidimensional se numeşte k-palindrom dacă după efectuarea a k. permutări circulare cu o poziție spre
stânga acesta devine palindrom (considerăm că un vector este palindrom dacă vectorul parcurs de la stânga la
dreapta coincide cu vectorul parcurs de la dreapta la stânga). Scrieți definiția completă v un tablou
unidimensional cu cel mult 100 de elemente numere întregi, n un număr natural unui subprogram kpal cu
trei parametri: (n≤100), reprezentând numărul de elemente din vector şi k un număr natural (15k<n), care
returnează valoarea 1 dacă vectorul este k-palindrom sau valoarea 0 în caz contrar.
Exemplu: Dacă n=5, v=(2, 2, 4, 5, 4) atunci f(v,n,1) va returna valoarea 1. (10 puncte)*/
int kpal(int v[], int n, int k) {
	int i, j;
	for (i = 1; i <= k / 2; i++) {
		int aux = v[i];
		v[i] = v[k + 1 - i];
		v[k + 1 - i] = v[i];
	}

	i = k + i;
	j = n;

	while (i < j) {

		int aux = v[i];
		v[i] = v[j];
		v[j] = v[i];

		i++;
		j--;
	}

	for (i = 1; i <= n / 2; i++) {
		int aux = v[i];
		v[i] = v[n + 1 - i];
		v[n + 1 - i] = v[i];
	}

	for (i = 1; i <= n / 2; i++) {
		if (v[i] != v[n + 1 - i]) return 0;

	}

	return 1;
}

/*
3. Cu şirul crescător al numerelor naturale de la 1 la 106, se construiesc triunghiuri de numere ca în
imaginea de mai jos (ultimul triunghi poate fi incomplet).
Triu
Se citeşte de la tastatură un număr k, k < 106. Să se scrie în fişierul text BAC.TXT pe prima linie,
separate prin câte un spațiu, valorile T L C, reprezentând: T = numărul triunghiu-lui care conține
valoarea k, L = linia pe care se află valoarea k (numerotată de sus în jos, vârf=linia 1), C = coloana acestuia
(numerotată de la stânga la dreapta). Proiectați un algo-ritm eficient din punct de vedere al timpului de
executare și al spațiului de memorie utilizat. Exemplu: Dacă se citeşte de la tastatură numărul k=17
atunci în fişier se vor afișa: 342*/
void afisarea(int n) {

	int t=0, l=0, c=0, s=0, poz=0;

	ofstream f("bac.txt");

	t = 0;
	while (s<n)
	{
		t++;
		s += (t + 1) * (t + 2) / 2;
	}

	if (s == n)
		f << t << " " << t + 1 << " " << t;
	else {

		l = t + 1;
		while (s >= n) { 
			s -= l;
			l--;
		}
		
		l++;

		if (s - l == n) c = l;
		else c = n - s;
		f << t << " " << l << " " << c;

	}

}
























