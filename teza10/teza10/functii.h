#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*for (i=0; i<6; i++) for(j=0; j<=2; j++)
0 1 2 2 1 0
1 2 3 3 2 1
2 3 4 4 3 2
2 3 4 4 3 2
1 2 3 3 2 1
0 1 2 2 1 0*/
void generare() {
	int a[100][100]{};
	for (int i = 0; i < 6; i++) 
		for (int j = 0; j <= 2; j++) {
			if (i < 3) {
				a[i][j] = (i + j) % 6;
				a[i][5 - j] = (i + j) % 6;
			}
			else {
				a[i][j] = a[5 - i][j];
				a[i][5 - j] = a[5 - i][j];
			}
		}


		for (int i = 0; i < 6; i++, cout << endl)
			for (int j = 0; j <= 2; j++)
				cout << a[i][j] << " ";
}

/*1. Scrieți un subprogram C/C++, divprim cu trei parametri: -n, prin care primeşte un număr natural nenul de cel mult 5 cifre;
- k, prin care primeşte numărul de elemente ale vectorului v;
- v, vector de cel mult 100 de numere naturale nenule, ordonate crescător. Subprogramul va determina cel mai mic
divizor prim al lui n și îl va căuta în vectorul v. Dacă divizorul prim nu va fi găsit, acesta va fi adăugat în v
pe poziția corespunzătoare astfel încât ordinea crescătoare să se păstreze. Valorile modificate ale vectorului și
dimen-siunii acestuia vor fi furnizate tot prin parametrii k și v.
Exemplu: Dacă la apel funcția va primi ca parametri n = 27, k = 4 şi v = (2, 5, 11, 17), după execuția acesteia
k = 5, iar v = (2, 3, 5, 11, 17). */
void divprim(int n, int& k, int v[]) {

	int d, ls, ld, mij, ok = 0; d = n;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) {
			d = i; break;
		}
	ls = 1; ld = k;
	while (ls <= ld && !ok)
	{
		mij = (ls + ld) / 2;
		if (v[mij] == d)
			ok = 1;
		else if (d < v[mij]) ld = mij - 1;
		else ls - mij + 1;
	}
	if (!ok)
	{
		for (int i = k; i >= ls; i--)
			v[i + 1] = v[i];
		v[ls] = d; k++;


	}

}

/*2. Numim dublu-cuvânt un cuvânt cu număr par de litere care este format prin dublarea unui cuvânt.
De exemplu, tictic este un dublu-cuvânt, în timp ce tictac sau abba nu sunt. Scrieți un program C/C++
care citeşte de la tastură S, un text de lungime maximă 255 de caractere, format din cuvinte separate
prin câte un spațiu și modifică în memorie şirul, înlocuind a doua jumătate a fiecărui dublu-cuvânt cu
caracterul ×. Dacă s-a făcut cel puțin o înlocuire, se va afișa pe ecran şirul rezultat, altfel se va
afișa mesajul NEMODIFICAT. Exemplu: Dacă se citeşte: se aude tictic tictac apoi dingding dingding se
va afişa: se aude tic* tictac apoi ding* ding**/
void afisare(char s[]) {

	int l, k;
	char rez[256]="", c[256]="", *p;

	// p = strtok(s, " "); while (p)
	{
	//	l = strlen(p); 
		if (1 % 2 == 0)
		{
			//	strncpy(c, p, l / 2); c[1 / 2] = '\0';
			if (strcmp(c, p + 1 / 2) == 0) {

				//strcpy(p + 1 / 2, "*"); k++; }
			}
			//	strcat(rez, p); strcat(rez, " "); p = strtok(NULL, " ");
		}
		//	strcpy(s, rez); s[strlen(s) - l] = '\0'; 
		// if (k) cout << s;
			//else cout << "NEMODIFICAT";


	}
}

	/*
	3. Fişierul text bac.txt conține cel mult 106 numere naturale de cel mult 9 cifre, separate prin câte un spațiu.
	Se cere afişarea pe ecran a valorii k pentru care intervalul de forma [2k, 2k+1) conține cele mai multe numere
	din şir. Dacă există mai multe astfel de intervale, se va afișa cel care are k maxim. Proiectați un algoritm
	eficient din punct de vedere al timpului de executare.
	Exemplu: Dacă fișierul bac.txt conține numerele
	175 22 2018 512 1025 18 atunci pe ecran se afişează: 10, deoarece sunt 2 intervale cu câte 2 numere: 22,16 €
	[24, 25), 2018, 1025 € [2¹0, 2¹¹), dar al doilea interval sqs ijssibal are k maxim.*/
void afisarea() {

	ifstream fin("bac.txt");
	int x, fr[32], p, k, frmax=0;
	while (fin >> x)
	{
		p = 1;
		k = 0;
		while (p * 2 <= x)
		{
			p = p * 2; k++;
		}
		fr[k] ++;
	}
	for (int i = 0; i < 32; i++)
		if (fr[i] >= frmax) {
			frmax = fr[i];
			k = i;
		}
	cout << k;

}








































