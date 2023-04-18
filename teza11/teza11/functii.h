#pragma once
#include <iostream>
#include <fstream>

using namespace std;



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
void generare(int n, int a[100][100]) {

	int v[100]{}, k=0;
		for (int j = 0; j < n; j++)
		{

			k = 0;
			for (int i = 0; i < n; i++) 
				k += a[i][j];
			v[j] = k;
		}
		for (int i = 0; i < n; i++)
		{
			k = 0;
			for (int j = 0; j < n; j++) 
				k += a[i][j];
			if (k == 0)
				for (int j = 0; j < n; j++) 
					a[i][j] = v[j];
		}



		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
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
void nPrime(int n, int& k, int p[]) {

	int i, a, b, r; 
	for (i = 1; i < n; i++)
	{
		a = i; b = n;
		while (b)
		{
			r = a % b;
			a = b; b = r;
		}
		if (a == 1)
		{
			k++; 
			p[k] = i;
		}
	}
}

















