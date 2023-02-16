#pragma once
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;



/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤100),
apoi n şiruri de caractere, fiecare şir având maximum 30 de caractere, doar litere mici ale
alfabetului englez, şi afişează pe ecran câte dintre cele n şiruri de caractere sunt formate
numai din vocale. Se consideră vocale literele a, e, i, o, u.
Exemplu: dacă n=3, iar şirurile citite sunt date alăturat
arc
ae
creion
, atunci
programul va afişa pe ecran 1 deoarece şirul ae este format
numai din vocale. (10p.)
*/
int contorVo(int n, char c[100][100]) {


	int ct = 0, semn = 0;

	char vocale[] = "aeiou";
	for (int i = 0; i < n; i++) {
		int j;
		semn = 0;
		for (j = 0; j < strlen(c[i]); j++) {
		//	if (!strchr(vocale, c[j]))
				semn = 1;

			if (semn == 1) j = strlen(c[i]) - 1;
		}

		if (j == strlen(c[i]))
			ct++;
	}

	

	return ct;
}

/*Subprogramul mult, cu doi parametri, primeşte prin intermediul primului parametru, n, un
număr natural nenul cu maximum trei cifre şi prin intermediul celui de-al doilea parametru,
a, un tablou unidimensional având n componente numere naturale cu cel mult 8 cifre
fiecare. Subprogramul returnează valoarea true dacă cele n componente ale lui a pot
forma o mulţime şi returnează false în caz contrar.
a) Scrieţi definiţia completă a subprogramului mult. (6p.)
b) Fişierul text date.in conţine cel mult 400 de numere naturale având maximum 8 cifre
fiecare. Scrieţi un program C/C++ care, folosind apeluri utile ale subprogramului mult,
afişează pe ecran valoarea maximă k, astfel încât primele k numere succesive din fişier să
poată forma o mulţime.
Exemplu: dacă fişierul date.in conţine
16 17 8 31 8 2 10
atunci se va afişa 4 (deoarece primele patru numere din fişier pot forma o mulţime şi
	acesta este cardinalul maxim posibil în condiţiile impuse de enunţul problemei)*/
int mult(int n, int* a) {

	int i;
	for (i = 0; i < n; i++) {

		int j;
		for (j = 0; j < n; j++)
			if (a[i] == a[j] && i != j)
				return 0;

	}


	return 1;
}
void ctMaxi() {
ifstream f("date.in");
	int v[400], a, ct = 0;
	while (f >> a) {


		v[ct++] = a;
		if (mult(ct, v) == 0) {
			ct++;
			
		}


	}

	cout << ct << " ";

}

/*4. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(k<n≤10000) şi afişează pe ecran un şir format din k numere naturale consecutive care au
suma n. Numerele se vor afişa pe ecran, în ordine crescătoare, despărţite între ele prin
câte un spaţiu. În cazul în care nu există un astfel de şir, se va afişa mesajul Nu există.*/
void afisarea(int n, int k) {
	float x;
	x = (float)(n - k * (k - 1) / 2) / k;
	if (x == floor(x))
		for (int i = 0; i < k; i++)
			cout << x + i << " ";
	else
		cout << "Nu exista";


}


























