#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale m şi n
(1≤m≤50, 1≤n≤50) şi m* n numere naturale de cel mult 5 cifre ce reprezintă elementele
unui tablou bidimensional, şi afişează pe ecran ultima cifră a produsului elementelor pozitive
aflate pe linii cu numere de ordine pare şi coloane cu numere de ordine impare.
Numerotarea liniilor, respectiv a coloanelor, se va face începând cu valoarea 1. Dacă nu
există elemente pozitive aflate pe linii cu numere de ordine pare şi coloane cu numere de
ordine impare, se va afişa mesajul NU EXISTA. (10p.)
Exemplu: pentru m=4, n=4 şi matricea alăturată se va afişa 5
(care reprezintă ultima cifră a valorii 355=5*71).
 11 -21 31 41
 5 -61 71 -81
 91 11 21 31
 -11 31 -41 0
*/
void generare(int m, int n, int a[100][100]) {
    int g = 0, p = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] > 0 && i % 2 == 0 && j % 2 != 0) {
                p = p * a[i][j] % 10;
                g = 1;
            }
    if (g)
        cout << p;
    else
        cout << "nu exista";


}

/*3. a) Să se scrie definiţia completă a subprogramului calcul, care primeşte prin intermediul
celor doi parametri ai săi două numere întregi, n şi k (1≤n≤100000000 şi 1≤k≤9), şi
returnează cifra de rang k a numărului n. Rangul unei cifre este numărul său de ordine,
numerotând cifrele de la dreapta la stânga; cifra unităţilor având rangul 1. Dacă numărul k
este mai mare decât numărul de cifre ale lui n, atunci funcţia returnează valoarea -1.
Exemplu: dacă n=9243 şi k=3, în urma apelului se va returna 2.

b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu cel mult 8
cifre. Programul va verifica, utilizând apeluri ale subprogramului calcul, dacă orice cifră a
lui n are rangul cifrei mai mare sau egal cu valoarea cifrei respective şi va afişa mesajul Da în
caz afirmativ şi mesajul Nu în caz contrar.
Exemplu : pentru n=4160 se va afişa Nu. (5p.)
rang 4 3 2 1
cifră 4 1 6 0
*/
int calcul(int n, int k) {

	int nrOrdine = 1;
	while (n > 0) {
		if (nrOrdine == k)
			return n % 10;
		nrOrdine++;
		n = n / 10;
	}

	return -1;
}
void afisare(int n){

	int k = 1, cifra, verifica = 1;

	while ((cifra = calcul(n, k)) != -1) {

		if (cifra > k) {
			verifica = 0;
			break;
		}
		k++;
	}

	if (verifica == 0)
		cout << "Nu";
	else
		cout << "Da";

}

/*4. Fişierul text SIR.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie, separate prin spaţii, un şir crescător de n numere naturale cu cel mult 9 cifre
fiecare.
Numim platou într-un şir de valori o secvenţă de elemente identice situate pe poziţii
alăturate. Lungimea unui platou este egală cu numărul de elemente care îl formează.
a) Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din
punct de vedere al timpului de executare şi al spaţiului de memorie utilizat afişează pe
ecran, separate printr-un spaţiu, lungimea maximă a unui platou, precum şi valoarea care
formează platoul. În cazul în care sunt mai multe platouri de aceeaşi lungime se va afişa
valoarea cea mai mare care formează unul dintre aceste platouri. (6p.)
Exemplu: dacă fişierul SIR.TXT
are conţinutul alăturat,
10
11 211 211 211 328 400 400 1201 1201 1201
atunci programul va afişa pe ecran 3 1201.*/
void afisarea() {

	ifstream f("SIR.TXT");
	int n, i, lungimeMax = -1, lungime, valoarePl, valoareAnt;
	f >> n;

	f >> valoareAnt;
	lungime = 1;
	for (i = 1; i < n; i++) {
		int a;
		f >> a;
		if (a == valoareAnt)
			lungime++;
		else {

			if (lungime >= lungimeMax) {
				valoarePl = valoareAnt;
				lungimeMax = lungime;
			}
			valoareAnt = a;
			lungime = 1;
		}
	}
	if (lungime >= lungimeMax) {
		valoarePl = valoareAnt;
		lungimeMax = lungime;
	}
	cout << lungimeMax << " " << valoarePl;


}








































































