#pragma once
#include "functii.h"



/*for (i=0; i<6; i++) for(j=0; j<=2; j++)
0 1 2 2 1 0
1 2 3 3 2 1
2 3 4 4 3 2
2 3 4 4 3 2
1 2 3 3 2 1
0 1 2 2 1 0*/
void solutia1() {

	generare();

}

/*1. Scrieți un subprogram C/C++, divprim cu trei parametri: -n, prin care primeşte un număr natural nenul de cel mult 5 cifre;
- k, prin care primeşte numărul de elemente ale vectorului v;
- v, vector de cel mult 100 de numere naturale nenule, ordonate crescător. Subprogramul va determina cel mai mic 
divizor prim al lui n și îl va căuta în vectorul v. Dacă divizorul prim nu va fi găsit, acesta va fi adăugat în v 
pe poziția corespunzătoare astfel încât ordinea crescătoare să se păstreze. Valorile modificate ale vectorului și 
dimen-siunii acestuia vor fi furnizate tot prin parametrii k și v.
Exemplu: Dacă la apel funcția va primi ca parametri n = 27, k = 4 şi v = (2, 5, 11, 17), după execuția acesteia 
k = 5, iar v = (2, 3, 5, 11, 17). */
void solutia2() {
	int n = 27, k = 4, v[100] = { 2,5,11,17 };

	divprim(n, k, v);

	cout << k;
}

/*2. Numim dublu-cuvânt un cuvânt cu număr par de litere care este format prin dublarea unui cuvânt. 
De exemplu, tictic este un dublu-cuvânt, în timp ce tictac sau abba nu sunt. Scrieți un program C/C++ 
care citeşte de la tastură S, un text de lungime maximă 255 de caractere, format din cuvinte separate 
prin câte un spațiu și modifică în memorie şirul, înlocuind a doua jumătate a fiecărui dublu-cuvânt cu 
caracterul ×. Dacă s-a făcut cel puțin o înlocuire, se va afișa pe ecran şirul rezultat, altfel se va 
afișa mesajul NEMODIFICAT. Exemplu: Dacă se citeşte: se aude tictic tictac apoi dingding dingding se 
va afişa: se aude tic* tictac apoi ding* ding**/
void solutia3() {
	char s[100] = "";
	afisare(s);


}

/*
3. Fişierul text bac.txt conține cel mult 106 numere naturale de cel mult 9 cifre, separate prin câte un spațiu. 
Se cere afişarea pe ecran a valorii k pentru care intervalul de forma [2k, 2k+1) conține cele mai multe numere 
din şir. Dacă există mai multe astfel de intervale, se va afișa cel care are k maxim. Proiectați un algoritm 
eficient din punct de vedere al timpului de executare.
Exemplu: Dacă fișierul bac.txt conține numerele
175 22 2018 512 1025 18 atunci pe ecran se afişează: 10, deoarece sunt 2 intervale cu câte 2 numere: 22,16 € 
[24, 25), 2018, 1025 € [2¹0, 2¹¹), dar al doilea interval sqs ijssibal are k maxim.*/
void solutia4() {

	afisarea();

}














































