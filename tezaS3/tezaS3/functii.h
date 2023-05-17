#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Variabilele i şi j sunt de tip întreg. Scrieți expresia C/C++ care poate înlocui punctele de
suspensie astfel încât, în urma executării secvenței obținute, să se afişeze numerele de mai jos, în această ordine.
(6 puncte)
for (i=1;i<= 5; i++)
for(j=1; j<=5; j++)
2 1 1 1 1
1 2 1 1 1
1 1 2 1 1
1 1 1 2 1
1 1 1 1 2
*/
void generare() {

	int a[100][100]{};
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++) {
			if (i == j) a[i][j] = 2;
			else a[i][j] = 1;
		}
			
	for (int i = 1; i <= 5; i++, cout << endl)
		for (int j = 1; j <= 5; j++)
			cout << a[i][j] << " ";
}

/*
1. Se citesc două numere naturale, n şi m, se cere să se determine numărul de cifre utilizate
pentru construirea numerelor naturale din intervalul [n, m].
Exemplu: Dacă n = 7 şi m = 56 atunci se va afişa valoarea 97.*/
int  contor(int n) {

	int ct = 0;

	while (n!=0)
	{
		ct++;
		n /= 10;
	}

	return ct;
}
int intervalContor(int n, int m) {

	int ct = 0;
	for (int i = n; i <= m; i++) {
		ct += contor(i);
	}

	return ct;
}

/*2. Scrieți un program C/C++ care citeşte de la tastatură numărul natural n (n E[2,100]), apoi cele n
elemente ale unui tablou unidimensional, numere naturale din intervalul [0,10°] ştiind că elementele
tabloului sunt ordonate crescător, să se elimine din vector un număr mínim de elemente, astfel încât
să nu existe în tablou două elemente alăturate identice. Să se afişeze pe ecran tabloul astfel obținut.
Exemplu: Dacă n= 7 şi elementele tabloului sunt 2 4 4 4 7 7 1 atunci pe ecran se
va afişa 2 4 7 1.
 */
void eliminare(int& n, int v[100], int poz) {

	for (int i = poz; i <= n - 1; i++)
		v[i] = v[i + 1];
	n--;

}
void afisare(int n, int v[100]) {


	for (int i = 0; i < n; i++) {
		if (v[i] == v[i + 1]) {
			eliminare(n, v, i);
			i--;
		}
	}

	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
}

/*
3. Scrieți
un program C/C++ care citeşte din fişierul text BAC.TXT un şir cu cel mult 100 000 de numere întregi formate
din cel mult 2 cifre fiecare şi afişează pe ecran separate printr-un spațiu, numărul sau numerele din fişier
cu număr maxim de apariții.
Exemplu: Dacă în fişier sunt numerele 17 -8 13 17 -8 9 10 13 atunci pe ecran afişa nu neapărat în această
ordine -8 13 17.*/
void afisarea() {

	ifstream fout("bac.txt");

	int dim=0, v[100]{};
	int x;
	while (fout>>x)
	{
		v[dim] = x;

		dim++;
	}

	int maxi=-100;

	int frecv[10000]{};
	for (int i = 0; i < dim; i++) {
		frecv[v[i]]++;
	}

	for (int i = -99; i <= 99; i++) {
		cout << i << "  " << frecv[i] << endl;
		if (frecv[i] > maxi && frecv[i]!=0)
			maxi = frecv[i];
	}

	for (int i = -99; i <= 99; i++) {
		if (frecv[i] == maxi){}
			//cout << i << " " << endl;
	}

}










