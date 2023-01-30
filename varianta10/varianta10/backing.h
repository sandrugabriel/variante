#pragma once
#include <iostream> 

using namespace std;



//Un elev a scris un program care, folosind metoda backtracking, generează toate numerele
//de câte 5 cifre, cifrele fiind în ordine strict crescătoare.Scrieţi toate numerele generate de
//program care au prima cifră 5.


unsigned n = 9, s[100], m = 5;

bool verificare() {


    for (int i = 0; i < m - 1; i++)
    {
        if (s[i] > s[i + 1]) {
            return false;
        }
    }

    if (s[0] == 5)
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


