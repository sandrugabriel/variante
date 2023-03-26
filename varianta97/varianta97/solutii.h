#pragma once
#include "functii.h"
#include "bactracking.h"


/*5. Se consideră un tablou bidimensional cu n linii şi m coloane (1≤n≤24, 1≤m≤24) ce
memorează numere întregi cu cel mult două cifre fiecare. Scrieţi un program în limbajul
C/C++ care citeşte de la tastatură valorile n, m şi elementele tabloului, şi care inversează
ordinea elementelor în cadrul fiecărei coloane, ca în exemplu. Programul va afişa pe ecran,
pe n linii, matricea obţinută după inversare, elementele fiecărei linii fiind separate prin câte
un spaţiu. (10p.)
Exemplu: pentru n=4, m=3 şi matricea:
1 7 3
4 5 6
7 8 9
3 4 5
 Pe ecran se va afişa:
 3 4 5
 7 8 9
 4 5 6
 1 7 3 */
void solutia1() {
	int n = 4, m = 3, a[100][100] = { {1,7,3},{4,5,6},{7,8,9},{3,4,5} };
	generare(n, m, a);



}

/*1. Subprogramul recursiv alăturat este definit incomplet.
Care dintre următoarele expresii poate înlocui punctele
de suspensie astfel încât, în urma apelului,
subprogramul f să returneze suma primelor două cifre
ale numărului primit prin intermediul parametrului x?
Exemplu: în urma apelului f(2318) valoarea returnată
este 5. (4p.)
int f(int x){
 if (...)
 return x%10 + x/10;
 else
 return f(x/10);
}
a. x<=100 b. x<=99 c. x==99 d. x!=0 
*/
int f(int x) {
	if (x<=99)
		return x % 10 + x / 10;
	else
		return f(x / 10);
}
void solutia2() {

	cout << f(2318);
	//b.x<=99

}

/*2. Se generează, utilizând metoda bactracking, cuvintele cu exact 3 litere din mulţimea
{a,x,c,f,g}. Dacă primele patru cuvinte generate sunt, în ordine, aaa, aax, aac, aaf,
scrieţi ultimele trei cuvinte care încep cu litera a, în ordinea în care vor fi generate.*/
void solutia3() {

	back(0);
	/*agc
     agf
     agg*/

}

/*3. Tabloul unidimensional V, declarat global, memorează exact 50 de numere întregi:
V1, V2,...,V50.
Subprogramul Calcul primeşte prin intermediul parametrului k un număr natural nenul
(k≤50) şi furnizează prin intermediul parametrului S suma tuturor elementelor pozitive, din
tabloul V, cu indici mai mari sau egali cu k sau 0 dacă toate elementele menţionate sunt
negative.
a) Scrieţi doar antetul subprogramului Calcul. (2p.)
b) Scrieţi un program în limbajul C/C++ care citeşte de la tastatură cele 50 de componente
întregi ale tabloului V şi două numere naturale nenule x şi y (x<y≤50). Programul afişează
suma elementelor pozitive din tablou, cu indici cuprinşi între x şi y inclusiv, sau 0 dacă toate
elementele menţionate sunt negative, folosind apeluri utile la subprogramul Calcul.*/
void solutia4() {
	int x, y;
	sumaInterval(x, y);

}























