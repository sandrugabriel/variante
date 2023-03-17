#pragma once
#include "functii.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤20),
elementele unei matrice cu n linii şi n coloane, numere întregi din intervalul [-100,100] şi
afişează pe ecran media aritmetică a elementelor strict pozitive ale matricei, care sunt
situate sub diagonala principală, ca în exemplu. Dacă nu există elemente strict pozitive
situate sub diagonala principală, programul va afişa mesajul „NU EXISTA”.
 5.
Exemplu: pentru n=4 şi matricea alăturată se afişează valoarea 2.5
(sunt luate în considerare doar elementele marcate). (10p.)
 -1 2 4 5
 0 6 3 1
 2 4 2 0
 3 -5 1 -3*/
void solutia1() {
	int a[100][100] = { { -1 ,2 ,4 ,5},{ 0 ,6, 3, 1},{ 2, 4, 2 ,0},{ 3, -5, 1, -3} };
	generare(4, a);

}

/*2. Se consideră subprogramul f, definit
alăturat. Ce se afişează la apelul f(4);?
(6p.)
void f(int n)
{
 if(n>0)
 {
 cout<<n; | printf(″%d″,n);
 f(n-1);
 cout<<n; | printf(″%d″,n);
 }
} */
void f(int n)
{
	if (n > 0)
	{
		cout << n;
		f(n - 1);
		cout << n;
	}
}
void solutia2() {

	f(4);
}

/*3. Scrieţi definiţia completă a subprogramului reduce, cu doi parametri, care primeşte prin
intermediul parametrilor a şi b două numere naturale formate din cel mult 9 cifre fiecare.
Funcţia returnează o valoare obţinută din numărul a prin însumarea acelor cifre diferite de 0
ale numărului a care NU divid numărul b. Dacă nu există asemenea cifre, se va returna
valoarea 0.
Exemplu: pentru a=184465709 şi b=18, cifrele corespunzătoare cerinţei sunt 8, 4, 4, 5 şi
7, deci valoarea returnată va fi 28 (28=8+4+4+5+7). Dacă a=2402804 şi b=8000,
valoarea returnată va fi 0.*/
void solutia3() {

	cout << reduce(184465709, 18);

}
//6:35 11
/*4. Fişierul text bac.txt conţine un şir de cel mult 2009 numere naturale, cu cel mult nouă
cifre fiecare, pe mai multe rânduri, numerele de pe acelaşi rând fiind separate prin câte un
spaţiu.
a) Scrieţi un program C/C++ care afişează pe ecran cel mai mic număr din fişier pentru care
suma cifrelor pare este egală cu suma cifrelor impare, precum şi numărul de apariţii în fişier
ale acestui număr, folosind o metodă eficientă din punctul de vedere al timpului de
executare. Cele două valori vor fi afişate pe o linie a ecranului, separate printr-un spaţiu.
Exemplu: dacă în fişier avem numerele 22031 9021 22031 1021 2011 10012 1021
457008 99882 atunci pe ecran se vor afişa numerele: 1021 2. (6p.)
b) Descrieţi succint, în limbaj natural, algoritmul utilizat, justificând eficienţa acestuia. */
void solutia4() {

	afisarea();

}




