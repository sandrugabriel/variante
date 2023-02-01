#pragma once
#include "functii.h"



/*1. Ştiind că în urma executării secvenţei
alăturate s-a afişat succesiunea de
caractere EXAMEN, care este şirul de
caractere memorat de variabila s? (6p.)
x=strlen(s);
for (i=0;i<x/2;i++)
 cout<<s[i]<<s[x-i-1];
 | printf(“%c%c”,s[i],s[x-i-1]);
a. ENXAME b. EAENMX c. NEEXMA d. NEMAXE */
void solutia1() {
	char s[100] = "EXAMEN";
	int x = strlen(s);
	for (int i = 0; i < x / 2; i++)
		cout << s[i] << s[x - i - 1];
	//a. ENXAME
}

/*Se consideră o matrice cu n linii şi m coloane (1≤n≤30, 1≤m≤30),
ce memorează numere întregi de cel mult 4 cifre fiecare. Scrieţi un
program C/C++ care citeşte de la tastatură valorile n, m şi
elementele matricei şi care afişează pe ecran, separate prin câte
un spaţiu, valorile minime de pe fiecare coloană, în ordine de la
ultima la prima coloană.
Exemplu: pentru n=4, m=4 şi matricea alăturată
3 4 90 10 
25 2 7 9
18 3 10 4
3 7 20 3
se vor afişa pe
ecran valorile 3 7 2 3. */
void solutia2() {

	generare(4, 4);
}

/*1. Subprogramul scif returnează suma cifrelor unui număr natural transmis ca parametru.
Care este valoarea expresiei scif(scif(518)+scif(518))? (4p.)
a. 14 b. 10 c. 28 d. 1*/
void solutia3() {

	cout << scif(scif(518) + scif(518));
	//10
}

/*Subprogramul cifra primeşte prin intermediul parametrului a un număr natural cu cel mult
4 cifre şi returnează ultima cifră pară a sa. Dacă numărul nu conţine cifre pare,
subprogramul returnează valoarea -1. De exemplu, dacă a=8345, subprogramul va
returna 4.
a) Să se scrie definiţia completă a subprogramului cifra. (10p.)
b) Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤15000), iar pe
a doua linie a fişierului se află un şir de n numere naturale, despărţite prin câte un spaţiu,
fiecare număr fiind format din cel mult 4 cifre.
Scrieţi un program C/C++ care citeşte numerele din fişier şi afişează pe ecran, folosind
apeluri utile ale subprogramului cifra, cel mai mare număr care se poate forma cu
ultimele cifre pare ale fiecărui element, dacă acestea există. Alegeţi o metodă de rezolvare
eficientă ca timp de executare. Dacă toate numerele de pe a doua linie a fişierului au
numai cifre impare, programul va afişa mesajul NU EXISTA.
Exemplu: dacă fişierul bac.in are conţinutul
alăturat
7
369 113 2 0 33 1354 42, 
pe ecran se va afişa: 64220 (6p.)

 c) Descrieţi succint în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 - 4 rânduri). */
void solutia4() {

	afisarea();
}























