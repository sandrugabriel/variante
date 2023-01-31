#pragma once
#include <iostream> 

using namespace std;

//Pentru generarea numerelor cu n cifre formate cu elementele mulţimii {0,4,8} se
//utilizează un algoritm backtracking care, pentru n = 2, generează, în ordine, numerele
//40, 44, 48, 80, 84, 88.
//Dacă n = 4 şi se utilizează acelaşi algoritm, care este numărul generat imediat după numărul 4008 ? (4p.)
//a. 4040 b. 4004 c. 4080 d. 8004

//raspunsul corect este a.4040

unsigned n = 3, s[100], m = 4, a[3] = { 0,4,8 };

bool verificare() {

    if (s[0] != 0)
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

    for (val = 0; val < n; val++) {

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

void b() {

    back(0);

}

