#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*În secvenţa de instrucțiuni de mai jos, variabilele i și j sunt de tip întreg. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării secvenței obținute, să se afişeze numerele de mai jos, în această (6 puncte)
ordine.
for (i=1;i<=6; i++) {
for(j=1;j<=6; j++)

1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1
1 2 3 3 2 1
1 2 2 2 2 1
1 1 1 1 1 1*/
void generare() {

	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i == 6 || i == 1 || j == 6)
				cout << 1 << " ";
			else
				if (j <= 2) cout << j << " ";
				else
					if (j >= i && j <= 7 - i) {
						if (i <= 3) cout << i << " ";
					}
					else
						if (i > 3 && j <= 4) cout << 7 - i << " ";
						else cout << 7 - j << " ";
		}
		cout << endl;
	}
}

/*Scrieți un program în limbaj pseudocod care citeşte de la tastatură un număr natural n de cel mult 6 cifre
şi o cifră nenulă c şi afişează numărul maxim care se poate obţine inserând
în n cifra c.
Exemplu: Dacă n=57332 şi c = 4 atunci, se va afişa numărul 574332.*/
int maximium(int n, int c) {
	int nou = 0;

	int rast = 0;

	while (n != 0)
	{
		int cif = n % 10;
		rast = rast * 10 + cif;

		n /= 10;
	}
	int ct = 0;
	while (rast!=0)
	{
		int cif = rast % 10;
		if (c >= cif && ct==0) {
			nou = nou * 10 + c;
			ct++;
		}
		
		nou = nou * 10 + cif;
		rast /= 10;
	}

	return nou;
}

/*
2. Se citeşte de la tastatură un număr natural n (25nS1000) şi un tablou unidimensional a, care memorează un șir
de n numere naturale, fiecare cu cel mult 2 cifre. Se elimină din astfel încât, tabloul să conțină la final,
un număr maxim de elemente distincte, în ordinea în 1sin, elementele egale cu acesta, situate pe poziții
consecutive, care au apărut în șirul a. Scrieți un program C++ care afişează numărul de elemente rămase
după eliminare şi şirul modificat.
tablou, pentru fiecare
Exemplu: Dacă n = 9 şi tabloul a memorează valorile 1 2 2 2 3 3 5 8 9 atunci, se va afişa
5
12358
(10 puncte)*/
void afisare(int n, int v[100]) {

	int i;
	for (i = 1; i <= n;) {
		if (v[i] == v[i + 1]) {
			for (int j = i + 2; j <= n; j++)
				v[j - 1] = v[j];
			n--;
		}
		else i++;
	}
	cout << n<<endl;
	for (i = 1; i <= n; i++)
		cout << v[i] << " ";

}

/*
3. Numim interval asociat unui șir de numere, perechea de numere naturale a, b (a≤b) cu proprietatea că
şirul este format din toate valorile naturale distincte, cuprinse între a și b şi scrise în ordine crescătoare.
De exemplu, şirul 4 5 6 7 8 are intervalul asociat 48, iar şirul 1 2 3 5 7 8 9 este format din trei
subşiruri ale căror intervale asociate sunt 1 3, 5 5 şi 7 9.
Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un șir S cu cel mult 1 000 000 de
numere naturale din intervalul [0, 10³] și afișează pe ecran extremitățile intervalului care reprezintă
intersecția tuturor intervalelor asociate, de lungime maximă, din care este format șirul dat sau mesajul
multimea vida, în cazul în care acestea nu conțin niciun element comun.
Exemplu: Dacă fișierul conține numerele 2 3 4 1 2 3 4 5 6 2 3 4 5 0 1 2 3 atunci pe ecran vor fi afişate
valorile 2 3 deoarece şirul este format din 4 intervale asociate 2 4, 1 6, 2 5 şi 0 3 a căror intersecție
este intervalul 2 3. Dacă fișierul conține numerele 3 4 5 4 5 6 8 atunci pe ecran se va afişa multimea vida.*/
void afisarea() {

	ifstream f("bac.txt");

	int x, y, a, b, maxa, minb, ok;

	f >> x;
	a = x;
	ok = 0;
	while (f >> y)
	{
		if (y == x + 1) b = y;
		else
		{
			if (ok == 0)
				maxa = a, minb = b, ok = 1;
			else
			{
				if (maxa < a) maxa = a; if (minb > b) minb = b;
			}
			a = y;
		}
		x = y;
	}
	if (ok == 0) maxa = a, minb = b, ok = 1;
	else
	{
		if (maxa < a) maxa = a; if (minb > b) minb = b;

	}
	if (minb >= maxa) cout << maxa << " " << minb;
	else cout << "multimea vida";

}




























