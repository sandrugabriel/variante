#pragma once
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;



/*1. Se citesc două numere naturale, a şi b, se cere să se determine numărul de valori din inter-valul închis
determinat de a şi b, care au exact 3 divizori.
Exemplu: Dacă a = 3 şi b = 20, atunci se scrie 2 (doar 4 și 9 au exact 3 divizori). Scrieți, în pseudocod,
algoritmul de rezolvare al problemei enunțate.
*/
void exact3Div(int a, int b) {

	int ct = 0;

	int x = sqrt(a);
	int y = sqrt(b);

	if (x * x < a) x = a + 1;

	for (int i = x; i <= y; i++) {

		int p = 1;

		if (i <= 1) p = 0;

		for (int j = 2; j <= i / 2; j++)
			if (i % j == 0) p = 0;
		if (p == 1) ct++;
	}
	cout << ct;
}

/*
Scrieți un program C/C++ care citeşte de la tastatură numărul natural n, unde n € [2,50). apoi cele n
elemente ale unui tablou unidimensional, numere naturale din intervalul [0,101, și afişează pe ecran
pe linii diferite elementele distincte din tablou urmate de numărul lor de
(10 puncte)
Exemplu: Dacă n=5 şi elementele tabloului sunt 2 4 7 4 7 atunci pe ecran se va afişa,
nu neapărat în această ordine:
2 1
42
72*/
void afisare(int n) {
	int v[100]{};

	for (int i = 1; i <= n; i++)
		cin >> v[i];

	for(int i=1;i<=n;i++)
		if (v[i] != -1) {
			cout << v[i] << " ";
			int k = 1;

			for(int j=i+1; j<=n;j++)
				if (v[i] == v[j]) {
					k++;
					v[j] = -1;
				}
			cout << k << endl;
			v[i] = -1;
		}
}

/*
Din fişierul bac. txt se citesc n şi m (numere naturale, 0<m<n<100000) de pe prima linie, apoi n numere naturale
cu cel mult două cifre fiecare al, a2, ..., an de pe a doua și apoi m numere naturale cu cel mult două cifre
fiecare bl, b2, ..., bm de linia a treia a fișierului. Să se determine câte șiruri b se pot obține din şirul
a dacă se poate schimba ordinea elementelor din şirul a. Se va afișa pe ecran numărul numărul de șiruri obţinutea)
Se cere să se proiecteze un algoritm eficient din punct de vedere al timpului de executare și al spațiului
de memorie utilizat şi să se realizeze o descriere de 3-4 rânduri a algorit-mului ales justificându-se eficiența acestuia.
(2 puncte)
b) Să se scrie programul C/C++ ce realizează prelucrarea descrisă şi afişează pe ecran un mesaj corespunzător.
(8 puncte)
Exemplu: Pentru fişierul bac.txt cu conținutul
83
16313761
613
se afişează valoarea 2.*/
void afisarea() {

	ifstream f("bac.txt");

	int fa[100]{}, fb[100]{}, i, x, nrs, n, m;

	f >> n >> m;

	for (int i = 1; i <= n; i++) {
		f >> x;
		fa[x]++;
	}

	for (int i = 1; i <= m; i++) {
		f >> x;
		fb[x]++;
	}
	nrs = 0;

	for (int i = 0; i <= 99; i++)
		if (fb[i] != 0)
			if (nrs == 0 || fa[i] / fb[i] < nrs) nrs = fa[i] / fb[i];


	cout << nrs;
}


































