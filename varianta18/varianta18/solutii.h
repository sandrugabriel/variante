#pragma once
#include "backing.h"
#include "functii.h"


/*În secvenţa de program alăturată, variabila a
memorează un şir cu cel mult 100 de caractere,
iar variabila i este de tip întreg. Completaţi
punctele de suspensie din secvenţă astfel încât,
în urma executării secvenţei, aceasta să afişeze
şirul de caractere *nf*rm*t*c*. (6p.)
strcpy(a,”informatica”);
for(i=0;i<strlen(a);i++)
 if(...)
 cout<<...; | printf(...);
 else
 cout<<...; | printf(...);*/
void solutia1() {

	int i;
	
	char voc[] = "aeiou", a[100];

	//strcpy(a, "informatica");

	for (int i = 0; i < strlen(a); i++)

		if (strchr(voc, a[i]) == "1")

			cout << '*';

		else

			cout << a[i];

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<20),
construieşte în memorie şi afişează pe ecran o matrice cu n linii şi n coloane, numerotate
de la 1 la n în care fiecare element din matrice aflat pe o linie impară va fi egal cu numărul
liniei pe care se află şi fiecare element aflat pe o linie pară va fi egal cu numărul coloanei pe
care se află.
5.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
1 1 1 1 1
1 2 3 4 5
3 3 3 3 3
1 2 3 4 5
5 5 5 5 5 */
void solutia2() {
	int n = 5;
	generare(n);

}

/*1. Funcţia f are definiţia alăturată. Ce se
va afişa în urma apelului
f(12345,0);? (4p.)
void f(long n, int i)
 {if (i<n%10)
 {cout<<n%10; | printf(“%d”,n%10);
 f(n/10,i+1);
 }
}
a. 54321 b. 543 c. 54 d. 5432 */
void solutia3() {

	f(12345, 0);

}

/*3. Scrieţi definiţia completă a subprogramului count care are doi parametri, a şi n, prin care
primeşte un tablou unidimensional cu maximum 100 de numere reale şi respectiv numărul
efectiv de elemente din tablou. Subprogramul returnează numărul de elemente din tabloul a
care sunt mai mari sau cel puţin egale cu media aritmetică a tuturor elementelor din tablou.
Exemplu: dacă tabloul are 6 elemente şi este de forma (12, 7.5, 6.5, 3, 8.5, 7.5),
subprogramul va returna valoarea 4 (deoarece media tuturor elementelor este 7.5 şi
numerele subliniate sunt cel puţin egale cu această medie).*/
void solutia4() {
	float a[100] = { 12, 7.5, 6.5, 3, 8.5, 7.5 }, n = 6;
	cout << count(a, n);

}

/*4. În fişierul numere.txt este memorat un şir de maximum 10000 numere naturale, distincte
două câte două, cu maximum 4 cifre fiecare, separate prin câte un spaţiu. Pentru un număr
k citit de la tastatură, se cere afişarea pe ecran a poziţiei pe care se va găsi acesta în şirul
de numere din fişier, dacă şirul ar fi ordonat descrescător, sau mesajul nu există, dacă
numărul k nu se află printre numerele din fişier. Alegeţi un algoritm eficient de rezolvare din
punct de vedere al memoriei utilizate şi al timpului de executare.
Exemplu: dacă fişierul numere.txt conţine numerele 26 2 5 30 13 45 62 7 79, iar
k are valoarea 13, se va afişa 6 deoarece 13 s-ar găsi pe poziţia a şasea în şirul
ordonat descrescător (79 62 45 30 26 13 7 5 2).
a) Descrieţi succint, în limbaj natural, strategia de rezolvare şi justificaţi eficienţa algoritmului
ales. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului ales. */
void solutia5() {
	int k = 13;
	afisare(k);

}




























































































































