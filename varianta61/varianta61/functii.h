#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n≤15) şi
construieşte în memorie o matrice pătrată cu n linii şi n coloane în care ultima linie conţine,
în ordine, numerele 1,2,3,..,n, elementele situate deasupra diagonalei principale sunt
nule şi oricare alt element este obţinut prin însumarea elementelor vecine cu el, aflate pe
linia imediat următoare, pe aceeaşi coloană cu el sau pe una din coloanele alăturate.
Programul va afişa pe ecran matricea obţinută pe n linii, elementele fiecărei linii fiind
separate prin câte un spaţiu.
Exemplu: pentru n=4 pe ecran se va afişa:
 (10p.)
27 0 0 0
9 18 0 0
3 6 9 0
1 2 3 4 */
void generare(int n) {

	int a[15][15], i, j;

	for (i = 0; i < n; i++)
		a[n - 1][i] = i + 1;

	for (i = n - 2; i >= 0; i--) {
		a[i][0] = a[i + 1][0] + a[i + 1][1];
		for (j = 1; j < n; j++)
			if (j <= i)
				a[i][j] = a[i + 1][j - 1] + a[i + 1][j] +
				a[i + 1][j + 1];
			else
				a[i][j] = 0;
	}


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}

}

/*3. Subprogramul cifra primeşte prin parametrul x un număr real nenul pozitiv şi furnizează
prin parametrul y valoarea cifrei unităţilor părţii întregi a lui x.
Exemplu: dacă x=34.567, după apel y=4.
a) Scrieţi definiţia completă a subprogramului cifra. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură două numere reale cu cel mult două
zecimale, numere reprezentând mediile semestriale obţinute de un elev. Programul stabileşte,
folosind apeluri utile ale subprogramului cifra, dacă cele două medii citite se află în aceeaşi
categorie de medii sau nu. Precizăm că orice medie, în funcţie de intervalul în care se
încadrează, face parte din una dintre categoriile: [3,3.99], [4,4.99], [5,5.99],
[6,6.99], [7,7.99], [8,8.99] sau [9,10]. În cazul în care ambele medii fac parte din
aceeaşi categorie, programul va afişa mesajul Da, altfel va afişa mesajul Nu.*/
void cifra(float x, int& y) {

	y = (int)x % 10;

}
void afiare(float x, float y) {
int cifraUnitatiX, cifraUnitatiY;
	cifra(x, cifraUnitatiX);
	cifra(y, cifraUnitatiY);

	if (cifraUnitatiX == cifraUnitatiY ||
		(cifraUnitatiX * cifraUnitatiY == 0 &&
			cifraUnitatiX + cifraUnitatiY == 9))
		//verificam si cazul [9 10]
		cout << "DA";
	else
		cout << "NU";

}

/*4. În fişierul text.in se află un text scris pe mai multe linii, pe fiecare linie fiind caractere
diverse: litere mici ale alfabetului englez, cifre, spaţii şi semne de punctuaţie. Găsiţi o metodă
eficientă din punctul de vedere al timpului de executare şi al gestionării memoriei ce permite
afişarea celor mai frecvente perechi de vocale alăturate din text. Menţionăm că vocalele
sunt: a, e, i, o şi u.
De exemplu, dacă text.in conţine textul:
Aleea ce strabate valea
e-o unduire de pietris scanteietor,
De-aceea nu stii daca zboara sau doar inoata in unde aurii
cele mai frecvente perechi de vocale întâlnite în acest text sunt: ea şi oa (ele apar de 3 ori,
spre deosebire de alte perechi de vocale alăturate care apar de mai puţine ori).
a) Descrieţi succint, în limbaj natural, metoda de rezolvare aleasă, explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
b) Scrieţi programul C/C++ corespunzător metodei descrise la cerinţa a. */
void afisarea() {

	ifstream fin("text.in");
	char v[] = "aeiou";
	int f[5][5];
		char x, y;
		fin >> x;
		while (fin.get(y)) {
			if (strchr(v, x) && strchr(v, y))
				f[strchr(v, x) - v][strchr(v, y) - v]++;
			x = y;
		}

		int i, j, max = 0;

		for (i = 0; i <= 4; i++) {
			for (j = 0; j <= 4; j++) {
				if (f[i][j] > max) {
					max = f[i][j];
				}
			}
		}

		for (i = 0; i <= 4; i++) {
			for (j = 0; j <= 4; j++) {
				if (f[i][j] == max) {
					cout << v[i] << v[j] << endl;
				}
			}
		}

}
