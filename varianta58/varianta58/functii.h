#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*5. Scrieţi un program C/C++ care citeşte de la tastatură un şir de cel mult 50 de caractere
(cifre, litere ale alfabetului englez şi spaţii; şirul conţine cel puţin o literă), apoi construieşte
în memorie şi afişează pe ecran şirul de caractere obţinut din şirul citit prin eliminarea tuturor
caracterelor care nu sunt litere.
Exemplu: dacă se citeşte şirul: Voi lua 10 la informatica atunci se va afişa:
Voilualainformatica */
void eliminare(char c[]) {

	char sirNou[51], nonLitere[] = "0123456789 ";

	int i, n = strlen(c), index = 0;
	for (i = 0; i < n; i++)
		if (!strchr(nonLitere, c[i]))
			sirNou[index++] = c[i];

	sirNou[index] = '\0';
	cout << sirNou;


}

/*3. Fişierul text BAC.TXT conţine, pe o singură linie, cel puţin 3 şi cel mult 100 de numere
naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un
spaţiu. Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi scrie
pe ecran, în ordine descrescătoare, cele mai mici 3 numere citite.
Exemplu: dacă fişierul BAC.TXT conţine numerele 1017 48 310 5710 162, atunci se
va afişa: 310 162 48 */
void afisare() {

	ifstream f("bac.txt");
	int a, minim1 = 10000, minim2 = 10000, minim3 = 10000;

	while (f >> a) {

		if (a < minim1) {
			minim3 = minim2;
			minim2 = minim1;
			minim1 = a;

		}
		else if (a < minim2) {
			minim3 = minim2;
			minim2 = a;
		}
		else if (a < minim3) {

			minim3 = a;
		}

	}

	cout << minim3 << " " << minim2 << " " << minim1;



}

/*4. Se consideră subprogramul divizor, care:
– primeşte prin intermediul parametrului a un număr natural strict mai mare decât 1, de cel
mult 4 cifre;
– furnizează prin intermediul parametrului d cel mai mare divizor al lui a strict mai mic decât
a.
a) Scrieţi numai antetul subprogramului divizor. (4p.)
b) Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură un
număr natural nenul x, de cel mult 4 cifre şi, prin apeluri utile ale subprogramului divizor,
verifică dacă x este număr prim. Programul va afişa pe ecran în caz afirmativ mesajul DA, iar
în caz contrar mesajul NU.*/
void divizor(int a, int& d) {

	for (d = a / 2; d >= 1; d--)
		if (a % d == 0)
			return;

}
void afisarea(int x) {

	int d;

	divizor(x, d);
	if (d == 1)
		cout << "DA";
	else
		cout << "NU";


}