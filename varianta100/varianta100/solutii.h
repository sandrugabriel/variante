#pragma once
#include "functii.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100)şi apoi
elementele unui tablou bidimensional cu n linii şi n coloane, care memorează numere
naturale cu cel mult 9 cifre fiecare; programul afişează pe ecran acele valori din tablou care
sunt strict mai mici decât toate elementele cu care se învecinează direct (aflate pe aceeaşi
linie dar pe o coloană alăturată sau pe aceeaşi coloană dar pe o linie alăturată), ca în
exemplu. Numerele afişate vor fi separate prin câte un spaţiu.
5.
Exemplu: pentru n=4 şi tabloul alăturat se afişează numerele: 2 0 (2 se
învecinează direct cu 4, 3, 6 şi 9, şi este mai mic decât acestea, iar 0 se
învecinează direct cu 6, 9 şi 1 şi este mai mic decât acestea). (10p.)
5 4 7 9
6 2 3 4
0 9 8 5
1 3 8 6*/
void solutia1() {

	generare(4);
}

/*2. Ce afişează subprogramul F, descris
alăturat, la apelul F(5);? (6p.)
void F(int x)
{
 cout<<x; | printf(“%d”,x);
 if(x>=3)
 F(x-2);
 cout<<x-1; | printf(“%d”,x-1);
}*/
void F(int x)
{
	cout << x;
	if (x >= 3)
		F(x - 2);
	cout << x - 1;
}
void solutia2() {

	F(5);

}

/*3. Scrieţi definiţia completă a subprogramului divizor, cu trei parametri, prin care primeşte 3
numere naturale nenule cu cel mult 9 cifre fiecare şi returnează numărul divizorilor comuni
tuturor celor 3 numere.
Exemplu: dacă numerele primite ca parametri sunt 24, 20 şi 12, subprogramul returnează
valoarea 3 (divizorii comuni sunt 1, 2 şi 4)*/
void solutia3() {

	cout << divizor(24, 20, 12);
}

/*Se consideră un şir s format după regula alăturată, unde
s-a notat cu aӨb numărul obţinut prin concatenarea
cifrelor lui a şi b, în această ordine.
Exemplu: pentru x=2 se obţine şirul:
2, 3, 32, 323, 32332,....
Fişierul text SIR.TXT conţine pe prima linie două numere, x (1≤x≤20) şi k (1≤k≤5000),
separate printr-un spaţiu, iar pe a doua linie un număr format din exact k cifre, reprezentând
un termen al şirului s (diferit de x). Cifrele numărului nu sunt separate prin spaţii.
a) Scrieţi un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
timpului de executare şi al memoriei utilizate, afişează pe ecran acel termen din şir care îl
precede pe cel citit din fişier.
Exemplu: dacă fişierul conţine valorile alăturate, se va afişa pe ecran
numărul 323. (6p.)
2 5
32332
4.
b) Descrieţi în limbaj natural metoda utilizată şi explicaţi în ce constă eficienţa ei.*/
void solutia4() {

	afisarea();

}



































