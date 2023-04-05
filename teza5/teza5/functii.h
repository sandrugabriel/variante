#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*În secvența de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila a memorează un tablou bidimensional cu
5 linii şi 5 coloane, numerotate de la 1 la 5. Elementele tabloului sunt numere întregi. Fără a utiliza alte variabile, scrieți
una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării secvenței obținute,
tabloul memorat în variabila a să aibă elementele din figura de mai jos.

for (i=1;i<=5;i++) for(j=1;j<=5;j++)
01110
4 0 1 0 2
44022
4 03 02
03330*/
void generare() {
	int a[100][100]{};
	for (int i = 1; i <= 5; i++)
		for (int j = 1; j <= 5; j++)
			if (i == j || i + j == 6) a[i][j] = 0;
			else if (i + j < 6)
				if (i > j) a[i][j] = 4;
				else a[i][j] = 4;
			else if (i > j) a[i][j] = 3;
			else a[i][j] = 2;

	for (int i = 1; i <= 5; i++, cout << endl)
		for (int j = 1; j <= 5; j++)
			cout << a[i][j] << " ";
}

/*2. Subprogramul divizori are un parametru n, prin care primeşte un număr natural (2n≤10)
Subprogramul returnează suma divizorilor primi ai lui n. Scrieți în limbajul C/C++ definiți
completă a subprogramului divizori.
Exemplu: Dacă n = 12 atunci, după apel, subprogramul va returna valoarea 5, divizorii primi ai lui 12 sunt 2 şi 3.*/
int divizori(int n, int a[]) {
	int d, x, y, r;

	d = a[1];

	for (int i = 2; i <= n; i++) {
		x = d;
		y = a[i];

		while (y)
		{
			r = x % y;
			x = y;
			y = r;
		}
		d = x;
	}
	return d;
}

/*3. Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un şir S cu cel mult 100 000 de numere naturale
formate din cel mult trei cifre fiecare. Asupra acestui şir se aplică în mod repetat următoarea prelucrare: se elimină
din şir valorile prime, iar valorile neprime se incrementează cu valoarea 1. Prelucrarea se repetă până când în şir
nu mai există niciun număr. Să se afișeze pe ecran de câte ori a fost aplicată această prelucrare.
Exemplu: Dacă fișierul conține numerele 12 11 16 45 34 atunci după prima prelucrare
vom avea valorile 13 17 46 35; după a doua 47 36; după a treia 37; pe ecran va fi afişată valoarea 4. a) Se cere să
se proiecteze un algoritm eficient din punct de vedere al timpului de execu- tare şi al spațiului de memorie utilizat
şi să se realizeze o descriere de 3-4 rânduri
a algoritmului ales justificându-se eficienţa acestuia.*/
int prim(int x) {

	if (x <= 1 || x % 2 == 0 && x != 2) return 0;

	for (int i = 3; i * i <= x; i += 2) {
		if (x % i == 0)
			return 0;
	}

	return 1;
}
void afisarea() {

	ifstream fin("bac.txt");

	int x, nrp=0, nrpmax=0;

	while (fin>>x)
	{
		nrp = 0;
		while (prim(x)==0)
		{
			nrp++;
			x++;
		}
		if (nrp + 1 > nrpmax) nrpmax = nrp + 1;
	}
	cout << nrpmax;
}
































