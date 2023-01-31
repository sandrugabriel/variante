#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Un tablou bidimensional A cu m linii şi n coloane (1≤m≤100, 1≤n≤100) conţine pe prima linie
numerele 1,2,...,n, iar pe prima coloană numerele 1,2,...,m. Celelalte elemente ale
tabloului sunt date de relaţia: Ai,j=Ai-1,j+Ai,j-1. Scrieţi un program C/C++ care citeşte de la
tastatură numerele m şi n şi afişează pe ecran ultima cifră a elementului de pe ultima linie şi
ultima coloană a tabloului.
Exemplu: pentru m=3 şi n=4 se va afişa 5 deoarece elementele
tabloului A sunt:
 (10p.)
1 2 3 4
2 4 7 11
3 7 14 25 */
void generare(int m, int n) {
    int a[100][100];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            if (i == 1)
                a[i][j] = j;
            else
                if (j == 1)
                    a[i][j] = i;
                else
                    a[i][j] = a[i - 1][j] + a[i][j - 1];

    }
    cout << a[m][n] % 10;

}

/* Pentru subprogramul suma definit
alăturat, scrieţi valoarea expresiei
suma(5,4). (4p.)
int suma (int a,int b)
{ if (a==0 && b==0) return 0;
 else if (a==0) return 1+suma(a,b-1);
 else return 1+suma(a-1,b);
} */
int suma(int a, int b)
{
    if (a == 0 && b == 0) return 0;
    else if (a == 0) return 1 + suma(a, b - 1);
    else return 1 + suma(a - 1, b);
}

/* 3. a) Scrieţi definiţia completă a subprogramului shift care primeşte prin intermediul
parametrului n o valoare naturală nenulă (n≤100), iar prin intermediul parametrului x, un
tablou unidimensional cu maximum 100 de componente. Fiecare componentă a acestui
tablou este un număr întreg care are cel mult 4 cifre. Subprogramul permută circular cu o
poziţie spre stânga primele n elemente ale tabloului x şi furnizează tabloul modificat tot prin
parametrul x.
Exemplu: dacă înainte de apel n=4 şi x=(1,2,3,4), după apel x=(2,3,4,1). (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n
(n≤100), apoi cele n elemente ale unui tablou unidimensional x. Programul va inversa
ordinea elementelor tabloului x folosind apeluri utile ale subprogramului shift şi va afişa
pe ecran, separate prin câte un spaţiu, elementele tabloului rezultat în urma acestei
prelucrări.
Exemplu: dacă se citesc pentru n valoarea 5, iar tabloul x este (1,2,3,4,5) programul
va determina ca x să devină (5,4,3,2,1).*/
void shift(int n, int x[100]) {

    int i, temp = x[0];
    for (i = 1; i < n; i++)
        x[i - 1] = x[i];

    x[n - 1] = temp;

}
void afisare(int n, int x[]) {

    for (int i = 0; i < n; i++)
        shift(n - i, x);


    for (int i = 0; i < n; i++)
        cout << x[i] << " ";


}

/*Fişierul text BAC.TXT conţine pe prima linie un număr natural nenul n (1≤n≤1000), iar pe
fiecare dintre următoarele n linii, câte două numere întregi a şi b (1≤a≤b≤32000), fiecare
pereche reprezentând un interval închis de forma [a,b]. Scrieţi un program C/C++ care
determină intervalele care au proprietatea că intersecţia cu oricare dintre celelalte n-1
intervale este vidă şi afişează pe câte o linie a ecranului, separate printr-un spaţiu,
numerele care reprezintă capetele intervalelor determinate. (10p.)
 4.
Exemplu: dacă fişierul BAC.TXT are conţinutul alăturat
4
17 20
2 6
10 15
8 16
, pe ecran se va afişa:
2 6 sau 17 20
17 20 2 6*/
void afisarea() {

    int n, a[1000], b[1000], i, j, k;
    ifstream fin("bac.txt");
    fin >> n;
    for (i = 1; i <= n; i++)
        fin >> a[i] >> b[i];
    for (i = 1; i <= n; i++) {
        k = 0;
        for (j = 1; j <= n; j++)
            if (i != j)
                if (a[i] > b[j] || a[j] > b[i])
                    k++;
        if (k == n - 1)
            cout << a[i] << " " << b[i] << endl;
    }
    fin.close();
}
