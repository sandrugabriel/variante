#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤100)şi apoi
elementele unui tablou bidimensional cu n linii şi n coloane, care memorează numere
naturale cu cel mult 9 cifre fiecare; programul afişează pe ecran acele valori din tablou care
sunt strict mai mici decât toate elementele cu care se învecinează direct (aflate pe aceeaşi
linie dar pe o coloană alăturată sau pe aceeaşi coloană dar pe o linie alăturată), ca în
exemplu. Numerele afişate vor fi separate prin câte un spaţiu.
5.
Exemplu: pentru n=4 şi tabloul alăturat se afişează numerele: 2 0 (2 se
învecinează direct cu 4, 3, 6 şi 9, şi este mai mic decât acestea, iar 0 se
învecinează direct cu 6, 9 şi 1 şi este mai mic decât acestea). (10p.)
5 4 7 9
6 2 3 4
0 9 8 5
1 3 8 6*/
void generare(int n) {

    fstream f("date.in");
    fstream g("date.out");

        int i, j;
        long a[100][100];
        long max = 1000000000;
        f >> n;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                f >> a[i][j];
        for (i = 0; i <= n + 1; i++)
            a[0][i] = a[i][0] = a[i][n + 1] = a[n + 1][i] = max;
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j - 1] &&
                    a[i][j] < a[i + 1][j] && a[i][j] < a[i][j + 1])
                    g << a[i][j] << " ";


}

/*3. Scrieţi definiţia completă a subprogramului divizor, cu trei parametri, prin care primeşte 3
numere naturale nenule cu cel mult 9 cifre fiecare şi returnează numărul divizorilor comuni
tuturor celor 3 numere.
Exemplu: dacă numerele primite ca parametri sunt 24, 20 şi 12, subprogramul returnează
valoarea 3 (divizorii comuni sunt 1, 2 şi 4)*/
int divizor(int a, int b, int c) {

    int d, nrDiv = 0, minim = a;
    if (minim > b)
        minim = b;
    if (minim > c)
        minim = c;

    for (d = 1; d <= minim / 2; d++)
        if (a % d == 0 && b % d == 0 &&
            c % d == 0)
            nrDiv++;
    return nrDiv;

}

/*Se consideră un şir s format după regula alăturată, unde
s-a notat cu aӨb numărul obţinut prin concatenarea
cifrelor lui a şi b, în această ordine.
Exemplu: pentru x=2 se obţine şirul:
2, 3, 32, 323, 32332,....
Fişierul text SIR.TXT conţine pe prima linie două numere, x (1≤x≤20) şi k (1≤k≤5000),
separate printr-un spaţiu, iar pe a doua linie un număr format din exact k cifre, reprezentând
un termen al şirului s (diferit de x). Cifrele numărului nu sunt separate prin spaţii.
a) Scrieţi un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
timpului de executare şi al memoriei utilizate, afişează pe ecran acel termen din şir care îl
precede pe cel citit din fişier.
Exemplu: dacă fişierul conţine valorile alăturate, se va afişa pe ecran
numărul 323. (6p.)
2 5
32332
4.
b) Descrieţi în limbaj natural metoda utilizată şi explicaţi în ce constă eficienţa ei.*/
void afisarea() {

    ifstream fin("sir.txt");

        int x, k, a, b, c;
        char cif;
        fin >> x >> k;
        if (x == 9) {
            a = 1;
            b = 2;
        }
        else if (x < 9)
            a = b = 1;
        else
            a = b = 2;
        do {
            c = a + b;
            a = b;
            b = c;
        } while (c < k);
        for (int i = 1; i <= a; i++) {
            fin >> cif;
            cout << cif;
        }

}






































