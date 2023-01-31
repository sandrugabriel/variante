#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/* Scrieţi un program C/C++ care citeşte de la tastatură un număr natural
n (2<n<=10) şi construieşte în memorie o matrice A cu n linii şi n
coloane în care toate elementele de pe prima linie, prima şi ultima
coloană au valoarea 1 şi oricare alt element Aij din matrice este egal cu
suma a 3 elemente situate pe linia i-1: primul aflat pe coloana j-1, al
doilea pe coloana j, iar al treilea pe coloana j+1, ca în exemplu.
Matricea va fi afişată pe ecran, linie cu linie, numerele de pe aceeaşi
linie fiind separate prin câte un spaţiu.
Exemplu: pentru n=5 , se afişează matricea alăturată. */
void generare(int n) {

    int a[20][20];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                if (i == 1 || j == 1 || j == n)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }

}

/*2. Subprogramul scrie este definit alăturat.
Ce se afişează ca urmare a apelului
scrie(2,6); ? (6p.)
void scrie (int x,int y)
{
 cout<<x<<y; | printf(“%d%d”,x,y);
 if(x<y)
 {
 scrie(x+1,y-1);
 cout<<(x+y)/2;|printf(“%d”,(x+y)/2);
 }
} */
void scrie(int x, int y)
{
    cout << x << y;
    if (x < y)
    {
        scrie(x + 1, y - 1);
        cout << (x + y) / 2;
    }
}

/*3. Scrieţi definiţa completă a subprogramului nreal cu doi parametri x şi y, numere naturale
din intervalul [1;1000] ce returnează un număr real cu proprietatea că partea sa întreagă
este egală cu x, iar numărul format din zecimalele sale, în aceeaşi ordine, este egal cu y.
Exemplu: pentru x=12 şi y=543, subprogramul returnează valoarea 12.543.*/
float nreal(int x, int y) {

    float a;
    if (y < 10)
        a = ((float)y) / 10;
    else if (y < 100)
        a = ((float)y) / 100;
    else if (y < 1000)
        a = ((float)y) / 1000;
    else
        a = ((float)y) / 10000;

    a = a + x;

    return a;

}

/*4. Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (2≤n≤100) şi pe
următoarea linie n numere reale pozitive, în ordine strict crescătoare, separate prin câte un
spaţiu.
a) Scrieţi un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
memoriei utilizate, determină şi afişează pe ecran cel mai mare număr natural x cu
proprietatea că în orice interval deschis având drept capete oricare două dintre cele n numere
aflate pe linia a doua în fişierul NUMERE.IN se găsesc cel puţin x numere întregi.
Exemplu: dacă fişierul NUMERE.IN are conţinutul:
6
3.5 5.1 9.2 16 20.33 100
atunci se afişează 2
Explicaţie: în oricare dintre intervalele (3.5,5.1), (3.5,9.2), (3.5,16), (3.5,20.33),
(3.5,100), (5.1,9.2), (5.1,16), (5.1,20.33), (5.1,100), (9.2,16), (9.2,20.33),
(9.2,100), (16,20.33), (16,100), (20,33,100) există cel puţin două numere întregi.
 b) Descrieţi în limbaj natural metoda utilizată şi explicaţi în ce constă eficienţa ei. */
void afisare() {

    ifstream f("numere.txt");
        int n, x = -1;
        f >> n;
        float a, b;
        f >> a;
        while (f >> b) {

            if ((int)b - (int)a < x || x == -1)
                x = (int)b - (int)a;
            a = b;
        }

        cout << x;

}



























































































































