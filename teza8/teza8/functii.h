#pragma once
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;


/*in secventa urmatoare var n si i sunt de tip intreg, iar variabila s permite numorarea unui cuvant. Cuvintele citite sunt
formate din cifre zecimale si reprezinta numere de telefon, acestea sunt separate prin Enter
int n = ;
	char s[11][11] = "";
	for (int i = 1; i <= 5; i++) {
		cin >> s;

	}

	fara a utiliza alte variabile, scrieti secventa astfel incat, in urma executarii secventei obtinute, variabila n sa memoreze
	numarul de siruri citite pentru care subsirul format din primele patru caractere ale lor coincide cu sirul 2019, iar acesta NU
	apare pe alte pozitii in codul respectiv.
	Ex: Daca se citesc sirurile, variabila n are valoarea 2.
	2019745432
	1378912217
	2019345435
	2019782019
	1765412019

*/
void generare() {

	int n = 0;
	char s[11] = "";
	ifstream f("siruri.txt");

	for (int i = 1; i <= 5; i++) {
		f >> s;
		if (strstr(s, "2019") == s && strstr(s + 4, "2019") == 0) {
			n++;
		}
	}

	cout << n;
}

/*Subprogramul patrat are un parametru n, prin care primeste un numar natural. Subprogramul returneaza cel mai mare patrat
perfect care este divizor al lui n.
Ex: n=72 atunci , dupa apel, subprogramul va returna 36.
*/
int patrat(int n) {


	for (int i = n / 2; i >= 0; i--) {
		if (n % i == 0) {
			if(sqrt(n) == sqrt(n))
			return i;
		}
	}


}

/*Se citeste din bax.txt un sir S cu cel mult 100 000 de nr nat..Pentru fiecare valoare x din sir se determina numarul de cifre
egale cu zero de la sfarsitul lui x! (unde x!=1*2*3*...*x)
.Programul determina si afiseaza pe ecran cu spatiu intre ele numarul de valori x din sir care au un numar maxim de valori egale
cu zero la sfarzitul lui x! si care este aceasta valoare maxima.
Ex: fisierul contine nr. 102 12 50 100 se afiseaza 2 24.
*/

int putereCifa(int n, int cif) {

	int ct = 0;
	int a = 2;
	while (n!=0)
	{
		int puterea = 0;

		while (n%a==0)
		{
			puterea++;
			n /= a;
		}

		if (puterea >= 1) {
			if (a == cif) return puterea;
		}

		a++;

		if (a * a > n) {
			a = n;
		}

	}
	return -1;
}

void afisarea() {

	ifstream f("bac.txt");

	int x;
	int max=0, nrmax=0, nrz;

	while (f>>x)
	{
		nrz = 0;

		while (x)
		{
			nrz += x / 5;
			x /= 5;
		}

		if (nrz > nrmax) {
			nrmax = nrz;
			max = 1;
		}

		if (nrz == nrmax) max++;

	}

	cout << max << " " << nrmax;
}


