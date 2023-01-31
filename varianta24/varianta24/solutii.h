﻿#pragma once
#include "functii.h"
#include "backing.h"

/*5. Scrieţi un program C/C++ care citeşte de la tastatură două şiruri de caractere formate din
maximum 100 litere mici ale alfabetului englez şi afişează pe ecran cel mai lung sufix
comun al celor două şiruri de caractere. Dacă cele două şiruri nu au niciun sufix comun,
atunci programul va afişa pe ecran mesajul NU EXISTĂ.
Exemplu: pentru şirurile marina şi elena se va afişa na */
void solutia1() {
	char a[100] = "marina", b[100] = "elena";
	sufix(a, b);
}

/*1. Generând şirurile de maximum 3 caractere distincte din mulţimea {A,B,C,D,E}, ordonate
lexicografic, obţinem succesiv: A, AB, ABC, ABD, ... . Ce şir va fi generat imediat după
BAE? (4p.)
a. BCA b. CAB
c. BC d. BEA*/
void solutia2() {

	b();

}

/*2. Funcţia f are definiţia alăturată.
a) Ce valoarea are f(17)? (3p.)
b) Ce valoare are f(22)? (3p.)
int f(int n)
{if (n<=9) return 0;
 if (n%4==0) return 0;
 return 1+f(n-3);
}*/
void solutia3() {

	cout << f(17) << endl;
	cout << f(22);

}

/* 3. a) Scrieţi definiţia completă a subprogramului p care primeşte prin intermediul parametrului
n un număr natural nenul (n≤100), iar prin intermediul parametrului x un tablou
unidimensional cu n componente întregi, de maximum patru cifre fiecare. Subprogramul
furnizează prin intermediul parametrului mini valoarea minimă din tabloul x, prin
intermediul parametrului maxi valoarea maximă din x, iar prin intermediul parametrului sum
suma elementelor din tabloul x. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n,
(3≤n≤100), apoi cele n elemente distincte ale unui tablou unidimensional x. Fiecare dintre
aceste elemente este un număr natural având cel mult patru cifre. Folosind apeluri utile ale
subprogramului p, programul calculează şi afişează pe ecran media aritmetică a
elementelor care ar rămâne în tabloul x dacă s-ar elimina valoarea minimă şi valoarea
maximă din tablou. Valoarea afişată va avea cel mult 3 cifre după virgulă.
Exemplu: dacă se citesc pentru n valoarea 5, iar pentru tabloul x valorile (1,9,4,8,5),
programul va afişa una dintre valorile 5.667 sau 5.666.*/
void solutia4() {
	int n = 5, x[100] = { 1,9,4,8,5 };
	afisare(n, x);


}

/*Fişierul text bac.txt conţine pe prima linie numărul natural n, 1≤n≤30000, pe următoarele
n linii un şir de n numere întregi, ordonate crescător, iar pe ultima linie două numere întregi
a şi b (a≤b) separate de un spaţiu. Fiecare dintre cele n numere, precum şi valorile a şi b,
au cel mult patru cifre.
a) Scrieţi un program C/C++, eficient din punct de vedere al timpului de executare, care
afişează pe ecran cel mai mic număr întreg din intervalul închis [a,b] care se găseşte în
şirul dat. Dacă nu există un astfel de număr, programul afişează textul NU.
 4.
Exemplu: dacă fişierul bac.txt are conţinutul alăturat
4
-2
7
11
35
8 15
, programul afişează
valoarea 11 (6p.)
b) Descrieţi în limbaj natural metoda utilizată şi explicaţi în ce constă eficienţa
ei. */
void solutia5() {

	afisarea();
}































































