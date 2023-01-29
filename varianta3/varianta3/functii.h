#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează:
- elementele aflate pe diagonala principală a matricei vor primi valoarea 0
- elementele de pe prima coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea n
- elementele de pe a doua coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea n-1
...
- elementele de pe ultima coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii (ca în
exemplu).
Exemplu: pentru n=4 se va afişa matricea alăturată. (10p.)
0 3 2 1
4 0 2 1
4 3 0 1
4 3 2 0 */
void generare(int n) {
    int a[100][100]{};

    for (int i = 0; i < n; i++) {
 for (int j = 0; j < n; j++) {
 if (i == j)
                a[i][j] = 0;
            else
                a[i][j] = n - j;
        }
           
    }
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

}

/*2. Pentru definiţia alăturată a
subprogramului f, ce se afişează ca
urmare a apelului f(26);? (6p.)
void f (int x)
{
 if(x>0)
 if(x%4==0)
 { cout<<’x’; | printf(”%c”,’x’);
 f(x-1); }
 else
 { f(x/3);
 cout<<’y’; | printf(”%c”,’y’);
 }
} */
void f3(int x)
{
    if (x > 0)
        if (x % 4 == 0)
        {
            cout << 'x';
            f3(x - 1);
        }
        else
        {
            f3(x / 3);
            cout << 'y';
        }
}

/*Fişierului text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel
mult 100 de numere naturale, fiecare număr având cel mult 4 cifre. Scrieţi un program
C/C++ care citeşte toate numerele din fişierul NR.TXT şi afişează pe ecran, separate prin
câte un spaţiu, în ordine crescătoare, toate numerele din fişier care au cel puţin 3 cifre.
Dacă fişierul nu conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA. (10p.)*/
void afis3Cifre() {

    int v[100], n = 0, x,aux;
    n = 0;
    ifstream fin("nr.txt");
    while (fin >> x) {
        if (x >= 100) {
            v[n] = x;
            n ++;
        }
    }
    if (n == 0) {
        cout << "nu exista";
    }
    else {
 for (int i = 0; i < n - 2; i++) {

            for (int j = i + 1; j <= n - 1; j++) {
                if (v[i] > v[j]) {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }
    for (int i = 0; i <= n - 1; i++)
        cout << v[i] << " ";

    }
       
}

/*
4. Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre
şi care determină şi afişează pe ecran, folosind apeluri utile ale subprogramului cif, cel mai
mare număr palindrom ce poate fi obţinut prin rearanjarea tuturor cifrelor numărului n. Dacă
nu se poate obţine un palindrom din toate cifrele numărului n, programul va afişa pe ecran
numărul 0. Un număr natural este palindrom dacă este egal cu numărul obţinut prin scrierea
cifrelor sale în ordine inversă.
Exemplu: dacă n=21523531 atunci se va afişa pe ecran numărul 53211235, iar dacă
n=12272351 atunci se va afişa pe ecran numărul 0. */
int cif(int a, int b) {
    int ct = 0;
    while (a > 0) {

        if (a % 10 == b)
            ct++;
        a = a / 10;
    }

    return ct;

}
void afisarePalindrom(int n) {
    int f[10]{};
    while (n != 0)
    {
        f[n % 10]++;
        n /= 10;
    }
    int semn = 1;
    for (int i = 0; i < 9; i++) {
        if (f[i] != 2) {
            semn = 0;
        }
    }

    if (semn == 0) {
        cout << 0;
    }
    else
    {
        //??
    }

}

