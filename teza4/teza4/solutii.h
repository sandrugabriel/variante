#pragma once
#include "functii.h"


/*3. În secvența de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează 
un tablou bidimensional cu 5 linii şi 5 coloane, numerotate de la 1 la 5. Elementele tabloului sunt numere 
întregi. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de 
suspensie astfel încât, în urma executării secvenței obținute, tabloul memorat în variabila A să aibă 
elementele din figura de mai jos.
(6 puncte)
for (i=1;i<=5;i++) for(j=1;j<=5;j++)
1 1 1 1 1
1 2 3 4 5
13605
14005
15550*/
void solutia1() {

	generare();

}

/*
2. Subprogramul numărare are doi parametri: n, prin care primeşte un număr natural (1≤n≤109):
m, prin care primeşte un număr natural (15m≤109, n≤m)
Subprogramul returnează numărul de cifre utilizate pentru construirea numerelor naturale din intervalul [n, m]. 
Scrieți în limbajul C/C++ definiția completă a subprogramului numărare. Exemplu: Dacă n = 7 și m=56 atunci, după 
apel, subprogramul va returna valoarea 115.*/
void solutia2() {

	cout << numarare(7, 56);

}

/*3. Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un şir cu cel mult 100 000 de numere întregi 
formate din cel mult 2 cifre fiecare și afișează pe ecran separate printr-un spațiu, numărul sau numerele din fişier 
cu număr maxim de apariții. Exemplu: Dacă în fişier sunt numerele 27 -8 43 27 -8 9 10 43 atunci pe ecran se vor afişa 
nu neapărat în această ordine -8 43 27.*/
void solutia3() {

	afisarea();

}














