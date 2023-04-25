#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg,
iar variabila A memorează un tablou bidimensional cu 5 linii şi 5 coloane, numerotate
de la 1 la 5. Elementele tabloului sunt numere întregi. Fără a utiliza alte variabile,
scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel
încât, în urma execu-tării secvenței obținute, tabloul memorat în variabila A să aibă
elementele din figura de mai jos. (6 puncte)
for (i=5;i>=1;i--) for(j=1; j<6; j++)
5 1 1 1 2
5 2 0 0 1
5 1 2 0 1
5 2 1 2 1
5 5 5 5 5*/
void generare() {
	int a[100][100]{};
	for (int i = 5; i >= 1; i--)
		for (int j = 1; j < 5; j++)
			if (i == 5 || j == 1) a[i][j] = 5;
			else
			{
				a[i][j] = a[i - 1][j + 1] % 2 + a[i][j - 1] % 2;
			}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1 ; j <= 5; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

}

/*Se consideră un text cu cel mult 200 de caractere, litere, cifre şi spaţii. Cuvintele sunt formate din
litere ale alfabetului englez şi/sau cifre şi sunt separate prin câte un spațiu. Scrieți un program C/C++
care citeşte de la tastatură un text de tipul menţionat mai sus şi care nu conține nicio cifră,
transformată în majusculă. Dacă nu există astfel de cuvinte, se construieşte în memorie apoi
afişează pe ecran şirul format din prima literă a fiecarui cuvânt
afişează pe ecran mesajul nu există.
Exemplu: Pentru şirul Varianta T100 data in 10nov la simulare 12c
se afişează VDILS.*/
void maj(char s[]) {

	/*
	char rez[100], *p;
//	p = strtok(s, " ");

	while (p)
	{
		int ok = 0;
		for (int i = 0; i < strlen(p) && !ok; i++) {
			if (strchr("0123456789", p[i]))
				ok = 1;
		}

		if (!ok) {
			if (p[0] >= 'a' && p[0] <= 'z')
				p[0] -= -32;
			//strncat(rez,p,1);
		}
		//p = strtok(NULL, " ");
	}

	cout << rez;
	*/
}

/*3. Fiind date două numere a și b, îl numim pe a sufix al lui b dacă a este egal cu b sau dacă b
se poate obține din a prin alipirea la stânga a unor noi cifre. Exemplu: 12 este sufix al lui 12,
iar 15 este sufix al lui 31415. Fișierul bac.txt conține pe prima linie un număr natural x, cu cel
mult 4 cifre, iar pe a doua linie un şir de cel puțin două şi cel mult 1 000 000 de numere naturale
cu cel mult nouă cifre. Numerele din şir sunt separate prin câte un spațiu.
Se cere să se afişeze pe ecran ultimul termen al şirului care are ca sufix numărul x. Dacă în
şir nu există o astfel de valoare, pe ecran se afişează mesajul nu exista. Pentru determi-narea
numărului cerut se utilizează un algoritm eficient din punctul de vedere al memoriei şi al timpului de executare.
Exemplu: Dacă fişierul bac.txt conține numerele
12
3445 89312 1212 12 67120 312 1234578 atunci pe ecran se afişează 312.*/
void afisarea() {

	ifstream f("bac.txt");

	int x, y, u=0, cx, p;

	f >> x;
	p = 1;
	cx = x;

	while (cx)
	{
		p *= 10;
		cx /= 10;

	}
	while (f>>y)
	{
		if (y % p == x) u = y;
	}
		if (u != -1)cout << u;
		else
		{
			cout << "Nu exista";
		}
	

}



















































