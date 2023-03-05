#pragma once
#include "functii.h"



/*5. Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt de maximum 20 de litere şi
minimum o literă şi afişează pe ecran toate cuvintele obţinute din cuvântul citit prin
eliminarea primei şi a ultimei litere. Prima prelucrare se referă la cuvântul citit, iar
următoarele la cuvântul rezultat din prelucrarea anterioară. Procedeul de eliminare şi afişare
se va repeta până când se obţine cuvântul vid, ca în exemplu. Fiecare cuvânt obţinut se va
afişa pe câte o linie a ecranului.
Exemplu: dacă se citeşte cuvântul bacalaureat, se va afişa:
bacalaureat
acalaurea
calaure
alaur
lau
a*/
void solutia1() {

    char s[100] = "bacalaureat";
    cout << s << endl;
    eliminare(s);


}

/*3. Scrieţi definiţia completă a unui subprogram s cu trei parametri care primeşte prin
intermediul parametrului n un număr natural de maximum 9 cifre, prin intermediul
parametrului c o cifră şi furnizează prin intermediul parametrului k numărul de cifre ale
numărului n care aparţin intervalului [c-1,c+1].
Exemplu: pentru n=1233 şi c=3, k va avea valoarea 3, iar pentru n=650 şi c=3, k va
avea valoarea 0. */
void solutia2() {
    int n = 1233, c = 3, k;
    s(n, c, k);
    cout << k;
}

/*4. Fişierul BAC.TXT are pe prima linie două numere naturale n şi m (0<n<1000, 0<m<1000)
separate prin câte un spaţiu, pe linia a doua n numere întregi ordonate strict crescător, iar
pe linia a treia m numere naturale distincte. Numerele din fişier aflate pe linia a doua şi a
treia au cel mult 6 cifre fiecare şi sunt despărţite în cadrul liniei prin câte un spaţiu. Să se
scrie un program care citeşte toate numerele din fişier şi afişează pe ecran, despărţite prin
câte un spaţiu, toate numerele de pe a doua linie a fişierului care apar cel puţin o dată şi pe
linia a treia a acestuia.
Exemplu: dacă fişierul are următorul conţinut:
6 5
2 3 4 5 8 9
4 5 2 11 8
atunci se va afişa: 5 2 8, nu neapărat în această ordine.*/
void solutia3() {

    afisarea();

}















