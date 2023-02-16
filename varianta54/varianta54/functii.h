#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural par, n (4≤n≤10), şi
un număr natural x, cu exact 3 cifre, şi care construieşte în memorie un tablou
bidimensional cu n linii şi n coloane, ce are elementele de pe diagonala principală egale cu
prima cifră a numărului x, elementele de pe diagonala secundară egale cu ultima cifră a
numărului x, iar restul elementelor egale cu cifra din mijloc a numărului x.
5.
Tabloul bidimensional se va afişa pe ecran, câte o linie a tabloului pe câte o
linie a ecranului, elementele fiecărei linii fiind separate prin câte un spaţiu.
Exemplu: dacă se citesc de la tastatură n=4 şi x=123 atunci se afişează
tabloul alăturat. (10p.)
1 2 2 3
2 1 3 2
2 3 1 2
3 2 2 1*/
void generare(int n, int x) {
	int a[100][100];


	int pc, cmj, uc;

	pc = x / 100;
	cmj = (x / 10) % 10;
	uc = x % 10;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i == j)
				a[i][j] = pc;
			else if (i + j == n - 1)
				a[i][j] = uc;
			else
				a[i][j] = cmj;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}


}

/* Se consideră subprogramul inv, care primeşte prin intermediul primului parametru a un
număr natural, cu minimum două cifre şi maximum 8 cifre, şi furnizează prin intermediul
celui de-al doilea parametru, b, valoarea numărului natural format cu aceleaşi cifre ca şi a,
considerate în ordine inversă. De exemplu, pentru a=3805, după apel b va avea valoarea
5083., iar dacă a=3800, după apel b va avea valoarea 83.
a) Scrieţi definitia completă a subprogramului inv. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n de minimum
două şi maximum 8 cifre şi afişează pe ecran un număr palindrom cu valoarea cea mai
apropiată de valoarea lui n citită. În cazul în care există două astfel de numere, se va afişa
cel mai mic dintre ele. Se vor folosi apeluri utile ale subprogramului inv.
Spunem că un număr natural x este palindrom dacă numărul format din cifrele lui x
considerate de la stânga către dreapta este acelaşi cu numărul format din cifrele lui x
considerate de la dreapta către stânga.
Exemplu: dacă n=16, atunci se afişează valoarea 11, dacă n=126, atunci se afişează
121, iar dacă a=33, atunci se afişează 33. */
void inv(int a, int& b) {


	b = 0;
	while (a > 0) {
		b = b * 10 + a % 10;
		a = a / 10;
	}


}
void afisare(int n) {

	int stanga = n, dreapta = n;

	while (true) {

		int inversStanga, inversDreapta;
		inv(stanga, inversStanga);
		inv(dreapta, inversDreapta);

		if (stanga == inversStanga) {
			cout << stanga;
			break;
		}
		if (dreapta == inversDreapta) {
			cout << dreapta;
			break;
		}
		stanga--;
		dreapta++;
	}
}

/*Fişierul text date.in conţine pe prima linie un număr natural nenul n (n≤100), iar pe a
doua linie un şir de n numere naturale nenule distincte, separate prin câte un spaţiu,
fiecare număr având maximum 8 cifre.
a) Scrieţi un program C/C++ care citeşte numerele din fişier şi determină câte dintre
comopnentele şirului citit pot fi scrise ca sumă a altor două numere din acelaşi şir.
Rezultatul obţinut se va afişa pe ecran. În cazul în care nu există niciun astfel de element,
se va afişa valoarea 0.
Exemplu: dacă fişierul date.in conţine
6
1 10 25 2 15 3
atunci se va afişa valoarea 2 (deoarece 25=10+15, 3=1+2). */
void afisareact() {

	ifstream f("date.in");

	int n, v[100],k, ct = 0;
	f >> n;

	for (int i = 0; i < n; i++)
		f >> v[i];

	int next;

	for (k = 0; k < n; k++) {
		next = 0;
		for (int i = 0; i < n - 1 && next == 0; i++)
			for (int j = i + 1; j < n && next == 0; j++)
				if (v[i] + v[j] == v[k]) {
					ct++;
					next = 1;
				}
	}

	cout << ct;

}





























