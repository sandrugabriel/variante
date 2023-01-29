#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*. Să se scrie un program C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20
de caractere, doar litere mici ale alfabetului englez. Programul determină transformarea
cuvântului citit prin înlocuirea fiecărei vocale a cuvântului, cu un şir format din două caractere
şi anume vocala respectivă urmată de litera mare corespunzătoare, restul literelor
nemodificându-se, ca în exemplu. Programul afişează pe ecran cuvântul obţinut, pe o
singură linie. Se consideră vocale literele din mulţimea {a,e,i,o,u}.
Exemplu: pentru cuvântul bacalaureat se va afişa pe ecran: baAcaAlaAuUreEaAt */
bool vocal(char a) {

	char voc[100] = "aeiou";

	for (int i = 0; i < strlen(voc); i++) {
		if (voc[i] == a) {
			return true;
		}
	}

	return false;
}
void afisare(char a[]) {

	for (int i = 0; i < strlen(a) ; i++) {
		cout << a[i];
		if (vocal(a[i])) {
			cout << (char)toupper(a[i]);
		}
	}


}

/*. Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(12345); ? (6p.)
//C
void f(long n)
{
	printf("%d", n % 10);
	if (n != 0)
	{
		f(n / 100); printf("%d", n % 10);
	}
}
//C++
void f(long n)
{
	cout << n % 10;
	if (n != 0)
	{
		f(n / 100); cout << n % 10;
	}*/
void f(long n)
{
	cout << n % 10;
	if (n != 0)
	{
		f(n / 100); cout << n % 10;
	}
}

/*Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de
numere întregi, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++ care citeşte
numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine
crescătoare, toate numerele naturale nenule din fişier. Dacă nu există astfel de numere se
va afişa pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul NR.TXT conţine numerele: -3 -10 0 7 -5 7 51 -800 6 3798,
atunci pe ecran se va afişa: 6 7 7 51 3798*/

void cresc(int v[], int &n) {

	int semn = 0;

	do {
		semn = 1;

		for (int i = 0; i < n - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				semn = 0;
			}
		}
	} while (semn == 0);

}
void afisarea() {
	int v[100]{},x;
	ifstream fin("nr.txt");
	int ct = 0;
	while (fin >> x) 
	{
		if (x > 0) {
			v[ct] = x;
			ct++;
		}
			

		
		
	}
	fin.close();

	cresc(v, ct);

	for (int i = 0; i < ct; i++) {
cout << v[ct] << " ";
	}

}

/*Un număr n se numeşte extraprim dacă atât el, cât şi orice număr obţinut prin permutarea
cifrelor lui n, sunt numere prime. De exemplu, numărul 113 este un număr extraprim
deoarece 113, 311, 131 sunt numere prime.
a) Scrieţi definiţia completă a unui subprogram f, cu un parametru, subprogram care:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 3 cifre (a>1)
- returnează suma tuturor exponenţilor din descompunerea în factori primi a valorii
parametrului a.
Exemplu: pentru a=90 subprogramul va returna valoarea 4, deoarece a=2*32
*5 şi
1+2+1=4. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n, 2≤n≤999 şi,
folosind apeluri utile ale subprogramului f, verifică dacă n este un număr extraprim. În caz
afirmativ, programul afişează pe ecran mesajul DA, în caz contrar afişând mesajul NU. */
int f1(int a) {
	int sum = 0;
	for (int i = 2; i <= a; i++) {
		while (a % i == 0) {
			sum += i;
			a /= i;
		}
	}

	sum = sum / 10 + sum % 10;

	return sum;
}
bool extraprim(int n) {
	int d1 = n % 10, d2 = (n / 10) % 10, d3 = n / 100;
	return (f1(n) == f1(d1 * 100 + d2 * 10 + d3) &&
		f1(n) == f1(d1 + d2 * 10 + d3 * 100) &&
		f1(n) == f1(d1 * 10 + d2 + d3 * 100) &&
		f1(n) == f1(d1 + d2 * 100 + d3 * 10));
}














