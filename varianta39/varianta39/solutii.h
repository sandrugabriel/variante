#pragma once
#include "functii.h"


/* Considerăm declaraţiile:
int i,j,a[10][10];
Ce se va afişa după
executarea secvenţei de
instrucţiuni alăturate?
(6p.)
for(i=1;i<=3;i++)
 for(j=1;j<=3;j++) a[i][j]=i+j;
for(i=1;i<=3;i++){
 for(j=1;j<=3;j++)
 cout<<a[i][j]; | printf(“%d“,a[i][j]);
 cout<<endl; | printf(“\n“);
 } */
void solutia1() {
	int i, j, a[100][100];
	for (i = 1; i <= 3; i++)
		for (j = 1; j <= 3; j++) a[i][j] = i + j;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++)
			cout << a[i][j];
		cout << endl; 
	}
	/*
234
345
456*/
}

/*Un şir cu maximum 255 de caractere conţine cuvinte separate prin câte un spaţiu. Cuvintele
sunt formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care
citeşte de la tastatură un astfel de şir şi îl afişează pe ecran modificat, inversând prin
oglindire doar cuvintele care încep cu vocală, ca în exemplu. Se consideră ca fiind vocale
următoarele litere: a, e, i, o, u.
Exemplu: pentru şirul: maine este proba la informatica se va afişa:
maine etse proba la acitamrofni*/
void solutia2() {
	char s[100] = "maine este proba la informatica";
	afisare(s);


}

/*2. Pentru definiţia alăturată a subprogramului
f, ce valoare are f(3)? Dar f(8)? (6p.)
int f(int x)
{
 if(x<=4) return x*x-3;
 return f(x-3)+4;
}*/
void solutia3() {

	cout << f(3) << " " << f(8);

}

/*Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a
doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un
spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++ care
citeşte valorile din fişier şi care afişează pe ecran mesajul DA dacă toate elementele pare
din şir sunt în ordine crescătoare şi mesajul NU în caz contrar.
3.
Exemplu: dacă fişierul bac.in are conţinutul
alăturat
7
10 113 12 33 42 1354 421, 
pe ecran se va afişa: DA (10p.)
*/
void solutia4() {

	crescPare();

}

/*4. Se consideră subprogramul pr, care primeşte prin intermediul parametrului a un număr
natural nenul cu cel mult 9 cifre şi returnează 1 dacă numărul este prim şi 0 în caz contrar.
a) Scrieţi numai antetul subprogramului pr. (4p.)
b) Considerăm un număr natural nenul n>99 cu cel mult 9 cifre. Din n se obţine un şir de
valori prin eliminarea succesivă a ultimei cifre, apoi a ultimelor două cifre, apoi a ultimelor
trei cifre etc., până ce se obţine un număr de două cifre, ca în exemplu. Să se realizeze un
program C/C++ care citeşte de la tastatură numărul n şi care, folosind apeluri utile ale
subprogramul pr, afişează pe ecran, separate prin câte un spaţiu, doar valorile prime din
şirul numerelor obţinute din n, prin procedeul descris mai sus.
Exemplu: pentru n=193124 se obţine şirul de valori 19312,1931, 193, 19. din care se
vor afişa pe ecran doar valorile 1931 193 19 (nu neapărat în această ordine). */
void solutia5() {
	int n = 193124;
	afisare(n);

}


























































