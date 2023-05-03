#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează un
tablou bidimensional de tip caracter, cu 4 linii şi 4 coloane, numerotate de la 0 la 3. Fără a utiliza alte
variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în
urma executării secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de mai jos.
(6 puncte)
for (i=0; i<4;i++)
for(j=0; j<4; j++)
aabb
AABB
aabb
AABB*/
void generare() {
	char a[100][100]{};

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			if (i % 2 == 0)
				if (j < 2) a[i][j] = 'a';
				else a[i][j] = 'b';
			else
				if (j < 2) a[i][j] = 'A';
				else a[i][j] = 'B';
		}


	for (int i = 0; i < 4; i++, cout << endl)
		for (int j = 0; j < 4; j++)
			cout << a[i][j] << " ";

}

/*Se citesc de la tastatură două şiruri de caractere s1 şi s2 formate din cel mult 40 de litere mici.
Scrieți un program C++ care modifică în memorie cele două şiruri astfel: elimină vocalele din şirul s1
şi le inserează în şirul s2 pe poziții pare, în ordine începând de la primul caracter. Să se afişeze pe
ecran şirurile modificate.
Exemplu: Pentru șirurile elicopter şi cartile, şirul s1 devine lcptr, iar s2 devine
eciaoretile.
*/
void schimbare(char s1[], char s2[]) {

	/*char s1[41], s2[41], voc[] = "aeiou", aux[41]; int i, p = 0;

	for (i = 0; i < strlen(s1); i++)
		if (strchr(voc, s1[i]) != 0) { 
			strcpy(aux, s2 + p);
			s2[p] = s1[i]; s2[p + 1] = NULL; strcat(s2, aux);
			p = p + 2;
			strcpy(s1 + i, s1 + i + 1);
			i--;
		}
	cout << s1 << endl << s2;*/
	

}

/*
2. Subprogramul factor are patru parametri: n prin care primeşte un număr natural (1≤n≤50), a prin care primeşte
un tablou unidimensional format din n numere naturale nenule care au cel mult 3 cifre, fp prin care furnizează cel
mai mic factor prim comun tuturor elementelor din tabloul a și p prin care furnizează puterea factorului fp pentru
care numărul fp² este divizor pentru fiecare element din tabloul a, cu p>0. Dacă elementele tabloului a nu au un
factor prim comun atunci fp are valoarea -1 și are valoarea 0. Scrieți în limbajul C++ definiția completă a
subprogramului factor.
Exemplu: Pentru n = 4 şi tabloul a= = (60,36,18,24), subprogramul factor va avea fp = 2, p = 1, iar pentru n = 4 și
tabloul a= = (22,60,21,25), fp = -1 şi p = 0.
*/
void factor(int n, int v[], int& fp, int& p) {

	int f[100], pt[100], i, c, nf = 0, d, pf, poz, ok = 0;
	fp = 1;
	c = v[1];
	d = 2;
	while (c > 1)
	{
		pf = 0;
		while (c % d == 0) {
			c /= d; pf++;
		}
		if (pf != 0) {
			nf++; f[nf] = d; pt[nf] = pf;
		}
		d++;

	}
	poz = 1;
	int j;
	for (i = 2; i <= n && fp > 0; i++)
	{
		c = v[i]; ok = 0;

		for (j = poz; j <= nf; j++)
			if (c % f[j] == 0)
			{
				pf = 0; ok = 1;
				while (c % f[j] == 0)
				{
					pf++;
					c /= f[j];
				}
				if (pf < pt[j])
					pt[j] = pf; fp = f[j]; p = pt[j]; poz = j;
				break;
			} if (ok == 0)
			{
				fp = -1; p = 0;

			}
	}

}

/*
3. Scrieți un program C++, eficient ca timp de execuție și spațiu de memorie utilizat, care afişează în fişierul
bac.txt, în ordine strict crescătoare, pe câte o linie, toate palindroamele formate din 6 cifre impare. Primele
3 numere afişate în fişier sunt: 111111,113311,115511*/
void afisarea(int ct1) {

	ofstream fout("bac.txt");

	int c1, c2, c3, nr;
	int ct = 0;
	for(c1=1;c1<=9;c1++)
		for(c2=1;c2<=9;c2+=2)
			for (c3 = 1; c3 <= 9; c3 += 2) {
				if (ct < ct1) {
nr = c1 * 100000 + c2 * 10000 + c3 * 1000 + c3 * 100 + c2 * 10 + c1;

				fout << nr << " ";
					ct++;
				}
				
			}


}





















