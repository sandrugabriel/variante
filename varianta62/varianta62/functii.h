#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi un program C / C++ care citeşte de la tastatură un text de cel mult 255 de caractere,
		dintre care cel puţin unul este o literă mică a alfabetului englez, şi afişează pe ecran, pe o
		singură linie, despărţite prin câte un spaţiu, toate literele mici ale alfabetului englez care
		apar în text.Fiecare literă va fi afişată o singură dată, în ordinea primei ei apariţii în text.
		Exemplu: pentru textul :
	Calculati valoarea expresiei
	(10p.)
		Pe ecran se va afişa :
	a l c u t i v o r e x p s*/
void litere(char s[]) {

	int i, j, gasit;
	for (i = 0; i < strlen(s); i++)
		if (s[i] >= 'a' && s[i] <= 'z') {
			gasit = 0;
			for (j = 0; j < i; j++)
				if (s[i] == s[j])
					gasit = 1;
			if (!gasit)
				cout << s[i] << " ";
		}


}

/*3. Scrieţi definiţia completă a unui subprogram fibo cu doi parametri, n şi v, care primeşte
prin intermediul parametrului n un număr natural (1<n<30) şi returnează prin intermediul
parametrului v un tablou unidimensional care conţine primii n termeni impari ai şirului lui
Fibonacci (amintim că şirul lui Fibonacci este: 1,1,2,3,5,8,13,21,…).*/
void fibo(int n, int v[100]) {
	int x, y, z, k = 0;
	x = 1;
	y = 1;
	v[1] = 1;
	v[2] = 1;
	k = 2;
	while (k < n) {
		z = x + y;
		if (z % 2 == 1)
			v[++k] = z;
		x = y;
		y = z;
	}
}

/*4. a) Fişierul date.in conţine un şir de cel mult 10000 numere naturale (printre care cel
puţin un număr par şi cel puţin un număr impar), cu cel mult 2 cifre fiecare, separate prin
câte un spaţiu. Scrieţi un program C/C++ care citeşte numerele din fişierul date.in şi
scrie în fişierul text date.out valorile distincte citite, separate prin câte un spaţiu,
respectându-se regula: pe prima linie vor fi scrise numerele impare în ordine crescătoare,
iar pe linia a doua numerele pare, în ordine descrescătoare. Alegeţi o metodă eficientă din
punctul de vedere al timpului de executare. (6p.)
Exemplu: dacă pe prima linie a fişierului date.in se află numerele:
75 12 3 3 18 75 1 3
atunci fişierul date.out va conţine:
1 3 75
18 12
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). */
void afisarea() {
	
	ifstream fin("date.in");
	ofstream fout("date.out");
	int f[100]{};

		int i, x;
		while (fin >> x)
			f[x]++;
		for (i = 1; i <= 99; i = i + 2)
			if (f[i] != 0)
				fout << i << " ";
		fout << endl;
		for (i = 98; i >= 0; i = i - 2)
			if (f[i] != 0)
				fout << i << " ";
		fout.close();

}







