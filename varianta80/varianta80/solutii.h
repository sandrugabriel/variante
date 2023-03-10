#pragma once
#include "functii.h"


/*5. Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt cu cel puţin una şi cel mult 20
de litere ale alfabetului englez, construieşte şi afişează pe ecran cuvântul obţinut prin
interschimbarea primei consoane cu ultima vocală din cuvânt. În cazul în care cuvântul este
format numai din vocale sau numai din consoane, programul afişează pe ecran mesajul
IMPOSIBIL. Se consideră vocale literele a, e, i, o, u, A, E, I, O, U.
Exemplu: dacă se citeşte cuvântul Marmorat se va obţine şi afişa cuvântul aarmorMt*/
void solutia1() {
	char s[100] = "Marmorat";
	frecventa(s);

}

/*1. O clasă de 28 de elevi este la ora de educaţie fizică şi profesorul doreşte să formeze o
echipă de 4 elevi. Ordinea elevilor în cadrul echipei nu are importanţă. Algoritmul de
generare a tuturor posibilităţilor de a forma o asfel de echipă este similar cu algoritmul de
generare a tuturor: (4p.)
a. aranjamentelor de 28 de elemente luate
câte 4
b. combinărilor de 28 de elemente luate
câte 4
c. partiţiilor unei mulţimi cu28 de elemente d. elementelor produsului cartezian
AxAxAxA, A fiind o mulţime cu 28 de
elemente*/
void solutia2() {

	//b.combinărilor de 28 de elemente luate câte 4
}

/*
Scrieţi pe foaia de examen răspunsul pentru fiecare dintre cerinţele următoare.
2. Pentru definiţia alăturată a subprogramului sub,
ce valoare are sub(9)? Dar sub(132764)?
(6p.)
int sub(long n)
{if (n!=0)
 if(n%2!=0)
 return n%10+sub(n/10);
 else return sub(n/10);
 else return 0;
} */
int sub(long n)
{
	if (n != 0)
		if (n % 2 != 0)
			return n % 10 + sub(n / 10);
		else return sub(n / 10);
	else return 0;
}
void solutia3() {

	cout << sub(9) << sub(132764);

}

/*3. Fişierul text bac.in conţine cel mult 1000 de numere naturale cu cel mult patru cifre
fiecare, despărţite prin câte un spaţiu. Scrieţi programul C/C++ care citeşte numerele din
fişier şi afişează pe ecran, în ordine crescătoare, acele numere din fişier care au toate cifrele
egale. Dacă fişierul nu conţine niciun astfel de număr, se va afişa pe ecran mesajul NU
EXISTA.
Exemplu: dacă fişierul bac.in conţine numerele: 30 44 111 7 25 5 atunci pe ecran
se va afişa 5 7 44 111. */
void solutia4() {

	afisare();

}

/*4. a) Scrieţi definiţia completă a unui subprogram divi cu doi parametri, care primeşte prin
intermediul parametrului n un număr natural nenul cu cel mult 6 cifre şi returnează prin
intermediul parametrului d cel mai mic divizor propriu al lui n sau 0 in cazul în care n nu are
niciun divizor propriu. De exemplu, pentru n=15, d va avea valoarea 3. (4p.)
b) Scrieţi programul C/C++ care citeşte de la tastatură un număr natural nenul n
(1<n<1000000) şi afişează pe ecran cel mai mare numar natural mai mic decât n care îl
divide pe n. Se vor folosi apeluri utile ale subprogramului divi.
Exemple: dacă n=120, se afişează pe ecran 60, iar dacă n=43, se afişează 1. */
void solutia5() {

	int n=120, d;

	divi(n, d);

	if (d == 0)
		cout << 1;
	else
		cout << n / d;



}


















































