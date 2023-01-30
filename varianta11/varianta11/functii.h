#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură două valori naturale nenule m şi n
(m≤10, n≤10) şi apoi m*n numere naturale nenule cu cel mult 4 cifre fiecare, reprezentând
elementele unei matrice cu m linii şi n coloane. Programul determină apoi valorile minime de
pe fiecare linie a matricei şi afişează pe ecran cea mai mare valoare dintre aceste minime.
Exemplu: pentru m=3, n=5 şi matricea
5 13 7 2 3
9 6 12 9 10
3 6 5 4 7
, se afişează pe ecran valoarea 6
(cea mai mică valoare de pe prima linie a matricei este 3, cea mai mică valoare de pe linia a
doua este 6, cea mai mică valoare de pe linia a treia este 2. Cea mai mare dintre aceste trei
valori este 6). */
void afisareA(int a[100][100], int n, int m) {

	int i, x, y = 0, j;
	
	for (i = 0; i < m; i++) {
		x = a[i][0];
		for (j = 0; j < n; j++)
			if (a[i][j] < x)
				x = a[i][j];
		if (x > y)
			y = x;
	}
	cout << y;

}

/*Pentru funcţia f definită alăturat, stabiliţi care
este valoarea f(5). Dar f(23159)? (6p.)
int f(int n){
 int c;
 if (n==0) return 9;
 else
 {c=f(n/10);
 if (n%10<c) return n%10;
 else return c;
 }
}*/
int f(int n) {
	int c;
	if (n == 0) return 9;
	else
	{
		c = f(n / 10);
		if (n % 10 < c) return n % 10;
		else return c;
	}
}

/*Fişierul text numere.txt conţine pe prima linie un număr natural n (n<30000), iar pe a
doua linie n numere întregi având maximum 4 cifre fiecare. Se cere să se afişeze pe ecran
un şir de n numere întregi, cu proprietatea că valoarea termenului de pe poziţia i
(i=1,2,…,n) din acest şir este egală cu cea mai mare dintre primele i valori de pe a doua
linie a fişierului numere.txt.
a) Descrieţi pe scurt un algoritm de rezolvare, eficient din punct de vedere al timpului de
executare şi al spaţiului de memorie utilizat, explicând în ce constă eficienţa sa. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris. (6p.)
3.
Exemplu: dacă fişierul numere.txt are conţinutul
alăturat, se afişează pe ecran numerele
4 6 6 7 8 8 8 8 8 9 10 10
12
4 6 3 7 8 1 6 2 7 9 10 8
*/
void afisare() {
	ifstream f("numere.txt");
	int n, a, maxim, i;
	f >> n >> maxim;
	for (i = 1; i < n; i++) {
		cout << maxim << " ";
		f >> a;
		if (a > maxim) {
			maxim = a;
		}

	}
	cout << maxim << " ";

}


/*
4. a) Scrieţi doar antetul funcţiei sum care primeşte ca parametru un număr natural nenul x cu
maximum 9 cifre şi returnează suma divizorilor numărului x.
Exemplu: sum(6) are valoarea 12 (=1+2+3+6). (3p.)
b) Să se scrie un program C/C++ care citeşte de la tastatură un număr natural n (0<n<25) şi
apoi n numere naturale nenule cu maximum 9 cifre fiecare. Programul calculează, folosind
apeluri ale funcţiei sum, şi afişează pe ecran câte numere prime conţine şirul citit.
Exemplu: pentru n=5 şi valorile 12 3 9 7 1 se va afişa pe ecran valoarea 2 (în şirul dat
există două numere prime şi anume 3 şi 7). */
int sum(int x) {

	int d, sum = 0;
	for (d = 1; d <= x / 2; d++)
		if (x % d == 0)
			sum = sum + d;
	return sum + x;

}
void afisarePri(int n,int a[100]) {

	int nr = 0, i;

	for (i = 0; i < n; i++) {
		if (sum(a[i]) == a[i] + 1)
			nr++;
	}

	cout << nr;

}






































