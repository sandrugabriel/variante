#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*5. Scrieţi un program C/C++ care citeşte de la tastatură un număr
natural n (2<n<10) şi care construieşte în memorie şi afişează pe
ecran un tablou bidimensional cu n linii şi n coloane astfel încât,
parcurgându-l linie cu linie de sus în jos şi fiecare linie de la stânga
la dreapta, se obţin primele n2
 numere pare nenule, în ordine strict
crescătoare, ca în exemplu.
Exemplu: pentru n=4, se construieşte şi se afişează tabloul
alăturat. (10p.)
 2 4 6 8
10 12 14 16
18 20 22 24
26 28 30 32*/
void generare(int n) {
	int m[100][100]{},k=2;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			m[i][j] = k;
			k = k + 2;
		}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}

}

/*


3. Se consideră subprogramul cmdiv care primeşte prin parametrii x şi y două valori întregi
pozitive (0<x<100 şi 0<y<100) şi returnează cel mai mare divizor comun al lor.
a) Scrieţi definiţia completă a subprogramului cmdiv. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100) şi
determină, utilizând apeluri ale subprogramului cmdiv, numărul fracţiilor ireductibile de
forma
n
x
 cu x număr natural (1≤x≤n). Numărul obţinut va fi afişat pe ecran.
Exemplu: pentru n=6 se afişează 2, deoarece, dintre fracţiile
6
6
,
6
5
,
6
4
,
6
3
,
6
2
,
6
1 doar două
sunt ireductibile :
6
1
şi
6
5 .*/
int cmdiv(int x, int y) {

	while (x != y) {
		if (x > y)
			x = x - y;
		else
			y = y - x;

	}

	return x;

}

/*Fişierul text bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua
linie, separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare.
Scrieţi un program C/C++ care determină şi scrie în fişierul bac.out toate numerele de pe
a doua linie a fişierului care apar o singură dată pe această linie. Numerele determinate se
vor afişa în ordinea crescătoare a valorilor lor, separate prin câte un spaţiu.
Exemplu: dacă pe prima linie a fişierului bac.in se află 10, iar pe linia a doua se găsesc
numerele 2 4548 568 4548 57 89 5974 2 89 32 atunci valorile căutate sunt 32 57
568 5974. */
void afisarea() {

	ifstream f("bac.in");
	ofstream g("bac.out");

	int n, v[5000], i, j;
	f >> n;
	for (i = 0; i < n; i++)
		f >> v[i];
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (v[i] > v[j]) {

				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	if (v[0] != v[1])
		g << v[0] << " ";

	for (i = 1; i < n - 1; i++) {
		if (v[i] != v[i - 1] && v[i] != v[i + 1])
			g << v[i] << " ";

	}

	if (v[n - 1] != v[n - 2])
		g << v[n - 1] << " ";


}

























