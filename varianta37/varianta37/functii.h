#pragma once
#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

/*4. Un şir cu maximum 255 de caractere conţine cuvinte separate prin unul sau mai multe spaţii.
Cuvintele sunt formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++
care citeşte un astfel de şir şi îl afişează modificat, prima şi ultima literă a fiecărui cuvânt fiind
afişată ca literă mare.
Exemplu: pentru şirul: maine este proba la informatica se va afişa:
MainE EstE ProbA LA InformaticA */
void afisare(char a[]) {

    a[0] = a[0] - 32;
    a[strlen(a) - 1] -= 32;
    for (int i = 1; i <= strlen(a) - 2; i++)
        if (a[i] != ' ' && (a[i - 1] == ' ' || a[i + 1] == ' '))
            a[i] -= 32;
    cout << a;

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
int f(int x, int y)
{
    if (x <= y) return x - y;
    return f(y - x, x - 1) + 3;
}

/* Scrieţi un program C/C++ care citeşte numerele naturale nenule n şi k (k≤n≤100) şi un
tablou unidimensional cu n elemente numere întregi, fiecare având cel mult 4 cifre.
Programul modifică tabloul, permutând circular, cu k poziţii spre stânga, elementele
acestuia şi afişează pe ecran, separate prin câte un spaţiu, elementele tabloului obţinut.
Exemplu: dacă n=4, k=3 şi tabloul v=(1,2,3,4), atunci se vor afişa în ordine
elementele: 4 1 2 3.*/
void permutare(int n, int k, int v[]) {

    while (k > 0) {

        int primul = v[0];
        for (int i = 0; i < n - 1; i++)
            v[i] = v[i + 1];
        v[n - 1] = primul;

        k--;
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";


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
int nrdiv(int x) {

	int nr = 0, d;
	for (d = 2; d <= x; d++)
		if (x % d == 0) {

			nr++;
			while (x % d == 0)
				x = x / d;

		}

	return nr;


}
void afisarea() {


	int n, i, a, valoare = -1;

	ifstream f("bac.in");

	f >> n;
	for (i = 0; i < n; i++) {

		f >> a;
		if (nrdiv(a) % 2 == 0) {
			if (valoare == -1)
				cout << a << " ";
			valoare = a;
		}
	}

	cout << valoare;


}

