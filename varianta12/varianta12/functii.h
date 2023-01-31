#pragma once
#include <iostream>
#include <fstream>


using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, ale cărei
elemente primesc valori după cum urmează: elementul din linia i şi coloana j primeşte ca
valoare ultima cifră a produsului i*j (1≤i≤n şi 1≤j≤n).
5.
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe o linie a ecranului, elementele fiecărei linii fiind separate prin câte un
spaţiu.
Exemplu: pentru n=4 se va afişa matricea alăturată. (10p.)
1 2 3 4
2 4 6 8
3 6 9 2 */
void generare(int n) {


	int a[25][25];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			a[i][j] = (i * j) % 10;


	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}

}

/* Se consideră subprogramul P, definit alăturat.
Ştiind că valoarea variabilei întregi a este înainte
de apel 4, care este valoarea ei imediat după
apelul P(a)? (4p.)
void P(int &x)
{
 x=x+5;
}
a. 10 b. 4 c. 9 d. 5*/
void P(int& x)
{
	x = x + 5;
}

/*Fişierele text NR1.TXT şi NR2.TXT conţin, separate prin câte un spaţiu, mai multe numere
întregi de cel mult 9 cifre fiecare. Fiecare dintre fişiere conţine cel mult 100 de valori şi
numerele din fiecare fişier sunt ordonate strict crescător. Se cere să se afişeze pe ecran, în
ordine crescătoare, numerele divizibile cu 5 care se găsesc doar în unul din cele două
fişiere.
Exemplu: dacă fişierul NR1.TXT conţine numerele 1 2 3 4 7 20 60, iar fişierul
NR2.TXT conţine numerele 3 5 7 8 9 10 12 20 24, atunci se vor afişa pe ecran
valorile 5 10 60.
a) Descrieţi un algoritm de rezolvare a acestei probleme, eficient din punct de vedere al
timpului de executare şi al spaţiului de memorie utilizat, explicând în ce constă eficienţa
acestuia. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris.*/
void afisareCres() {

	ifstream f("nr1.txt");
	ifstream g("nr2.txt");

		int a, b;
		f >> a;
		g >> b;
		while (!f.eof() && !g.eof()) {
			if (a < b) {
				if (a % 5 == 0)
					cout << a << " ";
				f >> a;
			}
			else if (b < a) {
				if (b % 5 == 0)
					cout << b << " ";
				g >> b;
			}
			else {
				f >> a;
				g >> b;
			}
		}
		while (!f.eof()) {

			if (a % 5 == 0)
				cout << a << " ";
			f >> a;
		}
		while (!g.eof()) {
			if (b % 5 == 0)
				cout << b << " ";
			g >> b;

		}


}


/* Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n (n≤20),
apoi un şir de n numere naturale, având fiecare exact 5 cifre. Dintre cele n numere citite,
programul determină pe acelea care au toate cifrele egale şi le afişează pe ecran, în ordine
crescătoare, separate prin câte un spaţiu.
Exemplu: pentru n=5 şi numerele 11111 33333 12423 59824 11111 33443 se va
afişa: 11111 11111 33333. */
void afisare(int n,int a[]) {

	int i, frecv[10];
	for (i = 0; i < 10; i++)
		frecv[i] = 0;
	for (i = 0; i < n; i++) {
		while (a[i] >= 10) {
			if (a[i] % 10 != (a[i] / 10) % 10)
				break;
			a[i] = a[i] / 10;
		}
		if (a[i] < 10)
			frecv[a[i]]++;

	}
	for (i = 1; i < 10; i++) {
		if (frecv[i] > 0) {
			a[i] = i * 10000 + i * 1000 + i * 100 + i * 10 + i;
			while (frecv[i] > 0) {
				cout << a[i] << " ";
				frecv[i]--;
			}
		}

	}

}