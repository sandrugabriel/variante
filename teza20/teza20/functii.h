#pragma once
#include <iostream>
#include <fstream>

using namespace std;




/*În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A 0 la 3.
Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui memorează un tablou
bidimensional de tip întreg, cu 4 linii și 4 coloane, numerotate de la punctele de suspensie astfel încât,
în urma executării secvenței obținute, tabloul memorat
(6 puncte)
în variabila A să aibă elementele din figura de mai jos.
for (i=0; i<4;i++)
for(j=0; j<4; j++)
1 2 3 7
1 1 7 4
1 7 1 4
7 2 3 1*/
void generare() {
	int a[100][100]{};
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {

			if (i + j == 3) a[i][j] = 7;
			else if (i == j) a[i][j] = 1;
			else a[i][j] = j + 1;

		}

	for (int i = 0; i < 4; i++, cout << endl)
		for (int j = 0; j < 4; j++)
			cout << a[i][j] << " ";
}

/*Se citeşte de la tastatură un şir format din cel mult 20 de litere şi cifre. Scrieți un program C++ care va
determina şi va afişa pe ecran produsul numerelor din şir, ştiind că un număr cel mult 3 cifre şi în şir există
cel puțin cinci litere.
Exemplu: Dacă se citeşte şirul abc123DE2c42e5 se va afişa numărul 51660 care reprezintă produsul numerelor 123, 2, 42 şi 5
*/
int prod(char s[]) {

	int p = 1,nr;

	int i = 0;
	
	while (i<strlen(s))
	{
		nr = 0;
		if (isdigit(s[i]) != 0) {
			while (isdigit(s[i])!=0 && i<strlen(s))
			{
				nr *= 10 + (s[i] - '0');
				i++;
			}

			p *= nr;

		}

			i++;
		
	}

	return p;
}


/*
2. Subprogramul produs are doi parametri: n prin care primeşte un număr natural (1<n<100) şi x prin care primeşte
un tablou unidimensional format din n numere întregi și retur-nează produsul maxim obținut din două elemente situate
pe poziții distincte ale tabloului. Exemplu: Pentru n = 6 şi tabloul a = (-60, 36, -8, -2, 10, 5), subprogramul
va returna 480. Scrieți în limbajul C++ definiția completă a subprogramului produs.
*/
int produs(int n, int a[100]) {

	int p = 0;

	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] * a[j] > p)
				p = a[i] * a[j];
		}
	}


	return p;
}

/*
3. Considerând un număr natural x ce conține cel puțin trei cifre, după ce se elimină prima şi ultima cifră se
obține un alt număr denumit număr interior al numărului x. Fișierul bac.in conține un șir având cel mult un milion
de numere naturale care au cel puțin trei cifre și cel mult 5 cifre, separate prin câte un spațiu. Scrieți un
program C++ care afișează pe ecran în ordine descrescătoare, separate prin spațiu, numerele interioare ale
numerelor din fişier pentru care prima şi ultima lor cifră sunt egale sau afişează mesajul Nu există, dacă
fișierul nu conține niciun număr având prima şi ultima cifră egale. Utilizaţi un algoritm eficient ca timp de execuție.
Exemplu: Dacă fișierul conține şirul de numere 1151 234 2322 212 514 23122 atunci se vor afişa numerele 312 32 15 1.*/
void afisarea() {

	ifstream f("bac.txt");

	int x;
	int v[100]{},i=0;
	while (f >> x)
	{

		int nou = x;
		int ct = 0;
		while (x != 0)
		{
			ct++;
			x /= 10;

		}
		int pc = nou / (int)pow(10, ct - 1);
		int uc = nou % 10;

		if (pc == uc) {
			nou = nou % (int)pow(10, ct - 1);
			nou = nou / 10;
			v[i] = nou;

			i++;
		}

	}

	int semn = 1;

	do {
		semn = 1;

		for (int k = 0; k < i; k++) {
			if (v[k] < v[k + 1]) {
				int aux = v[k];
				v[k] = v[k + 1];
				v[k + 1] = aux;
				semn = 0;
			}
		}
	} while (semn == 0);

	for (int j = 0; j < i; j++) {
		cout << v[j] << " ";
	}


}

















