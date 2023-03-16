#pragma once
#include "functii.h"


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
void solutia1() {

	int a[100][100] = { {2 ,4,5,-8}, {1,3,7,9}, {4,-2,3,10},{5,4,2,37},{6,7,3,13} };
	generare(3, 5, 4, a);


}

/*2. Pentru definiţia alăturată a subprogramului f,
stabiliţi ce valoare are f(2). Dar f(123)?
 (6p.)
int f(int x)
{ if(x==0)return 0;
 else
 if(x%2==0)return 1+f(x/10);
 else return 2+f(x/10);
}*/
int f(int x)
{
	if (x == 0)return 0;
	else
		if (x % 2 == 0)return 1 + f(x / 10);
		else return 2 + f(x / 10);
}
void solutia2() {

	cout << f(123);

}

/*3. Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100);
- v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi situate în
intervalul [10,30000]. Funcţia returnează suma numerelor din tabloul v care au ultimele
două cifre identice.
Exemplu: dacă n=4 şi v=(123, 122, 423, 555) funcţia va returna 677 (=122+555). */
void solutia3() {

	int n, i, v[100];
	cin >> n;

	for (i = 0; i < n; i++)
		cin >> v[i];

	cout << suma(n, v);


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
void solutia4() {

	afisarea();

}














