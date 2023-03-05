#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;


/*5. Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt de maximum 20 de litere şi
minimum o literă şi afişează pe ecran toate cuvintele obţinute din cuvântul citit prin
eliminarea primei şi a ultimei litere. Prima prelucrare se referă la cuvântul citit, iar
următoarele la cuvântul rezultat din prelucrarea anterioară. Procedeul de eliminare şi afişare
se va repeta până când se obţine cuvântul vid, ca în exemplu. Fiecare cuvânt obţinut se va
afişa pe câte o linie a ecranului.
Exemplu: dacă se citeşte cuvântul bacalaureat, se va afişa:
bacalaureat
acalaurea
calaure
alaur
lau
a*/

void elim(char s[], int poz) {

	for (int i = poz; i < strlen(s) - 1; i++) {
		s[i] = s[i + 1];
	}
	s[strlen(s) - 1] = '\0';
}
void eliminare(char s[]) {

	for (int i = 0; i <= strlen(s) / 2 + 3; i++) {

		//strcpy(s, s + 1);
		elim(s, strlen(s) - 1);
		cout << s << endl;
	}


}

/*3. Scrieţi definiţia completă a unui subprogram s cu trei parametri care primeşte prin
intermediul parametrului n un număr natural de maximum 9 cifre, prin intermediul
parametrului c o cifră şi furnizează prin intermediul parametrului k numărul de cifre ale
numărului n care aparţin intervalului [c-1,c+1].
Exemplu: pentru n=1233 şi c=3, k va avea valoarea 3, iar pentru n=650 şi c=3, k va
avea valoarea 0. */
void s(int n, int c, int& k) {
	k = 0;
	while (n!=0)
	{
		int cif = n % 10;
		if (c - 1 <= cif && cif <= c+1 ) {
			k++;
		}
		n /= 10;
	} 

	
}

/*4. Fişierul BAC.TXT are pe prima linie două numere naturale n şi m (0<n<1000, 0<m<1000)
separate prin câte un spaţiu, pe linia a doua n numere întregi ordonate strict crescător, iar
pe linia a treia m numere naturale distincte. Numerele din fişier aflate pe linia a doua şi a
treia au cel mult 6 cifre fiecare şi sunt despărţite în cadrul liniei prin câte un spaţiu. Să se
scrie un program care citeşte toate numerele din fişier şi afişează pe ecran, despărţite prin
câte un spaţiu, toate numerele de pe a doua linie a fişierului care apar cel puţin o dată şi pe
linia a treia a acestuia.
Exemplu: dacă fişierul are următorul conţinut:
6 5
2 3 4 5 8 9
4 5 2 11 8
atunci se va afişa: 5 2 8, nu neapărat în această ordine.*/
void afisarea() {

	ifstream f("BAC.TXT");
	int n, m,a[100],b[100];
	f >> n >> m;
	int dim1 = n;
	for (int i = 0; i < dim1; i++) {
		f >> a[i];
	}


	int dim2 = m;
	cout << endl;
	for (int i = 0; i < dim2; i++) {
		f >> b[i];
			
	}

	int frecv[10]{};

	for (int i = 0; i < dim1; i++) {
		frecv[a[i]]++;
	}

	for (int i = 0; i < dim2; i++) {
		frecv[b[i]]++;
	}

	for (int i = 0; i < 9; i++) {

		if (frecv[i] > 1) {
			cout << i << " ";
		}

	}

}












