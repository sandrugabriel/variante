#pragma once
#include <iostream> 
#include <string.h>

using namespace std;



//Utilizând metoda backtracking se generează permutările cuvântului info. Dacă primele trei
//soluţii generate sunt : fino, fion, fnio care este cea de - a cincea soluţie ? (4p.)
//a.foin b.fnoi c.foni d.ifon

//raspunsul corect este d.ifon

char s[100], a[10] = "info";

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

void b() {

    back(0);

}



