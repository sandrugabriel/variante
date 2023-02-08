#pragma once
#include <iostream> 

using namespace std;

/* Utilizând metoda backtracking se generează numerele formate din câte 3 cifre distincte din
mulţimea {1,3,5,7}. Dacă primele trei numere generate sunt, în acestă ordine: 135,
137, 153 care este cel de-al patrulea număr generat? (4p.)
a. 315 b. 173 c. 157 d. 357 */


unsigned n = 4, s[100], m = 3, a[4] = { 1,3,5,7 };

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