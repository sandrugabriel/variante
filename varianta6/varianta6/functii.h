#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/* Se consideră subprogramul alăturat:
Ce valoare are f(15,2)? Dar f(128,2)?
(6p.)
int f(int a, int b){
 if (b<1) return -1;
 else
 if (a%b==0)
 return 1+f(a/b,b);
else
 return 0; }
*/
int f(int a, int b) {
	if (b < 1) return -1;
	else
		if (a % b == 0)
			return 1 + f(a / b, b);
		else
			return 0;
}

/*Se consideră fişierul BAC.TXT ce conţine un şir crescător cu cel mult un milion de numere
naturale de cel mult nouă cifre fiecare, separate prin câte un spaţiu.
a) Să se scrie un program C/C++ care, folosind un algoritm eficient din punct de vedere al
memoriei utilizate şi al timpului de executare, citeşte din fişier toţi termenii şirului şi afişează
pe ecran, pe o singură linie, fiecare termen distinct al şirului urmat de numărul de apariţii ale
acestuia în şir. Valorile afişate sunt separate prin câte un spaţiu.
Exemplu: dacă fişierul BAC.TXT are următorul conţinut:
1 1 1 5 5 5 5 9 9 11 20 20 20
programul va afişa:
1 3 5 4 9 2 11 1 20 3
deoarece 1 apare de 3 ori, 5 apare de 4 ori, etc. */
void afisaredis() {

	int x, y, n;


	ifstream f("bac.txt");
	f >> x;
	n = 1;
	while (f >> y) {
		if (x == y)
			n++;
		else {
			cout << x << " " << n << " ";
			n = 1;
		}
		x = y;
	}
	cout << x << " " << n;



}



