#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură trei valori naturale nenule k, n, m
(n≤10, m≤10, k≤32000) şi apoi n*m numere întregi, fiecare având cel mult 4 cifre,
reprezentând elementele unui tablou bidimensional cu liniile numerotate de la 1 la n şi
coloanele numerotate de la 1 la m.
5.
Programul determină şi afişează pe ecran produsul numerelor de
ordine ale coloanelor care conţin cel puţin o dată valoarea k. Dacă
nu există nicio coloană care să conţină cel puţin o dată valoarea k,
programul va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru k=3, n=5, m=4 şi matricea alăturată se va afişa
6, deoarece coloanele 2 şi 3 conţin numărul k=3. (10p.)
2 4 5 -8
5 3 7 9
6 -2 3 10
7 4 2 37 */
void generare(int k, int n, int m, int a[100][100]) {

	int prod = 1,i,j;
	for (j = 1; j <= m; j++) {
		for (i = 1; i <= n; i++)
			if (a[i][j] == k)
				break;
		if (i <= n)
			prod *= j;
	}

	cout << prod;


}

/*3. Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100);
- v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi situate în
intervalul [10,30000]. Funcţia returnează suma numerelor din tabloul v care au ultimele
două cifre identice.
Exemplu: dacă n=4 şi v=(123, 122, 423, 555) funcţia va returna 677 (=122+555). */

int suma(int n, int* v) {

	int suma = 0;
	int i;
	for (i = 0; i < n; i++)
		if (v[i] % 10 == (v[i] / 10) % 10)
			suma += v[i];

	return suma;

}


/*4. Fişierul text NUMERE.IN conţine, pe mai multe linii, cel mult 30000 de numere naturale
nenule mai mici sau egale cu 500, numerele de pe fiecare linie fiind despărţite prin câte un
spaţiu. Fişierul conţine cel puţin două numere distincte, fiecare având două cifre.
a) Scrieţi programul C/C++ care citeşte toate numerele din fişierul NUMERE.IN şi creează
fişierul text NUMERE.OUT care să conţină pe prima linie cel mai mare număr de două cifre
din fişierul NUMERE.IN, şi de câte ori apare el în acest fişier, iar pe a doua linie, cel mai mic
număr de două cifre din fişierul NUMERE.IN şi de câte ori apare el în acest fişier. Alegeţi o
metodă de rezolvare eficientă din punct de vedere al memoriei utilizate şi al timpului de
executare. (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul a), explicând în
ce constă eficienţa ei (3 – 4 rânduri). (4p.)
Exemplu: dacă fişierul
NUMERE.IN are conţinutul
alăturat:
2 253 34 3
6 88 9 2 3
4 54 34 88
atunci fişierul NUMERE.OUT va
avea următorul conţinut:
88 2
34 2*/
void afisarea() {


	ifstream f("NUMERE.IN");
	ofstream g("NUMERE.OUT");
	int a, minim = 100, maxim = 9, i, nrAparitiiMin, nrAparitiiMax;


	while (f >> a) {
		if (a >= 10 && a <= 99) {
			if (a < minim) {
				minim = a;
				nrAparitiiMin = 0;
			}
			if (a == minim)
				nrAparitiiMin++;
			if (a > maxim) {
				maxim = a;
				nrAparitiiMax = 0;
			}
			if (a == maxim)
				nrAparitiiMax++;
		}
	}

	g << maxim << " " << nrAparitiiMax << '\n' << minim << " " << nrAparitiiMin;

}

