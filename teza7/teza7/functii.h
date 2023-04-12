#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Fara a utiliza alte variabile, screti una sau mai multe instructuini care pot inlocui punctele de suspensie.
1  2  3  4  5
10 9  8  7  6
11 12 13 14 15
16 17 18 19 20
25 24 23 22 21
*/
void generare() {
	int a[100][100]{};

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (i % 2 == 0) {
				a[i][j] = (i - 1) * 5 + (6 - j);
			}
			else
			{
				a[i][j] = (i - 1) * 5 + j;
			}

		}
	}


	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

/*Subprogramul permuta are trei parametri: un parametru n, prin care primeste un numar natural, un parametru a, prin care primestre
un tablou unidimensional care memoreaza un sir de n numere nat, parametru k prin care primeste un nuamr nat. Subprogramul
permuta circular la stanga cu k pozitii cele n numere nat.
Ex: n=4,k=2 si tabloul memoreaza valorile 60 45 30 10 atunci, dupa apel tabloul va memora 30 10 60 45
*/

void stergere(int a[], int& n, int poz) {

	for (int i = poz; i <= n; i++) {
		a[i] = a[i + 1];
	}
	n--;
}
void inserare(int a[], int& n, int poz, int nou) {

	for (int i = n - 1; i >= poz; i--) {
		a[i + 1] = a[i];
	}
	n++;
	a[poz] = nou;
	
}

void permuta(int n, int a[], int k) {

	for (int i = 0; i < k; i++) {
		int pNr = a[0];
		stergere(a, n, 0);
		inserare(a, n, n, pNr);
	}

}

/*Se citeste din fisierul bac.in un sir S cu cel mult 100 00 de numere naturale , unde k este un numar natural din intervalul
[0,9], programul afiseaza in fisireul bac.out elemenetele sirului S in ordine crescatoare.
Ex: bac.in contine nr. 100 10 100 1 10 atunci in fisierul bac.out vor fi afisate valorile 1 10 10 100 100.
*/
void crescator() {

	ifstream f("bac.in");
	ofstream g("bac.out");

	int v[100] = {};
	int dim = 0;
	while (f>>v[dim])
	{
		dim++;
		
	}

	int semn = 1;

	do {
		semn = 1;

		for (int i = 0; i < dim - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				semn = 0;
			}
		}

	} while (semn == 0);

	for (int i = 0; i < dim; i++) {
		g << v[i] << " ";

	}

}











