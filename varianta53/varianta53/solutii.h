#pragma once
#include "functii.h"




/*1. În secvenţa alăturată, variabila x
memorează un şir cu cel mult 100 de
caractere, iar variabila i este de tip întreg.
Care este numărul maxim de caractere pe
care îl poate avea şirul x astfel încât
secvenţa alăturată să afişeze exact 3
caractere ale acestuia? (4p.)
for(i=0;i<=strlen(x)-1;i=i+3)
 cout<<x[i]; | printf(“%c”,x[i]);
a. 7 b. 3 c. 9 d. 8*/
void solutia1() {
	char x[13] = "asrdarder";
	for (int i = 0; i <= strlen(x) - 1; i = i + 3)
		cout << x[i];

}

/*În secvenţa de program următoare, variabila s memorează un şir de caractere, iar variabila
i este de tip întreg. Ce valoare se va afişa în urma executării secvenţei?
strcpy(s,”bacalaureat”);
i=strchr(s,’a’)-s;
cout<<i+1;*/
void solutia2() {
	char s[100] = "bacalaureat";
	//strcpy(s, ”bacalaureat”);
	//char i = strchr(s, 'a') - s;
	//cout << i + 1;

}

/*1. Subprogramul f realizează interschimbarea valorilor a două variabile întregi transmise prin
intermediul parametrilor x şi y. Care este antetul corect al subprogramului f? (4p.)
a. void f(int &x, int &y) b. int f(int x,int y)
c. void f(int x, int &y) d. void f(int &x, int y)*/
void solutia3() {
	//a. void f(int& x, int& y)
}

/*
2. Se consideră subprogramul f, definit
alăturat. Pentru ce valori ale lui n
aparţinând intervalului [10, 20] se
obţine la apel f(n)= 0? ( 6p.)
int f(unsigned int n)
{
 if (n==0) return 0;
 else if(n%2==0)
 return n%10+f(n/10);
 else return f(n/10);
} */
int f(unsigned int n)
{
	if (n == 0) return 0;
	else if (n % 2 == 0)
		return n % 10 + f(n / 10);
	else return f(n / 10);
}
void solutia4() {

	cout << f(0);
}

/*3. Se consideră subprogramul cmmdc, care primeşte prin intermediul a doi parametri, a şi b,
două numere naturale nenule, cu maximum 8 cifre fiecare, şi returnează cel mai mare
divizor comun al valorilor parametrilor a şi b.
a) Scrieţi definiţia completă a subprogramului cmmdc. (4p.)
b) Scrieţi un program Pascal care citeşte de la tastatură un număr natural n (n<300), şi,
cu ajutorul subprogramului cmmdc, determină numărul perechilor de valori naturale (a,b),
1<a<b<n, cu proprietatea că a şi b nu au niciun divizor comun în afară de 1. Numărul
obţinut se va afişa pe ecran.
Exemplu: dacă se citeşte n=6, atunci se va afişa 6 (deoarece perechile (2,3), (2,5),
(3,4), (3,5), (4,5), (5,6) satisfac condiţiile din enunţ).*/
void solutia5() {
	afisare(6);
}

/*Fişierul text bac.txt are două linii: pe prima linie conţine un număr natural nenul n
(n<=100), iar pe linia a doua un şir format din n numere naturale de cel mult 4 cifre fiecare,
despărţite prin spaţii. Scrieţi un program C/C++ care adaugă în fişier toate permutările
circulare distincte ale şirului de pe linia a doua a fişierului. Astfel, se vor adăuga la sfârşitul
fişierului încă n-1 linii, fiecare linie conţinând permutarea circulară cu o poziţie către
stânga, a elementelor şirului aflat pe linia precedentă din fişier. Elementele fiecărei
permutari vor fi separate prin câte un spaţiu.
Exemplu: dacă fişierul bac.txt conţine liniile:
4
10 20 30 49
atunci, după rularea programului, fişierul va avea conţinutul
reprezentat alăturat. (10p.)
4
10 20 30 49
20 30 49 10
30 49 10 20
49 10 20 30*/
void solutia6() {

	afisarea();
}




































