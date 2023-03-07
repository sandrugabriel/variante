#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi programul C/C++ care citeşte de la tastatură un text cu cel mult 100 de caractere
(doar litere mici ale alfabetului englez şi spaţii) şi un cuvânt cu cel mult 15 caractere, doar
litere mici ale alfabetului englez, şi care afişează pe ecran şirul obţinut prin inserarea în
textul iniţial a caracterului ? după fiecare apariţie a cuvântului citit. Dacă în text nu apare
cuvântul citit, se va afişa mesajul NU APARE.
Exemplu: dacă se citeşte de la tastatură textul
examenului examenul de bacalaureat si examenul de atestat
şi cuvântul examenul se va afişa:
examenului examenul? de bacalaureat si examenul? de atestat*/
void inserare(char s1[], char s2[]) {

    char * p, aux[200];
    int cont = 0;
    p = s1;
//    while (strstr(p, s2)) {
        char* q = strstr(p, s2);
  //      if (((q - 1)[0] == ' ' || p == s1) && (q + strlen(s2))[0] == ' ') {
     //       char aux[200];
     //       strcpy(aux, s2);
     //       strcat(aux, "?");
     //       strcat(aux, q + strlen(s2));
      //      strcpy(q, aux);
            cont = 1;
     //   }
  //      p = q + strlen(s2);
 //   }
   // if (cont)
 //       cout << s1;
//    else
//        cout << "nu exista";

}

/*3. a) Scrieţi doar antetul unui subprogram prim cu doi parametri, care primeşte prin
intermediul parametrului n un număr natural cu cel mult patru cifre şi returnează prin
intermediului parametrului p valoarea 1 dacă n este prim şi 0 în caz contrar. (2p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (3<n<10000)
şi afişează pe ecran, despărţite prin câte un spaţiu, primele n numerele prime, folosind
apeluri utile ale subprogramului prim. (8p.)
Exemplu: pentru n=4 pe ecran vor fi afişate numerele 2 3 5 7 */
void prim(int n, int& p) {

	int d;
	p = 1;
	for (d = 2; d <= n / 2; d++)
		if (n % d == 0) {
			p = 0;
			break;
		}

}

/*4. Fişierul text bac.in conţine pe prima sa linie un număr natural n (0<n<10000), iar pe
următoarea linie n numere naturale din intervalul [1,100]. Se cere să se citescă din fişier
toate numerele şi să se afişeze pe ecran, în ordine descrescătoare, toate numerele care
apar pe a doua linie a fişierului şi numărul de apariţii ale fiecăruia. Dacă un număr apare de
mai multe ori, el va fi afişat o singură dată. Fiecare pereche „valoare - număr de apariţii” va
fi afişată pe câte o linie a ecranului, numerele fiind separate printr-un spaţiu, ca în exemplu.
Alegeţi un algoritm de rezolvare eficient din punctul de vedere al timpului de executare.
Exemplu: dacă fişierul bac.in are următorul conţinut:
12
1 2 2 3 2 2 3 3 2 3 2 1
pe ecran se vor afişa, în această ordine, perechile:
3 4
2 6
1 2 */
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

	for (i = 100; i >= 0; i--)
		if (frecv[i] != 0)
			cout << i << " " << frecv[i] << '\n';



}
















































































