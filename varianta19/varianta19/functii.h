#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<20),
construieşte în memorie şi afişează pe ecran o matrice cu n linii şi n coloane, numerotate
de la 1 la n, în care fiecare element aflat pe o linie impară este egal cu suma dintre indicii
liniei şi coloanei pe care se află şi fiecare element aflat pe o linie pară este egal cu cel mai
mic dintre elementele aflate pe linia anterioară şi pe aceeaşi coloană cu el sau pe linia
anterioară şi pe una dintre coloanele vecine cu cea pe care se află el.
5.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
2 3 4 5 6
2 2 3 4 5
4 5 6 7 8
4 4 5 6 7
6 7 8 9 10 */
void generare(int n) {

    int a[20][20];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                if (i % 2 == 0)
                    if (j == 1)
                        a[i][j] = a[i - 1][j];
                    else
                        a[i][j] = a[i - 1][j - 1];
                else
                    a[i][j] = i + j;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }

}

/*. Funcţia F are definiţia alăturată. Ce valoare
are F(18)? (4p.)
int F(int x){
 if (x<=1) return x;
 else return x+F(x-2);
}
a. 90 b. 171 c. 91 d. 18
*/
int F(int x) {
    if (x <= 1) return x;
    else return x + F(x - 2);
}

/*3. Subprogramul aranjare are doi parametri: a prin care primeşte un tablou unidimensional
cu maximum 100 de numere reale nenule şi n, numărul de elemente din tablou.
Subprogramul rearanjează elementele tabloului unidimensional astfel încât toate valorile
negative să se afle pe primele poziţii, iar valorile pozitive în continuarea celor negative.
Ordinea în cadrul secvenţei de elemente pozitive, respectiv în cadrul secvenţei de elemente
negative, poate fi oricare. Tabloul modificat va fi furnizat tot prin intermediul parametrului a.
Exemplu: dacă tabloul are 6 elemente şi este de forma (12, -7.5, 6.5, -3, -8,
7.5), după apel, acesta ar putea fi: (-7.5, -3, -8, 12, 6.5, 7.5).
Scrieţi definiţia completă a subprogramului aranjare.*/
void aranjare(float a[100], int n) {

    int i, j;

    for (j = 1; j < n; j++) {
        int cheie = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > cheie) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = cheie;
    }
}

/*În fişierul nr1.txt este memorată pe prima linie o valoare naturală n de cel mult 8 cifre,
iar pe linia următoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict crescător şi separate prin câte un spaţiu. În fişierul nr2.txt este memorată
pe prima linie o valoare naturală m de cel mult 8 cifre, iar pe linia următoare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin
câte un spaţiu. Se cere afişarea pe ecran, separate prin câte un spaţiu, în ordine strict
crescătoare, a tuturor numerelor aflate pe a doua linie în cel puţin unul dintre cele două
fişiere. În cazul în care un număr apare în ambele fişiere, el va fi afişat o singură dată.
Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al
timpului de executare.
Exemplu: pentru următoarele fişiere:
nr1.txt
5
3 6 8 9 12
nr2.txt
6
2 3 5 7 9 13
se va afişa 2 3 5 6 7 8 9 12 13.
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
            cout << x << " ";
            f >> x;
            i++;
        }
        else if (y < x) {
            cout << y << " ";
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
    while (i <= n) {
        cout << x << " ";
        f >> x;
        i++;
    }
    while (j <= m) {
        cout << y << " ";
        g >> y;
        j++;
    }


}













































