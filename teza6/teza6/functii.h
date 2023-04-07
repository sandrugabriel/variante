#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de suspenzie astfel incate in
urma executari secventei obtinute, tabloul memorat in variabila A sa aiba elementele din figura de mai jos.
1 6  11 16 21
2 7  12 17 22
3 8  13 18 23
4 9  14 19 24
5 10 15 20 25
*/
void generare() {
	int a[100][100]{};
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			if (j == 1) {
				a[i][j] = i;
			}
			else {
				a[i][j] = a[i][j - 1] + 5;
			}
		}
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

/*Se citeste de la tastatura un sir de carcatere format din cel putin 100 de caractere si afiseaza pe ecran lungimena maxima
a unui cuvant si numarul cuvintelor de lungime maxima din sir
Ex: eu dau bacalaureat la informatica atunci pe ecran se va afisa 11 2.
*/
void contor(char s[]) {

   /*
    int ct = 0;
    char s1[100] = "";
    for (int i = 0; i < strlen(s); i++) {
        s1[i] = s[i];
    }

    char* p;

    p = strtok(s, " ");

    while (p != NULL) {

        if (ct < strlen(p)) {
            ct = strlen(p);
        }

        p = strtok(NULL, " ");
    }

    int ct2 = 0;

    char* a;

    a = strtok(s1, " ");

    while (a != NULL) {
        if (ct == strlen(a)) {
            ct2++;
        }

        a = strtok(NULL, " ");
    }

    cout << ct << " " << ct2;
    */
}

/*
Subprogramul divizor are doi parametri n, prin care primeste un numar natural si un parametre a, prin care primeste un tablou
unidimesional care memoreaza un sir de n numere naturale. Subprogramul returneza cel mai mare divizor comun al celor n numere
naturale din tablou.
Ex: daca n=4 si tabloul memoreaza varlorile 60 45 30 10 atunci, dupa apel, subprogramul va returna valoarea 5.
*/
int divizor(int n, int v[]) {

    int a = v[0];

    for (int i = 1; i <= n; i++) {
        int x = a;
        int y = v[i];

        while (y)
        {
            int r = x % y;
            x = y;
            y = r;
        }
        a = x;
    }


    return a;
}

/*Un numar natural N este p-compus, daca se poate scrie ca suma de p numere naturale consecutive. Se citeste din fisierul bac.txt
de pe prima linie un numar natural p si de pe urmatoarele linii un sir S cu cel mult 100 000 de numerenaturale cu cel mult 9 cifre
sa se afiseze pe ecran pe aceeasi linie separate printr-un spatiu, primul numar din suma, daca numarul din sir este p-compus
sau mesajul NU in caz contrar.*/
int sumaCif(int n) {

    int s = 0;

    while (n!=0)
    {
        int c = n % 10;

        s += c;

        n /= 10;
    }

    return s;
}
void afisarea() {

    ifstream f("bac.txt");

    int p, s[100]{};

    f >> p;

    int i = 0;

    while (f>>s[i])
    {

        if (sumaCif(s[i]) == p) {
            cout << s[i] << " ";
        }
        else
        {
            cout << "NU" << " ";
        }

    }

}

























