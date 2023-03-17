#pragma once
#include "functii.h"



/*3. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100), apoi
un şir de n numere întregi, cu cel mult 2 cifre fiecare, notat a1,a2,a3,…an, apoi un al doilea
şir de n numere întregi, cu cel mult 2 cifre fiecare, notat b1,b2,b3,…bn. Fiecare şir conţine
atât valori pare, cât şi impare. Programul afişează pe ecran suma acelor numere impare din
şirul b care sunt mai mici decât suma tuturor numerelor pare din şirul a.
Exemplu: pentru n=4 şi numerele 2,3,7,8 respectiv 44,3,1,8 se afişează valoarea 4
pentru că numerele 3 şi 1 sunt mai mici decât suma numerelor pare din şirul a, care este
10.*/
void solutia1() {

	int n = 4, a[100] = { 2,3,7,8 }, b[100] = { 44,3,1,8 };
	afisare(n, a, b);

}

/*4. Se consideră subprogramul CMMMC care primeşte prin cei doi parametri, x şi y, două
numere naturale (1≤x≤10000, 1≤y≤10000) şi returnează cel mai mic multiplu comun al lor.
a) Scrieţi numai antetul subprogramului CMMMC. (4p.)
b) Fişierul text NUMERE.IN conţine, pe fiecare linie, câte două numere naturale nenule mai
mici sau egale decât 10000, despărţite printr-un spaţiu. Scrieţi un program C/C++ care,
pentru fiecare linie k din fişierul NUMERE.IN, citeşte cele două numere de pe această linie
şi scrie în fişierul text NUMERE.OUT , tot pe linia k, cel mai mic multiplu comun al acestora,
ca în exemplu.
Se vor utiliza apeluri utile ale subprogramului CMMMC. (6p.)
 Exemplu: dacă fişierul
NUMERE.IN are conţinutul
alăturat:
12 14
11 12
4 8

atunci fişierul
NUMERE.OUT va avea
următorul conţinut:
84
132
8*/
void solutia2() {

	afisarea();

}


















