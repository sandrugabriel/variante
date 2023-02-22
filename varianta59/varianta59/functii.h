#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*5. Scrieţi un program C/C++ care citeşte de la tastatură un şir de cel mult 50 de caractere
(litere mici şi mari ale alfabetului englez, cifre, puncte, virgule şi spaţii) şi afişează pe ecran
cifra care apare de cele mai multe ori în şirul citit. Dacă şirul conţine mai multe cifre cu
număr maxim de apariţii, atunci se va afişa cea mai mică dintre acestea. Dacă şirul nu
conţine cifre, se va afişa pe ecran mesajul NU.
Exemplu: dacă se citeşte şirul:
Voi lua 9,5 la matematica 10 la informatica si 10 la romana
atunci se va afişa cifra 0 (pentru că cifrele 0 şi 1 apar de cele mai multe ori în şir, iar 0 este
cea mai mică dintre ele)*/
void maximul(char s[]) {

    char c, cmax;
    int i, max = 0, n, k;
    n = strlen(s);
    for (c = '0'; c <= '9'; c++) {
        k = 0;
        for (i = 0; i < n; i++)
            if (s[i] == c)
                k++;
        if (k > max) {
            cmax = c;
            max = k;
        }
    }
    if (max == 0)
        cout << "NU";
    else
        cout << cmax;


}

/*3. Fişierul text bac.txt conţine, pe o singură linie, cel puţin 3 şi cel mult 100 de numere
naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un
spaţiu. Scrieţi un program C/C++ care citeşte numerele din fişier şi scrie pe ecran ultima
cifră a produsului celor mai mari 3 numere citite.
Exemplu: dacă fişierul bac.txt conţine numerele:
1017 48 312 5742 162
atunci se va afişa: 8 (ultima cifră a produsului numerelor 1017, 5742, 312) */
void afisare() {

    ifstream f("bac.txt");
    int a, maxim1 = -1, maxim2 = -1, maxim3 = -1;

    while (f >> a) {

        if (a > maxim1) {
            maxim3 = maxim2;
            maxim2 = maxim1;
            maxim1 = a;

        }
        else if (a > maxim2) {
            maxim3 = maxim2;
            maxim2 = a;
        }
        else if (a > maxim3) {

            maxim3 = a;
        }

    }

    int ultimaCifra = (((maxim3 % 10) * (maxim2 % 10)) % 10) * (maxim1 % 10);
    cout << ultimaCifra;
}

/*4. Se consideră subprogramul divizor, care:
– primeşte prin intermediul parametrului, a, un număr natural nenul de cel mult 4 cifre,
strict mai mare ca 1;
– furnizează prin intermediul parametrului d, cel mai mic divizor al lui a strict mai mare
decât 1.
a) Scrieţi numai antetul subprogramului divizor. (4p.)
b) Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură un
număr natural x (x>1), şi, prin apeluri utile ale subprogramului divizor, verifică dacă x
este număr prim. Programul va afişa pe ecran, în caz afirmativ, mesajul DA, iar în caz
contrar mesajul NU. */
void divizor(int a, int& d) {

    for (d = 2; d < a / 2; d++)
        if (a % d == 0)
            return;

    d = a;
}
void afisarea(int x) {


    int d;

    divizor(x, d);
    if (d == x)
        cout << "DA";
    else
        cout << "NU";
}




