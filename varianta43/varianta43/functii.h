#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤23) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane astfel încât elementele situate pe
diagonala principală să fie egale cu 2, cele situate deasupra diagonalei principale să fie
egale cu 1, iar cele situate sub diagonala principală să fie egale 3.
5.
Programul va afişa matricea pe ecran, câte o linie a matricei pe o linie a
ecranului, cu câte un spaţiu între elementele fiecărei linii.
Exemplu: dacă n este 4 atunci programul va construi şi va afişa
matricea alăturată. (10p.)
2 1 1 1
3 2 1 1
3 3 2 1
3 3 3 2*/
void generare(int n) {
	int a[100][100]{};
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i < j)
				a[i][j] = 1;
			else if (i > j)
				a[i][j] = 3;
			else
				a[i][j] = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

}

/*2. Subprogramul f are definiţia alăturată. Ce valoare
are f(3)? Dar f(10)? (6p.)
int f(int x)
{if(x==0)return 0;
 else return f(x-1)+2;
} */
int f(int x)
{
	if (x == 0)return 0;
	else return f(x - 1) + 2;
}

/*Scrieţi definiţia completă a unui subprogram P cu doi parametri, care primeşte prin
intermediul primului parametru, n, un număr natural nenul (1≤n≤100) şi prin intermediul
celui de-al doilea parametru, a, un tablou unidimensional cu elementele numerotate de la 1
la n, numere întregi de cel mult 4 cifre fiecare. Subprogramul returnează suma tuturor
numerelor impare aflate pe poziţii pare din tablou.
Exemplu: dacă n=6, iar şirul a este format din elementele (3,12,7,1,4,3), atunci la apel se
va returna 4.*/
int P(int n, int a[]) {

	int suma = 0;
	for (int i = 2; i <= n; i+=2)
		if (a[i] % 2 == 1) {
			suma = suma + a[i];
		}

	return suma;
}

/*4. Fişierul text numere.txt conţine pe prima linie un număr natural n (0<n<100000) iar pe a
a doua linie n cifre, separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului
de executare, cel mai mare număr ce se poate forma cu toate cifrele conţinute de a doua
linie a fişierului numere.txt. Numărul determinat se va afişa pe ecran.
Exemplu: daca fişierul numere.txt are următorul conţinut:
7
2 5 3 1 5 8 9
atunci pe ecran se va afişa: 9855321*/

void afisare() {

ifstream f("numere.txt");
	int n, frecv[10], i, a;
	f >> n;
	for (i = 0; i < 10; i++)
		frecv[i] = 0;
	for (i = 0; i < n; i++) {
		f >> a;
		frecv[a]++;
	}

	for (i = 9; i >= 0; i--) {
		while (frecv[i] != 0) {
			cout << i;
			frecv[i]--;
		}
	}
}






























