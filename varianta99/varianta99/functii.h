#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤24) şi
construieşte în memorie un tablou bidimensional cu n linii şi n coloane care să conţină
primele n numere naturale nenule. Prima linie a tabloului va conţine, în această ordine,
valorile 1,2,...,n; a doua linie va conţine, în ordine, valorile 2,2,3,...,n; a treia linie
va conţine, în ordine, valorile 3,3,3,4,...,n, iar ultima linie va conţine valorile n,
n,..., n.
5.
Programul afişează pe ecran matricea construită, câte o linie a matricei
pe câte o linie a ecranului, elementele fiecărei linii fiind despărţite prin
câte un spaţiu.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5*/
void generare(int n) {

	int a[25][25], i, j;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i >= j)
				a[i][j] = i;
			else
				a[i][j] = j;


	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}

}

/*3. Subprogramul Nr are un singur parametru, k, prin intermediul căruia primeşte un număr
natural de cel puţin 3 cifre şi cel mult 9 cifre, cu toate cifrele nenule. Subprogramul
furnizează tot prin intermediul parametrului k, valoarea obţinută prin eliminarea primei şi
ultimei cifre a numărului transmis la apel.
Exemplu: dacă subprogramul primeşte prin intermediul parametrului k valoarea 12438, în
urma apelului subprogramului Nr, k va primi valoarea 243.
Scrieţi, în limbajul C/C++, definiţia completă a subprogramului Nr.*/
void Nr(int& k) {

	int rest, p = 1, copie = k;
	while (copie > 10) {
		p *= 10;
		copie /= 10;
	}
	rest = k % p;
	k = rest / 10;

}

/*4. Pe prima linie a fişierului text DATE.TXT se află un şir de cel mult 10000 de numere întregi,
având cel mult 4 cifre fiecare. Numerele sunt despărţite prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte numerele din fişier şi afişează pe ecran lungimea
maximă a unei secvenţe de numere din şir, cu proprietatea că oricare două numere din
secvenţă, aflate pe poziţii consecutive, au parităţi diferite. Pe a doua linie a ecranului,
programul va afişa o secvenţă de lungime maximă, valorile fiind despărţite prin câte un
spaţiu. Dacă există mai multe secvenţe de lungime maximă, se va afişa una dintre ele,
oricare. Alegeţi o metodă de rezolvare eficientă ca timp de executare.
Exemplu: dacă fişierul conţine, în ordine, numerele 2 4 3 2 7 4 6 2 7 8 12, se va
afişa:
5
4 3 2 7 4 (6p.)
 b) Descrieţi succint, în limbaj natural, metoda utilizată, justificând eficienţa acesteia. */
void afisarea() {

	ifstream f("date.txt");

		int x[10001], lmax = 0, pmax, l, i;
		l = 1;
		i = 1;
		f >> x[i];
		i++;
		while (f >> x[i]) {
			if (x[i - 1] % 2 != x[i] % 2)
				l++;
			else {
				if (l > lmax) {
					lmax = l;
					pmax = i - 1;
				}
				l = 1;
			}
			i++;
		}
		cout << lmax << endl;
		for (i = pmax - lmax + 1; i <= pmax; i++)
			cout << x[i] << " ";


}
































































































































