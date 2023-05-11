#pragma once
#include "functii.h"



/*1. Scrieți un program C++ care citeşte de la tastatură un număr natural n şi elementele, numere naturale, 
ale unui tablou bidimensional A, având n linii şi n coloane (2 ≤ n ≤50) şi înlocu-ieşte toate elementele 
care sunt numere pare, formate din cel mult 3 cifre, cu cel mai mare element situat pe diagonala principală
sau diagonala secundară a matricei, apoi afişează matricea transformată.Exemplu: Pentru n = 3 şi tabloul A = 2 1000 7
40 8 27
5 2 9 se va afisa matricea 9 1000 7
9 9 27
5 9 9
*/
void solutia1() {

	generare();

}

/*
Subprogramul cifre primește prin parametrul n un număr natural nenul, format din cel mult 9 cifre, elimină 
toate cifrele pare ale numărului n și furnizează prin parametrul n numărul modificat şi prin parametrul k
un număr format din cifrele pare distincte ale numărului n, în ordinea scrierii lor. Parametrul k este egal
cu -1 dacă numărul n nu are cifre pare.
Exemplu: Pentru numărul n = 12267488, se obține n = 17 şi k = 2648, iar pentru n = 1331, se obține 
n = 1331 şi k = -1. Scrieți în limbajul C++ definiția completă a subprogramului cifre.
*/
void solutia2() {

	int n = 12267488, k = 0;
	cifre(n, k);
	cout << n << " " << k;
}

/*
Fişierul bac.in conține un şir format din cel mult 10° litere ce aparțin mulțimii M = {a, A, b, B, c, C, d, D e, E}. 
Scrieți un program C++, eficient ca timp de execuție, ce afişează pe ecran prin litere mici, caracterele ce apar de 
un număr impar de ori în şirul dat, în ordinea enumerării lor în mulțimea M, fără a face distincție între litere 
mari şi litere mici sau afişează mesajul Nu există, dacă şirul dat nu conține niciun caracter cu proprietatea menţionată.
Dacă fişierul bac.txt conține caracterele cbcCdEaAdBacCDEaacc atunci pe ecran se va afişa aaaaacccccccddd. Dacă 
fișierul bac.txt conține caracterele cbcBaa, pe ecran se va afişa mesajul Nu există*/
void solutia3() {

	afisarea();

}



















































