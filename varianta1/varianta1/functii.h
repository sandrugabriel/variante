#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mică dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu.
5.
Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată.
(10p.)
 1 1 1 1 1
 1 2 2 2 2
 1 2 3 3 3
 1 2 3 4 4*/
void generare(int a[100][100], int n, int m) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i >= j) {
				a[i][j] = j;
			}
			else
			{
				a[i][j] = i;
			}
		}
	}


}
void afisareMatrice(int a[100][100], int n, int m) {

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

/*Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(121,1);?
//C++
void f(long n, int i)
{ if(n!=0)
 if(n%3>0)
 { cout<<i; f(n/3,i+1); }
}
*/
void f(long n, int i)
{
	if (n != 0)
		if (n % 3 > 0)
		{
			cout << i; f(n / 3, i + 1);
		}
}

/*Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule
cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un program
C/C++ care citeşte de la tastatură un număr natural nenul n (n≤999) şi numerele din fişierul
bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier
care sunt divizibile cu n. Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa
pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul bac.txt conţine numerele: 3 100 40 70 25 5 80 6 3798,
pentru n=10 atunci pe ecran se va afişa: 100 40 70 80 */
void afisareDiv(int n) {

	int v[100];

	ifstream fin("bac.txt");
	int i = 0;
	while (!fin.eof())
	{

		fin >> v[i];
		i++;
	} 

	for (int x = 0; x < i; x++) {
		if (v[x] % n == 0) {
			cout << v[x] << " ";
		}
	}

}

/*Subprogramul sub, cu trei parametri, primeşte prin intermediul parametrilor:
– v un tablou unidimensional cu cel mult 100 de componente ce memorează numere
întregi de cel mult 4 cifre fiecare;
– n un număr natural nenul mai mic sau egal cu 100 ce reprezintă numărul efectiv de
componente ale tabloului primit prin intermediul parametrului v;
– a un număr întreg cu cel mult 4 cifre.
Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul
parametrului v ale căror valori sunt strict mai mici decât valoarea parametrului a.
Exemplu: pentru valorile n=5, v=(1,21,9,21,403), a=20 ale parametrilor, în urma
apelului, subprogramului sub va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului sub. (4p.)
b) Să se scrie un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi n numere întregi, fiecare având cel mult 4 cifre, şi care, folosind apeluri utile ale
subprogramului sub, să afişeze pe ecran mesajul DA dacă oricare două dintre cele n
numere întregi citite sunt distincte două câte două, sau mesajul NU în caz contrar.
Exemplu: pentru n=6 şi cele n numere citite de la tastatură: 47 183 69 8 134 -56
se va afişa pe ecran mesajul DA*/
int sub(int v[], int n, int a) {

	int ct = 0;

	for (int i = 0; i < n; i++) {
		if (a > v[i]) {
			ct++;
		}
	}

	return ct;
}
void final(int n, int t[]) {
	int semn = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (sub(t, n, t[i]) != t[i + 1]) {
				semn = 1;
			}

		}
	}

	if (semn == 1) {
		cout << "DA";
	}
	else
	{
		cout << "NU";
	}

}







