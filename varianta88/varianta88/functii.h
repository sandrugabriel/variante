#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤20),
elementele unei matrice cu n linii şi n coloane, numere întregi din intervalul [-100,100] şi
afişează pe ecran media aritmetică a elementelor strict pozitive ale matricei, care sunt
situate deasupra diagonalei principale, ca în exemplu. Dacă nu există elemente strict
pozitive situate deasupra diagonalei principale, programul va afişa mesajul „NU EXISTA”.
 5.
Exemplu: pentru n=4 şi matricea alăturată se afişează valoarea
2.75 (sunt luate în considerare doar elementele marcate).
 (10p.)
 -1 2 -4 5
 0 6 3 1
 2 4 2 0
 3 -5 1 -3*/
void generare(int n, int a[100][100]) {


	float suma = 0;
	int nr = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i][j] > 0) {
				suma += a[i][j];
				nr++;
			}

	if (nr == 0)
		cout << "NU EXISTA";
	else
		cout << suma / nr;

}

/*3. Scrieţi definiţia completă a subprogramului numar, cu patru parametri, care primeşte prin
intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul
parametrilor c1 şi c2 câte o cifră cu proprietatea c1<c2; subprogramul furnizează prin
intermediul celui de al patrulea parametru, x, o valoare obţinută prin eliminarea din numărul
primit prin parametrul n a fiecărei cifre cuprinse în intervalul închis [c1, c2]. Dacă toate
cifrele lui n aparţin acestui interval, valoarea furnizată prin x va fi 0.
Exemplu: pentru n=162448, c1=4 şi c2=7, valoarea furnizată prin x va fi 128.*/
void numar(int n, int c1, int c2, int& x) {

	x = 0;
	int p = 1;
	while (n > 0) {
		if (n % 10 < c1 || n % 10 > c2) {
			x = (n % 10) * p + x;
			p *= 10;
		}

		n = n / 10;
	}

}

/*4. Fişierul text bac.txt conţine cel mult 10000 de numere naturale din intervalul închis
[0,9], dintre care cel puţin unul este prim. Numerele se află pe mai multe rânduri, cele de
pe acelaşi rând fiind separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care determină şi afişează pe ecran cel mai mare număr prim
care apare în fişier şi numărul de apariţii ale acestuia, utilizând un algoritm eficient din punct
de vedere al timpului de executare şi al spaţiului de memorie utilizat. Programul afişează pe
ecran cele două valori determinate, separate printr-un spaţiu.
Exemplu: dacă fişierul conţine numerele: 5 8 9 1 9 5 1 1 2 2 se va afişa 5 2. (6p.)
b) Descrieţi succint, în limbaj natural, algoritmul utilizat, justificând eficienţa acestuia.*/
void afisarea() {


	ifstream f("bac.txt");
	int a, frecv[10], i;
	for (i = 0; i < 10; i++)
		frecv[i] = 0;

	while (f >> a) {

		if (a == 2 || a == 3 || a == 5 || a == 7)
			frecv[a]++;
	}


	for (i = 7; i >= 2; i--)
		if (frecv[i] > 0) {
			cout << i << " " << frecv[i];
			break;
		}

}

















