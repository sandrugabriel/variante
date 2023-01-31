#pragma once
#include <iostream> 

using namespace std;


//Utilizând metoda backtracking sunt generate numerele de 3 cifre care au cifrele în ordine
//crescătoare, iar cifrele aflate pe poziţii consecutive sunt de paritate diferită.Ştiind că primele
//cinci soluţii generate sunt, în această ordine, 123, 125, 127, 129, 145, care este cel de al
//8 - lea număr generat ?
//a.169  b.149  c.167  d.147

//raspunsul corect este 167

unsigned n = 9, s[100], m = 3;

bool verificare() {

    for (int i = 0; i < m - 1; i++)
    {
        if (s[i] > s[i + 1]) {
            return false;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (s[i] % 2 == i % 2) {
            return false;
        }
    }

    return true;
}

void tipar() {

    if (verificare()) {
        cout << endl;

        for (int i = 0; i < m; i++) {
            cout << s[i];
        }
    }



}

int valid(int k) {

    for (int i = 0; i < k; i++) {
        if (s[k] == s[i]) {
            return 0;
        }
    }
    return 1;
}

int solutie(int k) {

    if (k == (m - 1)) {
        return 1;
    }
    else {
        return 0;
    }

}

void back(int k) {

    unsigned val;

    for (val = 1; val <= n; val++) {

        s[k] = val;

        if (valid(k)) {

            if (solutie(k)) {
                tipar();
            }
            else {
                back(k + 1);
            }
        }
    }

}

void b() {

    back(0);

}

