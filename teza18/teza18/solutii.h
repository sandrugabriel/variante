#pragma once
#include "functii.h"



/*Se citeşte de la tastatură un cuvânt c, format din cel mult 20 de litere mici şi un text cu separate prin spațiu şi 
se încheie cu punct. Scrieți un program C++ care va afişa pe ecran cel mult 200 de caractere format din mai multe 
propozitii. O propoziţie contine cuvinte o propoziție din text care conține cuvântul c de cele mai multe ori. 
De exemplu, dacă se citeşte cuvântul avion şi textul Din avion vezi un cer albastru şi un alt avion. Pe 
aero-aterizează un avion. Se va afişa propoziția Din avion vezi un cer albastru și un port alt avion.
*/
void solutia1() {

	afisareProp();
}

/*
2. Subprogramul perechi primeşte prin parametrul n un număr natural (2<n<50) şi prin para-v primește un tablou unidimensional, 
format din n numere naturale distincte, fiecare număr având cel mult 9 cifre. Subprogramul returnează numărul de perechi 
distincte formate din elemente din tabloul v, cu proprietatea că un număr este oglindit pentru celălalt număr. Scrieți 
în limbajul C++ definiția completă a subprogramului perechi.
Exemplu: Dacă n = 7 și v = (41, 324, 14, 423, 82, 6, 28) atunci, după apel, subprogramul va returna valoarea 3, 
deoarece vectorul are 3 perechi de numere ce verifică proprietatea dată: (41,14); (324, 423); (82, 28).
*/
void solutia2() {
	int v[100] = { 41, 324, 14, 423, 82, 6, 28 };
	cout << perechi(7, v);
}

/*
3. Fișierul bac. txt conține un șir format din cel mult 10 000 numere naturale separate prin spațiu, fiecare număr având cel 
mult 5 cifre. Prin alegerea cifrelor distincte din șir, care au modulul diferenței cifrelor egal cu 2 se pot obține mai multe
numere. Scrieți un program C++ eficient ca timp de execuție și spațiu de memorie utilizat, care determină şi afişează pe 
ecran cel mai mare număr format din toate cifrele numerelor din fișier, cu proprietatea că modulul diferenței cifrelor 
distincte este egal cu 2 sau afișează mesajul Nu există, dacă din șir nu se poate obține un asemenea număr.
Exemplul 1: Dacă fișierul bac. txt conține numerele 1012 3367 9837 369 96 183, se pot obține mai multe numere care au 
modulul diferenței cifrelor distincte egal cu 2 : 20, 31, 311, 97, 79, 886, 9977 etc. Numărul care se va afişa este 33333111.
Exemplul 2: Dacă fişierul bac.txt conține numerele 27 388 723 82, se va afişa mesajul Nu există*/
void solutia3() {

	afisarea();

}


























