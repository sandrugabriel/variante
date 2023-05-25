#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*for (i=0; i<5; i++) { for(j=0; j<5; j++)
{....
cout<<endl; }
0 1 2 3 4
2 3 4 5 6
0 1 2 3 4
6 7 8 9 10
0 1 2 3 4*/
void generare() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			if (i % 2 == 0) cout << j << " ";
			else cout << 2 * i + j << " ";
		}
		cout << endl;
	}

}

/*
2. Se consideră un număr natural n (2<n<50) și un tablou unidimensional a, format din n numere naturale nenule
şi distincte, fiecare număr având cel mult 9 cifre. Scrieți un program C++ care determină şi afişează numărul
de perechi distincte formate din elemente din tabloul a, prime între ele. Două numere naturale sunt prime
între ele dacă au un singur divizor comun: numărul 1.
Exemplu: Dacă n = 6 şi a = (42, 3, 14, 43, 8, 6) atunci se va obține valoarea 7, deoarece vectorul are 7
perechi de numere ce verifică proprietatea dată: (42, 43); (3, 14); (3, 43); (10 puncte) (3, 8);
(14, 43); (43, 8) ;(43, 6).*/
void afisare(int n, int a[]) {

	int nr_perechi = 0, x, y, i, j, rest;

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++) {
			x = a[i]; y = a[j];
			do {
				rest = x % y;
				x = y; y = rest;
			} while (rest != 0);
			if (x == 1)
				nr_perechi++;
		}
	cout << nr_perechi;

}

/*
3. Fişierul bac.txt conține pe prima linie un număr natural n, care este multiplu de 7 (7<n<70000) şi
pe a doua linie un șir de n numere întregi nenule, având cel mult trei cifre. Şirul de numere se
împarte în secvențe de câte 7 numere denumite benzi și pentru fiecare bandă se determină cele mai
mici două numere distincte min1 şi min2. Scrieți un program
Bacalaureat}C++, eficient ca timp de execuție și spațiu de memorie utilizat, care afişează pe
ecran, pentru fiecare dintre benzi, în ordine crescătoare cele două valori min1 şi min2 sau numărul
0, dacă banda nu conține două valori distincte min1 şi min2.
Exemplu: Pentru n = 21, şirul de numere -3, 10, 1, 2, -5, 6, -5, 1, 1, 1, 1, 1, 1, 1, 10.9.1. 2, 3, 6, 7 se
va afişa -5.-3, 0, 1, 2.*/
void afisarea() {

	ifstream fin("bac.txt");

	int n, i, min1, min2, x;
	fin >> n;
	min1 = min2 = 1000;
	for (i = 1; i <= n; i++)
	{
		fin >> x;
		if (x < min1)
		{
			min2 = min1;
			min1 = x;
		}
		else
			if (x<min2 && x>min1)
				min2 = x;
		if (i % 7 == 0)
		{
			if (min1 != 1000 && min2 != 1000 && min1 != min2)
				cout << min1 << " " << min2 << " ";

			else
				cout << 0 << " ";


			min1 = min2 = 1000;
		}
	}


}















