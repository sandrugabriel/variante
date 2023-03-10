#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi programul C/C++ care citeşte de la tastatură un text cu cel mult 100 de caractere
(doar litere ale alfabetului englez şi spaţii), construieşte în memorie şi apoi afişează pe
ecran şirul de caractere obţinut din şirul iniţial, în care se inserează după fiecare vocală
caracterul *. Se consideră vocale literele a, e, i, o, u, A, E, I, O, U. Dacă textul citit nu
conţine vocale, se va afişa mesajul FARA VOCALE.
Exemplu: dacă se citeşte de la tastatură textul Examenul de bacalaureat se va obţine
şi afişa: E*xa*me*nu*l de* ba*ca*la*u*re*a*t. */
void inserare(char s[]) {

    char v[] = "aeiouAEIOU", aux[200];
    int i;
    for (i = 0; i < strlen(s); i++)
        if (strchr(v, s[i])) {
       /////     strcpy(aux, s + i);
       //     strcpy(s + i + 1, aux);
            s[i + 1] = '*';
        }
    cout << s;


}

/*3. Scrieţi definiţia completă a subprogram max, cu trei parametri, a, b, c, care primeşte prin
intermediul parametrilor a şi b două numere reale cu exact două cifre la partea întreagă şi
exact două zecimale fiecare. Subprogramul determină cel mai mare număr real dintre
următoarele patru valori: a, b şi numerele reale obţinute din a şi b prin interschimbarea
părţii întregi cu partea fracţionară în cadrul aceluiaşi număr. Această valoare este furnizată
prin intermediul parametrului real c.
Exemplu: dacă a=33.17 şi b=15.40, c va avea valoarea 40.15 (cea mai mare valoare
dintre 33.17, 15.40, 17.33 şi 40.15) */
void max(float a, float b, float& c) {

	float a2 = (int)(a * 1000) % 1000 / 10 + (int)a / 100.0;
	float b2 = (int)(b * 1000) % 1000 / 10 + (int)b / 100.0;
	c = a;
	if (a2 > c)
		c = a2;
	if (b > c)
		c = b;
	if (b2 > c)
		c = b2;

}

/*4. Se citeşte de pe prima linie a fişierului numere.in un număr natural n (0<n<10000) şi, de
pe a doua linie a fişierului, n numere naturale din intervalul [1,100] şi se cere să se
afişeze pe ecran, despărţite prin câte un spaţiu, numărul sau numerele întregi din intervalul
[1,100] care nu apar printre numerele citite. Dacă pe a doua linie a fişierului apar toate
numerele din intervalul precizat, se va afişa mesajul NU LIPSESTE NICIUN NUMAR.
Alegeţi un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
Exemplu: pentru fişierul numere.in cu următorul conţinut
12
4 2 3 1 6 5 7 8 9 11 10 100
se vor afişa valorile 12 13 … 99. */
void afisarea() {

	ifstream f("numere.in");
	int n, ok = 0, frecv[101], i;
	f >> n;

	for (i = 1; i <= 100; i++)
		frecv[i] = 0;
	for (i = 0; i < n; i++) {
		int a;
		f >> a;
		frecv[a] = 1;
	}

	for (i = 1; i <= 100; i++)
		if (frecv[i] == 0) {
			cout << i << " ";
			ok = 1;
		}

	if (ok == 0)
		cout << "NU LIPSESTE NCIUN NUMAR";

}






















