#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*5. Un cuvânt s, de cel mult 20 caractere, format doar din litere mici ale alfabetului englez,
conţine cel puţin o consoană şi cel puţin o vocală. Scrieţi programul C/C++ care citeşte de la
tastatură cuvântul s, construieşte în memorie şi afişează pe ecran cuvântul obţinut prin
eliminarea tuturor consoanelor din cuvântul s. Se consideră consoană oricare literă care nu
se află în mulţimea {a, e, i, o, u}.
Exemplu: dacă se citeşte cuvântul bacalaureat, pe ecran se afişează: aaauea*/
void vocale(char s[]) {

	char vocale[] = "aeiou", doarVocale[20];

	int n = strlen(s), index = 0;
	for (int i = 0; i < n; i++) {
		//if (strchr(vocale, s[i])) {
			doarVocale[index] = s[i];
			index++;
		//}
	}
	doarVocale[index] = '\0';
	cout << doarVocale;


}

/*3. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n ( 1≤n≤50) şi apoi
un şir de n numere naturale cu cel mult 4 cifre fiecare şi care verifică dacă elementele şirului
pot fi rearanjate astfel încât să respecte regula: al doilea element este cu 1 mai mare decât
primul, al treilea cu 2 mai mare decât al doilea, ... , ultimul este cu n-1 mai mare decât
penultimul. Programul afişează pe ecran mesajul DA în caz afirmativ şi mesajul NU în caz
contrar.
Exemplu: pentru n=4 şi şirul 8,5,11,6 se afişează DA (elementele pot fi rearajate astfel
încât să respecte regula dată: 5, 6, 8, 11)*/
void afisare(int n, int v[]) {

	int sortat;
	do {
		sortat = 1;
		for (int i = 0; i < n - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = 0;
			}

		}

	} while (sortat == 0);

	int dif = 1, respectaConditia = 1;
	for (int i = 0; i < n - 1; i++) {
		if (v[i + 1] - v[i] != dif) {
			respectaConditia = 0;
			break;
		}
		dif++;
	}

	if (respectaConditia)
		cout << "DA";
	else
		cout << "NU";

}

/*4. Se consideră subprogramul cmax care prin parametrul a primeşte un număr natural nenul
mai mic decât 30000, iar prin parametrul b furnizează cifra maximă din numărul a.
a) Scrieţi, folosind limbajul C/C++, doar antetul subprogramului cmax. (4p.)
b) Fişierul bac.txt conţine cel mult 1000 numere naturale nenule, mai mici decât 30000
fiecare, separate prin câte un spaţiu. Scrieţi programul C/C++ care citeşte din fişierul
bac.txt toate numerele şi care determină cea mai mare cifră din scrierea lor şi cel mai mic
dintre numerele care conţin această cifră, folosind apeluri utile ale subprogramului cmax.
Cifra şi numărul determinate se vor afişa pe ecran, separate printr-un spaţiu.
Exemplu: dacă fişierul bac.txt conţine valorile: 23 12 64 12 72 345 67 23 71 634
atunci pe ecran se afişează 7 67. */
void cmax(int a, int& b) {


	b = a % 10;
	a = a / 10;
	while (a > 0) {
		if (a % 10 > b)
			b = a % 10;
		a = a / 10;
	}


}
void afisarea() {


	ifstream f("bac.txt");

	int a, maxi = -1, mini = 30000;

	while (f >> a) {
		int b;
		cmax(a, b);
		if (b > maxi) {
			maxi = b;
			mini = a;
		}
		else if (b == maxi && a < mini) {
			mini = a;
		}
	}
	cout << maxi << " " << mini;


}











































