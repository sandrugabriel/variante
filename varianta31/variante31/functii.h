#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*Se consideră subprogramul recursiv f1
definit alăturat. Ce se va afişa în urma
apelului f1(5);?
(6p.)
 void f1(int x)
{ if (x<=9)
 { cout<<x+1; | printf("%d",x+1);
 f1(x+2);
 cout<<x+3; | printf("%d",x+3);
 }
}*/
void f1(int x)
{
	if (x <= 9)
	{
		cout << x + 1;
		f1(x + 2);
		cout << x + 3;
	}
}

/* Scrieţi definiţia completă a subprogramului suma care primeşte ca parametru un tablou
unidimensional x cu cel mult 100 de elemente, numere reale, un număr natural n ce
reprezintă numărul efectiv de elemente ale tabloului x (n≤100), şi un număr natural m (n≥m).
Subprogramul returnează suma obţinută din cele mai mici m elemente ale tabloului x. */
int sumaUmrim(int x[], int n, int m) {

	int s = 0;

	int semn = 1;

	do {
		semn = 1;

		for (int i = 0; i < n - 1; i++) {

			if (x[i] > x[i + 1]) {
				int aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
				semn = 0;
			}

		}

	} while (semn == 0);


	for (int i = 0; i < m; i++) {
		s += x[i];
	}

	return s;
}

/*În fişierul numere.txt se află memorate, pe prima linie un număr natural n (1≤n≤100), iar
pe fiecare dintre următoarele n linii, câte două numere întregi x,y (-100≤x≤y≤100),
reprezentând capetele câte unui segment [x,y] desenat pe axa Ox de coordonate.
a) Scrieţi în limbajul C/C++ un program eficient din punct de vedere al timpului de executare
şi al spaţiului de memorare, care citeşte din fişier datele existente, determină segmentul
rezultat în urma intersecţiei tuturor celor n segmente date şi afişează pe ecran două numere
despărţie printr-un spaţiu ce reprezintă capetele segmentului cerut. Dacă segmentele nu au
nici un punct comun se va afişa pe ecran valoarea 0. (6p.)
b) Descrieţi în limbaj natural algoritmul utilizat, justificând eficienţa acestuia. (4p.)
Exemplu: dacă fişierul numere.txt are conţinutul alăturat, se va afişa
pe ecran
3 5
5
-7 10
3 20
-5 5
0 12
-8 30*/
void afisare() {

	ifstream f("numere.txt");

		int n, i, maxX, minY, x, y;
		f >> n >> x >> y;
		maxX = x;
		minY = y;
		for (i = 1; i < n; i++) {

			f >> x >> y;
			if (x > maxX)
				maxX = x;
			if (y < minY)
				minY = y;
		}

		if (maxX < minY)
			cout << maxX << " " << minY;
		else
			cout << 0;

}







































