#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*4. Scrieţi o secvenţă de instrucţiuni C/C++ care determină, în urma executării ei, afişarea pe
ecran a mesajului Corect dacă un şir de maximum 100 caractere, memorat de variabila s,
este palindrom sau mesajul Incorect în caz contrar. Un şir de caractere este palindrom dacă
citit de la început la sfârşit este identic cu şirul citit de la sfârşit la început.
Exemplu: şirul de caractere cojoc este palindrom */
bool palinndrom(char s[]) {

	int i, ok = 0;
	char t[100]{};
	int ct = 0;
	for (i = strlen(s) - 1; i >= 0; i--) {
		t[ct] = s[i];
		ct++;
	}

	for (int i = 0; i < strlen(s); i++) {
		if (t[i] != s[i]) {
			return false;
		}
	}
	return true;
}

/*Se consideră un tablou bidimensional cu m linii şi n coloane (1≤m≤100, 1≤n≤100), ale cărui
elemente aparţin mulţimii {0,1,2}. Scrieţi un program C/C++ citeşte de la tastatură valorile m,
n şi elementele tabloului şi care afişează pe ecran numerele de ordine ale coloanelor pentru
care produsul elementelor situate pe ele, este maxim. Liniile şi coloanele tabloului se
numerotează de la 1 la m, respectiv de la 1 la n. Numerele se vor afişa separate prin câte
un spaţiu.
5.
Exemplu: pentru m=4 şi n=4 şi tabloul alăturat se va afişa:
1 2
(10p.)
2 1 1 0
1 1 1 1
2 2 2 1
1 2 1 1*/
int produs(int j,int n, int a[100][100]) {
	int p = 1;
	for (int i = 1; i <= n; i++)
		if (a[i][j] == 0)
			return 0;
		else if (a[i][j] == 2)
			p++;
	return p;
}
void generare(int m, int n) {

	fstream f("matrice.in");
	int a[100][100];
		int max = 0;
		for (int j = 1; j <= m; j++)
			if (produs(j,n,a) > max)
				max = produs(j,n,a);
		for (int j = 1; j < m-1; j++)
			if (produs(j,n,a) == max)
				cout << j << " ";

}

/* 2. Funcţia f are definiţia alăturată:
a) Ce valoare are f(16)? (3p.)
b) Scrieţi cea mai mare valoare de două cifre pe care o
poate avea n astfel încât f(n) să fie egal cu 2. (3p.)
int f(int n)
{ if (n<=0) return -1;
 if (n%2==0) return 0;
 if (n%3==0) return 0;
 return 1+f(n-10);
} 
*/
int f(int n)
{
	if (n <= 0) return -1;
	if (n % 2 == 0) return 0;
	if (n % 3 == 0) return 0;
	return 1 + f(n - 10);
}

/*3. Subprogramul f primeşte prin intermediul parametrului n un număr natural nenul (1≤n≤9),
iar prin intermediul parametrului a, un tablou unidimensional care conţine n valori naturale,
fiecare dintre acestea reprezentând câte o cifră a unui număr. Astfel, a0 reprezintă cifra
unităţilor numărului, a1 cifra zecilor etc.
Subprogramul furnizează prin parametrul k o valoare naturală egală cu numărul obţinut din
cifrele pare reţinute în tabloul a sau valoarea -1 dacă în tablou nu există nicio cifră pară.
Scrieţi definiţia completă a subprogramului f.
Exemple: dacă subprogramul se apelează pentru n=6 şi pentru taboul a având valorile
(2,3,5,6,4,1), parametrul k va furniza valoarea 462. Dacă subprogramul se apelează
pentru n=4 şi pentru a reţinând valorile (0,0,1,1), k va furniza valoarea 0. Dacă
subprogramul se apelează pentru n=3 şi pentru a reţinând valorile (3,7,1), k va furniza
valoarea -1.*/
void f1(int n, int a[100], int& k) {
	k = 0;
	int g = 0;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 == 0) {
			k = k * 10 + a[i];
			g++;
		}
	if (g == 0)
		k = -1;
}

/*Fişierul text NUMAR.TXT conţine pe prima linie un număr real pozitiv x care are cel mult
două cifre la partea întreagă şi cel mult şapte cifre după punctul zecimal..
a) Scrieţi un program C/C++ care, utilizând un algoritm eficient din punct de vedere al
timpului de executare şi al memoriei utilizate, afişează pe ecran, separate printr-un spaţiu,
două numere naturale al căror raport este egal cu x şi a căror diferenţă absolută este
minimă.
 Exemplu: dacă fişierul conţine valoarea 0.375 alăturată, se vor afişa pe ecran
numerele 3 8. (6p.)
b) Descrieţi în limbaj natural metoda utilizată şi explicaţi în ce constă eficienţa ei.*/
int cmmdc(int a, int b) {
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}
void afisare() {
	double x;
	ifstream f("numere.txt");
	f >> x;
	int b = 1;
	while (x - floor(x)) {
		x = x * 10;
		b = b * 10;
	}
	int a = x;
	int c = cmmdc(a, b);
	a = a / c;
	b = b / c;
	cout << a << " " << b;
}
































































