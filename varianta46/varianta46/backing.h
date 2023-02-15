#pragma once
#include <iostream> 

using namespace std;

/*Un program generează, în ordine crescătoare, numerele naturale de exact 5 cifre din
mulţimea {1, 2, 3, 4, 5}. Fiecare dintre numerele generate are cifrele distincte două câte
două. Primele 3 numere astfel generate sunt: 12345, 12354, 12435. Care este numărul
generat imediat după 12543? (4p.)
a. 15342 b. 12534 c. 13245 d. 13452 
*/


unsigned n = 5, s[100], m = 5, a[5] = { 1,2,3,4,5 };

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