#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*Scrieți un program C++ care citeşte de la tastatură un număr natural n şi elementele, numere valorile minime
din coloanele tabloului A, care au elemente dispuse în ordine strict crescătosre întregi, ale unui tablou bidimensional
A, având n linii şi n coloane (2 ≤ n ≤40), determina toare şi afişează pe ecran media lor aritmetică sau afişează
mesajul Nu există coloane Exemplu: Pentru n = 3 şi tabloul se va afişa media aritmetică a valorilor minime 2 şi 7
care ordonate strict crescător, dacă tabloul A nu are nicio coloană cu această proprietate.
este egală cu 4.5.
*/
double mediaArit(int n, int v[]) {


	int mini1 = v[0];
	int mini  = v[1];

	return (mini + mini1) / 2;
}

/*
2. Subprogramul termeni are 3 parametri:
- parametrul n, prin care primeşte un număr natural, având cel mult 8 cifre, n>1; - parametrul m, prin care
furnizează cel mai apropiat termen din şirul lui Fibonacci, mai
mic decât n;
- parametrul t, prin care furnizează cel mai apropiat termen din şirul lui Fibonacci, mai
mare decât n.
Scrieți în limbajul C++ definiția completă a subprogramului termeni. Exemplu: Dacă n = 30 se obțin: m = 21, t = 34.*/
void termeni(int n, int &m, int &t) {

	int s;
	m = 1, t = 1;

	while (t<n)
	{
		s = m + t;
		m = t;
		t = s;
	}

	if (t == n) {
		t = m + t;
	}

}



























