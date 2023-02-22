#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Scrieţi un program C/C++ care citeşte de la tastatură un şir de cel mult 50 de caractere
(litere mici şi mari ale alfabetului englez, cifre şi spaţii) şi afişează pe ecran litera mică cel
mai des întâlnită în şirul citit. Dacă există mai multe litere mici cu număr maxim de apariţii,
programul o va afişa pe prima dintre ele în ordine alfabetică. Dacă şirul nu conţine litere
mici, atunci pe ecran se va afişa mesajul nu.
Exemplu: dacă se citeşte şirul:
mergem la munte
atunci se va afişa: e (pentru că literele e şi m apar de cele mai multe ori în şir, iar e este
prima dintre ele în ordine alfabetică). */
void maximul(char s[]) {

    int f[130];
    for (char i = 'a'; i <= 'z'; i++)
        f[i] = 0; 
    for (int j = 0; j < strlen(s); j++)
        if (s[j] >= 'a' && s[j] <= 'z')
            f[s[j]]++;
    int max = 0;
    char l;
    for (int i = 'a'; i <= 'z'; i++)
        if (f[i] > max) {
            max = f[i];
            l = i;
        }
    cout << l;

}

/*3. Fişierul text bac.txt conţine, pe prima sa linie, 100 de numere naturale de cel mult 4 cifre
fiecare, numerele fiind ordonate crescător şi separate prin câte un spaţiu, iar pe a doua
linie un singur număr natural x. Scrieţi un program C/C++ care citeşte toate numerele din
fişier şi verifică dacă x se află în şirul celor 100 de numere aflate pe prima linie a fişierului.
În caz afirmativ, se va afişa pe ecran mesajul DA, altfel se va afişa mesajul NU.
Exemple: dacă fişierul bac.txt conţine:
17 38 40 45 50 51 52 53 54 55 ... 145
52
atunci se va afişa: DA ;
dacă fişierul bac.txt conţine:
2 11 15 16 20 25 30 35 40 ... 495
33
atunci se va afişa: NU.*/
void afisare() {

	ifstream f("bac.txt");
	int v[101], x, i, a, n = 0;
	while (f >> a)
		v[n++] = a;

	x = v[n - 1];
	n--;

	int stanga = 0, dreapta = n - 1, gasit = 0;
	while (stanga <= dreapta) {

		int mijloc = stanga + (dreapta - stanga) / 2;

		if (v[mijloc] == x) {
			gasit = 1;
			break;
		}
		else if (v[mijloc] < x)
			stanga = mijloc + 1;
		else
			dreapta = mijloc - 1;

	}

	if (gasit == 0)
		cout << "NU";
	else
		cout << "DA";

}

/*4. Se consideră subprogramul radical, care:
– primeşte prin intermediul parametrului a, un număr natural nenul de cel mult 4 cifre;
– furnizează prin intermediul parametrului x cel mai mare număr natural cu proprietatea
că x2
 este mai mic sau egal cu a; de exemplu, dacă a=20, subprogramul va furniza prin
x valoarea 4.
a) Scrieţi numai antetul subprogramului radical. (4p.)
b) Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură un
număr natural nenul de cel mult 4 cifre, n, şi prin apeluri utile ale subprogramului radical,
verifică dacă n este pătrat perfect. Programul va afişa pe ecran în caz afirmativ mesajul DA,
iar în caz contrar mesajul NU. */
void radical(int a, int& x) {

	x = a / 2;
	while (x * x > a)
		x--;

}

void afisarea(int n) {

int rad;

	radical(n, rad);
	if (rad * rad == n)
		cout << "DA";
	else
		cout << "NU";

}






