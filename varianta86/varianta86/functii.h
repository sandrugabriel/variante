#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*5. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤10) apoi
construieşte în memorie o matrice cu 2*n linii şi 2*n coloane, numerotate de la 1 la 2*n,
astfel încât parcurgând doar liniile impare ale matricei de sus în jos şi fiecare linie impară de
la stânga la dreapta se obţin în ordine strict crescătoare toate numerele impare cuprinse în
intervalul [1,4*n2
], iar parcurgând doar liniile pare ale matricei de sus în jos şi fiecare linie
pară de la dreapta la stânga se obţin în ordine strict crescătoare toate numerele pare
cuprinse în intervalul [1,4*n2
], ca în exemplu.
Programul afişează pe ecran matricea obţinută, câte o linie a matricei
pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin
câte un spaţiu.
Exemplu: pentru n=2 se obţine matricea alăturată. (10p.)
 1 3 5 7
 8 6 4 2
 9 11 13 15
16 14 12 10 */
void generare(int n) {
    int a[100][100]{};
    int par = 2;
    int imp = 1;
    int i, j;
    for (i = 1; i <= 2 * n; i++)
        if (i % 2 == 1)
            for (j = 1; j <= 2 * n; j++) {
                a[i][j] = imp;
                imp += 2;
            }
        else
            for (j = 2 * n; j >= 1; j--) {
                a[i][j] = par;
                par += 2;
            }
    for (i = 1; i <= 2 * n; i++) {
        cout << endl;
        for (j = 1; j <= 2 * n; j++)
            cout << a[i][j] << " ";
    }

}

/* 3. Scrieţi definiţia completă a subprogramului numar, cu trei parametri, care primeşte prin
intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul
parametrilor c1 şi c2 câte o cifră nenulă; subprogramul retunează numărul obţinut prin
înlocuirea în numărul primit prin parametrul n a fiecărei apariţii a cifrei c1 cu cifra c2. Dacă
c1 nu apare în n, subprogramul returnează valoarea n.
Exemplu: pentru n=12445, c1=4 şi c2=7 valoarea returnată va fi 12775. */
int numar(int x, int c1, int c2) {
    int r = 0;
    while (x) {
        if (x % 10 == c1)
            r = r * 10 + c2;
        else
            r = r * 10 + x % 10;
        x = x / 10;
    }
    while (r) {
        x = x * 10 + r % 10;
        r = r / 10;
    }
    return x;
}
int rec(int x, int c1, int c2) {
    if (x == 0)
        return 0;
    else if (x % 10 == c1)
        return rec(x / 10, c1, c2) * 10 + c2;
    else
        return rec(x / 10, c1, c2) * 10 + x % 10;
}

/*4. Fişierul text bac.txt conţine cel puţin două şi cel mult 1000 de numere naturale distincte,
dintre care cel puţin două sunt pare. Numerele sunt separate prin câte un spaţiu şi fiecare
dintre ele are cel mult 9 cifre.
a) Scrieţi un program C/C++ care determină cele mai mari două numere pare din fişier,
utilizând un algoritm eficient din punct de vedere al timpului de executare şi al spaţiului de
memorie utilizat. Cele două numere vor fi afişate pe ecran, în ordine descrescătoare,
separate printr-un spaţiu.
Exemplu: dacă fişierul conţine numerele: 5123 8 6 12 3 se va afişa: 12 8 (6p.)
b) Descrieţi succint, în limbaj natural, algoritmul utilizat, justificând eficienţa acestuia. (*/
void afisarea() {

    ifstream f("bac.txt");
    int a, maxim1 = -1, maxim2 = -1;


    while (f >> a) {
        if (a % 2 == 0) {
            if (a > maxim1) {

                maxim2 = maxim1;
                maxim1 = a;
            }
            else if (a > maxim2) {
                maxim2 = a;
            }
        }
    }


    cout << maxim1 << " " << maxim2;

}
















