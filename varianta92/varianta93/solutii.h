#pragma once
#include "functii.h"



/*4. Scrieţi o expresie logică C/C++ care să
codifice condiţia ca variabila v din declaraţiile
alăturate să reprezinte segmentul nul
(segmentul care are originea identică cu
extremitatea). (4p.)
struct punct {float x; float y;};
struct segment {
 struct punct origine;
 struct punct extremitate;} v;*/
struct punct { float x; float y; };
struct segment {
	struct punct origine;
	struct punct extremitate;
} v;
void solutia1() {

	if ((v.extremitate.x == v.origine.x) && (v.extremitate.y == v.origine.y)) {
		cout << "Null";
	}


}

/*Scrieţi un program C/C++ care citeşte de la tastatură numerele întregi m şi n (1≤m≤24,
1≤n≤24) şi elementele unui tablou bidimensional cu m linii şi n coloane, numere întregi
distincte de cel mult 4 cifre fiecare, şi elimină din tablou, la nivelul memoriei, linia şi coloana
corespunzătoare elementului de valoare minimă. Programul va afişa tabloul obţinut pe ecran
pe m-1 linii, elementele fiecărei linii fiind separate prin câte un spaţiu. (10p.)
5.
Exemplu: pentru n=3 şi m=4 şi tabloul de mai jos
2 7 1 4
14 6 12 3
9 22 8 5 

Pe ecran se va afişa:
 14 6 3
 9 22 5
*/
void solutia2() {

	int a[100][100] = { {2 ,7 ,1 ,4},{14, 6, 12 ,3},{9 ,22 ,8, 5} };
	int n = 3, m = 4;

	generare(a, n, m);


}

/*3. Subprogramul ordonare primeşte prin parametrul x un tablou unidimensional cu cel mult
100 de elemente numere reale, iar prin parametrul n un număr întreg ce reprezintă numărul
efectiv de elemente ale tabloului x. Subprogramul ordonează crescător elementele tabloului
şi furnizează, tot prin intermediul parametrului x, tabloul ordonat.
a) Scrieţi numai antetul acestui subprogram. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale, n şi m
(1≤n≤100 şi m≤n), şi apoi un şir de n numere reale distincte. Folosind apeluri utile ale
subprogramului ordonare, programul afişează pe prima linie a ecranului, cele mai mari m
elemente din şirul citit (în ordine crescătoare a valorilor lor), iar pe a doua linie de ecran,
cele mai mici m elemente din şir (în ordine descrescătoare a valorilor lor). Numerele afişate
pe aceeaşi linie vor fi separate prin câte un spaţiu. (10p.)
Exemplu : dacă n=9, m=3, iar şirul este (14.2, 60, -7.5, -22, 33.8, 80, 4, 10, 3) se va
afişa pe ecran:
33.8 60 80
3 -7.5 -22*/
void solutia3() {
	float x[100] = { 14.2, 60, -7.5, -22, 33.8, 80, 4, 10, 3 };
	afisare(9, 3, x);

}





















