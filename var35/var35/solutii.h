#pragma once
#include "functii.h"



/*Ce se va afişa în urma executării secvenţei
alăturate, în care variabila c memorează un şir cu
cel mult 20 de caractere, iar variabila i este de tip
întreg? (6p.)
char c[]="tamara";
for(i=0;i<3;i++)
 c[i]=c[i+1];
cout<<c; | printf("%s",c)*/
void solutia1() {

	char c[] = "tamara";
	for (int i = 0; i < 3; i++)
		c[i] = c[i + 1];
	cout << c;

}

/*5. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (n≤50) şi
construieşte în memorie o matrice cu n linii şi n coloane, ale cărei elemente sunt
numere întregi citite de la tastatură. Pentru fiecare coloană a matricei, în ordine, programul
afişează pe ecran cel mai mic număr de pe respectiva coloană. Numerele afişate vor fi
separate prin câte un spaţiu. (10p.)
Exemplu: pentru n=4 şi matricea alăturată
122 103 5 10
 -7 18 -10 2
107 999 59 4
 1 200 100 7
, se vor afişa
pe ecran valorile: -7 18 -10 2. */
void solutia2() {
	int n = 4;
	generare(n);
}

/*1. Pentru generarea tuturor mulţimilor de câte 5 cifre, având la dispoziţie cifrele de la 1 la 9,
se poate utilza un algoritm echivalent cu algoritmul de generare a: (4p.)
a. permutărilor de 5 elemente b. submulţimilor mulţimii
{1,2,3,4,5,6,7,8,9}
c. combinărilor de 9 elemente luate câte 5 d. aranjamentelor de 9 elemente luate câte
5*/
void solutia3() {

	//d. aranjamentelor de 9 elemente luate câte 5

}

/*2. Subprogramul f este definit alăturat. Ce
se va afişa în urma executării secvenţei
de mai jos, în care variabilele a şi b sunt
de tip întreg?
a=3; b=9; f(b,a);f(b,b); (6p.)
void f(int &a,int b)
{
 a=a-5;b=a-2;
 cout<<a<<b; | printf("%d%d",a,b);
} */
void solutia4() {
	int a = 3, b = 9; 
	
	f(b, a); 
	f(b, b);


}

/*3. Fişierul text numere.in conţine pe prima linie un număr natural n (0<n<1000), iar pe a
doua linie n numere naturale cu cel mult 9 cifre fiecare, despărţite prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte toate numerele din fişier şi afişează pe ecran,
separate prin câte un spaţiu, numerele de pe a doua linie a fişierului, care încep şi se
termină cu aceeaşi cifră. (10p.)
Exemplu: dacă fişierul numere.in are
conţinutul alăturat
9
55 107 3 101 92 7 208 2782
80
, se numerele ce se vor afişa
sunt: 55 3 101 7 2782 
*/
void solutia5() {

	afisarea();

}

/*a) Scrieţi definiţia completă a unui subprogram sum care primeşte prin parametrul x un
număr natural de cel mult 4 cifre şi returnează suma divizorilor numărului x, diferiţi de 1 şi
de el însuşi.
Exemplu: dacă x=10 se va returna valoarea 7 (7=2+5). (4p.)
b) Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<100), apoi
n numere naturale (cu cel mult 4 cifre fiecare). Programul determină, folosind apeluri utile
ale subprogramului sum, pentru fiecare număr natural citit, suma divizorilor săi proprii şi
afişează pe ecran sumele determinate, în ordinea crescătoare a valorilor lor, separate prin
câte un spaţiu. (6p.)
Exemplu: dacă n=5 şi numerele citite sunt 10 2 33 6 11
valorile afişate pe ecran vor fi: 0 0 5 7 14
deoarece suma divizorilor lui 10 este 7, suma divizorilor lui 2 este 0, suma divizorilor
lui 33 este 14, suma divizorilor lui 6 este 5, suma divizorilor lui 11 este 0.*/
void solutia6() {
	int n = 5, a[100] = { 10,2,33,6,11 };
	afisSumDiv(n, a);

}






















