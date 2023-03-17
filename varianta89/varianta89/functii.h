#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (1≤n≤6) apoi
construieşte în memorie o matrice cu n linii şi n coloane, astfel încât parcurgând liniile
matricei de sus în jos şi de la stânga la dreapta se obţin, în prima linie primele n numere ale
şirului Fibonacci în ordine crescătoare, în linia a doua următoarele n numere ale şirului
Fibonacci în ordine descrescătoare, în linia a treia următoarele n numere ale acestui şir în
ordine crescătoare, şi aşa mai departe, ca în exemplu. Elementele şirului Fibonacci se obţin
astfel: primul element este 0, al doilea este 1, iar elementele următoare se obţin însumând
cele două elemente care preced elementul curent. Astfel, primele 16 elemente ale acestui şir
sunt: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610.
 5.
Programul afişează pe ecran matricea obţinută, câte o linie a
matricei pe câte o linie a ecranului, elementele fiecărei linii fiind
separate prin câte un spaţiu.
Exemplu: pentru n=4 se obţine matricea alăturată. (10p.)
 0 1 1 2
 13 8 5 3
 21 34 55 89
610 377 233 144 */
void generare(int n) {

    int a[7][7], f[48], k;
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n * n; i++)
        f[i] = f[i - 1] + f[i - 2];
    k = 0;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 1)
            for (int j = 1; j <= n; j++)
                a[i][j] = f[k++];
        else
            for (int j = n; j >= 1; j--)
                a[i][j] = f[k++];
    for (int i = 1; i <= n; i++) {
        cout << endl;
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
    }
}

/*3. Scrieţi definiţia completă a subprogramului numar, cu trei parametri, care primeşte prin
intermediul parametrului n un număr natural format din cel mult 9 cifre, iar prin intermediul
parametrilor c1 şi c2 câte o cifră nenulă. Subprogramul caută prima apariţie (de la stânga
spre dreapta) a cifrei c1 în n, şi dacă aceasta apare, o înlocuieşte cu c2, iar următoarele
cifre, dacă există, sunt înlocuite cu câte o cifră 0. Subprogramul furnizează tot prin n
numărul astfel obţinut. Dacă cifra c1 nu apare în n, atunci valoarea lui n rămâne
nemodificată.
Exemplu: pentru n=162448, c1=4 şi c2=7 valoarea furnizată prin n va fi 162700.*/
void numar(int& n, int c1, int c2) {
    int p = 1, m;
    int c = 0, poz = 0;
    m = n;
    while (m) {
        if (m % 10 == c1)
            poz = c;
        m = m / 10;
        c++;
    }
    for (int i = 1; i <= poz; i++)
        p = p * 10;
    if (poz > 0) {
        n = n / (p * 10);
        n = n * 10 + c2;
        n = n * p;
    }
}

/*4. Fişierul text bac.txt conţine pe mai multe rânduri cel mult 50000 de numere naturale din
intervalul închis [0, 99], numerele de pe acelaşi rând fiind separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care afişează pe ecran, în ordine descrescătoare, acele
numere din fişier care sunt mai mari decât un număr natural k, citit de la tastatură, utilizând
un algoritm eficient din punct de vedere al timpului de executare. Dacă un număr apare de
mai multe ori, şi este mai mare decât k, se va afişa o singură dată. Numerele vor fi afişate
câte 20 pe fiecare linie (cu excepţia ultimei linii care poate să conţină mai puţine valori),
separate prin câte un spaţiu.
Exemplu: dacă fişierul conţine numerele: 15 8 99 15 1 37 1 24 2, iar pentru k se citeşte
valoarea 7, se vor afişa numerele 99 37 24 15 8. (6p.)
b) Descrieţi succint, în limbaj natural, algoritmul utilizat, justificând eficienţa acestuia. */
void afisarea() {


    ifstream f("date.in");
    int x[100];
    int n;
    while (f >> n)
        x[n]++;
    int k;
    cin >> k;
    int nr = 0;
    for (int i = 99; i > k; i--)
        if (x[i] > 0) {
            cout << i << " ";
            nr++;
            if (nr % 20 == 0)
                cout << endl;
        }

}





