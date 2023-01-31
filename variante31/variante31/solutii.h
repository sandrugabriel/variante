#pragma once
#include "functii.h"
#include "backing.h"

/*În secvenţa alăturată, variabilele i şi j sunt de tip întreg, iar
variabila a memorează o matrice în care prima linie şi prima
coloană sunt numerotate cu 1. Toate elementele matricei
primesc valori în urma executării secvenţei.
Scrieţi în ordine, începând cu prima linie, doar elementele situate
pe cea de-a treia coloană a matricei.
for(j=1;j<=6;j++)
 for(i=1;i<=4;i++)
 a[i][j]=2*i+j;
 */
void solutia1() {
	int a[100][100]{};

	for (int j = 1; j <= 6; j++)
		for (int i = 1; i <= 4; i++) {
			if (i == 1 || j == 1)
				a[i][j] = 1;
			else
			{
				a[i][j] = 2 * i + j;

			}
		}


	for (int j = 1; j <= 6; j++) {
		cout << a[3][j] << " ";
	}

}

/*Având la dispoziţie cifrele 0, 1 şi 2 putem genera, în ordine crescătoare, numere care au
suma cifrelor egală cu 2 astfel încât primele 6 numere generate sunt, în această ordine: 2,
11, 20, 101, 110, 200. Folosind acelaşi algoritm se generează numere cu cifrele 0, 1, 2 şi
3 care au suma cifrelor egală cu 4. Care va fi al 7-lea număr din această generare ? (4p.)
a. 103 b. 301 c. 220 d. 130 */
void solutia2() {

	//back(0);
	///b.301
}

/*Se consideră subprogramul recursiv f1
definit alăturat. Ce se va afişa în urma
apelului f1(5);?
(6p.)
 void f1(int x)
{ if (x<=9)
 { cout<<x+1; | printf("%d",x+1);
 f1(x+2);
 cout<<x+3; | printf("%d",x+3);
 }
}*/
void solutia3() {

	f1(5);

}

/* Scrieţi definiţia completă a subprogramului suma care primeşte ca parametru un tablou
unidimensional x cu cel mult 100 de elemente, numere reale, un număr natural n ce
reprezintă numărul efectiv de elemente ale tabloului x (n≤100), şi un număr natural m (n≥m).
Subprogramul returnează suma obţinută din cele mai mici m elemente ale tabloului x. */
void solutia4() {

	int x[100] = { 2,4,4,2,5,7,8,5,3 }, n = 9, m = 3;

	cout << sumaUmrim(x, n, m);

}

/*În fişierul numere.txt se află memorate, pe prima linie un număr natural n (1≤n≤100), iar
pe fiecare dintre următoarele n linii, câte două numere întregi x,y (-100≤x≤y≤100),
reprezentând capetele câte unui segment [x,y] desenat pe axa Ox de coordonate.
a) Scrieţi în limbajul C/C++ un program eficient din punct de vedere al timpului de executare
şi al spaţiului de memorare, care citeşte din fişier datele existente, determină segmentul
rezultat în urma intersecţiei tuturor celor n segmente date şi afişează pe ecran două numere
despărţie printr-un spaţiu ce reprezintă capetele segmentului cerut. Dacă segmentele nu au
nici un punct comun se va afişa pe ecran valoarea 0. (6p.)
b) Descrieţi în limbaj natural algoritmul utilizat, justificând eficienţa acestuia. (4p.)
Exemplu: dacă fişierul numere.txt are conţinutul alăturat
5
-7 10
3 20
-5 5
0 12
-8 30
, se va afişa
pe ecran
3 5
*/
void solutia5() {
	afisare();

}





























