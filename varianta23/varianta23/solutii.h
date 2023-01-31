#pragma once
#include "functii.h"


/*Pentru declaraţiile alăturate, care este
numărul maxim de numere întregi ce pot fi
memorate în variabila a? (6p.)
struct punct3D {
 int x; int y; int z;};
 struct punct3D a[10][10];*/
struct punct3D {
	int x; int y; int z;
};
struct punct3D a[10][10];
void solutia1() {

	//100

}

/*5. Un tablou bidimensional A cu m linii şi n coloane (1≤m≤100, 1≤n≤100) conţine pe prima linie
numerele 1,2,...,n, iar pe prima coloană numerele 1,2,...,m. Celelalte elemente ale
tabloului sunt date de relaţia: Ai,j=Ai-1,j+Ai,j-1. Scrieţi un program C/C++ care citeşte de la
tastatură numerele m şi n şi afişează pe ecran ultima cifră a elementului de pe ultima linie şi
ultima coloană a tabloului.
Exemplu: pentru m=3 şi n=4 se va afişa 5 deoarece elementele
tabloului A sunt:
 (10p.)
1 2 3 4
2 4 7 11
3 7 14 25 */
void solutia2() {
	int m = 3, n = 4;
	generare(m, n);
}

/*1. Algoritmul de generare a tuturor numerelor de 5 cifre nenule, fiecare având cifrele ordonate
strict crescător, este echivalent cu algoritmul de generare a: (6p.)
a. submulţimilor unei mulţimi cu 5 elemente b. produsului cartezian a unor mulţimi de
cifre
c. aranjamentelor de 9 elemente luate câte 5 d. combinărilor de 9 elemente luate câte 5*/
void solutia3() {

	//c. aranjamentelor de 9 elemente luate câte 5

}

/* Pentru subprogramul suma definit
alăturat, scrieţi valoarea expresiei
suma(5,4). (4p.)
int suma (int a,int b)
{ if (a==0 && b==0) return 0;
 else if (a==0) return 1+suma(a,b-1);
 else return 1+suma(a-1,b);
} */
void solutia4() {

	cout << suma(5, 4);

}

/* 3. a) Scrieţi definiţia completă a subprogramului shift care primeşte prin intermediul
parametrului n o valoare naturală nenulă (n≤100), iar prin intermediul parametrului x, un
tablou unidimensional cu maximum 100 de componente. Fiecare componentă a acestui
tablou este un număr întreg care are cel mult 4 cifre. Subprogramul permută circular cu o
poziţie spre stânga primele n elemente ale tabloului x şi furnizează tabloul modificat tot prin
parametrul x.
Exemplu: dacă înainte de apel n=4 şi x=(1,2,3,4), după apel x=(2,3,4,1). (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n
(n≤100), apoi cele n elemente ale unui tablou unidimensional x. Programul va inversa
ordinea elementelor tabloului x folosind apeluri utile ale subprogramului shift şi va afişa
pe ecran, separate prin câte un spaţiu, elementele tabloului rezultat în urma acestei
prelucrări.
Exemplu: dacă se citesc pentru n valoarea 5, iar tabloul x este (1,2,3,4,5) programul
va determina ca x să devină (5,4,3,2,1).*/
void solutia5() {
	int n = 5, x[100] = { 1,2,3,4,5 };
	afisare(n, x);

}

/*Fişierul text BAC.TXT conţine pe prima linie un număr natural nenul n (1≤n≤1000), iar pe
fiecare dintre următoarele n linii, câte două numere întregi a şi b (1≤a≤b≤32000), fiecare
pereche reprezentând un interval închis de forma [a,b]. Scrieţi un program C/C++ care
determină intervalele care au proprietatea că intersecţia cu oricare dintre celelalte n-1
intervale este vidă şi afişează pe câte o linie a ecranului, separate printr-un spaţiu,
numerele care reprezintă capetele intervalelor determinate. (10p.)
 4.
Exemplu: dacă fişierul BAC.TXT are conţinutul alăturat
4
17 20
2 6
10 15
8 16
, pe ecran se va afişa:
2 6 sau 17 20
17 20 2 6*/
void solutia6() {

	afisarea();

}
