#pragma once
#include <iostream> 

using namespace std;



//Un algoritm de tip backtracking generează, în ordine lexicografică, toate şirurile de 5 cifre 0
//şi 1 cu proprietatea că nu există mai mult de două cifre 0 pe poziţii consecutive.Primele 7
//soluţii generate sunt : 00100, 00101, 00110, 00111, 01001, 01010, 01011. Care este a
//8 - a soluţie generată de acest algoritm ? (4p.)
//a.01110  b.01100  c.01011  d.01101

//raspunsul corect este d.01101

unsigned n = 1, s[100], m = 5;

bool verificare() {

    int ct = 0;

    for (int i = 0; i < m - 1; i++)
    {
        if (s[i] == 1) {
            ct = 0;
        }
        ct++;

        if (ct > 2) return false;

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
            return 1;
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


