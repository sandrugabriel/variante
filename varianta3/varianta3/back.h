#pragma once
#include <iostream>

using namespace std;

//Utilizând metoda backtracking se generează în ordine lexicografică cuvintele de câte patru
//litere din mulţimea A = { a,b,c,d,e }, cuvinte care nu conţin două vocale alăturate.Primele
//opt cuvinte generate sunt, în ordine : abab, abac, abad, abba, abbb, abbc, abbd, abbe.
//Care este penultimul cuvânt generat ?
//a.edec  b.eded  c.edde  d.edcb

//Raspunsul corect este: a. edec


unsigned n = 4;
char s[100];
char multimea[100] = "";

void formMult() {

    for (int i = 0; i < 5; i++) {
        multimea[i] = 97 + i;
    }


}

bool vocala(char a) {

    char vol[100] = "aeiou";

    for (int i = 0; i < strlen(vol) - 1; i++) {
        if (a == vol[i]) {
            return true;
        }
    }

    return false;
}

bool verificare3() {

    for (int i = 0; i < strlen(s) - 1; i++) {

        if (vocala(s[i]) && vocala(s[i + 1])) {
            return 0;
        }

    }


    return 1;
}

void tipar() {

    if (verificare3()) {
        cout << s << endl;
    }
}

int solutie(int k) {

    if (k == (n - 1)) {
        return 1;
    }
    else {
        return 0;
    }

}

void back(int k) {

    unsigned val;

    for (val = 0; val < 5; val++) {

        s[k] = multimea[val];

        if (solutie(k)) {
            tipar();
        }
        else {
            back(k + 1);
        }

    }

}

void pb() {

    formMult();
    back(0);

}

