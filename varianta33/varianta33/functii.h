#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Subprogramul re este definit alăturat. Ce valoarea
are re(1)? Dar re(14)?
 (6p.)
int re(int i)
{
 if (i<9) return 3+re(i+2);
 else
 if (i==9) return -2;
 else return 1+re(i-1);
 }
*/
int re(int i)
{
	if (i < 9) return 3 + re(i + 2);
	else
		if (i == 9) return -2;
		else return 1 + re(i - 1);
}

/*Subprogramul sum3 primeşte prin parametrul x un tablou unidimensional, cu cel mult 100
de elemente, numere întregi cu cel mult 4 cifre fiecare, iar prin parametrul n un număr
natural ce reprezintă numărul efectiv de elemente ale tabloului x (n≤100). Scrieţi definiţia
completă a subprogramului sum3 care returnează suma elementelor tabloului care sunt
divizibile cu 3. Dacă tabloul nu conţine nicio valoare divizibilă cu 3, subprogramul va returna
0. */
int sum3(int x[], int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] % 3 == 0) {
			s += x[i];
		}
	}
	return s;
}

/*Pe prima linie a fişierului numere.txt se află un număr natural n (n≤100), iar pe
următoarele n linii, câte n numere naturale despărţite prin câte un spaţiu, fiecare având cel
mult 9 cifre. Printre aceste numere se află cel puţin unul cu 3 cifre şi cel puţin unul cu 4 cifre.
a) Scrieţi în limbajul C/C++, un algoritm eficient din punct de vedere al gestionării memoriei
care citeşte din fişier datele existente şi determină şi afişează pe ecran, separate printr-un
spaţiu, două numere din fişier, x şi y, unde x este cel mai mare număr de trei cifre, iar y
este acel număr pentru care |x-y| are valoare minimă. Dacă sunt mai multe valori pentru y
care respectă condiţia impusă se va afişa numai una dintre ele. (10p.)
b) Explicaţi în limbaj natural metoda utilizată justificând eficienţa acesteia. (4p.)
Exemplu: dacă fişierul numere.txt are
conţinutul alăturat, se va afişa:
800 1100
5
112 333 1 500 1100
 1 95 7 97 12
 45 800 0 7 89
1 5 17 197 102
 45 86 0 7 9*/
void afisarea() {

	ifstream f("numere.in");
		int x = 0, y, z = 9999, n;
		int k;
		f >> n;
		for (int i = 1; i <= n * n; i++) {
			f >> k;
			if (k <= 999) {
				if (k > x) {
					y = x;
					x = k;
				}
				else if (k > y)
					y = k;
			}
			else if (k >= 1000 && k <= 9999)
				if (k < z)
					z = k;
		}
		if (x - y < z - x)
			cout << x << " " << y;
		else
			cout << x << " " << z;

}

















































































































