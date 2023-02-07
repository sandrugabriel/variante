#pragma once
#include "functii.h"
#include <string.h>

/*2. Considerăm că variabila s memorează şirul de caractere
examen. Care va fi valoarea lui s după executarea
instrucţiunilor scrise alăturat? (4p.)
s[0]= ‘E’;
s[strlen(s)-1]= ‘A’;
s[strlen(s)/2-1]= ‘N’;
s[strlen(s)/2]= ‘M’;
a. ExameN b. exAMen c. ExNMeA d. ExAMeN*/
void solutia1() {

	char s[100];

	s[0] = 'E';
	s[strlen(s) - 1] = 'A';
	s[strlen(s) / 2 - 1] = 'N';
	s[strlen(s) / 2] = 'N';

	cout <<s;
	//d.ExAMeN
}

/*. Se consideră o matrice pătratică cu n linii şi n coloane (1≤n≤30), ce
memorează numere întregi nenule de cel mult două cifre fiecare.
Scrieţi un program C/C++ care citeşte de la tastatură valoarea n şi
elementele matricei şi care afişează pe ecran, ultima cifră a produsului
acelor elemente de pe diagonala secundară ce au proprietatea că sunt
valori minime pe coloanele lor. Dacă nu există astfel de elemente în
matrice, se va afişa mesajul NU EXISTA.
Exemplu: pentru n=4 şi matricea alăturată 
3 4 90 10 
25 2 7 9 
18 3 10 4
3 7 20 3
se va afişa pe ecran
valoarea 1 (3*7=21). */
void solutia2() {

	afisare();

}

/* Pentru definiţia alăturată a subprogramului
sc, stabiliţi ce valoare are sc(10). Dar
sc(901324)? (6p.)
int sc(long x)
{
 if(x<10) return x;
 return sc(x/10)+x%10;
}*/
void solutia3() {

	cout << sc(901324);

}

/*3. Scrieţi în limbajul C/C++ definiţia completă a subprogramul Del care are doi parametri: x,
un număr întreg de cel mult 9 cifre, şi y, un număr natural nenul de o cifră. Subprogramul
determină eliminarea tuturor cifrelor lui x mai mari strict decât y şi furnizează numărul
obţinut tot prin intermediul parametrului x. Dacă toate cifrele lui x sunt mai mari strict decât
y, atunci x va primi valoarea -1.
Exemplu: dacă x=37659 şi y=6, după apel x=365, iar y=6. */
void solutia4() {
	int x = 37659, y = 6;
	del(x, y);
	cout << x;
}

/*4. Se consideră subprogramul inter, cu doi parametri: x şi y (numere întregi formate din cel
mult patru cifre fiecare); subprogramul interschimbă valorile a două variabile transmise prin
intermediul parametrilor x şi y.
a) Scrieţi în limbajul C/C++ definiţia completă a subprogramului inter. (4p.)
b) Pe prima linie a fişierului bac.in se află un număr natural nenul n≤1000, iar pe a doua
linie a fişierului se află un şir de n numere naturale nenule, despărţite prin câte un spaţiu,
fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++ care afişează pe
ecran, în ordine crescătoare, numerele aflate pe a doua linie a fişierului. Numerele vor fi
afişate pe o singură linie, iar între două numere se va lăsa un spaţiu. Se vor folosi apeluri
utile ale subprogramului inter. */
void solutia5() {

	afisarea();

}


























