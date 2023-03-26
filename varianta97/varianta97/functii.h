#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Se consideră un tablou bidimensional cu n linii şi m coloane (1≤n≤24, 1≤m≤24) ce
memorează numere întregi cu cel mult două cifre fiecare. Scrieţi un program în limbajul
C/C++ care citeşte de la tastatură valorile n, m şi elementele tabloului, şi care inversează
ordinea elementelor în cadrul fiecărei coloane, ca în exemplu. Programul va afişa pe ecran,
pe n linii, matricea obţinută după inversare, elementele fiecărei linii fiind separate prin câte
un spaţiu. (10p.)
Exemplu: pentru n=4, m=3 şi matricea:
1 7 3
4 5 6
7 8 9
3 4 5
 Pe ecran se va afişa:
 3 4 5
 7 8 9
 4 5 6
 1 7 3 */
void generare(int n, int m, int a[100][100]) {

	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

/*3. Tabloul unidimensional V, declarat global, memorează exact 50 de numere întregi:
V1, V2,...,V50.
Subprogramul Calcul primeşte prin intermediul parametrului k un număr natural nenul
(k≤50) şi furnizează prin intermediul parametrului S suma tuturor elementelor pozitive, din
tabloul V, cu indici mai mari sau egali cu k sau 0 dacă toate elementele menţionate sunt
negative.
a) Scrieţi doar antetul subprogramului Calcul. (2p.)
b) Scrieţi un program în limbajul C/C++ care citeşte de la tastatură cele 50 de componente
întregi ale tabloului V şi două numere naturale nenule x şi y (x<y≤50). Programul afişează
suma elementelor pozitive din tablou, cu indici cuprinşi între x şi y inclusiv, sau 0 dacă toate
elementele menţionate sunt negative, folosind apeluri utile la subprogramul Calcul.*/
unsigned V[51];
void Calcul(int k, int& S) {


	for (int i = 0; i < 50; i++) {

		if (V[i] >= k && V[i] >= 0) {
			S += V[i];
		}
	}
}
void sumaInterval(int x, int y) {

	int s = 0;

	for (int i = x; i <= y; i++) {

		Calcul(y, s);

	}

	cout << s;
}










































