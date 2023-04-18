#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*3. În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar varia-bila A memorează 
un tablou bidimensional cu 6 linii şi 6 coloane, numerotate de la 1 la 6. Elementele tabloului sunt numere întregi. 
Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel 
încât, în urma executării secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de mai jos. (6 puncte)
for(i=1;i<=6;i++) for(j=1; j<=6; j++)
2 3 1 2 3 1
3 6 2 3 6 2
1 2 0 1 2 0
2 3 1 2 3 1
3 6 2 3 6 2
1 2 0 1 2 0*/
void generare() {
	int a[100][100]{};
	for (int i = 1; i <= 6; i++)
		for (int j = 1; j <= 6; j++) {
			if (i % 3 + j % 4 == 4) a[i][j] = 6;
			else a[i][j] = i % 3 + j % 3;
		}

			for (int i = 1; i <= 6; i++, cout << endl)
				for (int j = 1; j <= 6; j++)
					cout << a[i][j] << " ";
}

/*1. Scriețiun program C/C++ care citeşte de la tastatură un şir de caractere format din cel mult 250 de caractere,
litere mici ale alfabetului englez şi afişează pe ecran şirul rezultat i numărul minim de etape de eliminare
astfel încât să nu mai existe în şir două caractere alăturate identice. O etapă de eliminare se aplică unei
secvente de caractere identice care începe la poziția i din şir, şterge secvenţa de la poziţia i, apoi repetă
ştergerea secvenţelor de caractere identice ce includ poziția i, până cînd nu se mai obţin caractere identice
alăturate. Exemplu: Dacă se citeşte şirul mtopppppootatnnnne se va afişa mate 2, pentru că sunt 2 etape de
eliminare: topppppoot şi nnnn.*/
void afisare(char s[]) {


	int i = 0, lg, et=0, ok=0;
	while (i<strlen(s))
	{
		lg = i;
		while (s[lg] == s[lg+1] && lg+1<strlen(s))
		{
			lg++;
		}
		if (lg != i) {

			//strcpy(s + i, s + lg + 1);
			i--;

			if (ok == 0) et++;
			ok = 1;

		}
		else {
			i++;
			ok = 0;
		}
	}

	cout << s << " " << et;
}

/*
2. Scrieți un subprogram C/C++, denumit perechi, care primeşte prin parametrii n şi m două numere naturale,
nenule, de cel mult două cifre. Subprogramul va furniza prin parametrul k numărul de perechi de numere x, y
(x<y<=n), care au cel mai mic multiplu comun m. Perechile determinate se vor afișa pe ecran, pe linii diferite,
separate prin câte un spațiu. Exemplu: Pentru n = 6 și m = 6 se afişează perechile:
1 6
2 3
2 6
3 6, iar în k va fi valoarea 4.*/
int perechi(int n, int m) {

	int a, b, r, k = 0;

	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			a = i;
			b = j;
			while (b)
			{
				r = a % b;
				a = b;
				b = r;
			}
			if (i * j / a == m)k++;
		}
	}
	return k;
}

/*
3. Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un șir cu cel mult 1 000 000 de numere
întregi formate dintr-o cifră fiecare şi afişează pe ecran separate printr-un spațiu, numărul sau numerele
din fişier cu număr maxim de apariții.
Exemplu: Dacă în fișier sunt numerele 1 -8 1 1 -8 -8 9 9 atunci pe ecran se vor afişa nu neapărat în această ordine -8 1.*/
void afisarea() {

	ifstream f("bac.txt");
	int x, fr[100]{}, max = 0;

	while (f>>x)
	{
		fr[x + 9]++;
	}

	for (int i = 0; i <= 18; i++)
		if (fr[i] > max) max = fr[i];

	for (int i = 0; i <= 18; i++) {
		if (fr[i] == max) cout << i - 9 << " ";
	}

}



















































