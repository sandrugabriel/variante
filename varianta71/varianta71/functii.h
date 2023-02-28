#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi programul C/C++ care citeşte de la tastatură, separate prin Enter, două şiruri de
caractere: un şir s de maximum 255 de caractere, care pot fi litere ale alfabetului englez şi
spaţii, apoi un şir c de maximum 20 de caractere. Programul va înlocui în şirul s toate
apariţiile şirului c cu un şir de exact aceeaşi lungime efectivă cu c, format doar din caractere
*, ca în exemplu. Şirul s obţinut în urma acestei prelucrări va fi afişat pe ecran. În cazul în
care c nu apare în s, programul va afişa mesajul NU APARE.
Exemplu: dacă şirul S citit este Din departare se vede tare iar c este tare
atunci pe ecran se va afişa: Din depar**** se vede **** */
void inlocuire(char s[],char c[]) {

    if (strstr(s, c) == 0)
        cout << "NU APARE";
    else {
        while (strstr(s, c) != 0) {
            char* p = strstr(s, c);
            for (int i = 0; i < strlen(c); i++)
                p[i] = '*';
        }
        cout << s;
    }

}

/*3. Un număr natural se numeşte palindrom dacă numărul citit de la stânga la dreapta este egal
cu numărul citit de la dreapta la stânga.
a) Scrieţi definiţia completă a subprogramului Palindrom care primeşte prin intermediul
parametrului n un număr natural de cel mult nouă cifre şi returnează 1 dacă acesta este
palindrom şi 0 în caz contrar. (10p.)
b) Fişierul text NUMERE.IN conţine cel mult 100000 numere naturale de cel mult nouă cifre
fiecare, numerele fiind despărţite prin câte un spaţiu. Cel puţin unul dintre numere este
palindrom.
Scrieţi programul C/C++ care citeşte numerele din fişierul NUMERE.IN şi, folosind apeluri
utile ale subprogramului Palindrom determină în mod eficient, din punct de vedere al
memoriei utilizate şi al timpului de executare, care este cel mai mare număr palindrom citit şi
de câte ori apare el în fişierul NUMERE.IN. Programul scrie în fişierul text NUMERE.OUT
numărul astfel determinat precum şi numărul de apariţii ale acestuia, pe rânduri diferite.
Exemplu: dacă NUMERE.IN conţine numerele:
23 565 78687 7887 7865 78687 7887 23 78687 98798
atunci NUMERE.OUT va conţine:
78687
3 (6p.)
c) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul b, explicând în
ce constă eficienţa ei (3 – 4 rânduri). */

int Palindrom(int n) {


	int oglindit = 0, copieN = n;
	while (n > 0) {
		oglindit = oglindit * 10 + n % 10;
		n = n / 10;
	}

	if (copieN == oglindit)
		return 1;

	return 0;

}
void afisarea() {

	ifstream f("NUMERE.IN");
	ofstream g("NUMERE.OUT");
	int a, maxim = -1, nrAparitii = 0;

	while (f >> a) {
		if (Palindrom(a)) {
			if (a > maxim) {
				maxim = a;
				nrAparitii = 1;
			}
			else if (a == maxim) {
				nrAparitii++;
			}
		}
	}

	g << maxim << '\n' << nrAparitii;



}



























































