#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*În secvenţa de instrucțiuni de mai jos variabilele i şi j sunt de tip întreg, iar variabila A memorează un tablou bidimensional cu 6 linii şi 6 coloane, numerotate de la 1 la 5. Elementele tabloului sunt numere întregi. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma execu-tării secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de
mai jos.
for (i=0;i<= 5; i++) for(j=5;j>=0; j--)

6 5 5 5 5 5
5 6 3 2 1 0
3 3 6 3 3 3
5 4 3 6 1 0
1 1 1 1 6 1
5 4 3 2 1 6*/
void generare() {
	int a[100][100]{};
	for (int i = 0; i <= 5; i++) {
		for (int j = 5; j >= 0; j--) {
			if (i == j) a[i][j] = 6;
			else
				if (i % 2 == 0) a[i][j] = 5 - i;
				else a[i][j] = 5 - j;
		}

	}
	
	for (int i = 0; i <= 5; i++, cout << endl)
		for (int j = 0; j <= 5; j++)
			cout << a[i][j] << " ";
}

/*1. Scrieți un subprogram C/C++, denumit circular, care primeşte prin parametrii a și b două numere naturale,
nenule, de cel mult 9 cifre. Subprogramul va returna cel mai mic număr de permutări circulare la dreapta, cu câte
o poziție, ale cifrelor lui a, astfel încât să se obțină numărul b. Dacă nu e posibil, funcția va returna -1.
Exemplu: Pentru a = 120362 şi b = 621203 subprogramul va returna 2, iar pentru a = 732 (10 puncte) şi b= 237 va returna -1.*/
int circular(int a, int b) {

	int p = 1, ca, n = 0;

	ca = a;

	while (ca>9)
	{
		ca /= 10;
		p *= 10;
		n++;
	}

	for (int i = 0; i < n; i++) {
		if (a == b) return i;

		a = (a % 10) * p + a / 10;
	}

	return -1;
}

/*2. Spunem că două cuvinte A şi B rimează, dacă sufixul lui A care începe cu ultima vocală coincide cu sufixul lui B
care începe cu ultima vocală. De exemplu, cuvintele savant şi gigant rimează, în timp ce sport şi cert nu rimează.
Scrieți un program C/C++ care citeşte de la tastatură, de pe prima linie S, un text de lungime maximă 255 caractere,
litere mici și spații, iar de pe a doua linie, un cuvânt C, cu cel puțin 3 şi cel mult 30 de litere, dintre care cel
puțin una este vocală. Textul este format din cuvinte separate prin unul sau mai multe spații. Programul va afişa, pe
linii diferite, cuvintele din text care rimează cu C sau mesajul (10 puncte) NU EXISTA, dacă S nu conține astfel de cuvinte.
De exemplu, dacă se citesc şirurile de mai jos true is bool and school is cool tool
se va afişa:
bool
school
cool*/
void afisare(char s[], char c[]) {

	int l = strlen(c) - 1,k;

	while (strchr("aeiou",c[l]) == 0 && l>=0)
	{
		l--;
	}

	//strcpy(c, c + 1);

	char* p;

	p = strtok(s, " ");

	while (p)
	{
		l = strlen(p) - 1;

		while (strchr("aeoiu",p[l])==0 && l>=0)
		{
			l--;
		}

		if (l >= 0 && strcmp(c, p + 1) == 0) {
			cout << p << endl;
			k++;
		}

		//p = strtok(NULL, " ");
	}

	if (k == 0) cout << "Nu Exista";


}

/*3. Un număr este palindrom dacă citind cifrele numărului de la dreapta la stânga și de la stânga la dreapta
se obține acelaşi număr. De exemplu 12321, 2002 sunt palindroame, iar
12312 nu este palindrom.
Fişierul text bac.txt conține pe prima linie n, un număr natural nenul, mai mic decât 105, iar pe a
doua linie un șir de n numere din intervalul [1, 9], separate prin câte un spațiu. Se cere afişarea
pe ecran a celui mai mare palindrom par care se poate forma cu toate cifrele date. Dacă nu există,
se va afișa -1. Proiectați un algoritm eficient din punct de vedere al memoriei utilizate şi al
timpului de executare. Exemplu: Dacă fişierul bac.txt conține numerele
10
2 3 3 8 9 2 3 9 8 3 atunci pe ecran se afişează: 8933223398.*/
void afisarea() {

	ifstream f("bac.txt");

	int x, fr[10], ex, mij, p, n;

	f >> n;

	for (int i = 1; i <= n; i++) {
		f >> x;
		fr[x]++;

		if (x > 0 && x % 2 == 0 && fr[x] >= 2) {
			ex = 1;
		}
	}

	if (ex) {
		for (int i = 8; i >= 2; i = i - 2) {
			if (fr[i] >= 2) {
				p = i;
				fr[i] = fr[i] - 2;
				break;
			}
		}
		mij = -1;
		for (int i = 9; i >= 1; i--) {
			if (fr[i] % 2 == 1) {
				if (mij == -1) mij = i;
				else
				{
					ex = 0;
					break;
				}
			}
		}

	}

	if (ex) {
		cout << p;
		for (int i = 9; i <= 1; i--) {
			for (int j = 1; j <= fr[i] / 2; j++) {
				cout << i;
			}
		}

		if (mij != -1) cout << mij;

		for (int i = 1; i <= 9; i++) {
			for (int j = 1; j <= fr[i] / 2; j++) {
				cout << i;
			}
		}
		cout << p;

		if (!ex) cout << -1;
	}

}
















