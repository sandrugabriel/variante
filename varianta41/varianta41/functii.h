#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/* Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n
(1≤n≤23) şi apoi construieşte în memorie o matrice cu n linii şi n coloane,
numerotate de la 1 la n, astfel încât fiecare element situat pe o linie i
(1≤i≤n) şi pe o coloană j (1≤j≤n) va fi egal cu suma dintre i şi j.
Programul va afişa matricea pe ecran, câte o linie a matricei pe o linie a
ecranului, elementele de pe aceeaşi linie fiind separate prin câte un spaţiu.
Exemplu: dacă n=4, se va afişa matricea alăturată. (10p.)
2 3 4 5
3 4 5 6
4 5 6 7
5 6 7 8*/
void generare(int n) {
	int m[100][100];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			m[i][j] = i + j;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}

}

/*2. Ştiind că p este un vector cu 3
componente întregi (vector declarat
global), stabiliţi cu ce trebuie înlocuite
α şi β în definiţia subprogramului G
alăturat astfel încât în urma apelului
G(0) să se afişeze toate numerele de
3 cifre nenule, fiecare număr fiind
afişat o singură dată. (6p.)
void G(int k)
{int i;
 for(i=1;i<=α;i++)
 { p[k]=i;
 if(β)G(k+1);
 else
 cout<<p[0]<<p[1]<<p[2]<<endl; |
 printf("%d%d%d\n",p[0],p[1],p[2]);
 }
}*/
void G(int k)
{
	int i, p[100]{};
	for (i = 1; i <= 3; i++)
	{
		p[k] = i;
		if (i==k)G(k + 1);
		else
			cout << p[0] << p[1] << p[2] << endl; 
	}
}

/*3. Scrieţi un subprogram DIST, cu doi parametri, care primeşte prin intermediul parametrului a
un tablou unidimensional cu cel mult 100 de elemente, numere naturale de cel mult 4 cifre
fiecare, şi prin intermediul parametrului n un număr natural nenul, n<100, ce reprezintă
numărul de elemente din tablou. Subprogramul returnează valoarea 1 dacă toate
elementele tabloului a sunt distincte şi dacă diferenţa absolută a oricăror două elemente
vecine din tablou este diferită de 1, altfel returnând valoarea 0. */
void afisare(int n, int a[100]) {
	int p=1;

	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			if (a[i] == a[j])
				p = 0;
	if (p == 1)
		for (int i = 1; i <= n - 1; i++)
			if (a[i + 1] - a[i] == 1 || a[i] - a[i + 1] == 1)
				p = 0;
	if (p == 1)
		cout << " da ";
	else
		cout << " nu";
}

/*4. Fişierul text numere.txt conţine pe prima linie un număr natural n (0<n<100000), iar pe a
doua linie un şir format din n cifre, separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care determină în mod eficient din punct de vedere al
timpului de executare, cea mai mare cifră dintre cele situate pe a doua linie a fişierului,
precum şi numărul de apariţii ale acesteia. Cele două numere vor fi afişate pe o singură
linie a ecranului, separate printr-un spaţiu.
Exemplu: daca fişierul numere.txt are următorul conţinut:
7
3 5 2 1 5 3 1
atunci pe ecran se va afişa: 5 2. */


void afisarea() {

	ifstream f("numere.txt");
	int n, frecv[10], a, i;
	for (i = 0; i < 10; i++)
		frecv[i] = 0;
	f >> n;
	while (f >> a) {
		frecv[a]++;
	}

	for (i = 9; i >= 0; i--)
		if (frecv[i] != 0) {
			cout << i << " " << frecv[i];
		}

}






















