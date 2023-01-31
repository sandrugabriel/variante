#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul, cu maximum
8 cifre, construieşte în memorie şi afişează apoi pe ecran o matrice pătratică, având
numărul de linii şi de coloane egal cu numărul de cifre ale numărului dat, completată cu
cifrele numărului citit.
5.
Astfel, elementele de pe prima coloană a matricei vor fi toate egale cu
cifra unităţilor numărului dat, elementele de pe a doua coloană a
matricei vor fi toate egale cu cifra zecilor numărului dat, şi aşa mai
departe, ca în exemplu.
Exemplu: dacă se citeşte numărul 1359, matricea construită va fi cea
alăturată.
9 5 3 1
9 5 3 1
9 5 3 1
9 5 3 1
*/
void generare(int n) {

    int a[20][20]{};

        int copie = n, nrLinii = 0;
        for (int j = 1; n > 0; j++)
        {
            int copie2 = copie;
            for (int i = 1; copie > 0; i++)
            {
                a[i][j] = n % 10;
                copie = copie / 10;
            }
            n = n / 10;
            nrLinii++;
            copie = copie2;
        }
        for (int i = 1; i <= nrLinii; i++)
        {
            for (int j = 1; j <= nrLinii; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
}

/*Pentru funcţiile f1 şi f2 definite
alăturat, stabiliţi care este valoarea lui
f1(3). Dar f2(41382)? (6p.)
long f1(int c)
{ if (c%2==1) return 1;
 else return 2;
}
long f2(long n)
{ if (n==0) return 0;
 else return f1(n%10)+f2(n/10);
}*/
long f1(int c)
{
    if (c % 2 == 1) return 1;
    else return 2;
}
long f2(long n)
{
    if (n == 0) return 0;
    else return f1(n % 10) + f2(n / 10);
}

/*Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii. Se
cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un
spaţiu.
Exemplu: pentru n=19 şi cifrele 3 3 0 9 2 1 2 1 3 7 1 5 2 7 1 0 3 2 3 se va
afişa pe ecran 0 0 1 1 1 1 2 2 2 2 3 3 3 3 3 5 7 7 9.
a) Descrieţi pe scurt un algoritm de rezolvare al problemei, eficient din punct de vedere al
spaţiului de memorie utilizat şi al timpului de executare, explicând în ce constă eficienţa
metodei alese. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris. */
void afisare(int n, int v[]) {

    int frecv[10]{};

    for (int i = 0; i < n; i++) {
        frecv[v[i]]++;

    }

    for (int i = 0; i < 10; i++) {
        while (frecv[i] > 0) {
            cout << i << " ";
            frecv[i]--;
        }
    }


}

/*Fişierul text BAC.TXT conţine mai multe numere naturale, cu cel mult 6 cifre fiecare, câte
un număr pe fiecare linie a fişierului.
4.
Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi le
afişează pe ecran, în aceeaşi ordine, câte cinci pe fiecare linie, separate prin câte
un spaţiu, cu excepţia ultimei linii care poate conţine mai puţin de cinci numere.
Programul va afişa apoi pe ecran, pe o linie separată, câte numere din fişier au
suma cifrelor pară.
Exemplu: dacă fişierul are conţinutul alăturat
11
21
30
40
51
16
17
10
1, pe ecran se vor afişa numerele
de mai jos:
11 21 30 40 51
16 17 10 1
4 (10p.)
 */
void sumParAfis() {


    ifstream f("bac.txt");

        int a, nrSumaPare=0, i = 0;
        while (f >> a) {

            cout << a << " ";
            i++;
            if (i % 5 == 0)
                cout << '\n';

            int sumaCifre = 0;
            while (a > 0) {
                sumaCifre = sumaCifre + a % 10;
                a = a / 10;
            }
            if (sumaCifre % 2 == 0)
                nrSumaPare++;
        }

        if (i % 5 != 0)
            cout << '\n';

        cout << nrSumaPare;


}





















