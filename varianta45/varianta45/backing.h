#pragma once
#include <iostream> 

using namespace std;

/*1. Utilizând metoda backtracking se generează toate cuvintele de câte 3 litere din mulţimea
{a,b,c}. Dacă primele patru cuvinte generate sunt, în acestă ordine: aaa, aab, aac,
aba, care este cel de-al optulea cuvânt generat? (4p.)
a. acb b. acc c. aca d. bca */
//acb
unsigned n = 3;
char s[100], a[10] = "abc";

void tipar() {

    cout << s << endl;

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

    if (k == (n - 1)) {
        return 1;
    }
    else {
        return 0;
    }

}

void back(int k) {

    unsigned val;

    for (val = 0; val < 3; val++) {

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