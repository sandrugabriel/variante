#pragma once
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

/*5. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (n≤50) şi
construieşte în memorie o matrice cu n linii şi n coloane, ale cărei elemente sunt
numere întregi citite de la tastatură. Pentru fiecare coloană a matricei, în ordine, programul
afişează pe ecran cel mai mic număr de pe respectiva coloană. Numerele afişate vor fi
separate prin câte un spaţiu. (10p.)
Exemplu: pentru n=4 şi matricea alăturată
122 103 5 10
 -7 18 -10 2
107 999 59 4
 1 200 100 7
, se vor afişa
pe ecran valorile: -7 18 -10 2. */
void generare(int n) {
    int a[100][100];
    ifstream f("matricea.txt");
    int min;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];
    for (int j = 1; j <= n; j++) {
        min = 1000;
        for (int i = 1; i <= n; i++)
            if (a[i][j] < min)
                min = a[i][j];
        cout << min << " ";
    }

}

/*2. Subprogramul f este definit alăturat. Ce
se va afişa în urma executării secvenţei
de mai jos, în care variabilele a şi b sunt
de tip întreg?
a=3; b=9; f(b,a);f(b,b); (6p.)
void f(int &a,int b)
{
 a=a-5;b=a-2;
 cout<<a<<b; | printf("%d%d",a,b);
} */
void f(int& a, int b)
{
    a = a - 5; b = a - 2;
    cout << a << b;
}

/*3. Fişierul text numere.in conţine pe prima linie un număr natural n (0<n<1000), iar pe a
doua linie n numere naturale cu cel mult 9 cifre fiecare, despărţite prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte toate numerele din fişier şi afişează pe ecran,
separate prin câte un spaţiu, numerele de pe a doua linie a fişierului, care încep şi se
termină cu aceeaşi cifră. (10p.)
Exemplu: dacă fişierul numere.in are
conţinutul alăturat
9
55 107 3 101 92 7 208 2782
80
, se numerele ce se vor afişa
sunt: 55 3 101 7 2782
*/
void afisarea() {

    ifstream f("numere.in");

        int n, a;
        f >> n;
        for (int i = 0; i < n; i++) {

            f >> a;
            int copie = a;
            while (a >= 10)
                a = a / 10;
            if (a == copie % 10)
                cout << copie << " ";

        }



}

/*a) Scrieţi definiţia completă a unui subprogram sum care primeşte prin parametrul x un
număr natural de cel mult 4 cifre şi returnează suma divizorilor numărului x, diferiţi de 1 şi
de el însuşi.
Exemplu: dacă x=10 se va returna valoarea 7 (7=2+5). (4p.)
b) Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (0<n<100), apoi
n numere naturale (cu cel mult 4 cifre fiecare). Programul determină, folosind apeluri utile
ale subprogramului sum, pentru fiecare număr natural citit, suma divizorilor săi proprii şi
afişează pe ecran sumele determinate, în ordinea crescătoare a valorilor lor, separate prin
câte un spaţiu. (6p.)
Exemplu: dacă n=5 şi numerele citite sunt 10 2 33 6 11
valorile afişate pe ecran vor fi: 0 0 5 7 14
deoarece suma divizorilor lui 10 este 7, suma divizorilor lui 2 este 0, suma divizorilor
lui 33 este 14, suma divizorilor lui 6 este 5, suma divizorilor lui 11 este 0.*/
int sum(int x) {

	int d, suma = 0;
	for (d = 2; d < sqrt(x); d++)
		if (x % d == 0)
			suma += d + x / d;

	return suma;

}
int afisSumDiv(int n, int a[]) {


    int v[100];
	for (int i = 0; i < n; i++) {

		int suma = sum(a[i]), poz = i;
		for (int j = 0; j < i; j++)
			if (suma < v[j]) {
				poz = j;
			}
		for (int j = i; j > poz; j--)
			v[j] = v[j - 1];

		v[poz] = suma;
	}

	for (int i = 0; i < n; i++)
		cout << v[i] << " ";

	return 0;

}
































