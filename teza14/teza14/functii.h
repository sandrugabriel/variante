#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*În secvenţa de instrucţiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează
un tablou bidimensional cu 7 linii şi 7 coloane, numerotate de la 1 la 7. Elementele tabloului sunt
caractere. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui
punctele de suspensie astfel încât, în urma execu-tării secvenței obținute, tabloul memorat în
variabila A să aibă elementele din figura de mai jos. (6 puncte)
for (i=0;i<=6;i++) for(j=0; j<=6; j++)
* - - - - - *
* * - - - * *
* - * - * - *
* - - - - - *
* - - - - - *
* - - - - - *
*/
void generare() {
	char a[100][100]{};
	for (int i = 0; i <= 6; i++)
		for (int j = 0; j <= 6; j++) {
			if (j == 0 || j == 6) a[i][j] == '*';
			else if ((i <= 3) && (j + i == 6 || i == j)) a[i][j] = '*';
			else a[i][j] = '-';

			if (j == 0 || j == 6) a[i][j] == '*';
		}
			


	for (int i = 0; i <= 6; i++, cout << endl)
		for (int j = 0; j <= 6; j++)
			cout << a[i][j] << " ";
}

/*
Scrieți un program C/C++ care citeşte de la tastatură, de pe prima linie, un număr natural
n (10<n<50), iar de pe a doua linie, un text S de cel mult 200 de caractere
(litere mici ale alfabetului englez şi spaţii), format din cuvinte separate prin câte un spațiu.
Textul nu începe și nu se termină cu spații. Programul afişează pe ecran liniile paragrafului în
care se încadrează textul după operația WRAP de dimensiune n. Dacă afişarea nu e posibilă se va
scrie pe ecran mesajul IMPOSIBIL.
De exemplu, dacă se citește n = 20 și textul:
bacul la info este usor daca esti foarte bine pregatit se va afișa
bacul la info este * usor daca esti **
foarte bine pregatit*/
void warap(int n, char s[]) {

/*	int i, n, l, paragraf;
	char* p, sir[201][201];

	p = strtok(s, " ");
	l = 0;
	while (p)
	{

		if (strlen(p) > n)
		{
			cout << "IMPOSIBIL";
			return;
		}
		else
			if (l == 0)
			{
				l = strlen(p);
				strcat(sir[paragraf], p);

			}
			else
			{
				if (l + strlen(p) + 1 <= n)
				{
					l = 1 + strlen(p) + 1;
					strcat(sir[paragraf], " ");
					strcat(sir[paragraf], p);

				}
				else {
					for (i = 1 + 1; i < n; i++)
						strcat(sir[paragraf], "*");
					l = strlen(p);
					paragraf++;
					strcat(sir[paragraf], p);
				}
			}
		p = strtok(NULL, " ");
	}

	cout << paragraf + 1 << endl;
	for (i = 0; i <= paragraf; i++)
		cout << sir[i] << endl

*/
}

/*3. Din fişierul text BAC.TXT se citesc, de pe prima linie un număr k (k < 106), iar de pe linia următoare
cel mult 1 000 000 de numere naturale cu cel mult 2 cifre fiecare, separate prin câte un spațiu. Să se afişeze
pe ecran numărul de pe a doua linie din fişier care va fi pe poziția k în şirul ordonat descrescător,
dacă există sau -1 în caz contrar. Să se proiecteze un algoritm eficient din punct de vedere al timpului
de executare. Exemplu: Dacă fişierul conține numerele:
6
21 9 16 2 16 2 9 4 9 21 9 2 8 atunci pe ecran se va afişa 9.*/
void afisarea() {

	ifstream fin("bac.txt");
	int x, k, fr[100], i, s=0;

	fin >> k;
	while (fin >> x)
		fr[x] ++;
	for (i = 99; i >= 0; i--)
	{
		cout << i; return;
	}
	s = s + fr[i]; if (s >= k)
	{
		cout << -1;
		return;
	}


}





















