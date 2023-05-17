#pragma once
#include "functii.h"


/*În secvenţa de instrucțiuni de mai jos, variabilele i şi j sunt de tip întreg. Fără a utiliza alte variabile,
scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării
secvenței obținute, să se afişeze numerele de mai jos, în această
ordine.
(6 puncte)
2 3 1 2 3 1
3 6 2 3 6 2
1 2 0 1 2 0
2 3 1 2 3 1
3 6 2 3 6 2
1 2 0 1 2 0*/
void solutia1() {

	generare();
}

/*
SUBIECTUL III
(30 de puncte)
1. Scrieți un program în limbaj pseudocod care citeşte de la tastatură două numere naturale nenule a și b, 
care au cel mult 9 cifre, determină şi afişează cel mai mic număr de permutări circulare la dreapta, cu 
câte o poziție, ale cifrelor lui a, astfel încât să se obțină numărul b. Dacă nu e posibil, se va afișa 
mesajul Imposibil.
Exemplu: Pentru a = 120362 şi b = 621203 se va afişa 2, iar pentru a = 732 şi b= 237 se va afişa Imposibil.
*/
void solutia2() {

	cout<<permutari(120362, 621203);

}

/*
Se citește un număr natural k (15k≤30), un tablou unidimensional v, având k numere naturale în ordine strict 
crescătoare şi un număr natural n (15n399999). Scrieți C/C++ care determină cel mai mic divizor prim al lui 
n şi îl caută în vectorul v. Dacă divizorul prim va fi găsit, programul va afişa indicele elementului din 
vector egal cu el. În caz contrar, divizorul prim va fi adăugat în v pe poziția corespunzătoare astfel încât
ordinea strict crescătoare să se păstreze şi se va afişa vectorul v, obţinut după inserare. În vectorul v, 
indicii elementelor se notează începând de la 1.
Exemplu: Dacă k=4, v = (2, 5, 11, 17), n=27 se va afişa v = (2,3,5,11,17), iar (10 puncte) dacă k = 4, v = (2, 5, 11, 17),
n=121, atunci se va afişa 3.
*/
void solutia3() {
	int k = 4, v[100] = { 2, 5, 11, 17 }, n = 27;
	afisare(k, v, n);
}

/*
3. Un număr este palindrom dacă citind cifrele numărului de la dreapta la stânga şi de la stânga la dreapta 
se obține același număr. De exemplu 12321, 2002 sunt palindroame, iar 12312 nu este palindrom.
Fişierul text bac.txt conține pe prima linie n, un număr natural nenul, mai mic decât 105, iar pe a doua
linie un șir de n numere din intervalul [1, 9], separate prin câte un spațiu. Se cere afişarea pe ecran 
a celui mai mare palindrom care se poate forma cu toate cifrele date. Dacă nu se poate construi un 
palindrom cu toate cifrele lui n, se va afişa -1. Proiectați un algoritm eficient din punct de 
vedere al memoriei utilizate şi al timpului de executare. Exemplu: Dacă fişierul bac.txt conține numerele:
10
2 3389 2 3 9 8 3 atunci pe ecran se afişează: 9833223389.*/
void solutia4() {

	afisarea();

}














