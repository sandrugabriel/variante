#pragma once
#include "functii.h"



/*5. Scrieţi programul C/C++ care citeşte de la tastatură un text cu cel mult 100 de caractere
(doar litere ale alfabetului englez şi spaţii), construieşte în memorie şi apoi afişează pe
ecran şirul de caractere obţinut din şirul iniţial, în care se inserează după fiecare vocală
caracterul *. Se consideră vocale literele a, e, i, o, u, A, E, I, O, U. Dacă textul citit nu
conţine vocale, se va afişa mesajul FARA VOCALE.
Exemplu: dacă se citeşte de la tastatură textul Examenul de bacalaureat se va obţine
şi afişa: E*xa*me*nu*l de* ba*ca*la*u*re*a*t. */
void solutia1() {
	char s[100] = "Examenul de bacalaureat";
	inserare(s);

}

/*1. Problema generării tuturor codurilor formate din exact 4 cifre nenule, cu toate cifrele
distincte două câte două, este similară cu generarea tuturor: (4p.)
a. aranjamentelor de 9 elemente luate câte
4
b. permutărilor elementelor unei mulţimi cu
4 elemente
c. elementelor produsului cartezian
AxAxAxA */
void solutia2() {

	//b. permutărilor elementelor unei mulţimi cu 4 elemente

}

/*2. Pentru definiţia alăturată a subprogramului f, scrieţi
ce valoare are f(8). Dar f(1209986)?
(6p.)
int f(long x)
{ int y,z;
 if (x==0) return x;
 else {y=x%10;
 z=f(x/10);
 if(y>z) return y;
 else return z;
 }
} */
int f(long x)
{
	int y, z;
	if (x == 0) return x;
	else {
		y = x % 10;
		z = f(x / 10);
		if (y > z) return y;
		else return z;
	}
}
void solutia3() {

	cout << f(8) << f(1209986);

}

/*3. Scrieţi definiţia completă a subprogram max, cu trei parametri, a, b, c, care primeşte prin
intermediul parametrilor a şi b două numere reale cu exact două cifre la partea întreagă şi
exact două zecimale fiecare. Subprogramul determină cel mai mare număr real dintre
următoarele patru valori: a, b şi numerele reale obţinute din a şi b prin interschimbarea
părţii întregi cu partea fracţionară în cadrul aceluiaşi număr. Această valoare este furnizată
prin intermediul parametrului real c.
Exemplu: dacă a=33.17 şi b=15.40, c va avea valoarea 40.15 (cea mai mare valoare
dintre 33.17, 15.40, 17.33 şi 40.15) */
void solutia4() {
	float a = 33.17, b = 15.40, c;
	max(a, b, c);
	cout << c;
}

/*4. Se citeşte de pe prima linie a fişierului numere.in un număr natural n (0<n<10000) şi, de
pe a doua linie a fişierului, n numere naturale din intervalul [1,100] şi se cere să se
afişeze pe ecran, despărţite prin câte un spaţiu, numărul sau numerele întregi din intervalul
[1,100] care nu apar printre numerele citite. Dacă pe a doua linie a fişierului apar toate
numerele din intervalul precizat, se va afişa mesajul NU LIPSESTE NICIUN NUMAR.
Alegeţi un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
Exemplu: pentru fişierul numere.in cu următorul conţinut
12
4 2 3 1 6 5 7 8 9 11 10 100
se vor afişa valorile 12 13 … 99. */
void solutia5() {

	afisarea();

}







