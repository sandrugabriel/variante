#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*for (i=0; i<5; i++) {
for(j=0; j<5; j++)
{ ....
cout<<endl; }
6 7 8 9 10
7 8 9 10 11
8 9 10 11 12
9 10 11 12 13
10 11 12 13 14
*/
void generare() {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
		{
			cout << i + j + 6 << " ";
		}
		cout << endl;
	}

}


/*
1. Scrieți un program în limbaj pseudocod care citeşte de la tastatură un număr natural n (2≤n≤50) şi n
numere naturale distincte, fiecare număr având cel mult 9 cifre şi afişează numărul de perechi din şir,
formate din numere introduse consecutiv, cu proprietatea că un număr este oglindit pentru celălalt număr.
Exemplu: Dacă n = 7 şi v = (41, 14, 324, 423, 6, 82, 28) atunci se va afişa valoarea 3, deoarece şirul
de numere conține 3 perechi de numere ce verifică proprietatea dată: (41, 14); (324, 423); (82, 28).
*/
void perechi(int n, int v[]) {

	int nr = 0;
	int o = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			int c = v[j];
			o = 0;

			while (c != 0)
			{
				o = o * 10 + c % 10;
				c /= 10;
			}

			if (v[i] == o) nr++;

		}

	}
	cout << nr;
}

/*
2. Se citesc de la tastatură un număr natural n (1<n<50) şi un tablou unidimensional v format format din n
numere naturale nenule. Scrieți un program C++ care afişează cel mai mic factor prim comun tuturor elementelor
din tabloul v notat fp şi puterea factorului fp, notată cu p, pentru care numărul fp² este divizor pentru
fiecare element din tabloul v, cu p>0. Dacă elementele tabloului v nu au un factor prim comun atunci fp are
valoarea -1 și p are valoarea 0.
Exemplu: Pentru n = 4 și tabloul v= (60, 36, 18, 24), se va afișa fp=2, p=1, iar
şi pentru n = 4 şi tabloul v= (22, 60, 21, 25), se va afişa fp=-1 şi p=0.
*/
void afisare(int n, int v[], int& fp, int& p) {

	int f[100], pt[100], i, c, nf = 0, d, pf,
		poz, ok = 0;
	fp = 1; c = v[1]; d = 2;
	while (c > 1)
	{
		pf = 0;
		while (c % d == 0)
		{
			c /= d;
			pf++;

		}
		if (pf != 0)
		{
			nf++;
			f[nf] = d;
			pt[nf] = pf;
		}
		d++;
	}

	poz = 1;
	int j;
	for (i = 2; i <= n && fp > 0; i++)
	{
		c = v[i]; ok = 0;

		for (j = poz; j <= nf; j++)
			if (c % f[j] == 0)
			{
				pf = 0; ok = 1;
				while (c % f[j] == 0)
				{
					pf++;
					c /= f[j];
				}
				if (pf < pt[j]) pt[j] = pf;
				fp = f[j]; p = pt[j]; poz = j;
				break;
			}
		if (ok == 0)
		{
			fp = -1; p = 0;
		}

	}
	cout << fp << " " << p;
}

/*
3. Scrieți un program C++, eficient ca timp de execuție și spațiu de memorie utilizat, care afişează în fişierul
bac.txt, în ordine strict crescătoare, pe câte o linie, toate palindroamele formate din 6 cifre impare. Primele
3 numere afişate în fişier sunt: 111111,113311,115511*/
void afisarea() {

	ofstream fout("bac.txt");
	int c1, c2, c3, nr;
	for (c1 = 1; c1 <= 9; c1 = c1 + 2)
		for (c2 = 1; c2 <= 9; c2 = c2 + 2)
			for (c3 = 1; c3 <= 9; c3 = c3 + 2)
			{
				nr = c1 * 100000 + c2 * 10000 + c3 *
					1000 + c3 * 100 + c2 * 10 + c1;
				fout << nr << endl;
			}

}




























