#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;


/*5. Scrieţi programul C/C++ care citeşte de la tastatură un text de cel mult 50 de caractere,
(litere mici ale alfabetului englez şi spaţii), text format din mai multe cuvinte, separate prin
câte un spaţiu, şi afişează pe ecran textul obţinut din cel iniţial prin transformarea primei
litere şi a ultimei litere ale fiecărui cuvânt în majusculă, restul caracterelor rămânând
nemodificate.
Exemplu: dacă se citeşte textul azi este examen de bacalaureat, se va afişa AzI
EstE ExameN DE BacalaureaT. */
void transf(char c[]) {

	char *p;

	//p = strtok(c, " ");
	//while (p) {
		//modificam prima si ultima litera din cuvant
//		p[0] += 'A' - 'a';
	//	p[strlen(p) - 1] += 'A' - 'a';

//		cout << p << " ";
//
	//	p = strtok(NULL, " "); //trecem la cuvantul urmator
//	}

}

/*3. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(0<n<100, 0<k<4) şi apoi n numere reale pozitive care au cel mult 3 cifre la partea
întreagă şi cel mult 5 cifre zecimale şi afişează pe ecran numărul de valori reale citite care
au mai mult de k cifre zecimale.
Exemplu: dacă pentru n se citeşte valoarea 5 şi pentru k valoarea 2 şi apoi şirul de
numere reale 6.2 4.234 2 8.13 10.001 pe ecran se va afişa valoarea 2. */
void afisare(int n, int k) {

	int nr = 0;

	int putereZece = 1;
	while (k > 0) {
		k--;
		putereZece *= 10;
	}
	for (int i = 0; i < n; i++) {
		float a;
		cin >> a;
		if (a * putereZece != (int)(a * putereZece))
			nr++;
	}

	cout << nr;


}


/*4. Fişierul text bac.in conţine pe prima sa linie un număr natural n (0<n<10000), iar pe
următoarea linie n numere naturale din intervalul [1,100] separate prin câte un spaţiu.
Se cere să se citescă din fişier toate numerele şi să se afişeze pe ecran numărul sau
numerele care apar de cele mai multe ori printre numerele citite de pe a doua linie a
fişierului. Numerele afişate vor fi separate prin câte un spaţiu. Alegeţi un algoritm de
rezolvare eficient atât din punctul de vedere al timpului de executare cât şi al gestionării
memoriei. .
Exemplu: dacă fişierul bac.in are următorul conţinut:
12
1 2 2 3 2 9 3 3 9 9 7 1
pe ecran se vor afişa valorile 2, 3 şi 9, nu neapărat în această ordine. */
void afisarea() {

	ifstream f("bac.in");
	int n, frecv[101], i;
	f >> n;
	for (i = 0; i <= 100; i++)
		frecv[i] = 0;

	for (i = 0; i < n; i++) {
		int a;
		f >> a;
		frecv[a]++;
	}

	int nrMaximAparitii = -1;
	for (i = 0; i <= 100; i++)
		if (frecv[i] > nrMaximAparitii)
			nrMaximAparitii = frecv[i];

	for (i = 0; i <= 100; i++)
		if (frecv[i] == nrMaximAparitii)
			cout << i << " ";



}














































































