#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*3. Subprogramul par primeşte prin singurul său parametru, n, un număr natural nenul cu cel
mult 8 cifre şi returnează valoarea 1 dacă n conţine cel puţin o cifră pară, sau returnează
valoarea 0 în caz contrar.
Exemplu: pentru n=723 subprogramul va returna valoarea 1.
a) Scrieţi numai antetul subprogramului par. (2p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n cu cel
mult trei cifre, apoi un şir de n numere naturale, cu cel puţin două şi cel mult 8 cifre fiecare,
şi afişează pe ecran numărul de valori din şirul citit care au numai cifra unităţilor pară,
celelalte cifre fiind impare. Se vor utiliza apeluri utile ale subprogramului par.
Exemplu: dacă n=4, iar şirul citit este 7354, 123864, 51731, 570 se va afişa 2 (numerele
7354 şi 570 respectă condiţia cerută). */
int par(int n) {

	while (n!=0)
	{
		int c = n % 10;

		if (c % 2 == 0)
			return 1;

		n /= 10;
	}

	return 0;
}
void afisare(int n, int v[]) {

	int ct = 0;

	for (int i = 0; i < n; i++) {
		
		if (par(v[i]/10)==0 && (v[i]%10)%2==0) {
			ct++;
		}
	}

	cout << ct;
}

/*Fişierul numere.in conţine cel mult 5000 de numere reale, câte unul pe fiecare linie. Se
cere să se scrie un program care să citescă toate numerele din fişier şi să afişeze pe ecran
numărul de ordine al primei, respectiv al ultimei linii pe care se află cel mai mare număr din
fişier. Cele două numere vor fi separate printr-un spaţiu. Alegeţi o metodă de rezolvare
eficientă din punct de vedere al spaţiului de memorare şi al timpului de executare.
4.
Exemplu: dacă fişierul are conţinutul alăturat, pe ecran se vor afişa numerele 2 6.
a) Descrieţi succint, în limbaj natural, metoda de rezolvare aleasă, explicând în ce
constă eficienţa ei. (4p.)
b) Scrieţi programul C/C++ corespunzător metodei descrise. (6p.)
3.5
7
-4
7
2
7
6.3
5*/
void afisarea() {

	ifstream f("numere.in");

	float v[100]{};
	int n = 0;
	while (!f.eof())
	{
		f >> v[n];
		n++;
		
	}
	
	int dim = n;

	int maxi = 999;

	for (int i = 0; i < dim; i++) {
		if (v[i] < maxi && v[i]>=0)
			maxi = v[i];
	}

	int mini = -1;

	for (int i = 0; i < dim; i++) {
		if (v[i] > mini && v[i]>=0) {
			mini = v[i];
		}
	}

	cout << maxi << " " << mini-1 << endl;
}

























