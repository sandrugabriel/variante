#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n<101) şi apoi
n propoziţii. Fiecare propoziţie este formată din maximum 255 de caractere care sunt numai
litere mici ale alfabetului englez şi spaţii. Ştiind că fiecare propoziţie se termină cu caracterul
Enter, să se afişeze pe ecran propoziţia care are cele mai puţine vocale (sunt considerate
vocale caracterele a, e, i, o, u). Dacă două sau mai multe propoziţii au acelaşi număr de
vocale, se va afişa ultima propoziţie, în ordinea citirii, care îndeplineşte condiţia.
Exemplu: pentru n = 4 şi următoarele propoziţii:
azi a plouat tare
a fost innorat peste tot
maine va fi soare
acum nu mai vreau sa ploua
se va afişa: maine va fi soare */
void putineVocale(char p[100][100], int n) {


	char vocale[] = "aeiou", *propMin;
	int minim = 256;
	cin.get();

	for (int i = 0; i < n; i++) {
		int j, nrVocale = 0;
		for (j = 0; j < strlen(p[i]); j++)
			if (strchr(vocale, p[i][j]))
				nrVocale++;

		if (nrVocale <= minim) {
			minim = nrVocale;
			propMin = p[i];
		}
	}


	//cout << propMin;


}

/*3. a) Scrieţi definiţia completă a subprogramului Cautare, cu trei parametri, n, x şi v, care
primeşte prin parametrul n un număr natural (1≤n≤1000), prin parametrul x un tablou
unidimensional format din n componente (numere întregi de cel mult patru cifre fiecare: x1,
x2, …, xn) memorate în ordine crescătoare şi prin parametrul v un număr întreg de cel mult
patru cifre, diferit de oricare dintre elementele tabloului unidimensional x.
Subprogramul va căuta, în mod eficient din punct de vedere al timpului de executare, poziţia
pe care ar trebui inserată valoarea v în şirul x astfel încât să se obţină tot un şir ordonat şi
returnează această poziţie. (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
c) Fişierul text sir.in conţine cel mult 1000 numere naturale de maximum patru cifre
fiecare, numerele fiind diferite două câte două şi despărţite prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte numerele din fişierul sir.in şi, folosind apeluri utile
ale subprogramului Cautare, construieşte în memorie un tablou unidimensional care va
conţine toate numerele din fişierul sir.in ordonate crescător. Programul scrie în fişierul
text sir.out şirul obţinut, câte 10 elemente pe un rând, elementele de pe acelaşi rând
fiind despărţite printr-un singur spaţiu.
Exemplu: dacă fişierul sir.in conţine numerele: 7 -5 635 -456 0 8 587 -98 65 3 -8
atunci după executarea programului fişierul sir.out va conţine:
-456 -98 -8 -5 0 3 7 8 65 587
635 */
	int cautare(int n, int x[1000], int v) {
		int i, j, m;
		i = 1;
		j = n;
		if (x[1] > v)
			return 1;
		if (x[n] < v)
			return n + 1;
		while (i <= j) {
			m = (i + j) / 2;
			if (x[m] > v)
				j = m - 1;
			else
				i = m + 1;
		}
		return i;
	}
void afisarea() {

	ifstream f("sir.in");
	ofstream g("sir.out");
		int x[1000], n, k, p, i;
		f >> x[1];
		n = 1;
		cout << endl;
		while (f >> k) {
			p = cautare(n, x, k);
			for (i = n; i >= p; i--)
				x[i + 1] = x[i];
			n++;
			x[p] = k;
		}
		for (i = 1; i <= n; i++) {
			g << x[i]<< " ";
			cout << x[i] << " ";
		}
			


}














































