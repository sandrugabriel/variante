#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Se consideră tabloul bidimensional cu n linii şi n coloane ce conţine numere naturale cu cel
mult patru cifre fiecare. Scrieţi programul C/C++ care citeşte de la tastatură numărul natural
n (2≤n≤23) şi cele n*n elemente ale tabloului şi apoi afişează pe ecran elementele primului
pătrat concentric, separate prin câte un spaţiu. Pătratul este parcurs în sensul acelor de
ceasornic începând din colţul său stânga-sus, ca în exemplu. Primul pătrat concentric este
format din prima şi ultima linie, prima şi ultima coloană a tabloului.
Exemplu: pentru n=5 şi tabloul alăturat, se va
afişa:
1 2 3 4 5 1 6 2 7 6 5 4 3 7 2 6
 (10p.)
1 2 3 4 5
6 7 8 9 1
2 3 4 5 6
7 8 9 1 2
3 4 5 6 7 */
void generare(int n, int A[100][100]) {
	for (int i = 0; i < n; i++)
		cout << A[0][i] << " ";
	for (int i = 1; i < n; i++)
		cout << A[i][n - 1] << " ";
	for (int i = n - 2; i >= 0; i--)
		cout << A[n - 1][i] << " ";
	for (int i = n - 2; i >= 1; i--)
		cout << A[i][0] << " ";

}

/*Se consideră subprogramul f cu definiţia
alăturată. Ce valoare are f(1213111,1)?
 (4p.)
int f (long n, int k){
 if (n!=0)
 if(n%10==k)
 return 1+f(n/10,k);
 else return 0;
 else return 0;}
a. 5 b. 3 c. 2 d. 1*/
int f(long n, int k) {
	if (n != 0)
		if (n % 10 == k)
			return 1 + f(n / 10, k);
		else return 0;
	else return 0;
}

/*Scrieţi definiţia completă a subprogramului sub cu doi parametri: n (număr natural,
0<n≤50) şi k (număr natural, 0<k≤20). Subprogramul determină afişarea pe o linie nouă a
ecranului, în ordine descrescătoare, a primelor n numere naturale nenule divizibile cu k.
Numerele vor fi separate prin câte spaţiu.
Exemplu: dacă n=3 şi k=5 la apelul subprogramului se va afişa pe ecran:
15 10 5*/
void sub(int n, int k) {
	int i;
	for (i = n; i >= 1; i--)
		cout << i * k << " ";
}

/*Se consideră fişierul BAC.TXT ce conţine cel mult un milion de numere naturale separate
prin spatii, fiecare număr având cel mult nouă cifre.
a) Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi determină,
folosind un algoritm eficient din punct de vedere timpului de executare, cele mai mari două
numere de trei cifre care nu se află în fişier. Cele două numere vor fi afişate pe ecran în
ordine descrescătoare, cu un spaţiu între ele. Dacă nu pot fi determinate două astfel de
numere, programul va afişa pe ecran valoarea 0.
Exemplu: dacă fişierul BAC.TXT conţine numerele:
12 2345 123 67 989 6 999 123 67 989 999
atunci programul va afişa
998 997 */
void afisare() {

	ifstream fin("numere.in");
	int f[1000];
		int k;
		int x, y;
		while (fin >> k)
			if (k >= 100 && k <= 999)
				f[k]++;
		x = 999;
		while (f[x] > 0)
			x--;
		if (x > 100) {
			y = x - 1;
			while (f[y] > 0)
				y--;
		}
		if (x >= 100 && y >= 100)
			cout << x-1 << " " << y-1;
		else
			cout << 0;


}






