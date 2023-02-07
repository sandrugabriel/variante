#pragma once
#include "functii.h"
#include "backing.h"

/*1. Fie declarările alăturate. Dacă variabila x
reţine informaţii despre un elev, precizaţi
care este varianta corectă ce afişează prima
literă din numele acestuia? (4p.)
struct elev{
 char nume[30];
 float nota;};
elev x;
a. cout<<nume; | printf(“%c“,nume);
b. cout<<x; | printf(“%c“,x);
c. cout<<x.nume; | printf(“%c“,x.nume);
d. cout<<x.nume[0]; | printf(“%c“,x.nume[0]); 
*/
struct elev {
	char nume[30];
	float nota;
};
void solutia1() {

	//cout << x.nume[0];

}

/*4. Un şir cu maximum 255 de caractere conţine cuvinte separate prin unul sau mai multe spaţii.
Cuvintele sunt formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++
care citeşte un astfel de şir şi îl afişează modificat, prima şi ultima literă a fiecărui cuvânt fiind
afişată ca literă mare.
Exemplu: pentru şirul: maine este proba la informatica se va afişa:
MainE EstE ProbA LA InformaticA */
void solutia2() {
	char a[100] = "maine este proba la informatica";
	afisare(a);

}

/*. Se utilizează un algoritm pentru a genera în ordine lexicografică inversă toate permutările
mulţimii {1,2,3,4,5}. Primele patru permutări generate sunt: 54321, 54312, 54231,
54213. A cincea permutare este: (4p.)
a. 53421 b. 54321 c. 54132 d. 54123 */
void solutia3() {
	back(0);
}

/*2. Considerăm subprogramul f definit alăturat.
Ce valoare are f(7,11)? Dar f(11,7)?
(6p.)
int f(int x,int y)
{
 if(x<=y) return x-y;
 return f(y-x,x-1)+3;
} 
*/
void solutia4() {

	cout << f(7, 11) << "   " << f(11, 7);

}

/* Scrieţi un program C/C++ care citeşte numerele naturale nenule n şi k (k≤n≤100) şi un
tablou unidimensional cu n elemente numere întregi, fiecare având cel mult 4 cifre.
Programul modifică tabloul, permutând circular, cu k poziţii spre stânga, elementele
acestuia şi afişează pe ecran, separate prin câte un spaţiu, elementele tabloului obţinut.
Exemplu: dacă n=4, k=3 şi tabloul v=(1,2,3,4), atunci se vor afişa în ordine
elementele: 4 1 2 3.*/
void solutia5() {
	int n = 4, k = 3, v[100] = { 1,2,3,4 };
	permutare(n, k, v);

}

/*a) Scrieţi doar antetul subprogramului nrdiv, care primeşte prin intermediul parametrului x
un număr natural nenul cu cel mult 4 cifre, şi returnează numărul de divizori primi ai lui x.
(4p.)
b) Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a
doua linie a fişierului se află un şir format din n numere naturale nenule, despărţite prin
câte un spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++
care citeşte numerele din fişier şi care afişează pe ecran, folosind apeluri utile ale
subprogramului nrdiv, prima şi ultima valoare din şirul celor n numere citite, care au un
număr par de divizori primi. Numerele afişate vor fi separate printr-un spaţiu.
4.
Exemplu: dacă fişierul bac.in are conţinutul alăturat
7
30 105 20 140 7 10 5 
, pe
ecran se va afişa: 20 10 (6p.)
*/
void solutia6() {

	afisarea();

}

















