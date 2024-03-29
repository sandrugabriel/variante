﻿#pragma once
#include <iostream> 

using namespace std;


//Un algoritm generează în ordine descrescătoare, toate numerele de n cifre (n<9), cu cifrele
//în ordine strict crescătoare, care nu au două cifre pare alăturate.Dacă pentru n = 5, primele
//cinci soluţii generate sunt 56789, 45789, 45679, 45678, 36789, precizaţi care sunt
//următoarele trei soluţii generate, în ordinea obţinerii lor.

//urmatoarele trei sunt: 35678,35679,35789

unsigned n = 9, s[100], m = 5;

bool verificare() {

    for (int i = 0; i < m - 1; i++)
    {
        if (s[i] > s[i + 1] || s[i] % 2 == 0 && s[i + 1] % 2 == 0) {
            return false;
        }

    }

    if (s[0] == 0) {
        return false;
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

    for (val = 0; val <= n; val++) {

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



