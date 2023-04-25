#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*3.
În secvența de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează un tablou
bidimensional cu 6 linii şi 6 coloane, numerotate de la 1 la 6. Elementele tabloului sunt numere întregi.
Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie
astfel încât, în urma executării secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de mai jos.
(6 puncte)
1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1
1 2 3 3 2 1
1 2 2 2 2 1
1 1 1 1 1 1
*/
void generare() {
	int a[100][100]{};
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			if (i < j) a[i][j] = i/j;
			a[7 - i][j] = a[i][7 - j] = a[7 - j][7 - i] = a[i][j];

		}
	}

	
}

/*
2. Subprogramul compact primeşte prin parametrul n, un număr natural (2≤n≤1000) şi prin parametrul a, un tablou
unidimensional care memorează un șir de n numere naturale, fiecare cu cel mult 2 cifre. Subprogramul elimină din
tablou, pentru fiecare a, 15in, elementele egale cu acesta, situate pe poziții consecutive, astfel încât, tabloul
să conţină la final, un număr maxim de elemente distincte, în ordinea în care au apărut în șirul primit ca parametru.
Șirul modificat şi numărul de elemente rămase după eliminare vor fi furnizate tot prin intermediul parametrilor n și a.
Scrieți în limbajul C/C++ definiția completă a subprogramului compact.
Exemplu: Dacă n=9 și tabloul memorează valorile 1 2 2 2 3 3 5 8 9 atunci, după apel n=6, iar tabloul va memora 1 2 3 5 8 9.
*/
void compact(int& n, int v[])
{
	int i, j;
	for (i = 1; i < n;)
		if (v[i] == v[i + 1])
		{
			for (j = i + 2; j <= n; j++) 
				v[j - 1] = v[j];
			n--;
		}else 
			i++;
}

/*
3. Un șir de numere x₁,x₂,...,...x conține o secvenţă - V dacă are un element Xk (1<k<m) și există i și p (1≤i<k<p≤m) cu
proprietatea: x₁>X₁+1>...>x şi x <x-<...<x. Scrieți un program care citeşte din fişierul bac.txt cel mult 1 000 000 numere
întregi, având cel mult nouă cifre şi afişează pe ecran lungimea maximă a unei secvenţe - V și numărul de secvențe - V de
lungime maximă pentru şirul de numere din fişier sau afişează mesajul Nu există, dacă nu există nicio secvență - V în şir.
Elaborați un algoritm eficient ca timp de execuție și spațiu de memorie utilizat.
Exemplu: Pentru n = 14, șirul de numere 9, 8, 2, 11, 14, 10, 9, 20,19,14,9, 20,56,17 conține două secvențe - V
cu lungimea maximă egală cu 5 şi se va afişa pe ecran 5 2.*/
void afisarea() {

	ifstream fin("bac.txt");
		int x, y, vf=0, lg, lgmax=0, nr, i, n;

		fin >> n;
	fin >> x;
	lg = 1;
	for (i = 2; i < n; i++)
	{
		fin >> y;
		if (vf == 1 && x < y) lg++;
		else if (vf == 0 && x > y) lg++;
		else if (vf == 0 && x < y) {
			lg++;
			vf = 1;
		}
		else {
			if (vf == 1 && lg > lgmax)
				lgmax = lg, nr = 1;
			else if (vf == 1 && lg == lgmax) nr++;
			lg = 1; vf = 0;
		}
		x = y;
	}

	if (vf == 1 && lg > lgmax) lgmax = lg, nr = 1;
	else if (vf == 1 && lg == lgmax) nr++;
	cout << lgmax << " " << nr;

}




























