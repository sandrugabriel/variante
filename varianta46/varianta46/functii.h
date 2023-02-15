#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;


/*Se consideră un text format doar din spaţii şi litere mici ale alfabetului englez, care începe
cu o literă şi care conţine cel puţin o vocală din multimea {a,e,i,o,u}. Scrieţi programul
C/C++ care citeşte de la tastatură un şir cu cel mult 100 de caractere, ca cel descris mai
sus şi care determină transformarea acestuia prin înlocuirea fiecărei vocale din text cu litera
imediat următoare din alfabet (a se înlocuieşte cu b, e se înlocuieşte cu f ş.a.m.d.).
Programul va afişa pe ecran şirul obţinut.
Exemplu: dacă şirul citit este examen de bacalaureat, după modificare se afişează:
fxbmfn df bbcblbvrfbt */
void mod(char c[]) {


	char vocale[] = "aeiou";
	int i, n = strlen(c);

	for (i = 0; i < n; i++) {

	//	if (strchr(vocale, c[i]))
	//		c[i] = c[i] + 1;
	}

	cout << c;


}

/*Fişierul bac.txt conţine pe prima linie un număr natural n (n≤100), iar pe a doua linie,
separate prin câte un spaţiu, n numere naturale nenule, cu cel mult 4 cifre fiecare. Scrieţi
programul C/C++ care citeşte de la tastatură un număr natural k (k≤25), construieşte în
memorie şi afişează pe ecran un tablou unidimensional ce conţine, în ordinea în care au
fost citite, numerele de pe a doua linie a fişierului bac.txt care au cel puţin k divizori.
3.
Exemplu: pentru k=5 şi fişierul bac.txt cu conţinutul
alăturat
 6
 100 9 400 56 7 10
, tabloul care se afişează este:
100 400 56 (10p.)
*/
void afisare(int k) {

	ifstream f("bac.txt");
	int n,a, v[100], nr = 0;

	f >> n;

	for (int i = 0; i < n; i++) {
		f >> a;
		int d, nrDiv = 2;
		for (d = 2; d <= a / 2 && nrDiv < k; d++)
			if (a % d == 0)
				nrDiv++;

		if (nrDiv >= k) {
			v[nr] = a;
			nr++;
		}

	}


	for (int i = 0; i < nr; i++)
		cout << v[i] << " ";




}

/*4. a) Scrieţi în limbajul C/C++ doar antetul subprogramului cifre, care prin intermediul
parametrului nr primeşte un număr natural de cel mult 9 cifre şi furnizează prin intermediul
parametrilor nc şi sc numărul de cifre şi respectiv suma cifrelor din scrierea lui nr. (4p.)
b) Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (10≤n≤109
) şi
verifică, folosind apeluri utile ale subprogramului cifre, dacă în scrierea în baza 10 a lui n
se găseşte cel puţin o cifră care să fie media aritmetică a celorlalte cifre din componenţa lui
n.Programul afişează pe ecran mesajul DA în caz afirmativ şi mesajul NU în caz contrar.
Exemplu: pentru n=27989 programul va afişa mesajul DA, deoarece în scrierea lui n apare
cifra 7 care este media aritmetică a celorlalte cifre din scrierea lui n: 7=(2+9+8+9)/4.
Pentru n=7351 se va afişa mesajul NU. */
void cifre(int nr, int& nc, int& sc) {

	nc = 0;
	sc = 0;
	while (nr > 0) {

		nc++;
		sc += nr % 10;
		nr = nr / 10;

	}


}
void afisarea(int n) {

	int nc, sc;

	cifre(n, nc, sc);
	while (n > 0) {

		if ((n % 10) * (nc - 1) == sc - (n % 10)) {
			cout << n % 10;
			break;
		}
		n = n / 10;
	}

	if (n == 0)
		cout << "NU";
}
