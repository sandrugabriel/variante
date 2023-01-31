#pragma once
#include <iostream> 

using namespace std;


//Utilizând metoda backtracking sunt generate numerele de 3 cifre, având toate cifrele
//distincte şi cu proprietatea că cifrele aflate pe poziţii consecutive sunt de paritate diferită.
//Ştiind că primele şase soluţii generate sunt, în această ordine, 103, 105, 107, 109, 123,
//125, care este a zecea soluţie generată ? (4p.)
//a.145  b.147  c.230  d.149

//raspunsul corect este a.145

unsigned n = 3, s[1000];

bool pozDifPari() {


    for (int i = 0; i < n; i++) {
        if (i % 2 == s[i] % 2) {
            return false;
        }
    }

    return true;
}

void tipar() {

    if (pozDifPari()) {
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << s[i] << " ";
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

    if (k == (n - 1)) {
        return 1;
    }
    else {
        return 0;
    }

}

void back(int k) {

    unsigned val;

    for (val = 0; val <= 9; val++) {

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

