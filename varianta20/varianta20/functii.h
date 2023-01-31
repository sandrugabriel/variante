#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<20) şi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, în care
fiecare element aflat pe chenarul exterior al matricei este egal cu suma dintre indicele liniei
şi indicele coloanei pe care se află, iar fiecare dintre celelalte elemente este egal cu suma
celor trei “vecini” situaţi în matrice pe linia anterioară. Două elemente din matrice se numesc
vecine dacă se găsesc alături pe linie, coloană sau diagonală. Chenarul exterior al unei
matrice este format din prima linie, ultima linie, prima coloană şi ultima coloană.
5.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei
pe câte o linie a ecranului cu câte un spaţiu între elementele
fiecărei linii.
Exemplu: pentru n=5 se va obţine matricea alăturată. (10p.)
2 3 4 5 6
3 9 12 15 7
4 24 36 34 8
5 64 94 78 9
6 7 8 9 10 */
void generare(int n) {

    int a[20][20];

        for (int i = 1; i <= n; i++) {
            a[1][i] = 1 + i;
            a[i][1] = 1 + i;
            a[n][i] = n + i;
            a[i][n] = n + i;
        }
        for (int i = 2; i < n; i++)
        {
            for (int j = 2; j < n; j++)
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j + 1];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }

}

/*1. Funcţia F are definiţia alăturată. Ce valoare
are F(5)? (4p.)
int F(int x)
 {if(x!=0) return x+F(x-1);
 else
 return x;
 }
a. 5 b. 10 c. 15 d. 6 */
int F(int x)
{
    if (x != 0) return x + F(x - 1);
    else
        return x;
}

/*3. Subprogramul nule are doi parametri: a, prin care primeşte un tablou unidimensional cu
maximum 100 de numere întregi, cu cel mult 4 cifre fiecare şi n, numărul de elemente din
tablou. Subprogramul rearanjează elementele tabloului unidimensional astfel încât toate
valorile nule să se afle la sfârşitul tabloului. Ordinea în cadrul secvenţei de elemente nenule
poate fi oricare. Tabloul modificat este furnizat tot prin parametrul a.
Exemplu: dacă n=6, a=(12,0,0,-3,-8,0), după apel, acesta ar putea fi:
a=(12,-3,-8,0,0,0).
 Scrieţi definiţia completă a subprogramului nule.*/
void nule(int n, int a[100]) {
    int i, aux;
    for (i = 1; i < n; i++)
        if (a[i] == 0 && a[i + 1] != 0) {
            aux = a[i];
            a[i] = a[i + 1];
            a[i + 1] = aux;
            if (i > 1)
                i = i - 2;
        }
}

/* În fişierul nr1.txt este memorată pe prima linie o valoare naturală n de cel mult 8 cifre,
iar pe linia următoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict crescător şi separate prin câte un spaţiu. În fişierul nr2.txt este memorată
pe prima linie o valoare naturală m de cel mult 8 cifre, iar pe linia următoare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin
câte un spaţiu. Se cere afişarea pe ecran, separate prin câte un spaţiu, în ordine strict
crescătoare, a tuturor numerelor aflate pe a doua linie atât în primul cât şi în al doilea fişier.
Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al
timpului de executare.
Exemplu: pentru următoarele fişiere:
nr1.txt nr2.txt
5 6
3 6 8 9 12 2 3 5 7 9 13
se va afişa 3 9.
a) Descrieţi succint, în limbaj natural, strategia de rezolvare şi justificaţi eficienţa algoritmului
ales. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului ales. */
void afisare() {

    ifstream f("nr1.txt"), g("nr2.txt");
    int x, y, n, m, i, j;
    f >> n;
    g >> m;
    i = j = 1;
    f >> x;
    g >> y;
    while (i <= n && j <= m)
        if (x < y) {
            f >> x;
            i++;
        }
        else if (y < x) {
            g >> y;
            j++;
        }
        else {
            cout << x << " ";
            f >> x;
            g >> y;
            i++;
            j++;
        }

}















