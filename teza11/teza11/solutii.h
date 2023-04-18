#pragma once
#include "functii.h"


/*1. Scrieți un program C/C++ care citeşte de la tastatură un număr natural N (NE [2,50]), multiplu de 3 şi elementele unui tablou bidimensional cu cifre binare dispuse pe N linii şi N coloane, numerotate de la 0 la N- 1. Programul modifică tabloul în memorie înlocuind fiecare linie formată doar din valori 0 cu valorile reprezentând numărul de 1 de pe coloana
corespunzătoare din tabloul inițial apoi afişează rezultatul pe ecran.
Exemplu: Dacă N=5 şi tabloul este:
1 0 0 1 1 
1 1 1 0 1
0 0 0 0 0
1 1 0 1 1
0 0 0 0 0

se afișează: 

1 0 0 1 1 
1 1 1 0 1
3 2 1 2 3
1 1 0 1 1
3 2 1 2 3
*/
void solutia1() {

	ifstream f("nr.txt");
	int n = 5, a[100][100]{};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			f >> a[i][j];
		}
	}

	generare(n,a);

}

/*
2. Subprogramul nPrime are trei parametri:
●
n, prin care primește un număr natural (2≤n≤10³);
k, prin care furnizează numărul de valori prime cu n, mai mici decât n;
p, prin care furnizează şirul celor valori prime cu n, în ordine crescătoare. Spunem că x este prim cu n dacă cele două 
numere nu au divizori comuni mai mari decât 1. Scrieti definitia completă a subprogramului nPrime. Exemplu: 
Dacă n=20 atunci k=8, iar p= (1,3,7,9,11,13,17,19).
*/
void solutia2() {
	int k=0, p[100]{},n=20;
	nPrime(n, k, p);
	cout << k<<endl;
	for (int i = 1; i < n; i++)
	{
		cout << p[i] << " ";
	}
}

























