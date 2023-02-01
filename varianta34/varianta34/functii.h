#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*5. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (n≤20),
construieşte în memorie şi afişează pe ecran, matricea cu n linii şi n coloane, în care se vor
memora în ordinea crescătoare a valorii, pe linii şi coloane, primele n2
 numere naturale
nenule, pare, care nu sunt divizibile cu 3.
Fiecare linie a matricei se va afişa pe câte o linie a ecranului, cu
elementele de pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: pentru n=4 se va construi şi afişa matricea alăturată.
(10p.)
2 4 8 10
14 16 20 22
26 28 32 34
38 40 44 46*/
void generare(int n) {

	int m[21][21], k = 2;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			m[i][j] = k;
			k = k + 2;
			if (k % 3 == 0)
				k = k + 2;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << m[i][j] << " ";
		cout << '\n';
	}

}

/*2. Se consideră definit subprogramul f .
Scrieţi două valori naturale, x1 şi x2 (x1≠x2, x1<12 şi
x2<12) pentru care f(x1)=f(x2). (6p.)
int f(int i)
{
 if (i>12) return 1;
 else return 1+f(i+2);
}
*/
int f(int i)
{
	if (i > 12) return 1;
	else return 1 + f(i + 2);
}

/*3. a) Subprogramul max primeşte ca parametru un tablou unidimensional x cu cel mult 100 de
elemente numere întregi, care sunt, în ordine, termenii unei progresii aritmetice şi un număr
natural n, care reprezintă dimensiunea tabloului. Scrieţi definiţia completă a subprogramului
max care returnează cel mai mare termen al progresiei aritmetice. Alegeţi un algoritm de
rezolvare eficient din punct de vedere al timpului de executare. (6p.)
b) Explicaţi în limbaj natural metoda utilizată justificând eficienţa acesteia. (4p.)
c) Pe prima linie a fişierului numere.txt se află un număr natural n (n≤100), iar pe
următoarele n linii, câte n numere întregi cu cel mult 4 cifre fiecare. Scrieţi programul C/C++
care citeşte din fişier datele existente, determină liniile din fişier pe care s-au memorat în
ordine termenii unei progresii aritmetice şi afişează pe ecran, folosind apeluri ale
subprogramului max cel mai mare număr (diferit de cel situat pe prima linie) din fişier, care în
plus este termenul unei progresii aritmetice. (10p.)
Exemplu: dacă fişierul numere.txt are conţinutul
5
5 7 3 1 9
-9 -7 -5 -3 -1
2 5 8 14 11
50 40 30 20 10
18 17 16 15 14
alăturat, se va afişa 50, deoarece progresiile aritmetice
sunt:
(-9 -7 -5 -3 -1),
(50 40 30 20 10) şi
(18 17 16 15 14) */
int max(int a[100], int n) {
	if (a[1] > a[2])
		return a[1];
	else
		return a[n];
}
int prog(int a[100], int n) {
	int i;
	for (i = 2; i < n; i++)
		if (a[i + 1] - a[i] != a[2] - a[1])
			return 0;
	return 1;
}
void afisarea() {
	int n;
	int a[100];
	fstream f("f.txt");
	int max1 = -10000;
	f >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			f >> a[j];
		if (prog(a, n))
			if (max(a, n) > max1)
				max1 = max(a, n);
	}
	cout << max1;

}










































