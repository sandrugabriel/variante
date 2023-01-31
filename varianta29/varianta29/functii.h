#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr
natural n (1≤n≤6) şi elementele unui tablou bidimensional A cu n linii
şi n coloane, care memorează numere naturale nenule mai mici decât
100, şi afişează pe ecran produsul numerelor “pivot” pentru matricea
A dacă există astfel de numere, altfel va afişa mesajul NU EXISTA.
Un număr natural x este “pivot” pentru matricea A dacă înmulţind
fiecare element de pe prima coloană cu numărul x, se obţin, în
aceeaşi ordine, elementele unei alte coloane din matrice.
5.
Exemplu: pentru matricea din figura alăturată
2 7 4 8 4
1 1 2 4 2
3 12 6 12 3
1 22 2 4 2
5 10 10 20 8
se afişează 8. */
void generare() {
ifstream f("mat.in");

    int a[7][7], n, i, j, p = 1, ok;
    f >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            f >> a[i][j];
    for (j = 2; j <= n; j++) {
        ok = 1;
        for (i = 2; i <= n; i++)
            if (a[1][1] * a[i][j] != a[i][1] * a[1][j])
                ok = 0;
        if (ok)
            p = p * (a[1][j] / a[1][1]);
    }
    cout << p;
}

/*. Ce se afişează ca urmare a
apelului p(123); dacă
subprogramul p are definiţia
alăturată? (6p.)
void p (int x)
{cout<<x; | printf(“%d”,x);
 if(x!=0){p(x/10);
 cout<<x%10; | printf(“%d”,x%10);}}
*/
void p(int x)
{
    cout << x;
    if (x != 0) {
        p(x / 10);
        cout << x % 10;
    }
}

/*Scrieţi definiţia completă a subprogramului multipli, cu trei parametri a,b,c (a≤b),
numere naturale din intervalul [1,10000] ce returnează numărul numărul multiplilor lui c
din intervalul [a;b].
Exemplu: pentru a=10, b=27,c=5 subprogramul returnează valoarea 4. */
int multipli(int a, int b, int c) {



    return b / c - a / c + !(a % c);


}

/*Se consideră două tablouri unidimensionale A şi B cu elemente numere naturale din
intervalul [1,10000]. Spunem că tabloul A “se poate reduce” la tabloul B dacă există o
împărţire a tabloului A în secvenţe disjuncte de elemente aflate pe poziţii consecutive în
tabloul A astfel încât prin înlocuirea secvenţelor cu suma elementelor din secvenţă să se
obţină, în ordine, elementele tabloului B.
De exemplu tabloul
A 7 3 4 1 6 4 6 8 7 1 8 7
B 14 7 26 16
se poate reduce la tabloul
Fişierul text NUMERE.IN conţine pe prima linie două numere naturale nenule n şi m
(1≤m≤n≤100), pe linia a doua n numere naturale din intervalul [1;10000] şi pe linia a
treia alte m numere naturale din intervalul [1;10000]. Pe fiecare linie numerele sunt
separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte toate numerele din fişierul NUMERE.IN şi verifică,
utilizând un algoritm eficient din punctul de vedere al timpului de executare, dacă tabloul
construit cu cele n numere aflate pe linia a doua în fişier se poate reduce la tabloul construit
cu cele m numere aflate pe linia a treia în fişier. Programul afişează pe ecran mesajul DA în
caz afirmativ şi mesajul NU în caz negativ. (6p.)
 b) Descrieţi în limbaj natural metoda utilizată şi explicaţi în ce constă eficienţa ei. */
void afisarea() {

    int n, m, a[100], b[100], i, j, s, gata;
    ifstream f("bac.in");
    f >> n >> m;
    for (i = 1; i <= n; i++)
        f >> a[i];
    for (i = 1; i <= m; i++)
        f >> b[i];
    i = 1;
    j = 1;
    s = 0;
    gata = 0;
    while (i <= n && j <= m && !gata) {
        while (s < b[j] && i <= n) {
            s = s + a[i];
            i++;
        }
        if (s == b[j]) {
            s = 0;
            j++;
        }
        else
            gata = 1;
    }
    if (gata || i <= n || j <= m)
        cout << "nu";
    else
        cout << "da";

}