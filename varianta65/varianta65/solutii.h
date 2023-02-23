#pragma once
#include "functii.h"


/*5. Scrieţi un program în limbajul C/C++ care citeşte de la tastatură două valori naturale n şi m
(1≤n≤24, 1≤m≤24) şi construieşte în memorie un tablou bidimensional cu n linii şi m coloane
format din toate numerele naturale de la 1 la n*m, ca în exemplu. Programul va afişa pe
ecran, pe n linii, tabloul obţinut, elementele fiecărei linii fiind separate prin câte un spaţiu.
Exemplu: pentru n=4 şi m=5 se va afişa:
20 19 18 17 16
11 12 13 14 15
10 9 8 7 6
1 2 3 4 5*/
void solutia1() {

	generare(4, 5);
}

/*2. Se consideră funcţia f, definită alăturat.
Ce se afişează ca urmare a executării secvenţei de
mai jos în care variabilele a şi b sunt de tip int?
a=4; b=18;
 cout<<f(a,b);
cout<<a<<b;
 (6p.)
int f( int &a, int &b)
{ while (a !=b)
 if (a>b) a=a-b;
 else b=b-a;
 return a;}*/
int f(int& a, int& b)
{
	while (a != b)
		if (a > b) a = a - b;
		else b = b - a;
	return a;
}
void solutia2() {
	int a = 4, b = 18;
cout << f(a, b);
cout << a << b;

}

/*3. Subprogramul sfx primeşte prin singurul său parametru, x, un număr natural din intervalul
[100,2000000000] şi returnează valoarea 1 dacă ultimele trei cifre ale numărului sunt în
ordine strict descrescătoare sau valoarea 0 în caz contrar.
Exemplu: dacă x=24973 se va returna valoarea 1.
a) Scrieţi definiţia completă a subprogramului sfx. (5p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n format din exact
6 cifre şi verifică, utilizând apeluri ale subprogramului sfx, dacă acest număr are toate cifrele
în ordine strict descrescătoare. Programul va afişa mesajul Da în caz afirmativ şi mesajul Nu
în caz contrar.
Exemplu: dacă n=756543 se va afişa Nu, iar dacă n=976532 se va afişa Da. */
void solutia3() {

	afisare(756543);

}

/*4. Pentru un şir de numere naturale, numim ”pol” al şirului un termen din şir care are doi vecini,
termenul precedent şi termenul următor din şir, şi valoarea termenului respectiv este strict
mai mare decât valoarea fiecăruia dintre cei doi vecini ai săi.
a) Fişierul text date.in conţine un şir de cel mult 10000 de numere naturale având
maximum 6 cifre fiecare, numere separate prin câte un spaţiu. Scrieţi un program C/C++
care citeşte toate numerele din fişier şi afişează numărul de ”poli“ ai şirului citit, folosind un
algoritm eficient din punctul de vedere al memoriei utilizate. (6p.)
Exemplu: dacă fişierul date.in are următorul conţinut:
51 20 100 43 43 618 5000 31 2020 114 116 4
atunci pe ecran se afişează 4 (cele patru numere subliniate reprezintă ”poli“ ai şirului)
 b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). */
void solutia4() {

	afisarea();

}