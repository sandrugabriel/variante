#pragma once
#include "functii.h"


/*5. Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale m şi n (1≤m≤24,
1≤n≤24), un număr natural x (1≤x≤m) şi apoi m*n numere naturale de cel mult 5 cifre ce
reprezintă elementele unui tablou bidimensional a, cu m linii, numerotate de la 1 la m, şi n
coloane, numerotate de la 1 la n. Programul va determina eliminarea liniei cu numărul de
ordine x din matrice, modificarea corespunzătoare a numărului de linii din matrice şi afişarea
matricei obţinute în următorul format: câte o linie a matricei pe câte o linie a ecranului,
elementele fiecărei linii fiind separate prin câte un spaţiu. (10p.)
Exemplu: pentru m=3, n=4,
x=2 şi matricea alăturată
11 21 31 41
 51 61 71 81
 91 11 21 31
  se va afişa matricea
 11 21 31 41
 91 11 21 31*/
void solutia1() {

	int m = 3, n = 4, x = 2, a[100][100] = { {11, 21, 31, 41}, {51, 61, 71, 81}, {91, 11, 21, 31} };
	generare(m, n, x, a);

}

/*1. Pentru rezolvarea cărei probleme dintre cele enumerate mai jos se poate utiliza metoda
backtracking ? (4p.)
a. determinarea reuniunii a 3 mulţimi b. determinarea tuturor divizorilor unui
număr din 3 cifre
c. determinarea tuturor elementelor mai mici
decât 30000 din şirul lui Fibonacci
d. determinarea tuturor variantelor în care
se pot genera steagurile cu 3 culori (din
mulţimea: ”roşu”, ”galben”, ”albastru” şi
”alb”), având la mijloc culoarea ”galben” */
void solutia2() {
	//d. determinarea tuturor variantelor în care
	//se pot genera steagurile cu 3 culori(din
	//	mulţimea : ”roşu”, ”galben”, ”albastru” şi
		//”alb”), având la mijloc culoarea ”galben”

}

/*2. Se consideră subprogramul recursiv definit alăturat.
Ce valoare are expresia bac(10,4)? Care este cea
mai mică valoare de 2 cifre a lui u pentru care funcţia
bac(u,2) are valoarea 1? (6p.)
int bac(int u, int x)
{if (u<x)return 0;
 if (x==u)return 1;
 if (u%x==0)return 0;
 return bac(u,x+1);
}*/
int bac(int u, int x)
{
	if (u < x)return 0;
	if (x == u)return 1;
	if (u % x == 0)return 0;
	return bac(u, x + 1);
}
void solutia3() {

	cout << bac(2, 2);

}

/*3. Să se scrie în limbajul C/C++ definiţia completă a subprogramului calcul, care primeşte
prin parametrul n un număr natural nenul de cel mult 9 cifre şi furnizează prin parametrul x
numărul obţinut prin alăturarea cifrelor pare ale lui n considerate de la dreapta către
stânga. Dacă n nu conţine nicio cifră pară, x primeşte valoarea 0. (10p.)
Exemplu: în urma apelului calcul(9278,x), x primeşte valoarea 82.*/
void solutia4() {
	int x;
	calcul(9278, x);
	cout << x;
}

/*4. Fişierul text NUMERE.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie, n numere naturale cu cel mult 9 cifre fiecare, numere nu neapărat distincte.
Aceste numere sunt dispuse în ordine crescătoare şi separate între ele prin câte un
spaţiu.
a) Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din
punct de vedere al timpului de executare şi al spaţiului de memorie utilizat, afişează pe
ecran, cu un spaţiu între ele, valoarea care apare de cele mai multe ori în fişier şi de câte
ori apare ea. Dacă există mai multe valori care apar de un număr maxim de ori, se va afişa
cea mai mică dintre ele. (6p.)
 Exemplu: dacă fişierul
NUMERE.TXT are conţinutul
alăturat,
8
711 711 711 11111 11111 11111 191111 231111
atunci programul va afişa pe ecran 711 3.
b) Descrieţi succint, în limbaj natural, metoda utilizată la punctul a, justificând eficienţa
acesteia.*/
void solutia5() {

	afisarea();

}



































