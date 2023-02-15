#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt s de cel mult 20 litere mici ale
alfabetului englez, construieşte în memorie şi afişează pe ecran cuvântul s după eliminarea
primei şi a ultimei vocale. Cuvântul s conţine cel puţin două vocale şi cel puţin o consoană. Se
consideră vocale literele: a, e, i, o, u.
Exemplu: dacă se citeşte cuvântul bacalaureat, pe ecran se afişează: bcalauret */
void eliminarea(char s[]) {

	char dupaEliminare[19], vocale[] = "aeiou";
	int n = strlen(s), pozV = -1, index = 0;
	for (int i = 0; i < n; i++) {
		//if (strchr(vocale, s[i])) {
			if (pozV == -1) {
				pozV = i;
				continue;
			}
			pozV = i - 1;
	//	}
		dupaEliminare[index++] = s[i];

	}
	dupaEliminare[index] = '\0';
	//strcpy(dupaEliminare + pozV, dupaEliminare + pozV + 1);

	cout << dupaEliminare;




}

/*Se consideră subprogramul divxy care primeşte prin parametrii x şi y două valori întregi
pozitive (0<x<1000 şi 0<y<1000) şi returnează valoarea 1 dacă y este divizor al lui x sau x
este divizor al lui y şi returnează valoarea 0 în caz contrar.
a) Scrieţi definiţia completă a subprogramului divxy. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură trei numere naturale nenule a, b şi
n, cu cel mult 3 cifre fiecare şi care afişează pe ecran toţi divizorii lui n din intervalul închis
determinat de a şi b folosind apeluri utile ale subprogramului divxy. Intervalul închis
determinat de a şi b este [a,b] dacă a<b sau [b,a] dacă b≤a. Numerele afişate sunt
separate prin câte un spaţiu. Dacă nu există niciun astfel de număr se afişează mesajul NU
EXISTA.
Exemplu: pentru a=85, b=10 şi n=40 se afişează: 10 20 40 (nu neapărat în această
ordine). */
int divxy(int x, int y) {


	if (x % y == 0 || y % x == 0)
		return 1;

	return 0;

}

/*4. Fişierul bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua linie,
separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare.
Scrieţi un program C/C++ care determină şi scrie în fişierul bac.out, toate numerele, citite de
pe a doua linie a fişierului bac.in, care apar de cel puţin două ori. Numerele determinate se
vor scrie în ordine crescătoare, pe aceeaşi linie, separate prin câte un spaţiu.
Exemplu: dacă fişierul bac.in conţine pe prima linie numărul 11, iar pe linia a doua
valorile 23 12 54 12 78 345 67 23 78 934 23
atunci fişierul bac.out va conţine: 12 23 78 */


void afisarea() {

ifstream f("bac.in");
ofstream g("bac.out");

	int n, v[5000];
	f >> n;
	for (int i = 0; i < n; i++)
		f >> v[i];
	int sortat;
	do {
		sortat = 1;
		for (int i = 0; i < n - 1; i++)
			if (v[i] > v[i + 1]) {

				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = 0;
			}
	} while (sortat == 0);

	if (n >= 2) {
		if (v[0] == v[1])
			g << v[0] << " ";
		for (int i = 1; i < n - 1; i++) {
			if (v[i] != v[i - 1] && v[i] == v[i + 1])
				g << v[i] << " ";

		}
	}

}































































































