#pragma once
#include <iostream> 

using namespace std;


/*Utilizând metoda backtracking se generează toate permutările mulţimii {1,2,3,4}. Dacă
primele trei permutări generate sunt, în acestă ordine: 1234, 1243, 1324 precizaţi care
este permutarea generată imediat după 3412. (4p.)
a. 3214 b. 3413 c. 4123 d. 3421 
*/

unsigned n = 4, s[100], m = 4, a[4] = { 1,2,3,4 };

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