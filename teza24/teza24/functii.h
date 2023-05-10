#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*În secvența de instrucţiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează un tablou
bidimensional de tip întreg, cu 5 linii şi 5 coloane, numerotate de la 0 la 4. Fără a utiliza alte variabile,
scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării
secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de mai jos.
(6 puncte)
for (i=0; i<5; i++) for(j=0; j<5; j++)
1 2 3 4 -2
3 5 7 2 -2
8 12 9 0 -2
20 21 9 -2 -2
41 30 7 -4 -2
*/
void generare() {
	int a[100][100]{};
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if (i == 0 && j < 3) a[i][j] = j + 1;
			else
				if (j == 4)
					a[i][j] = -2;
				else
					a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
		}

}

/*
2. Subprogramul maxim primește prin parametri n și m două numere naturale (2 ≤n, m ≤ 30) şi prin parametrul T un
tablou bidimensional format din n linii și m coloane. Elementele tabloului sunt numere naturale. Subprogramul
returnează cel mai mare număr par format numai din cifre pare, din prima linie a tabloului T care începe
cu un număr impar sau retur-nează valoarea -1 dacă nu există un astfel de număr în tablou. Scrieți
în limbajul C/C++ (10 puncte) definiția completă a subprogramului maxim
*/
int maxim(int n, int m, int T[30][30]) {
	int x, i, j, maxi = 0, impar = 0, par;

	for (i = 0; i < n && impar == 0; i++)
		if (T[i][0] % 2 == 1) {
			impar = 1;
			for (j = 1; j < m; j++)
				if (T[i][j] % 2 == 0)
				{
					x = T[i][j]; par = 1;
					while (x && par) {

						if (x % 10 % 2 == 1)
							par = 0;

						x /= 10;
					}

					if (par == 1 && T[i][j] > maxi) maxi = T[i][j];
				}
		}

	if (impar == 0)
		return -1;
	else
		return maxi;
}

/*Fişierul bac.in conține un șir format din cel mult 100 000 numere naturale separate prin spaţiu,
care au exact 3 cifre. Scrieți un program C++, eficient ca timp de execuție și spațiude memorie utilizat,
care determină şi afişează pe ecran lungimea maximă a unei secvențe din şirul aflat în fişier, cu proprietatea
că toate numerele secvenței încep cu aceeaşi cifră şi numărul de secvente de lungime maximă de acest tip din fişier.
Exemplu: Dacă fișierul conține numerele 103 879 867 809 876 234 243 367 343 342 885 801 786 754 724 721,
atunci se va afişa 4 2.*/
void afisarea() {

	ifstream fin("bac.in");

	int x, lgmax = 0, nrmax_secv = 0, pc, lg;
	fin >> x;
	pc = x / 100; lg = 1;
	while (fin >> x)
		if (x / 100 == pc) lg++;
		else
		{
			if (lg > lgmax)
			{
				lgmax = lg;
				nrmax_secv = 1;
			}
			else
				if (lg == lgmax)
					nrmax_secv++;
			pc - x / 100;
			lg = 1;
		}
	if (lg > lgmax) {
		lgmax = lg;
		nrmax_secv = 1;
	}
	else
		if (lg == lgmax) nrmax_secv++;
	cout << lgmax << " " << nrmax_secv;
}
























