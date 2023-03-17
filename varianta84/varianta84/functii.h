#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*3. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100), apoi
un şir de n numere întregi, cu cel mult 2 cifre fiecare, notat a1,a2,a3,…an, apoi un al doilea
şir de n numere întregi, cu cel mult 2 cifre fiecare, notat b1,b2,b3,…bn. Fiecare şir conţine
atât valori pare, cât şi impare. Programul afişează pe ecran suma acelor numere impare din
şirul b care sunt mai mici decât suma tuturor numerelor pare din şirul a.
Exemplu: pentru n=4 şi numerele 2,3,7,8 respectiv 44,3,1,8 se afişează valoarea 4
pentru că numerele 3 şi 1 sunt mai mici decât suma numerelor pare din şirul a, care este
10.*/
void afisare(int n,int a[101],int b[101]) {

	int i,sumaNrPare = 0, sumaNrImpare = 0;

	for (i = 1; i <= n; i++)
		if (a[i] % 2 == 0)
			sumaNrPare += a[i];

	for (i = 1; i <= n; i++)
		if (b[i] % 2 == 1 && b[i] < sumaNrPare)
			sumaNrImpare += b[i];

	cout << sumaNrImpare;

}

/*4. Se consideră subprogramul CMMMC care primeşte prin cei doi parametri, x şi y, două
numere naturale (1≤x≤10000, 1≤y≤10000) şi returnează cel mai mic multiplu comun al lor.
a) Scrieţi numai antetul subprogramului CMMMC. (4p.)
b) Fişierul text NUMERE.IN conţine, pe fiecare linie, câte două numere naturale nenule mai
mici sau egale decât 10000, despărţite printr-un spaţiu. Scrieţi un program C/C++ care,
pentru fiecare linie k din fişierul NUMERE.IN, citeşte cele două numere de pe această linie
şi scrie în fişierul text NUMERE.OUT , tot pe linia k, cel mai mic multiplu comun al acestora,
ca în exemplu.
Se vor utiliza apeluri utile ale subprogramului CMMMC. (6p.)
 Exemplu: dacă fişierul
NUMERE.IN are conţinutul
alăturat:
12 14
11 12
4 8

atunci fişierul
NUMERE.OUT va avea
următorul conţinut:
84
132
8*/
int CMMMC(int x, int y) {

	int prod = x * y;
	while (x != y) {
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	return prod / x;
}
void afisarea() {

	ifstream f("NUMERE.IN");
	ofstream g("NUMERE.OUT");
	int x, y;

	while (f >> x && f >> y)
		g << CMMMC(x, y) << '\n';

}











