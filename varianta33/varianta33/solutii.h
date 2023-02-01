#pragma once
#include "functii.h"
#include "backing.h"


/*În secvenţa alăturată, variabilele i, j şi x sunt de tip întreg, iar
variabila a memorează o matrice în care prima linie şi prima
coloană sunt numerotate cu 1. Toate elementele matricei
primesc valori în urma executării secvenţei.
Scrieţi în ordine, începând cu prima coloană, elementele
situate pe fiecare linie a matricei care se va construi în urma
executării secvenţei alăturate. (6p.)
x=2;
for(j=1;j<=5;j++)
 for(i=1;i<=3;i++)
 { a[j][i]=x;
 x=x+1;
 }*/
void solutia1() {
	int a[100][100]{}, x = 2;

	for (int j = 0; j <= 5; j++)
		for (int i = 0; i <= 3; i++)
		{
			if (i == 0 || j == 0) {
				a[i][j] = 1;
			}
			else {

			a[j][i] = x;
			x = x + 1;
			}
		}

	for (int j = 0; j <= 5; j++) {

		for (int i = 0; i <= 3; i++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	

}

/* Folosind un algoritm de generare putem obţine numere naturale de k cifre care au suma
cifrelor egală cu un număr natural s. Astfel, pentru valorile k=2 şi s=6 se generează, în
ordine, numerele: 15, 24, 33, 42, 51, 60. Care va fi al treilea număr generat pentru k=4 şi
s=5? (4p.)
a. 1301 b. 1022 c. 2201 d. 1031 */
void solutia2() {

	back(0);

}

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
void solutia3() {

	cout << re(1) << " " << re(14);

}

/*Subprogramul sum3 primeşte prin parametrul x un tablou unidimensional, cu cel mult 100
de elemente, numere întregi cu cel mult 4 cifre fiecare, iar prin parametrul n un număr
natural ce reprezintă numărul efectiv de elemente ale tabloului x (n≤100). Scrieţi definiţia
completă a subprogramului sum3 care returnează suma elementelor tabloului care sunt
divizibile cu 3. Dacă tabloul nu conţine nicio valoare divizibilă cu 3, subprogramul va returna
0. */
void solutia4() {
	int x[100] = { 4,3,5,6 }, n = 4;
	cout << sum3(x, n);
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
conţinutul alăturat
5
112 333 1 500 1100
 1 95 7 97 12
 45 800 0 7 89
1 5 17 197 102
 45 86 0 7 9
, se va afişa:
800 1100
*/
void solutia5() {

	afisarea();
}




































































