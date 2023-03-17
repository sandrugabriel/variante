#pragma once
#include "functii.h"

/*3. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100), apoi
un şir de n numere întregi, cu cel mult 2 cifre fiecare, notat a1,a2,a3,…an, apoi un al doilea
şir de n numere întregi, cu cel mult 2 cifre fiecare, notat b1,b2,b3,…bn. Fiecare şir conţine
atât valori pare, cât şi impare. Programul afişează pe ecran suma acelor numere din şirul b
care sunt strict mai mici decât media aritmetică a tuturor numerelor pare din şirul a.
Exemplu: pentru n=4 şi numerele 2,3,7,8 respectiv 44,3,1,8 se afişează valoarea 4
pentru că numerele 3 şi 1 sunt mai mici decât media aritmetică a numerelor pare din şirul a,
care este 5.*/
void solutia1() {
	int n = 4, a[100] = { 2,3,7,8 }, b[100] = { 44,3,1,8 };
	afisare(n, a, b);

}

/*4. Se consideră subprogramul CMMDC care primeşte prin cei doi parametri, x şi y, două
numere naturale (1≤x≤10000, 1≤y≤10000) şi returnează cel mai mare divizor comun al lor.
a) Scrieţi numai antetul subprogramului CMMDC. (4p.)
b) Fişierul text NUMERE.IN conţine, pe fiecare linie, câte două numere naturale nenule mai
mici sau egale decât 10000, despărţite printr-un spaţiu, reprezentând numitorul şi
numărătorul câte unei fracţii. Scrieţi un program C/C++ care, pentru fiecare linie k din
fişierul NUMERE.IN, citeşte numitorul şi numărătorul fracţiei de pe această linie şi scrie în
fişierul text NUMERE.OUT , tot pe linia k, numitorul şi numărătorul acestei fracţii, adusă la
forma ireductibilă, ca în exemplu. Se vor utiliza apeluri apeluri utile ale subprogramului
CMMDC. (6p.)
 Exemplu: dacă fişierul
NUMERE.IN are conţinutul
alăturat:
12 14
11 12
2 2
4 8
atunci fişierul
NUMERE.OUT va avea
următorul conţinut:
6 7
11 12
1 1
1 2*/
void solutia2() {

	afisarea();

}