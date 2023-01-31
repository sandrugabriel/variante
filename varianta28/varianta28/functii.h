#pragma once
#include <iostream>
#include <fstream>	

using namespace std;

/*Şirul de caractere s2 este “clona” şirului de caractere s1 dacă se poate obţine din s1 prin
eliminarea tuturor apariţiilor unei singure vocale. Se consideră vocală orice literă din
mulţimea {a,e,i,o,u}.
Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20 litere
mici ale alfabetului englez şi afişează pe ecran (dacă există), toate “clonele” acestui cuvânt,
fiecare pe câte o linie a ecranului.
Exemplu: pentru cuvântul informatica se afişează, nu neapărat în
această ordine, “clonele” scrise alăturat. (10p.)
nformatca
infrmatica
informtic*/
void clone(char s[]) {

    char v[] = "aeiou";
    int i, j;

    for (int i = 0; i < strlen(v); i++) {
        if (strchr(s, v[i]) == 0) {
            continue;
        }
        for (int j = 0; j < strlen(s); j++) {
            if (s[j] != v[i]) {
                cout << s[j];
            }

        }
        cout << endl;
    }



}

/*Subprogramul f este definit alăturat.
Ce valoare are f(8,4)? (4p.)
int f (int x,int y)
{
 if(x<y)return 1+f(x+1,y);
 if(y<x)return 1+f(y+1,x);
 return 1;
} */
int f(int x, int y)
{
    if (x < y)return 1 + f(x + 1, y);
    if (y < x)return 1 + f(y + 1, x);
    return 1;
}

/*. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n din intervalul
[2,50] şi apoi n numere reale şi afişează pe ecran câte dintre cele n numere reale sunt
egale cu media aritmetică a celorlalte n-1 numere reale. */
void media(int n, float x[]) {

    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += x[i];

    int nrEl = 0;

    for (int i = 0; i < n; i++) {

        if (x[i] == (sum - x[i]) / (n - 1))
            nrEl++;
    }

    cout << nrEl;

}

/*4. a) Scrieţi definiţia completă a unui subprogram primul, care
- primeşte prin singurul său parametru, a, o valoare naturală din intervalul [2,10000]
- returnează o valoare naturală reprezentând cel mai mic divizor al numărului a mai mare strict
decât 1. (6p.)
b) Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n(1≤n≤100) şi pe
următoarea linie n numere naturale din intervalul [2,10000] separate prin câte un spaţiu.
Un număr natural n se numeşte „aproape prim” dacă este egal cu produsul a două numere
prime distincte. De exemplu, numărul 14 este „aproape prim” pentru că este egal cu produsul
numerelor prime 2 şi 7.
Scrieţi un program C/C++ care determină, folosind apeluri utile ale suprogramului primul,
cel mai mare număr „aproape prim” de pe linia a doua a fişierului NUMERE.IN. În cazul în
care există un astfel de număr se afişează pe ecran mesajul DA, urmat de numărul
determinat, iar în caz contrar mesajul NU.
Exemplu: dacă fişierul NUMERE.IN are conţinutul:
6
100 14 21 8 77 35
atunci se afişează pe ecran DA 77 pentru că numărul 77 este cel cel mai mare dintre numerele
„aproape prime” din fişier (14=7*2,21=7*3,77=7*11, 35=7*5).*/
int primul(int a) {

    int d;
    for (d = 2; d < a / 2; d++)
        if (a % d == 0)
            return d;

    return a;

}
void afisare() {

ifstream f("numere.txt");

    int n, a, i, maxim = -1;
    f >> n;
    for (int i = 0; i < n; i++) {

        f >> a;
        int b = a / primul(a);

        if (primul(b) == b && a > maxim)
            maxim = a;


    }

    if (maxim == -1)
        cout << "NU";
    else
        cout << "DA " << maxim;

}























































