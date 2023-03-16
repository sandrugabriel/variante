#pragma once
#include "functii.h"



/*3. Scrieţi în C/C++ definiţia completă a subprogramului suma care are doi parametri:
- n, prin care primeşte un număr natural (1≤n≤100);
- v, prin care primeşte un tablou unidimensional cu n elemente, numere întregi, fiecare
având exact trei cifre.
Funcţia returnează suma elementelor din tablou care au prima cifră egală cu ultima cifră.
(10p.)*/
void solutia1() {

	int n, i, v[100];
	cin >> n;

	for (i = 0; i < n; i++)
		cin >> v[i];

	cout << suma(n, v);


}

/*
4. Fişierul text NUMERE.IN conţine mai multe linii, pe fiecare linie existând câte un şir de
numere naturale nenule mai mici sau egale decât 30000, despărţite prin câte un spaţiu;
fiecare linie se termină cu numarul 0 (care se consideră că nu face parte din şirul aflat pe
linia respectivă) şi conţine cel puţin două valori.
a) Scrieţi programul C/C++ care afişează pe ecran valoarea maximă din şirul care conţine
cele mai puţine numere. În cazul în care există mai multe şiruri cu acelaşi număr minim de
numere, se va afişa cea mai mare valoare care apare în unul dintre aceste şiruri. Alegeţi o
metodă de rezolvare eficientă din punct de vedere al memoriei utilizate şi al timpului de
executare. (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul a), explicând în
ce constă eficienţa ei (3 – 4 rânduri). (4p.)
Exemplu: dacă fişierul NUMERE.IN are conţinutul
alăturat, atunci pe ecran se va afişa numărul 253.
2 253 34 3 0
6 88 9 3 0
4 54 88 12345 98 234 546 0*/
void solutia2() {

	afisarea();

}




































