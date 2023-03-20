﻿#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură numerele întregi m şi n (1≤m≤24,
1≤n≤24) şi elementele unui tablou bidimensional cu m linii şi n coloane, numere întregi
distincte de cel mult 4 cifre fiecare, şi elimină din tablou, la nivelul memoriei, linia şi coloana
corespunzătoare elementului de valoare minimă. Programul va afişa tabloul obţinut pe ecran
pe m-1 linii, elementele fiecărei linii fiind separate prin câte un spaţiu. (10p.)
5.
Exemplu: pentru m=3 şi n=4 şi tabloul de mai jos
2 7 1 4
14 6 12 3
9 22 8 5

Pe ecran se va afişa:
 14 6 3
 9 22 5
*/
void eliminare(int a[100][100], int poz, int n, int m) {

	for (int i = 0; i < n-1; i++) {
		for (int j = poz; j < m-1; j++) {
			a[i][j] = a[i][j+1];
		}
		
	}
}

void eliminareLin(int a[100][100], int poz, int n, int m) {

	for (int i = poz; i < n-1; i++) {
		for (int j = 0; j < m-1; j++) {
			a[i][j] = a[i+1][j];
		}

	}
}

struct poz {

	int poCol;
	int poLin;

}pozMat;

void coloanaMini(int a[100][100], int n, int m) {

	int mini = 999;
	int poz,poz1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] < mini) {
				mini = a[i][j];
				poz = j;
				poz1 = i;
			}
		}
	}

	pozMat.poCol = poz;
	pozMat.poLin = poz1;
	
}
void generare(int a[100][100], int&n, int&m) {

	coloanaMini(a, n, m);

	for (int i = 0; i < n; i++) {

		

		for(int j=0;j<m;j++){
		
			if (j == pozMat.poCol ) {
				eliminare(a, j, n, m);
		    }
			


		}
		if (i == pozMat.poLin) {
			eliminareLin(a, i, n, m);
		}
		
	}
n--;
m--;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}


}

/*3. Subprogramul ordonare primeşte prin parametrul x un tablou unidimensional cu cel mult
100 de elemente numere reale, iar prin parametrul n un număr întreg ce reprezintă numărul
efectiv de elemente ale tabloului x. Subprogramul ordonează crescător elementele tabloului
şi furnizează, tot prin intermediul parametrului x, tabloul ordonat.
a) Scrieţi numai antetul acestui subprogram. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale, n şi m
(1≤n≤100 şi m≤n), şi apoi un şir de n numere reale distincte. Folosind apeluri utile ale
subprogramului ordonare, programul afişează pe prima linie a ecranului, cele mai mari m
elemente din şirul citit (în ordine crescătoare a valorilor lor), iar pe a doua linie de ecran,
cele mai mici m elemente din şir (în ordine descrescătoare a valorilor lor). Numerele afişate
pe aceeaşi linie vor fi separate prin câte un spaţiu. (10p.)
Exemplu : dacă n=9, m=3, iar şirul este (14.2, 60, -7.5, -22, 33.8, 80, 4, 10, 3) se va
afişa pe ecran:
33.8 60 80
3 -7.5 -22*/
void ordonare(float x[100], int n) {

	int semn = 1;

	do {

		semn = 1;

		for (int i = 0; i < n - 1; i++) {
			if (x[i] > x[i + 1]) {
				float aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				semn = 0;
			}
		}

	} while (semn == 0);

}
void afisare(int n, int m, float x[]) {


	ordonare(x, n);

	for (int i = n - m; i <= n - 1; i++)
		cout << x[i] << " ";

	cout << '\n';
	for (int i = m - 1; i >= 0; i--)
		cout << x[i] << " ";


}

















