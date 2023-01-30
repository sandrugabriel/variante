#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*
Scrieţi un program C / C++ care citeşte de la tastatură un număr natural n(2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează :
-elementele aflate pe diagonala secundară a matricei vor primi valoarea 0
- elementele de pe prima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n
- elementele de pe a doua linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n - 1
...
- elementele de pe ultima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii(ca
	în exemplu).
	Exemplu: pentru n = 4 se va afişa matricea alăturată. (10p.)
	4 4 4 0
	3 3 0 3
	2 0 2 2
	0 1 1 1
	*/
void genereare(int n) {
	int a[100][100];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i + j == n - 1)
				a[i][j] = 0;
			else
				a[i][j] = n - i;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}


}

/*Pentru definiţia alăturată a subprogramului f,
ce se afişează ca urmare a apelului
f(15, 2); ? (6p.)
void f(int n, int x)
{
	if (x > n)
		cout << 0; | printf(” % d”, 0);
	else
		if (x % 4 <= 1) f(n, x + 1);
		else
		{
			f(n, x + 3);
			cout << 1; | printf(” % d”, 1);
		}
}
*/
void f(int n, int x)
{
	if (x > n)
		cout << 0;
	else
		if (x % 4 <= 1) f(n, x + 1);
		else
		{
			f(n, x + 3);
			cout << 1; 
		}
}

/*Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult
100 de numere naturale, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++
care citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu,
în ordine descrescătoare, toate numerele din fişier care au cel mult 2 cifre. Dacă fişierul nu
conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA*/
void afisarecorect() {

	ifstream f("nr.txt");

	int frecv[100], a, i;
	for (i = 0; i < 100; i++)
		frecv[i] = 0;
	while (f >> a) {
		if (a < 100)
			frecv[a]++;
	}

	int ok = 0;
	for (i = 99; i >= 0; i--) {
		if (frecv[i] != 0) {
			cout << i << " ";
			ok = 1;
		}
	}

	if (ok == 0)
		cout << "NU EXISTA";

}

/*Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre,
fiecare cifră fiind nenulă, şi care determină şi afişează pe ecran, folosind apeluri utile ale
subprogramului cif, cel mai mic număr palindrom ce poate fi obţinut prin rearanjarea
tuturor cifrelor numărului n. Dacă nu se poate obţine un palindrom din toate cifrele numărului
n, programul va afişa pe ecran numărul 0. Un număr natural este palindrom dacă este egal
cu numărul obţinut prin scrierea cifrelor sale în ordine inversă.
Exemplu: dacă n=21523531 atunci se va afişa pe ecran numărul 12355321, iar dacă
n=12272351 atunci se va afişa pe ecran numărul 0. */
int cif(int a, int b) {
	int nrAparitii = 0;
	while (a > 0) {

		if (a % 10 == b)
			nrAparitii++;
		a = a / 10;
	}

	return nrAparitii;

}
void ordineinversa(int n) {

	int frecv[10];


	for (int i = 0; i <= 9; i++)
		frecv[i] = 0; 

	while (n > 0) {

		if (frecv[n % 10] == 0) {
			frecv[n % 10] = cif(n, n % 10);
		}
		n = n / 10;
	}

	int ok = 0, nr = 0, p = 1;

	for (int i = 0; i <= 9 && ok == 0; i++) {
		if (frecv[i] % 2 != 0) {
			ok = 1;
			nr = 0;
		}
		else if (frecv[i] > 0) {
			int numarNou = 0, copie = p;
			

			while (frecv[i] > 0) {
				numarNou = numarNou * 10 + i;
				frecv[i]--;
				if (frecv[i] % 2 == 0)
					p = p * 10;
			}

			nr = ((nr / copie) * (p / copie) * (p / copie) +
				+numarNou) * copie + nr % copie;

		}
	}
	cout << nr << '\n';


}
