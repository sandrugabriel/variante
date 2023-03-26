#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi un program în limbajul C/C++ care citeşte de la tastatură două şiruri, formate fiecare
din cel mult 20 de caractere. Primul şir reprezintă numele unei persoane, iar al doilea şir
reprezintă prenumele aceleiaşi persoane. Atât numele cât şi prenumele sunt formate numai
din litere ale alfabetului englez şi fiecare conţine cel puţin o consoană. Programul
construieşte în memorie şi afişează pe ecran un al treilea şir de caractere, care conţine
consoanele din prenumele citit dispuse în ordinea în care apar în prenume urmate de exact
un spaţiu şi de numele citit.
Exemplu: dacă primul şir citit este Popescu, iar al doilea este Vasile
se va construi şi apoi se va afişa pe ecran şirul
Vsl Popescu */
void elim(char b[], int poz) {

    for (int i = poz; i < strlen(b); i++) {
        b[i] = b[i + 1];
    }

}
void schimbare(char a[], char b[], char c[]) {

    char voc[100] = "aeiou";

    for (int i = 0; i < strlen(b); i++) {
        for (int j = 0; j < strlen(voc); j++) {
            if (b[i] == voc[j]) {
                elim(b, i);
            }
        }


    }

  //  strcpy(c, b);
  //  strcat(c, " ");
 //   strcat(c, a);

    cout << c;
}

/*3. Funcţia verif primeşte prin intermediul a trei parametri, notaţi a, b şi c, trei valori naturale
nenule, fiecare de maximum patru cifre. Funcţia returnează valoarea 1 dacă cele trei valori
pot constitui laturile unui triunghi şi valoarea 0 în caz contrar.
a) Scrieţi definiţia completă a funcţiei verif. (5p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură şase valori naturale nenule, fiecare
de maximum patru cifre, apoi verifică, utilizând apeluri utile ale funcţiei verif, dacă primele
trei numere citite pot constitui laturile unui triunghi şi dacă ultimele trei numere citite pot
constitui laturile unui triunghi; în caz afirmativ, programul afişează pe ecran mesajul
congruente dacă cele două triunghiuri sunt congruente sau mesajul necongruente dacă
cele două triunghiuri nu sunt congruente; dacă cel puţin unul dintre cele două triplete de
valori nu pot constitui laturile unui triunghi, programul va afişa pe ecran mesajul nu. (5p.)
*/
int verif(int a, int b, int c) {

    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }

    return 1;
}
void afisare(int v[]) {

    int l1, l2, l3,l4,l5,l6;
    l1 = v[0], l2 = v[1], l3 = v[2];
    l4 = v[3], l5 = v[4], l6 = v[5];

    if (!verif(l1, l2, l3) || !verif(l4,l5,l6)) {
        cout << "nu";
        return;
    }

    if (l1 == l4 && l2 == l5 && l3 == l6) {
        cout << "congruente";
    }
    else
    {
        cout << "necongruente";
    }

}

/*Fişierul BAC.DAT conţine pe prima linie, separate printr-un spaţiu, două valori naturale n şi m
(2≤n≤1000, 2≤m≤1000), pe a doua linie n valori întregi şi pe a treia linie m valori întregi.
Valorile de pe a doua şi de pe a treia linie apar în fişier în ordine strict crescătoare, sunt
separate prin câte un spaţiu şi au cel mult 4 cifre fiecare.
Se cere afişarea pe ecran a două valori, dintre cele aflate în poziţii consecutive pe a treia
linie a fişierului, care determină intervalul închis în care se află un număr maxim de valori de
pe a doua linie a fişierului. Se va utiliza o metodă eficientă din punct de vedere al timpului de
executare şi al spaţiului de memorie utilizat. Se garantează că cel puţin un număr aflat pe a
doua linie a fişierului aparţine unuia dintre intervalele determinate de numerele de pe a treia
linie a fişierului.
Exemplu: dacă fişierul BAC.DAT are conţinutul
alăturat
10 4
-1 1 3 4 5 6 10 15 16 117
0 1 9 20
, programul va afişa: 1 9

Explicaţie: cele patru numere de pe a treia linie a fişierului determină trei intervale:
[0,1], [1,9], [9,20]; în intervalul [1,9] se află 5 valori de pe a doua linie a fişierului,
acesta fiind numărul maxim de valori aflate în unul dintre cele trei intervale.
4.
a) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
b) Scrieţi un program C/C++ care să rezolve problema conform metodei descrise. */
void afisarea() {

    ifstream f("BAC.DAT");
    int n, m, v[100]{}, t[100]{};
    f >> n >> m;

    for (int i = 0; i < n; i++)
        f >> v[i];

    for (int i = 0; i < m; i++)
        f >> t[i];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (t[i] == v[i]) {
                cout << t[i] << " " << t[i + 1];
                return;
            }
        }
    }



}




































































