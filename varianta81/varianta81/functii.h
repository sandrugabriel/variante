#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură trei valori naturale nenule k, n, m
(n≤10, m≤10, k≤32000) şi apoi n*m numere întregi, fiecare având cel mult 4 cifre,
reprezentând elementele unui tablou bidimensional cu liniile numerotate de la 1 la n şi
coloanele numerotate de la 1 la m.
5.
Programul determină şi afişează pe ecran suma numerelor de ordine
ale coloanelor care conţin cel puţin o dată valoarea k. Dacă nu există
nicio coloană care să conţină cel puţin o dată valoarea k, programul
va afişa pe ecran mesajul NU EXISTA.
Exemplu:pentru k=3,n=5,m=4 şi matricea alăturată se va afişa 5,
deoarece coloanele 2 şi 3 conţin numărul k=3. (10p.)
2 4 5 -8
1 3 7 9
4 -2 3 10
5 4 2 37
6 7 3 13*/
void generare(int k, int n, int m, int a[100][100]) {

	int suma = 0,i,j;
	for (j = 1; j <= m; j++) {
		for (i = 1; i <= n; i++)
			if (a[i][j] == k)
				break;
		if (i <= n)
			suma += j;
	}

	cout << suma;

}

/*3. Scrieţi în C/C++ definiţia completă a subprogramului medie care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100) ;
- v, prin care primeşte un tablou unidimensional cu n elemente, numere naturale, fiecare
element având cel mult patru cifre.
Subprogramul returnează media aritmetică a elementelor din tablou*/

float medie(int n, int* v) {

	float suma = 0;
	int i;
	for (i = 0; i < n; i++)
		suma += v[i];

	return suma / n;

}

/*Fişierul text NUMERE.IN conţine, pe mai multe linii, cel mult 30000 de numere naturale
nenule mai mici sau egale cu 500, despărţite prin câte un spaţiu.
a) Scrieţi programul C/C++ care, utilizând un algoritm eficient din punct de vedere al timpului
de executare, afişează pe ecran, în ordine crescătoare, toate numerele care au apărut o
singură dată din fişierul NUMERE.IN, despărţite prin câte un spaţiu.
4.
Exemplu: dacă fişierul NUMERE.IN conţine numerele scrise alăturat, se vor
afişa valorile următoare: 3 4 5 6 34 (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul a),
explicând în ce constă eficienţa ei (3 – 4 rânduri). (4p.)
2 23 34 3
8 9 9 23
6 8 9 2
4 5 23 9*/
void afisarea() {

	ifstream f("NUMERE.IN");
	int a, frecv[501], i;

	for (i = 1; i <= 500; i++)
		frecv[i] = 0;

	while (f >> a) frecv[a]++;

	for (i = 1; i <= 500; i++)
		if (frecv[i] == 1)
			cout << i << " ";

}





