#pragma once
#include "functii.h"


/*Fara a utiliza alte variabile, screti una sau mai multe instructuini care pot inlocui punctele de suspensie.
1  2  3  4  5
10 9  8  7  6
11 12 13 14 15
16 17 18 19 20
25 24 23 22 21
*/
void solutia1() {

	generare();

}

/*Se citeste de la tastatura doua siruri de caractere S si C de aceeasi lungime, S este format sin litere mici, iar sirul C este format din cifre
    programul codifica sirul S, inlocuind fiecare litera S[i] din sir cu litera din alfabet aflata la distanta c[i], daca sirul literelor se termina, se reia de la
    litera a. Sirul astfel obtinut se afiseaza pe ecran.
    Ex: se citesc sirurile info 3212 atunci se va afisa sirul lpgr;*/
void solutia2() {

    char s[100] = "info", c[100] = "3212";

    for (int i = 0; i < strlen(s); i++) {
        int cif = c[i] - 48;
        cout << char(s[i] + cif);

    }

}

/*Subprogramul permuta are trei parametri: un parametru n, prin care primeste un numar natural, un parametru a, prin care primestre
un tablou unidimensional care memoreaza un sir de n numere nat, parametru k prin care primeste un nuamr nat. Subprogramul
permuta circular la stanga cu k pozitii cele n numere nat.
Ex: n=4,k=2 si tabloul memoreaza valorile 60 45 30 10 atunci, dupa apel tabloul va memora 30 10 60 45
*/
void solutia3(){

    int n = 4, k = 2, a[100] = { 60, 45, 30, 10 };
    permuta(n, a, k);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
}

/*Se citeste din fisierul bac.in un sir S cu cel mult 100 00 de numere naturale , unde k este un numar natural din intervalul
[0,9], programul afiseaza in fisireul bac.out elemenetele sirului S in ordine crescatoare.
Ex: bac.in contine nr. 100 10 100 1 10 atunci in fisierul bac.out vor fi afisate valorile 1 10 10 100 100.
*/
void solutia4() {

    crescator();

}





























