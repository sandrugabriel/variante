#pragma once
#include "functii.h"
#include <string.h>
#include "backing.h"

/*Fie s o variabilă ce memorează un şir de caractere, format doar din litere ale alfabetului
englez, şi i o variabilă de tip int. Scrieţi instrucţiunile ce pot înlocui punctele de suspensie
din secvenţa de program alăturată astfel încât
executarea ei să determine eliminarea tuturor
literelor mici din şirul s şi apoi afişarea şirului
obţinut. (6p.)
 i=0;
while (i<strlen(s))
 ...............
 cout<<s;*/
void solutia1() {
	char s[100] = "AeraD";
	int i = 0;
	while (i < strlen(s)) {

		if (!islower(s[i])) {
			
		cout << s[i];
		}
		i++;
	}
	


}

/*
Scrieţi un program C / C++ care citeşte de la tastatură un număr natural n(2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează :
-elementele aflate pe diagonala secundară a matricei vor primi valoarea 0
- elementele de pe prima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n
- elementele de pe a doua linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea n - 1
...
- elementele de pe ultima linie, cu excepţia celui aflat pe diagonala secundară vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii(ca
	în exemplu).
	Exemplu: pentru n = 4 se va afişa matricea alăturată. (10p.)
	4 4 4 0
	3 3 0 3
	2 0 2 2
	0 1 1 1
	*/
void solutia2() {
	int n = 4;
	genereare(n);

}

/*Utilizând metoda backtracking se generează în ordine lexicografică cuvintele de câte patru
litere din mulţimea A={a,b,c,d,e}, cuvinte care nu conţin două vocale alăturate. Primele
opt cuvinte generate sunt, în ordine: abab, abac, abad, abba, abbb, abbc, abbd, abbe.
Care este antepenultimul cuvânt generat? (4p.)
a. edde b. eddb c. edeb d. edcb*/
void solutia3() {

	pb4();

}

/*Pentru definiţia alăturată a subprogramului f,
ce se afişează ca urmare a apelului
f(15, 2); ? (6p.)
void f(int n, int x)
{
	if (x > n)
		cout << 0; | printf(” % d”, 0);
	else
		if (x % 4 <= 1) f(n, x + 1);
		else
		{
			f(n, x + 3);
			cout << 1; | printf(” % d”, 1);
		}
}
*/
void solutia4() {

	f(15, 2);
	//01111
}

/*Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel mult
100 de numere naturale, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++
care citeşte numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu,
în ordine descrescătoare, toate numerele din fişier care au cel mult 2 cifre. Dacă fişierul nu
conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA*/
void solutia5() {

	afisarecorect();
}

/*Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre,
fiecare cifră fiind nenulă, şi care determină şi afişează pe ecran, folosind apeluri utile ale
subprogramului cif, cel mai mic număr palindrom ce poate fi obţinut prin rearanjarea
tuturor cifrelor numărului n. Dacă nu se poate obţine un palindrom din toate cifrele numărului
n, programul va afişa pe ecran numărul 0. Un număr natural este palindrom dacă este egal
cu numărul obţinut prin scrierea cifrelor sale în ordine inversă.
Exemplu: dacă n=21523531 atunci se va afişa pe ecran numărul 12355321, iar dacă
n=12272351 atunci se va afişa pe ecran numărul 0. */
void solutia6() {
	int n = 21523531;
	ordineinversa(n);

}

