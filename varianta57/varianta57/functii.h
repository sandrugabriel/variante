#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*5. Scrieţi un program C/C++ care citeşte de la tastatură trei numere naturale n, a şi b
(2<n<25, 0<a<n, 0<b<n) şi construieşte în memorie o matrice cu n linii şi n coloane
numerotate de la 1 la n, formată numai din valori 0,1,2,3 şi 4 astfel încât: elementele
aflate pe linia a sau coloana b sunt egale cu 0, cele aflate deasupra liniei a şi la stânga
coloanei b sunt egale cu 1, cele aflate deasupra liniei a şi la dreapta coloanei b sunt egale
cu 2, cele aflate sub linia a şi la stânga coloanei b sunt egale cu 3, iar elementele aflate
sub linia a şi la dreapta coloanei b sunt egale cu 4 ca în exemplul de mai jos.
Programul afişează pe ecran matricea construită, fiecare linie a
matricei pe o linie a ecranului şi elementele de pe aceeaşi linie
separate prin câte un singur spaţiu.
Exemplu: pentru n=5, a=4, b=3 se construieşte în memorie şi se
afişează matricea alăturată: (10p.)
1 1 0 2 2
1 1 0 2 2
1 1 0 2 2
0 0 0 0 0
3 3 0 4 4*/
void generare(int n,int a,int b) {

	int i, j, m[25][25];


	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == a || j == b)
				m[i][j] = 0;
			else if (i < a && j < b)
				m[i][j] = 1;
			else if (i < a)
				m[i][j] = 2;
			else if (j < b)
				m[i][j] = 3;
			else
				m[i][j] = 4;


	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			cout << m[i][j] << " ";
		cout << '\n';
	}


}

/*3. Fişierul text INTRARE.TXT conţine, pe o singură linie, cel mult 100 de numere naturale
nenule de cel mult patru cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un
program C/C++ care citeşte numerele din fişier şi scrie în fişierul text IESIRE.TXT, în
ordine crescătoare, toate valorile distincte obţinute ca sumă de două elemente distincte
aflate pe linia a doua a fişierului.
Exemplu:
INTRARE.TXT IESIRE.TXT
1 4 3 2 3 4 5 6 7 */
void afisare() {

	ifstream f("intrare.txt");
	ofstream g("iesire.txt");

	int v[100], i, j, nr = 0, a, sume[4950], n = 0;
	while (f >> a) {
		v[nr++] = a;
	}

	for (i = 0; i < nr - 1; i++) {
		for (j = i + 1; j < nr; j++)
			if (v[i] != v[j])
				sume[n++] = v[i] + v[j];
	}

	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (sume[i] > sume[j]) {
				int aux = sume[i];
				sume[i] = sume[j];
				sume[j] = aux;
			}

	for (i = 0; i < n - 1; i++)
		if (sume[i] != sume[i + 1])
			g << sume[i] << " ";

	if (sume[n - 1] != sume[n - 2])
		g << sume[n - 1];


}

/*4. Se consideră subprogramul multiplu, cu doi parametri, care:
– primeşte prin intermediul parametrilor a şi k două numere întregi de cel mult 4 cifre;
– returnează cel mai mic multiplu al lui k mai mare sau egal cu a.
a) Scrieţi numai antetul subprogramului multiplu. (4p.)
b) Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură trei
numere naturale nenule x, y, z, de cel mult 4 cifre fiecare, (x≤y), şi care, prin apeluri utile
ale subprogramului multiplu, verifică dacă intervalul [x,y] conţine cel puţin un multiplu
al lui z. Programul va afişa pe ecran, în caz afirmativ, mesajul DA, iar în caz contrar
mesajul NU. */
int multiplu(int a, int k) {

	if (a > 0)
		return (((a - 1) / k) + 1) * k;
	else
		return (a / k) * k;
}
void afisarea(int x,int y,int z) {


		int intre = multiplu(x, z);

		if (intre <= y)
			cout << "DA";
		else
			cout << "NU";


}