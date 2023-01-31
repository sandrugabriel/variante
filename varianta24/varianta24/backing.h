#pragma once
#include <iostream> 

using namespace std;

//Generând şirurile de maximum 3 caractere distincte din mulţimea {A,B,C,D,E}, ordonate
//lexicografic, obţinem succesiv : A, AB, ABC, ABD, ....Ce şir va fi generat imediat după BAE ? (4p.)
//a.BCA b.CAB
//c.BC d.BEA

//raspunsul corect este a.BCA;

unsigned n = 3;
char s[100], a[10] = "ABCDE";

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

