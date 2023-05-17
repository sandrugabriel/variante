#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*for (i=0;i<=6; i++) { for(j=0; j<=6; j++)

*  - - - - -  *
*  * - - - * *
*  - * - * - *
*  - - * - -  *
*  - - - - -  *
*  - - - - -  *
*  - - - - -  *
*/
void generare() {
	char a[100][100]{};
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 6; j++) {

			if (j == 0 || j == 6)
				cout << '*' << " ";
			else {
				if ((i <= 3) && (j + i == 6 || i == j))
					cout << '*' << " ";
				else cout << '-' << " ";
			}

		}
		cout << endl;
	}
}


/*
1. Un număr n se numeşte rotund dacă este par şi în reprezentarea sa matematică în baza 2, nu sunt două cifre
egale alăturate. De exemplu, numărul 12 este un număr rotund deoarece reprezentarea sa în baza 2 este 1010.
Numărul 18 nu este rotund deoarece reprezentat în baza 2 este 10010. Scrieți un program în limbaj pseudocod
care citeşte de la tastatură un număr natural nenul n cu cel mult 9 cifre şi afişează valoarea 1 dacă n este
(10 puncte)
număr rotund şi 0 altfel.*/
//??

/*
2. Scrieți un program C++ care citeşte de la tastatură un număr natural n (2<n<10³), afişează pe ecran un număr
k ce reprezintă numărul de valori prime cu n, mai mici decât n și un tablou unidimensional p ce conține cele
k valori prime cu n, în ordine crescătoare. Spunem că un număr x este prim cu n dacă nu au divizori comuni
mai mari decât 1. Exemplu: Dacă n=20 atunci k=8, iar p= (1,3,7,9,11,13,17,19). (10 puncte)*/
void afisare(int n) {

	int k=0, p[100], a, b, r;

	for (int i = 1; i < n; i++) {

		a = i;
		b = n;

		while (b)
		{
			r = a % b;
			a = b;
			b = r;
		}

		if (a == 1) {
			k++;
			p[k] = i;
		}


	}

		cout << k << endl;

		for (int i = 1; i <= k; i++)
			cout << p[i] << " ";

}

/*
3. Din fişierul text BAC.TXT se citesc, de pe prima linie un număr k (n < 10°), iar de pe linia următoare
cel mult 1 000 000 de numere naturale cu cel mult 2 cifre fiecare, separate prin câte un spațiu. Să se
afişeze pe ecran numărul de pe a doua linie din fişier care va fi pe poziția k în şirul ordonat
descrescător, dacă există sau -1 în caz contrar. Să se proiecteze un algoritm eficient din punct
de vedere al timpului de executare.
Exemplu: Dacă fișierul conține numerele:
6
21 9 16 2 16 2 9 4 9 21 9 2 8 atunci pe ecran se va afişa 9.*/
void afisarea() {

	ifstream f("bac.txt");

	int x, k, fr[100];

	f >> k;
	int dim = 0;
	while (f >> x)
	{
		fr[dim] = x;
		dim++;
	}

	if (dim >= k) cout << fr[k];
	else
		cout << "-1";
}










