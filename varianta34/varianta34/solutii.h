#pragma once
#include "functii.h"


/*Ce se va afişa în urma executării secvenţei
alăturate, în care variabila c memorează un şir cu
cel mult 20 de caractere, iar i este o variabilă de
tip întreg? (6p.)
char c[21]="tamara",*p;
for(i=0;i<strlen(c);i=i+1)
{ p=strchr(c,'a');
 cout<<p-c; | printf(“%d”,p-c);} */
void solutia1() {
	char c[21] = "tamara", * p;
	for (int i = 0; i < strlen(c); i = i + 1)
	{
		p = strchr(c, 'a');
		cout << p - c;

	}

}

/*5. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (n≤20),
construieşte în memorie şi afişează pe ecran, matricea cu n linii şi n coloane, în care se vor
memora în ordinea crescătoare a valorii, pe linii şi coloane, primele n2
 numere naturale
nenule, pare, care nu sunt divizibile cu 3.
Fiecare linie a matricei se va afişa pe câte o linie a ecranului, cu
elementele de pe aceeaşi linie separate prin câte un spaţiu.
Exemplu: pentru n=4 se va construi şi afişa matricea alăturată.
(10p.)
2 4 8 10
14 16 20 22
26 28 32 34
38 40 44 46*/
void solutia2() {

	int n = 4;
	generare(n);
}

/*2. Se consideră definit subprogramul f .
Scrieţi două valori naturale, x1 şi x2 (x1≠x2, x1<x2 şi
x2<12) pentru care f(x1)=f(x2). (6p.)
int f(int i)
{
 if (i>12) return 1;
 else return 1+f(i+2);
} 
*/
void solutia3() {

	cout << f(1) << " " << f(2);

}

/*3. a) Subprogramul max primeşte ca parametru un tablou unidimensional x cu cel mult 100 de
elemente numere întregi, care sunt, în ordine, termenii unei progresii aritmetice şi un număr
natural n, care reprezintă dimensiunea tabloului. Scrieţi definiţia completă a subprogramului
max care returnează cel mai mare termen al progresiei aritmetice. Alegeţi un algoritm de
rezolvare eficient din punct de vedere al timpului de executare. (6p.)
b) Explicaţi în limbaj natural metoda utilizată justificând eficienţa acesteia. (4p.)
c) Pe prima linie a fişierului numere.txt se află un număr natural n (n≤100), iar pe
următoarele n linii, câte n numere întregi cu cel mult 4 cifre fiecare. Scrieţi programul C/C++
care citeşte din fişier datele existente, determină liniile din fişier pe care s-au memorat în
ordine termenii unei progresii aritmetice şi afişează pe ecran, folosind apeluri ale
subprogramului max cel mai mare număr (diferit de cel situat pe prima linie) din fişier, care în
plus este termenul unei progresii aritmetice. (10p.)
Exemplu: dacă fişierul numere.txt are conţinutul
5
5 7 3 1 9
-9 -7 -5 -3 -1
2 5 8 14 11
50 40 30 20 10
18 17 16 15 14
alăturat, se va afişa 50, deoarece progresiile aritmetice
sunt:
(-9 -7 -5 -3 -1),
(50 40 30 20 10) şi
(18 17 16 15 14) */
void solutia4() {

	afisarea();
}
































