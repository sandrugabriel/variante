#pragma once
#include <iostream>

using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mare dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu. (10p.)
5.
Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată. 1 2 3 4 5
 2 2 3 4 5
 3 3 3 4 5
 4 4 4 4 5*/
void generare(int A[100][100], int n, int m) {

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (i > j)
				A[i][j] = i;
			else
				A[i][j] = j;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cout << A[i][j] << " ";
		cout << '\n';
	}

}

/*Pentru subprogramul f definit mai jos, ce se afişează ca urmare a apelului f(3,17)?(6p.)
//C
void f ( int a, int b)
{ if(a<=b)
 {f(a+1,b-2); printf(”%c”,’*’);}
 else printf(”%d”,b);
}
//C++
void f ( int a, int b)
{ if(a<=b)
 { f(a+1,b-2); cout<<’*’;}
 else cout<<b;
} */
void f(int a, int b)
{
	if (a <= b)
	{
		f(a + 1, b - 2); cout << '*';
	}
	else cout << b;
}

/*Subprogramul f, cu un parametru:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 8 cifre (a>1)
- returnează cel mai mic divizor prim al valorii parametrului a.
Exemplu: pentru valoarea 45 a parametrului a, subprogramul va returna valoarea 3
deoarece a=32
*5, iar cel mai mic divizor prim al său este 3.
a) Scrieţi definiţia completă a subprogramului f. (4p.)
b) Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din
şir fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va
determina şi va afişa pe ecran toate numerele prime din şirul citit. Numerele determinate se
vor afişa pe ecran, separate prin câte un spaţiu, în ordine crescătoare a valorii lor. Dacă nu
există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru n=7, şirul: 1125, 2, 314, 101, 37, 225, 12 pe ecran se va afişa:
2 37 101 */
int f1(int a) {

	int d = 2;
	for (d = 2; d <= a / 2; d++)
		if (a % d == 0)
			return d;

	return a;

}
void afisareprmie(int n, int v[100]) {

     int i, nrEl = 0;
	
	for (i = 0; i < n; i++) {
		if (v[i] == f1(v[i])) {
			int j, poz = nrEl;
		
			for (j = 0; j < nrEl; j++) {
				if (v[j] > v[i]) {
					poz = j;
					break;
				}
			}
			for (j = nrEl; j > poz; j--)
				v[j] = v[j - 1];
			v[poz] = v[i];
			nrEl++; 
		}
	}

	for (i = 0; i < nrEl; i++)
		cout << v[i] << " ";

}

