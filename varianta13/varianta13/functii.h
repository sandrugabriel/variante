#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, ale cărei
elemente primesc valori după cum urmează:
- elementele aflate pe diagonala secundară sunt toate nule;
- elementele de pe coloana i (1≤i≤n), aflate deasupra diagonalei secundare, au valoarea
egală cu i;
- elementele de pe linia n-i+1 (1≤i≤n), aflate sub diagonala secundară, au valoarea egală
cu i.
5.
Programul afişează pe ecran matricea construită, câte o linie a matricei pe
câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un
spaţiu.
Exemplu: pentru n=4 se va afişa matricea alăturată. (10p.)
1 2 3 0
1 2 0 3
1 0 2 2
0 1 1 1*/
void generare(int n) {
	int a[25][25], i, j;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i + j == n + 1)
				a[i][j] = 0;
			else if (i + j < n + 1)
				a[i][j] = j;
			else
				a[i][j] = n - i + 1;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}
}

/* Se consideră şirul 1, 2,1, 3,2,1, 4,3,2,1, ...
construit astfel: prima grupă este formată din numărul 1, a doua grupă este formată din
numerele 2 şi 1, iar grupa a k-a, este formată din numerele k, k-1,..., 1.
Se cere să se citescă de la tastatură un număr natural n (n≤1000) şi să se afişeze pe ecran
cel de al n-lea termen al şirului dat.
a) Descrieţi un algoritm de rezolvare a acestei probleme, eficient din punct de vedere al
timpului de executare şi al spaţiului de memorie, explicând în ce constă eficienţa acestuia.
(4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris*/
void afisareNtermin(int n) {

	int k, d;
	d = 1 + 8 * n;
	k = (-1 + sqrt(d)) / 2;
	if (k * (k + 1) / 2 == n)
		cout << 1;
	else {
		k++;
		cout << 1 + k * (k + 1) / 2 - n;
	}

}

/*Se consideră subprogramul P care are doi parametri:
– n, prin intermediul căruia primeşte un număr natural de cel mult 9 cifre
– c, prin intermediul căruia primeşte o cifră.
Subprogramul va furniza tot prin intermediul parametrului n numărul obţinut din n prin
eliminarea tuturor apriţiilor cifrei c. Dacă, după eliminare, numărul nu mai conţine nicio cifră
sau conţine doar cifre 0, rezultatul returnat va fi 0.
a) Scrieţi doar antetul subprogramului P. (2p.)
b) Pe prima linie a fişierului text BAC.IN se găsesc, separate prin câte un spaţiu, mai multe
numere naturale de cel mult 9 cifre fiecare. Scrieţi programul C/C++ care citeşte numerele
din acest fişier, utilizând apeluri ale subprogramului P elimină toate cifrele impare din fiecare
dintre aceste numere şi apoi scrie în fişierul text BAC.OUT numerele astfel obţinute,
separate prin câte un spaţiu. Dacă un număr din fişierul BAC.IN nu conţine nicio cifră pară
nenulă, acesta nu va mai apărea deloc în fişierul de ieşire. (8p.)
Exemplu: dacă fişierul BAC.IN conţine numerele 25 7 38 1030 45127 0 35 60 15,
atunci BAC.OUT va avea conţinutul: 2 8 42 60.*/
void p(int& n, int c) {

	int copie = 0, p = 1;
	while (n > 0) {
		if (n % 10 != c) {
			copie = n % 10 * p + copie;
			p = p * 10;
		}
		n = n / 10;
	}

	n = copie;


}
void afisare() {

	ifstream f("bac.in");
	ofstream g("bac.out");

		int a;
		while (f >> a) {
			int i;
			for (i = 1; i <= 9; i = i + 2)
				p(a, i);
			if (a != 0)
				g << a << " ";
		}

}






































