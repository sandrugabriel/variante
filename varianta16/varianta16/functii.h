#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<16),
construieşte în memorie şi afişează pe ecran o matrice cu n linii şi n coloane în care
elementele de pe cele două diagonale sunt egale cu 0, elementele care se află deasupra
ambelor diagonale sunt egale cu 1, elementele care se află sub ambele diagonale sunt
egale cu 2, iar restul elementelor sunt egale cu 3.
5.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
0 1 1 1 0
3 0 1 0 3
3 3 0 3 3
3 0 2 0 3
0 2 2 2 0 */
void generare(int n) {

    int a[20][20];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                if ((i == j) || (i + j == n + 1))
                    a[i][j] = 0;
                else if (i < j && i + j < n + 1)
                    a[i][j] = 1;
                else if (i + j > n + 1 && i > j)
                    a[i][j] = 2;
                else
                    a[i][j] = 3;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
}

/* Funcţia F are definiţia alăturată. Ce valoare
are F(3)? (4p.)
int F(int n)
 {if(n==0 || n==1) return 1;
 else
 return 2*F(n-1)+2*F(n-2);}
a. 1 b. 12 c. 6 d. 10
*/
int F(int n)
{
    if (n == 0 || n == 1) return 1;
    else
        return 2 * F(n - 1) + 2 * F(n - 2);
}

/*3. Scrieţi definiţia completă a subprogramului multiplu care are 3 parametri: a, prin care
primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât
1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural (k≤9).
Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k
şi au ultima cifră egală cu k.
Exemplu: dacă n=6, a=(9,273,63,83,93,123), iar k=3, subprogramul va returna
valoarea 4.*/
int multiplu(int a[100], int n, int k) {

    int i, nrEl = 0;
    for (i = 0; i < n; i++) {

        if (a[i] % k == 0 && a[i] % 10 == k)
            nrEl++;
    }

    return nrEl;

}

/*4. În fişierul numere.txt sunt memorate maximum 10000 de numere naturale cu cel mult 9
cifre fiecare. Fiecare linie a fişierului conţine câte un număr. Se cere afişarea pe ecran, în
ordine descrescătoare, a tuturor cifrelor care apar în numerele din fişier. Alegeţi un algoritm
de rezolvare eficient din punct de vedere al timpului de executare.
Exemplu: dacă fişierul numere.txt conţine:
267
39628
79
se va tipări 9987766322.
a) Descrieţi succint, în limbaj natural, strategia de rezolvare şi justificaţi eficienţa algoritmului
ales. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului ales. */
void afisare() {

    int b[100]{};
    int i, c, x;

        ifstream fin("numere.txt");
        i = 0;
        while (fin >> x)
            while (x)
            {
                b[x % 10]++;
                x = x / 10;
            }

        c = 9;
        while (c >= 0)
        {
            for (int k = 1; k <= b[c]; k++)
                cout << c;
            c--;
        }
        cout << endl;


}
