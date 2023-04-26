#pragma once
#include <iostream>
#include <fstream>

using namespace std;




/*În secvenţa de instrucțiuni de mai jos variabilele i şi j sunt de tip întreg, iar variabila A memorează un 
tablou bidimensional de tip caracter, cu 5 linii şi 5 coloane, numerotate de la 0 la 4. Fără a utiliza alte 
variabile, scrieți una sau mai multe instrucţiuni care pot înlocui
în variabila A să aibă elementele din figura de mai jos.
for (i=0; i<5;i++)
for(j=0; j<5; j++)
A B C D E
E A B C D
D E A B C
C D E A B
B C D E A*/
void generare() {

	char a[100][100]{};
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			if (i == j)
				a[i][j] = 'A';
			else
				if (i < j)
					a[i][j] = a[i][j - 1] + 1;
				else
					if (j == 0)
						a[i][j] = a[i - 1][4];
					else a[i][j] = a[i][j - 1] + 1;
		}

	for (int i = 0; i < 5; i++, cout << endl)
		for (int j = 0; j < 5; j++)
			cout << a[i][j] << " ";
}

/*1. Se citeşte de la tastatură un şir care are cel mult 250 de caractere: litere şi spaţii. Şirul este format
din mai multe cuvinte, separate între ele printr-un spațiu. Scrieți un program C++ care modifică în memorie
şirul de caractere, prin interschimbarea caracterelor din fiecare pereche formată din două caractere alăturate,
unul fiind vocală şi celălalt fiind consoană. Exemplu: Dacă se citeşte şirul exemple de probleme se va afişa pe
ecran şirul xemplee ed porbelem.*/
void perechi() {

	char s[251], voc[] = "aeiouAEIOU", aux=0; int i;
	cin.get(s, 251);
	for (i = 0; i < strlen(s) - 1; i++)

		if ((strchr(voc, s[i]) && !strchr(voc, s[i + 1]) && s[i + 1] != ' ') || (!strchr(voc, s[i]) && s[i] != ' ' && strchr(voc, s[i + 1])))
		{
			aux - s[i]; s[i] = s[i + 1]; s[i + 1] = aux;
		}
	cout << s;
}

/*3. Fișierul bac.txt conține un șir format din cel puțin 2 şi cel mult 10° numere naturale, fiecare număr având cel mult
9 cifre. Să se determine o secvență de lungime maximă, din-şirul aflat în fişier, cu proprietatea că ultima cifră a
primului număr din secvență este egală cu ultima cifră a ultimului număr din secvență. Scrieți un program C++ care
să deter-mine și să afișeze pe ecran lungimea acestei secvențe și numărul de ordine în fișier al primului număr din
secvență, utilizând un algoritm eficient din punct de vedere al timpului de execuție. Dacă în şirul de numere din
fişier nu există o astfel de secvență se va afișa mesajul Nu există. Dacă şirul conține mai multe astfel de secvențe,
se va utiliza ultima secvență din fişier. Se consideră că primul număr din fişier are numărul de ordine egal cu 1.
Exemplu: Dacă fișierul bac. txt conține numerele 2 37 27 24 315 144 7 85 214 atunci se afişează pe ecran 6 4.*/
void afisarea() {

	ifstream fin("bac.txt");
	int prord[10]{}, lg[10]{}, ultord[10]{}, n;
	int x, uc, nrord = 0, lgmax = 0, l, poz;
	while (fin >> x)
	{
		nrord++;
		uc = x % 10;
		if (lg[uc] == 0)
		{
			prord[uc] = ultord[uc] = nrord; lg[uc] = 1;
		}
		else
			ultord[uc] = nrord;
	}

	for (int i = 0; i <= 9; i++) {
		cout << prord[i] << " " << ultord[i] << endl;
		if (lg[i] != 0)
		{
			lg[i] = ultord[i] - prord[i] + 1;
			if (lg[i] > lgmax)
			{
				lgmax = lg[i];
				poz = i;
			}
			else
				if (lg[i] == lgmax)
					if (poz < prord[i])
						poz = i;
		}
	}
	if (lgmax == 1)
		cout << "Nu exista";
	else cout << lgmax << " " << prord[poz];


}





























