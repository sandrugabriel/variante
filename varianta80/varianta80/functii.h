#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*5. Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt cu cel puţin una şi cel mult 20
de litere ale alfabetului englez, construieşte şi afişează pe ecran cuvântul obţinut prin
interschimbarea primei consoane cu ultima vocală din cuvânt. În cazul în care cuvântul este
format numai din vocale sau numai din consoane, programul afişează pe ecran mesajul
IMPOSIBIL. Se consideră vocale literele a, e, i, o, u, A, E, I, O, U.
Exemplu: dacă se citeşte cuvântul Marmorat se va obţine şi afişa cuvântul aarmorMt*/
void frecventa(char s[]) {

    char v[] = "aeiouAEIOU";
    int i, j;
    i = 0;
    while (strchr(v, s[i]) != 0 && i < strlen(s))
        i++;
    j = strlen(s) - 1;
    while (strchr(v, s[j]) == 0 && j >= 0)
        j--;
    if (i >= strlen(s) || j == -1)
        cout << "imposibil";
    else {
        char aux = s[i];
        s[i] = s[j];
        s[j] = aux;
        cout << s;
    }

}

/*3. Fişierul text bac.in conţine cel mult 1000 de numere naturale cu cel mult patru cifre
fiecare, despărţite prin câte un spaţiu. Scrieţi programul C/C++ care citeşte numerele din
fişier şi afişează pe ecran, în ordine crescătoare, acele numere din fişier care au toate cifrele
egale. Dacă fişierul nu conţine niciun astfel de număr, se va afişa pe ecran mesajul NU
EXISTA.
Exemplu: dacă fişierul bac.in conţine numerele: 30 44 111 7 25 5 atunci pe ecran
se va afişa 5 7 44 111. */
void afisare() {

	ifstream f("bac.in");
	int a, frecv[40], i;
	for (i = 0; i < 40; i++)
		frecv[i] = 0;

	while (f >> a) {

		int nrCifre = 0;
		while (a >= 10) {
			if (a % 10 != (a / 10) % 10)
				break;
			nrCifre++;
			a = a / 10;
		}

		if (a < 10) {
			frecv[a + nrCifre * 10]++;
		}
	}


	for (i = 0; i < 40; i++)
		if (frecv[i] != 0) {
			int j = i;
			do {
				cout << i % 10;
				j = j - 10;
			} while (j > 0);
			cout << " ";
		}

}

/*4. a) Scrieţi definiţia completă a unui subprogram divi cu doi parametri, care primeşte prin
intermediul parametrului n un număr natural nenul cu cel mult 6 cifre şi returnează prin
intermediul parametrului d cel mai mic divizor propriu al lui n sau 0 in cazul în care n nu are
niciun divizor propriu. De exemplu, pentru n=15, d va avea valoarea 3. (4p.)
b) Scrieţi programul C/C++ care citeşte de la tastatură un număr natural nenul n
(1<n<1000000) şi afişează pe ecran cel mai mare numar natural mai mic decât n care îl
divide pe n. Se vor folosi apeluri utile ale subprogramului divi.
Exemple: dacă n=120, se afişează pe ecran 60, iar dacă n=43, se afişează 1. */

void divi(int n, int& d) {

	for (d = 2; d <= n / 2; d++)
		if (n % d == 0)
			break;
	if (n / 2 < d)
		d = 0;
}













































