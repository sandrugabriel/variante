#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*În secvenţa de instrucțiuni de mai jos, variabilele i şi j sunt de tip întreg. Fără a utiliza alte variabile,
scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării
secvenței obținute, să se afişeze numerele de mai jos, în această
ordine.
(6 puncte)
2 3 1 2 3 1
3 6 2 3 6 2
1 2 0 1 2 0
2 3 1 2 3 1
3 6 2 3 6 2
1 2 0 1 2 0*/
void generare() {


	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {

			if (i % 3 + j % 3 == 4) cout << 6 << " ";
			else cout << i % 3 + j % 3 << " ";
		}
		cout << endl;
	}

}

/*
SUBIECTUL III
(30 de puncte)
1. Scrieți un program în limbaj pseudocod care citeşte de la tastatură două numere naturale nenule a și b,
care au cel mult 9 cifre, determină şi afişează cel mai mic număr de permutări circulare la dreapta, cu
câte o poziție, ale cifrelor lui a, astfel încât să se obțină numărul b. Dacă nu e posibil, se va afișa
mesajul Imposibil.
Exemplu: Pentru a = 120362 şi b = 621203 se va afişa 2, iar pentru a = 732 şi b= 237 se va afişa Imposibil.
*/
int permutari(int a, int b) {


	int ct = 0;

	int dim = 0;
	int aux = a;
	while (aux!=0)
	{
		dim++;
		aux /= 10;
	}

	for (int i = 0; i < dim; i++) {

		a = (a % 10) * pow(10, dim-1) + a / 10;
		ct++;
		if (a == b) {
			return ct;
		}
		
	}

	return -1;
}

/*
Se citește un număr natural k (15k≤30), un tablou unidimensional v, având k numere naturale în ordine strict
crescătoare şi un număr natural n (15n399999). Scrieți C/C++ care determină cel mai mic divizor prim al lui
n şi îl caută în vectorul v. Dacă divizorul prim va fi găsit, programul va afişa indicele elementului din
vector egal cu el. În caz contrar, divizorul prim va fi adăugat în v pe poziția corespunzătoare astfel încât
ordinea strict crescătoare să se păstreze şi se va afişa vectorul v, obţinut după inserare. În vectorul v,
indicii elementelor se notează începând de la 1.
Exemplu: Dacă k=4, v = (2, 5, 11, 17), n=27 se va afişa v = (2,3,5,11,17), iar (10 puncte) dacă k = 4, v = (2, 5, 11, 17),
n=121, atunci se va afişa 3.
*/
void afisare(int k, int v[100], int n) {

	int d, ls, ld, mij, ok = 0, poz;

	d = n;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) {
			d = i; break;
		}
	ls = 1; ld = k;

	while (ls <= ld && ok)
	{
		mij = (ls + ld) / 2;
		if (v[mij] == d) { ok = 1; poz = mij; }
		else if (v[mij] > d) ld - mij - 1;
		else ls = mij + 1;

	}
	if (!ok)
	{

		for (int i = k; i >= ls + 1; i--)
			v[i + 1] = v[i];
		v[ls + 1] = d; k++;
		for (int i = 1; i <= k; i++)
			cout << v[i] << " ";
	}
	else
		cout << poz;
}

/*
3. Un număr este palindrom dacă citind cifrele numărului de la dreapta la stânga şi de la stânga la dreapta
se obține același număr. De exemplu 12321, 2002 sunt palindroame, iar 12312 nu este palindrom.
Fişierul text bac.txt conține pe prima linie n, un număr natural nenul, mai mic decât 105, iar pe a doua
linie un șir de n numere din intervalul [1, 9], separate prin câte un spațiu. Se cere afişarea pe ecran
a celui mai mare palindrom care se poate forma cu toate cifrele date. Dacă nu se poate construi un
palindrom cu toate cifrele lui n, se va afişa -1. Proiectați un algoritm eficient din punct de
vedere al memoriei utilizate şi al timpului de executare. Exemplu: Dacă fişierul bac.txt conține numerele:
10
2 3389 2 3 9 8 3 atunci pe ecran se afişează: 9833223389.*/
void afisarea() {

	ifstream fin("bac.txt");
	int x=0, fr[1000]{}, exista = 1, i, j, mijloc=-1, p=0, n=0;

	fin >> n;
	for (i = 1; i <= n; i++) {

		fin >> x;
		fr[x] ++;

	}
	
	for (i = 9; i >= 1; i--)
		if (fr[i] % 2 == 1)
			if (mijloc == -1)
			{
				mijloc = i;
			}
			else
			{
				exista = 0;
				break;
			}

	if (exista)
	{
		for (i = 9; i >= 1; i--)
		{
			for (j = 1; j <= fr[i] / 2; j++)
				cout << i;
		}
		if (mijloc != -1) cout << mijloc;

		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= fr[i] / 2; j++)
				cout << i;
		}

	}

	if (!exista) cout << -1;

}










