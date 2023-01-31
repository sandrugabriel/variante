#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură numerele naturale m şi n din intervalul
[1,24], apoi construieşte în memorie şi afişează pe ecran un tablou bidimensional cu m
linii şi n coloane astfel încât prin parcurgerea acestuia linie cu linie de sus în jos şi fiecare
linie de la stânga la dreapta, se obţin în ordine descrescătoare toate numerele naturale de
la 1 la m*n, ca în exemplu.
5.
Fiecare linie a tabloului este afişată pe câte o linie a ecranului, elementele
aceleiaşi linii fiind separate prin câte un spaţiu.
Exemplu: pentru m=4 şi n=3 se va construi şi afişa tabloul alăturat. (10p.)
12 11 10
 9 8 7
 6 5 4
 3 2 1 */
void generare(int m, int n) {

    int k = 1;
    int a[25][25];
    k = m * n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = k--;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}

/*Considerăm subprogramul recursiv definit
alăturat. Ce se va afişa în urma apelului de
mai jos?
f(’C’); (4p.)
void f(char c)
{ if (c>’A’) f(c-1);
 cout<<c; | printf(”%c”,c);
 if (c>’A’) f(c-1);
} */
void f(char c)
{
    if (c > 'A') f(c - 1);
    cout << c; 
    if (c > 'A') f(c - 1);
}

/* 3. a) Scrieţi definiţia completă a unui subprogram, nz, cu un parametru întreg n (0<n≤32000),
care returnează numărul zerourilor de la sfârşitul numărului n!. (6p.)
b) Scrieţi programul C/C++ care citește de la tastatură un număr natural k (0<k≤3) și
determină, folosind apeluri ale subprogramului nz, cel mai mic număr natural n pentru care
n! are cel puţin k zerouri la sfârşit. Numărul determinat se afișează pe ecran. */

int nz(int n) {

	int i = 2, nrDoi = 0, nrCinci = 0;
	i = 5;
	while (i <= n) {
		nrCinci += n / i;
		i = i * 5;
	}
	return nrCinci;

}
void afisare(int k) {

    int n = 5;
    while (nz(n) < k) {
        n = n + 5;
    }

    cout << n;

}

/* 4. Scrieţi programul C/C++ care citeşte din fişierul text BAC.TXT numărul întreg n
(1≤n≤10000) şi un şir de n perechi de numere întregi a b (1≤a≤b≤32000), fiecare pereche
fiind scrisă pe o linie nouă a fişierului, cu un spaţiu între cele două numere. Programul
afişează pe ecran pentru fiecare pereche a,b cel mai mare număr natural din intervalul
închis [a,b]care este o putere a lui 2 sau numărul 0 dacă nu există nicio putere a lui 2 în
intervalul respectiv. Numerele afișate pe ecran se scriu în linie, separate prin câte un
spașiu. Un număr p este putere a lui 2 dacă există un număr natural k astfel încât p=2k
.
Exemplu: dacă fişierul BAC.TXT conţine numerele
3
2 69
10 20
19 25
se va afişa: 64 16 0.*/
   int p2(int n) {
        int p = 1;
        while (p <= n)
            p = p * 2;
        return p / 2;
    }
void afisarea() {

    ifstream f("bac.txt");
    int a, b, n;
        f >> n;
        for (int i = 1; i <= n; i++) {
            f >> a >> b;
            if (p2(b) >= a)
                cout << p2(b) << " ";
            else
                cout << 0;
        }

}




















































































