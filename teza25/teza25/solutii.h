#pragma once
#include "functii.h"



/*Elementele matricei vor fi afişate pe ecran
linie cu linie separate printr-un spațiu.
Exemplu: Dacă N=3 atunci tabloul este:
(10 puncte)
1 2 2 2 1
2 1 2 1 2
2 2 1 2 2
*/
void solutia1() {

	generare(3);

}

/*
2. Un tablou unidimensional se numeşte k-palindrom dacă după efectuarea a k. permutări circulare cu o poziție spre 
stânga acesta devine palindrom (considerăm că un vector este palindrom dacă vectorul parcurs de la stânga la 
dreapta coincide cu vectorul parcurs de la dreapta la stânga). Scrieți definiția completă v un tablou 
unidimensional cu cel mult 100 de elemente numere întregi, n un număr natural unui subprogram kpal cu
trei parametri: (n≤100), reprezentând numărul de elemente din vector şi k un număr natural (15k<n), care
returnează valoarea 1 dacă vectorul este k-palindrom sau valoarea 0 în caz contrar. 
Exemplu: Dacă n=5, v=(2, 2, 4, 5, 4) atunci f(v,n,1) va returna valoarea 1. (10 puncte)*/
void solutia2() {

	int n = 5, v[100] = { 2, 2, 4, 5, 4 };
	cout << kpal(v, n, 1);
}

/*
3. Cu şirul crescător al numerelor naturale de la 1 la 106, se construiesc triunghiuri de numere ca în 
imaginea de mai jos (ultimul triunghi poate fi incomplet).
Triu
Se citeşte de la tastatură un număr k, k < 106. Să se scrie în fişierul text BAC.TXT pe prima linie, 
separate prin câte un spațiu, valorile T L C, reprezentând: T = numărul triunghiu-lui care conține 
valoarea k, L = linia pe care se află valoarea k (numerotată de sus în jos, vârf=linia 1), C = coloana acestuia
(numerotată de la stânga la dreapta). Proiectați un algo-ritm eficient din punct de vedere al timpului de 
executare și al spațiului de memorie utilizat. Exemplu: Dacă se citeşte de la tastatură numărul k=17 
atunci în fişier se vor afișa: 342*/
void solutia3() {

	afisarea(17);

}










































