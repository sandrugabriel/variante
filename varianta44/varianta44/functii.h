#pragma once
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;


/* Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤23) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, formată din numere naturale
nenule, mai mici sau egale cu n, astfel încât să nu existe două linii cu aceeaşi sumă a
elementelor şi nici două coloane cu aceeaşi sumă a elementelor.
Programul va afişa matricea pe ecran, câte o linie a matricei pe o linie a ecranului, cu un
spaţiu între elementele fiecărei linii.
Exemplu: dacă n=3 atunci o soluţie posibilă este următoarea matrice:
1 1 1
1 1 2
1 2 3 */
void generare(int n) {
	int a[100][100],k=1;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			a[i][j] = k;
			a[j][i] = k;

		}
		k++;
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}
}

/*2. Subprogramul f are definiţia alăturată. Ce
valoare are f(6,5)? Dar f(5,10)? (6p.)
int f(int x,int y)
{if(x==y)return x;
 else if(x<y)return f(x+1,y-1);
 else return f(x-1,y);
}*/
int f(int x, int y)
{
	if (x == y)return x;
	else if (x < y)return f(x + 1, y - 1);
	else return f(x - 1, y);
}

/*3. Scrieţi definiţia completă a unui subprogram P, cu doi parametri, a şi b, numere naturale cu
cel mult 4 cifre fiecare, care afişează pe ecran, separate prin câte un spaţiu, numerele aflate
în intervalul închis determinat de valorile a şi b, care sunt pătratele unor numere prime.
Exemplu: pentru a=40 şi b=1 se vor afişa valorile: 4 9 25 (nu neapărat în această ordine).*/
void P(int a, int b){


	if (a > b){
		int aux = a;
		a = b;
		b = aux;
	}

	int i;
	for (i = a; i <= b; i++) {
		
		if (!(sqrt(i) != (int)sqrt(i) || i == 1)) {
		int x = sqrt(i),d,ok = 0;
		for (d = 2; d <= sqrt(x) && ok == 0; d++)
			if (x % d == 0)
				ok = 1;

		if (ok == 0)
			cout<<i<<" ";
		}
			
	}


}






















