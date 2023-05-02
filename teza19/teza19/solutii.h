#pragma once
#include "functii.h"




/*În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează un 
tablou bidimensional de tip caracter, cu 4 linii şi 4 coloane, numerotate de la 0 la 3. Fără a utiliza alte 
variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în 
urma executării secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de mai jos.
(6 puncte)
for (i=0; i<4;i++)
for(j=0; j<4; j++)
aabb
AABB
aabb 
AABB*/
void solutia1() {

	generare();

}

/*Se citesc de la tastatură două şiruri de caractere s1 şi s2 formate din cel mult 40 de litere mici. 
Scrieți un program C++ care modifică în memorie cele două şiruri astfel: elimină vocalele din şirul s1 
şi le inserează în şirul s2 pe poziții pare, în ordine începând de la primul caracter. Să se afişeze pe 
ecran şirurile modificate.
Exemplu: Pentru șirurile elicopter şi cartile, şirul s1 devine lcptr, iar s2 devine
eciaoretile.
*/
void solutia2() {
	char s1[100], s2[100];
	schimbare(s1, s2);
}

/*
2. Subprogramul factor are patru parametri: n prin care primeşte un număr natural (1≤n≤50), a prin care primeşte 
un tablou unidimensional format din n numere naturale nenule care au cel mult 3 cifre, fp prin care furnizează cel
mai mic factor prim comun tuturor elementelor din tabloul a și p prin care furnizează puterea factorului fp pentru
care numărul fp² este divizor pentru fiecare element din tabloul a, cu p>0. Dacă elementele tabloului a nu au un 
factor prim comun atunci fp are valoarea -1 și are valoarea 0. Scrieți în limbajul C++ definiția completă a 
subprogramului factor.
Exemplu: Pentru n = 4 şi tabloul a= = (60,36,18,24), subprogramul factor va avea fp = 2, p = 1, iar pentru n = 4 și 
tabloul a= = (22,60,21,25), fp = -1 şi p = 0.
*/
void solutia3() {
	int v[100] = { 60,36,18,24 },fp=0,p=0;
	factor(4, v, fp, p);
	cout << fp << " " << p;
}

/*
3. Scrieți un program C++, eficient ca timp de execuție și spațiu de memorie utilizat, care afişează în fişierul
bac.txt, în ordine strict crescătoare, pe câte o linie, toate palindroamele formate din 6 cifre impare. Primele
3 numere afişate în fişier sunt: 111111,113311,115511*/
void solutia4() {

	afisarea(3);

}

























