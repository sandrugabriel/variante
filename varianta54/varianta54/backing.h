﻿#pragma once
#include <iostream> 
#include <string.h>

using namespace std;


/*1. Utilizând metoda backtracking se generează în ordine lexicografică toate anagramele
cuvântului caiet ( cuvinte formate din aceleaşi litere, eventual în altă ordine). Care este a
şasea soluţie? (4p.)
a. catei b. actie
c. actei d. catie*/

char s[100], a[10] = "caiet";

void tipar() {

    cout << s << endl;

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

    if (k == (strlen(a) - 1)) {
        return 1;
    }
    else {
        return 0;
    }

}

void back(int k) {

    unsigned val;

    for (val = 0; val < 4; val++) {

        s[k] = a[val];

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