#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*. Se consideră o matrice pătratică cu n linii şi n coloane (1≤n≤30), ce
memorează numere întregi nenule de cel mult două cifre fiecare.
Scrieţi un program C/C++ care citeşte de la tastatură valoarea n şi
elementele matricei şi care afişează pe ecran, ultima cifră a produsului
acelor elemente de pe diagonala secundară ce au proprietatea că sunt
valori minime pe coloanele lor. Dacă nu există astfel de elemente în
matrice, se va afişa mesajul NU EXISTA.
Exemplu: pentru n=4 şi matricea alăturată
3 4 90 10
25 2 7 9
18 3 10 4
3 7 20 3
se va afişa pe ecran
valoarea 1 (3*7=21). */
void afisare() {

	int n, a[100][100];
	ifstream f("matricea.txt");
	f >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			f >> a[i][j];

	int ultimaCifraP = 1, exista = 0;
	for (int j = 0; j < n; j++) {
		int ok = 0;
		for (int i = 0; i < n && ok == 0; i++)
			if (a[n - 1 - j][j] > a[i][j])
				ok = 1;

		if (ok == 0) {
			ultimaCifraP = (ultimaCifraP * a[n - 1 - j][j]) % 10;
			exista = 1;
		}
	}

	if (exista == 0)
		cout << "NU EXISTA";
	else
		cout << ultimaCifraP;



}

/* Pentru definiţia alăturată a subprogramului
sc, stabiliţi ce valoare are sc(10). Dar
sc(901324)? (6p.)
int sc(long x)
{
 if(x<10) return x;
 return sc(x/10)+x%10;
}*/
int sc(long x)
{
	if (x < 10) return x;
	return sc(x / 10) + x % 10;
}

/*3. Scrieţi în limbajul C/C++ definiţia completă a subprogramul Del care are doi parametri: x,
un număr întreg de cel mult 9 cifre, şi y, un număr natural nenul de o cifră. Subprogramul
determină eliminarea tuturor cifrelor lui x mai mari strict decât y şi furnizează numărul
obţinut tot prin intermediul parametrului x. Dacă toate cifrele lui x sunt mai mari strict decât
y, atunci x va primi valoarea -1.
Exemplu: dacă x=37659 şi y=6, după apel x=365, iar y=6. */
void del(int& x, int y) {
	int r = 0;
	while (x) {
		if (x % 10 <= y)
			r = r * 10 + x % 10;
		x /= 10;
	}
	if (r == 0)
		x = -1;
	else
		while (r) {
			x = x * 10 + r % 10;
			r /= 10;
		}
}

/*4. Se consideră subprogramul inter, cu doi parametri: x şi y (numere întregi formate din cel
mult patru cifre fiecare); subprogramul interschimbă valorile a două variabile transmise prin
intermediul parametrilor x şi y.
a) Scrieţi în limbajul C/C++ definiţia completă a subprogramului inter. (4p.)
b) Pe prima linie a fişierului bac.in se află un număr natural nenul n≤1000, iar pe a doua
linie a fişierului se află un şir de n numere naturale nenule, despărţite prin câte un spaţiu,
fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++ care afişează pe
ecran, în ordine crescătoare, numerele aflate pe a doua linie a fişierului. Numerele vor fi
afişate pe o singură linie, iar între două numere se va lăsa un spaţiu. Se vor folosi apeluri
utile ale subprogramului inter. */
void inter(int& x, int& y) {

	int aux = x;
	x = y;
	y = aux;

}
void afisarea() {

	int n, a[1000];

ifstream f("bac.in");
	f >> n;
	for (int i = 0; i < n; i++)
		f >> a[i];

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				inter(a[i], a[j]);

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

}


















