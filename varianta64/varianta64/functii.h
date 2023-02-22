#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un text format din cel mult 200 de
litere ale alfabetului englez, în care cuvintele sunt separate printr-un singur spaţiu şi
afişează pe ecran numărul de cuvinte din textul citit, care au prima respectiv ultima literă
vocală. În cazul în care în text nu există un astfel de cuvânt, se va afişa pe ecran mesajul
NU EXISTA. Se consideră vocală orice literă din mulţimea {a,A,e,E,i,I,o,O,u,U}.
5.
Exemplu: dacă textul introdus este:
Eratostene a sugerat ca anii bisecti se repeta la fiecare patru ani
pe ecran se va afişa:
4 */
void contor(char s[]) {

    int i, k = 0;
    char v[] = "AEIOUaeiou";
    for (i = 0; i < strlen(s); i++)
        if (strchr(v, s[i]) && (i == 0 || s[i - 1] == ' ')) {
            int j = i;
            while (s[j] != ' ' && j < strlen(s))
                j++;
            if (strchr(v, s[j - 1]))
                k++;
        }
    cout << k;


}

/*3. Subprogramul diviz primeşte prin intermediul parametrului n un număr natural nenul
(2≤n≤200), iar prin intermediul parametrului a, un tablou unidimensional care conţine n
valori naturale nenule, fiecare dintre acestea având cel mult patru cifre. Elementele tabloului
sunt numerotate de la 1 la n.
Subprogramul returnează o valoare egală cu numărul de perechi (ai,aj), 1≤i<j≤n, în
care ai este divizor al lui aj , sau aj este divizor al lui ai.
Scrieţi definiţia completă a subprogramului diviz, în limbajul C/C++.
Exemplu: pentru n=5 şi a=(4,8,3,9,4) subprogramul returnează valoarea 4.*/
int divizor(int n, int a[100]){
    int c = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] % a[j] == 0 || a[j] % a[i] == 0) {
                c++;
            }
        }
    }
     
    return c;
}

/* Fişierul text date.in conţine pe prima linie , separate prin câte un spaţiu, cel mult 1000 de
numere naturale, fiecare dintre ele având maximum 9 cifre.
a) Scrieţi un program C/C++ care citeşte numerele din fişierul date.in şi determină cea
mai lungă secvenţă ordonată strict descrescător, formată din valori citite consecutiv din
fişier. Numerele din secvenţa găsită vor fi afişate pe ecran, pe o linie, separate prin câte un
spaţiu. Dacă sunt mai multe secvenţe care respectă condiţia impusă, se va afişa doar prima
dintre acestea. Alegeţi o metodă de rezolvare eficientă din punctul de vedere al timpului de
executare.
Exemplu: dacă fişierul date.in conţine
5 2 19 4 3 6 3 2 1 0 8
 (6p.)
pe ecran se afişează:
5*/
void afisarea() {

    ifstream f("date.in");

    int i = 1, c = 1, max = 1, x, n, v[100]{};

    while (f >> x)
    {
        v[i] = x;

        i++;
    }

    for (n = 0; n < i; n++)
    {
        if (v[n] > v[n + 1]) {
            c++; 
           
        }else c = 1;


        if (c > max) {
            max = c;
           
        }

            

    }

    cout << max;
}

