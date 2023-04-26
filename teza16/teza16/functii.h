#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieți un program C/C++ care citeşte de la tastatură un număr natural N (NE [2,10]) elementele unui tablou bidimensional
cu N linii şi N coloane, caractere din mulţimea completată doar cu caracterul 'X' şi NU, altfel. {'X', 'U'}. Programul
afişează DA, dacă există cel puțin o linie, o coloană sau o diagonală Exemplu: dacă N=4 şi tabloul este:
X U U X    atunci pe ecran se va afişa DA
U X X X
X X U X
X U X X
*/
void generare(int n,char a[100][100]) {

	int l[100], c[100], dp=0, ds=0, ok=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 'X') {
				if (i == j) {
					dp++;
				}
				if (i + j == n - 1) {
					ds++;
				}

				l[i]++;
				c[j]++;

			}
		}
	}

	if (dp == n || ds == n) {
		ok = 1;
	}

	for (int i = 0; i < n; i++) {
		if (l[i] == n || c[i] == n) {
			ok = 1;
		}
	}

	if (ok) cout << "DA";
	else
	{
		cout << "NU";
	}

}

/*
2. Subprogramul nMax primeşte prin parametrul n un număr natural de cel mult 6 cifre și prin parametrul c o cifră nenulă.
Subprogramul furnizează tot prin parametrul n numărul maxim care se poate obține inserând în n cifra c. Scrieți în
limbajul C/C++ definiția completă a subprogramului nMax.
Exemplu: Dacă n = 57332 şi c = 4 atunci, după apel, subprogramul va returna valoarea
574332.*/
void nMax(int& n, int c) {

	int cn = n, p = 1, cif=0, ok=0;

	while (n>9)
	{
		n /= 10;
		p *= 10;

	}

	n = 0;

	while (p)
	{
		cif = (cn / p) % 10;
		p /= 10;

		if (c > cif && !ok) {
			n *= 10 + c;
			ok = 1;
		}
		n *= 10 + cif;
	}
	if (!ok) {
		n *= 10 + c;
	}
}

/*3. Numim interval asociat unui șir de numere, perechea de numere naturale a, b (a≤b) cu proprietatea că şirul
este format din toate valorile naturale distincte, cuprinse între a și b şi scrise în ordine crescătoare.
De exemplu, şirul 4 5 6 7 8 are intervalul asociat 48, iar şirul 1 2 3 5 7 8 9 este format din trei subşiruri
ale căror intervale asociate sunt 1 3, 5 5 şi 7 9.
Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un șir S cu cel mult 1 000 000 de numere naturale
din intervalul [0,10³] și afişează pe ecran extremitățile intervalului care reprezintă intersecția tuturor intervalelor
asociate, de lungime maximă, din care este format şirul dat sau mesajul mulțimea vidă, în cazul în care acestea
nu conțin niciun element comun.
Exemplu: Dacă fișierul conține numerele 2 3 4 1 2 3 4 5 6 3 4 5 0 1 2 3 atunci pe ecran vor fi afişate valorile
2 3 deoarece şirul este format din 4 intervale asociate 2 4, 1 6, 3 5 şi 0 3 a căror intersecție este intervalul
2 3. Dacă fișierul conține numerele 3 4 5 4 5 6 8 atunci pe ecran se va afişa multimea vida.*/
void afisare() {

	ifstream fin("bac.txt"); 
	int x, y, a, b, maxa=-1, minb=9999, ok;
		fin >> x;
		a = x;
		ok = 0;
		while (fin >> y)
		{
				if (y == x + 1) b = y;
				else
				{
					if (ok == 0) maxa - a, minb - b, ok = 1;
					else
					{
						if (maxa < a) maxa = a;
						if (minb > b) minb = b;
					}
					a = y;
				}
				x = y;
		}
		if (ok == 0) maxa = a, minb = b, ok = 1;
		else
		{
			if (maxa < a) maxa = a;
			if (minb > b) minb = b;
		}
		if (minb >= maxa) cout << maxa << " " << minb; 
		else cout << "multimea vida";

}






















