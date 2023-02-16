#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi un program C/C++ care citeşte de la tastatură un şir de caractere format din
maximum 10 caractere, reprezentând un număr real în care partea întreagă este separată
de partea zecimală prin caracterul punct. Programul afişează pe ecran valoarea obţinută
prin adunarea numărului corespunzător părţii întregi şi a numărului corespunzător părţii
zecimale ale datei citite.
Exemplu: dacă se citeşte de la tastatură şirul de caractere 120.456 atunci se va afişa
576, iar dacă se citeşte de la tastatură şirul de caractere 121.090 atunci se va afişa 130*/
void afis(char s[]) {

    int a = 0, b = 0,i = 0;

    while (s[i] != '.') {
        a = a * 10 + (s[i] - '0');
        i++;
    }
    i++;
    while (s[i] != '\\0') {
        b = b * 10 + (s[i] - '0');
        i++;
    }
    while (b % 10 == 0)
        b = b / 10;
    cout << a + b;
}

/*Se consideră subprogramul cifre, care primeşte prin intermediul primului parametru, a, un
număr natural cu maximum 8 cifre nenule şi returnează, prin intermediul celui de-al doilea
parametrul b, cel mai mic număr care se poate forma cu toate cifrele distincte ale lui a.
a) Scrieţi definiţia completă a subprogramului cifre. (4p.)
b) Se consideră fişierul text date.in ce conţine pe prima linie un număr natural nenul n
(n≤100), iar pe a doua linie n numere naturale, separate prin câte un spaţiu, fiecare număr
având maximum 8 cifre nenule. Scrieţi un program C/C++ care citeşte toate numerele din
fişierul text date.in şi afişează pe ecran, despărţite prin câte un spaţiu, numerele situate
pe a doua linie a fişierului, formate numai din cifre distincte ordonate strict crescător,
folosind apeluri utile ale subprogramului cifre. În cazul în care nu există niciun astfel de
număr se va afişa valoarea 0.
Exemplu: dacă fişierul date.in are conţinutul
alăturat, atunci se vor afişa numerele: 16 269 (6p.)
6
16 175 333 242477 321 269
*/
void cifre(int a, int& b) {

	b = 0;
	int frecv[10], i, areZero = 0;
	for (i = 0; i < 10; i++)
		frecv[i] = 0;
	while (a > 0) {
		frecv[a % 10]++;
		a = a / 10;
	}
	if (frecv[0]) areZero = 1;
	for (i = 1; i < 10; i++)
		if (frecv[i] != 0) {
			if (areZero) {
				b = (b * 10 + i) * 10;
				areZero = 0;
			}
			else {
				b = b * 10 + i;
			}
		}

}
void afisare() {

	ifstream f("date.in");
	int n, a, i, exista = 0;
	f >> n;

	for (i = 0; i < n; i++) {
		int numarCifreDist;
		f >> a;
		cifre(a, numarCifreDist);
		if (a == numarCifreDist) {
			cout << a << " ";
			exista = 1;
		}
	}

	if (exista == 0)
		cout << 0;
}

/*4. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤100)
şi 2*n numere naturale de maximum 3 cifre; primele n reprezintă elementele tabloului
unidimensional a, iar următoarele n elementele tabloului unidimensional b; fiecare tablou
are elementele numerotate începând de la 1. Programul construieste în memorie şi
afişează pe ecran, cu spaţii între ele, cele n elemente ale unui tablou unidimensional c, în
care orice element ci (1≤i≤n) se obţine conform definiţiei următoare:
ci = ┌ ai concatenat cu bi, dacă ai<bi
	 └ bi concatenat cu ai, altfel
Exemplu: dacă se citesc n=3, a=(12,123,345) şi b=(1,234,15), atunci se afişează
elementele tabloului c astfel:
112 123234 15345*/
int putere(int n) {
	int p = 1;
	while (n) {
		p = p * 10;
		n = n / 10;
	}
	return p;
}
void afisarea(int n,int a[], int b[]) {
	
	int c[100];
	for (int i = 1; i <= n; i++)
		if (a[i] < b[i])
			c[i] = a[i] * putere(b[i]) + b[i];
		else
			c[i] = b[i] * putere(a[i]) + a[i];
	for (int i = 1; i <= n; i++)
		cout << c[i] << " ";
}




























