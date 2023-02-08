#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi programul C/C++ care citeşte de la tastatură un şir de cel mult 40 de caractere,
format doar din litere mici ale alfabetului englez, şi care afişează pe ecran, pe o singură
linie, toate vocalele ce apar în şirul citit. Vocalele vor fi afişate în ordinea apariţiei lor în şir,
separate prin câte un spaţiu, ca în exemplu. Se consideră ca fiind vocale următoarele litere:
a, e, i, o, u. Dacă şirul citit nu conţine nicio vocală, se va afişa pe ecran mesajul fara
vocale.
Exemplu: dacă se citeşte şirul calculator atunci pe ecran se va afişa: a u a o*/
void vocale(char c[]) {

	char vocale[] = "aeiou";
	
	int ok = 0, i, n = strlen(c);
	for (i = 0; i < n; i++) {
		if (strchr(vocale, c[i])) {
			cout << c[i] << " ";
			ok = 1;
		}
	}

	if (ok == 0)
		cout << "fara vocale";

}

/*2. Subprogramul f are definiţia alăturată. Ce valoare
are f(7)? Dar f(100)? (6p.)
int f(int x)
{if(x%6==0)return x;
 else return f(x-1);
} */
int f(int x)
{
	if (x % 6 == 0)return x;
	else return f(x - 1);
}

/*. Scrieţi definiţia completă a unui subprogram P, cu trei parametri, care primeşte prin
intermediul primului parametru, a, un tablou unidimensional de cel mult 100 de numere
întregi, cu cel mult 4 cifre fiecare, prin intermediul celui de-al doilea parametru, n, numărul
efectiv de elemente ale tabloului, iar prin parametrul k, un număr natural (k<101) şi
returnează cea mai mare sumă cu k termeni care se poate obţine adunând k elemente ale
tabloului.
Exemplu: dacă n=6 şi k=4, iar şirul este format din elementele (5, 2, 5, 4, 1, 3),
atunci la apel se va returna 17.*/
int p(int n, int k, int a[100]) {
	int gata, aux, s = 0;
	do {
		gata = 1;
		for (int i = 1; i < n; i++)
			if (a[i] < a[i + 1]) {
				aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
				gata = 0;
			}
	} while (!gata);
	for (int i = 1; i <= k; i++)
		s += a[i];
	return s;
}

/*4. Fişierul text numere.txt conţine pe prima linie un număr natural n (0<n<100000) iar pe
doua linie, separate prin câte un spaţiu, n numere naturale formate din cel mult două cifre
fiecare.
a) Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului
de executare, numerele ce apar o singură dată în a doua linie a fişierului. Aceste numere
vor fi afişate pe ecran în ordine crescătoare, separate prin câte un spaţiu.
Exemplu: dacă fişierul numere.txt are următorul conţinut:
7
3 5 2 1 5 23 1
atunci pe ecran se va afişa: 2 3 23. */

void afisarea() {

ifstream f("numere.txt");
	int n, a, frecv[100];

	for (int i = 0; i < 100; i++)
		frecv[i] = 0;

	f >> n;
	for (int i = 0; i < n; i++) {

		f >> a;
		frecv[a]++;
	}

	for (int i = 0; i < 100; i++)
		if (frecv[i] == 1)
			cout << i << " ";

}














































































