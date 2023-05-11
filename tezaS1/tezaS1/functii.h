#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*Se citește un număr natural n şi se cere să se scrie suma divizorilor primi ai lui n
Exemplu: Dacă n = 12, atunci se scrie 5, iar dacă n = 11 atunci se scrie 11. Scrieți,
în pseudocod, algoritmul de rezolvare al problemei enunţate.
(10 puncte)*/
int sumDiv(int n) {

	int s = 0, d = 2;

	while (n!=1)
	{
		if (n % d == 0) {
			while (n%d==0)
			{
				n /= d;
			}
			s += d;
		}
		d++;
	}

	return s;
}

/*
2. Scrieți
un program C/C++ care citeşte de la tastatură numărul natural n (n € [2,10], apoi cele n elemente ale
unui tablou unidimensional, numere naturale din intervalul [0, 10²], și afişează pe ecran, separate
printr-un spațiu, primul număr și ultimul număr memorate în tablou, apoi pe linia următoare primele
două numere din tablou şi ultimele două numere din tablou, ș.a.m.d. în final primele n numere din
tablou şi ultimele n numere din tablou (10 puncte) ca în exemplu.
Exemplu: Dacă n=4 şi elementele tabloului sunt 2 4 7 1 atunci pe ecran se va afișa:
2 1
2 4 7 1
2 4 7 4 7 1
2 4 7 1 2 4 7 1
*/
void generare(int n) {
	int v[100]{};
	for (int i = 1; i <= n; i++)
		cin >> v[i];

	for (int k = 1; k <= n; k++) {
		int i = 1, j = n - k + 1;

		while (i<=k)
		{
			cout << v[i] << " ";
			i++;
		}
		while (j<=n)
		{
			cout << v[j] << " ";
			j++;
		}
		cout << endl;
	}


}

/*
3. Scrieți un
un program C/C++ care citeşte din fişierul text BAC.TXT un şir S cu cel mult 100 000 de numere
naturale formate din cel mult trei cifre fiecare. Asupra acestui şir se aplică în mod repetat
următoarea prelucrare: se elimină din şir valorile prime, iar valorile neprime se incrementează
cu valoarea 1. Prelucrarea se repetă până când în şir nu mai rămâne niciun număr. Să se afişeze
pe ecran de câte ori a fost aplicată această prelucrare. Exemplu: Dacă fișierul conține
numerele 12 11 16 45 34 atunci după prima prelucrare vom avea numerele 13 17 46 35; după a
doua 47 36; după a treia 37; astfel pe ecran va fi afișată valoarea 4.*/
void afisarea() {

	ifstream f("bac.txt");

	int x, nrp, nrMAx=0, prim;

	while (f>>x)
	{
		nrp = 0;
		do {
			prim = 1;
			if (x < 1 || x % 2 == 0 && x != 2) prim = 0;

			for (int i = 3; i * i <= x; i += 2)
				if (x % i == 0) prim = 0;
			if (prim == 0) {
				nrp++;
				x++;
			}
		} while (prim == 0);
		if (nrp + 1 > nrMAx) nrMAx = nrp + 1;
	}

	cout << nrMAx;
}























