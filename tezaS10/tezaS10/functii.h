#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Se citește un număr natural n şi un şir de n numere naturale cu cel mult trei cifre fiecare.
Scrieți un algoritm în pseudocod care afişează, în ordinea citirii, numerele din şir cu
proprietatea că reprezentarea lor în baza 2 conține doar cifre egale cu 1.
Exemplu: Pentru n = 5 şi numerele 7 18 15 22 31 se vor afişa 7 15 31.*/
//?????


/*
2. Un tablou unidimensional se numește k-palindrom dacă după efectuarea a k permutări circulare cu o
poziție spre stânga acesta devine palindrom (considerăm că un vector este palindrom dacă vectorul
parcurs de la stânga la dreapta coincide cu vectorul parcurs de la dreapta la stânga). Se citește
de la tastatură un număr natural n (n≤100), un tablou unidimensional v format din n numere
întregi şi un număr natural k (1≤k<n). Scrieți un program C++ care afişează mesajul DA dacă
vectorul este k-palindrom sau mesajul NU
în caz contrar.
Exemplu: Dacă n = 5, v = (2, 2, 4, 5, 4), k=1 se va afișa DA.
(10 puncte)*/
void afisare(int n, int v[], int k) {

	int i, j, ok;
	for (i = 1; i <= k / 2; i++)
		swap(v[i], v[k + 1 - i]);

	i = k + 1; j = n;
	while (i < j)
	{
		swap(v[i], v[j]); i++; j--;
	}
	for (i = 1; i <= n / 2; i++)
		swap(v[i], v[n + 1 - i]);
	ok = 1;
	for (i = 1; i <= n / 2; i++)
		if (v[i] != v[n + 1 - i]) ok = 0;


	if (ok) cout << "NU";
	else cout << "DA";

}

/*
3. Fişierul text BAC.TXT conține un şir S cu cel mult 100 000 de numere naturale din inter-valul
[2, 10°]. Pentru fiecare valoare x din şir se determină numărul de cifre egale cu zero de la
sfârşitul lui x! (unde x!=1*2*3..... *x). Scrieți un program C/C++ care citeşte şirul S,
obține și afișează pe ecran, cu spațiu între ele, numărul de valori x din șir care au un
număr maxim de cifre egale cu zero la sfârșitul lui x! şi care este această valoare maximă.
Exemplu: Dacă fișierul conține numerele 102 12 50 100 atunci pe ecran vor fi afişate valorile 2 24.*/
void afisarea() {

	ifstream fin("bac.txt");
	int x, zmax=0, nrzmax=0, nrz;

	while (fin >> x) {

		nrz = 0;
		while (x)
		{

			nrz += x / 5;
			x = x / 5;
		}
		if (nrz > nrzmax)
		{
			nrzmax = nrz;
			zmax = 1;
		}
		else if (nrz == nrzmax) zmax++;
	}
	cout << zmax << " " << nrzmax;

}










