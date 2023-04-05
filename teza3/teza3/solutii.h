#pragma once
#include "functii.h"



/*. Scrieți un program C/C++ care citeşte de la tastatură un număr natural impar N (Ne [2,50]) şi elementele unui tablou 
bidimensional cu N linii și N coloane, numere întregi, apoi trans- formă tabloul în memorie, ştergând o linie și o 
coloană, la mijlocul său ca în exemplu. Tabloul obținut se afişează pe ecran, linie cu linie, elementele fiecărei linii fiind separate
prin câte un spațiu. Exemplu: Dacă N=5 şi tabloul este:
12345
67894
34567
3 2 3 4 5
65789

atunci se obţine tabloul următor:
1245
6794
3245
6589*/
void solutia1() {

	int a[100][100] = {},n=5;
	ifstream f("nr.txt");

	for (int i = 0; i < 5; i++) 
		for (int j = 0; j < 5; j++) 
			f >> a[i][j];
		
	

	generare(n, a);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
		
}

/*2. Subprogramul numar are doi parametri: n. prin care primeşte un număr natural (2≤n≤10");
. m, prin care furnizează un număr natural (2≤m≤10") cel mai mare număr natural care se poate obține 
folosind toate cifrele impare care apar in scrierea lui n, dacă în scrierea lui n nu apar cifre 
impare atunci m va avea valoarea-1. Scrieți în limbajul C/C++ definiția
completă a subprogramului numar. Exemplu: Dacă n=74317 atunci m=7731, dacă n=246 atunci m=-1.*/
void solutia2() {
	int m;
	numar(74317, m);
		cout << m;

}

/*3. Scrieți un program C/C++ care citește de la tastatură trei numere naturalen, m şi Programul afişează în fișierul 
bac.txt numerele naturale cu exact k cifre care sunt divizibile atât cu n cât şi cu m (1≤n, m≤109, (15k≤9). Exemplu:
Dacă n = 15, m = 10, k = 2, atunci în fişier se vor afişa numerele 30 60 90. a) Se cere să se proiecteze un algoritm 
eficient din punct de vedere al timpului dea algoritmului ales justificându-se eficiența acestuia. 
b) Scrieți programul C/C++ corespunzător metodei descrise la a).*/
void solutia3() {

	int n=15, m=10, k=2;

	afisarea(n, m, k);

}















