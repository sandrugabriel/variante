#pragma once
#include "functii.h"



/*2. Se consideră declarările de mai jos, în care variabila e memorează numele şi data naşterii unui elev. Scrieți o secvență de instrucțiuni C/C++ care citește de la tastatură informațiile despre un elev în variabila e şi afişează numele elevului dacă anul naşterii este egal cu 2000 sau data naşterii în caz contrar, informațiile din dată se aceeaşi linie separate printr-un spațiu.

struct data{int zi, luna, an;};

struct elev { char nume [21];
data dn;
 }
elev e;*/
struct Data { int zi, luna, an; };
struct elev {
	char nume[21];
	Data dn;
}e;
void solutia1() {

	if (e.dn.an == 2000) cout << e.nume;
	else
	{
		cout << e.dn.zi << " " << e.dn.luna << " " << e.dn.an;
	}


}

/*3. În secvența de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila 
A memorează un tablou bidimensional cu 5 linii şi 5 coloane, numerotate de la 1 la 5. Elementele 
tabloului sunt numere întregi. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni
care pot înlocui punctele de suspensie astfel încât în urma execu- tării secvenței obținute, tabloul
memorat în variabila A să aibă elementele din figura de mai jos.

for (i=1;i<=5;i++) for (j=1;j<=5;j++)

23401
34012
40123
01234
12340
*/
void solutia2() {

	generare();
}

/*Scrieți un program C/C++ care citeşte de la tastatură un şir de caractere format din cel mult 
100 de caractere (litere mici şi mari ale alfabetului englez şi caracterul #) şi afişează pe ecran 
şirul obținut prin inversarea ordinii literelor tuturor cuvintelor de lungime maximă. Şirul începe
şi se termină cu caracterul #, ca in exemplu. Un cuvânt din şir reprezintă o succesiune de litere 
delimitate de două caractere #. Exemplu: dacă se citeşte şirul de caractere #Voi#da#bacu#la#info# 
se va afişa #Voi#da#ucab#la#ofni#*/
void solutia3() {
	char s[100] = "#Voi#da#bacu#la#info#";
	interschimbare(s);

}

/*2. Subprogramul numărare are patru parametri:
.n. prin care primeşte un număr natural (2≤ n ≤20); .m. prin care primeşte un număr natural (2≤ m≤20);
. a. prin care primeşte un tablou unidimensional care memorează un șir de n numere naturale, fiecare cu cel mult 4 
cifre; b. prin care primeşte un tablou unidimensional care memorează un şir de m numere
naturale, fiecare cu cel mult 4 cifre.
Subprogramul returnează numărul de elemente din tabloul a, care sunt strict mai mici decât toate 
elementele din tabloul b. Scrieți în limbajul C/C++ definiția completă a subprogra- mului numărare.
Exemplu: dacă n = 7, m = 8 şi a = (1, 4, 5, 3, 82, 6, 2), b = ( 56, 6, 34, 23, 8, 9, 12, 18)
atunci, după apel, subprogramul va returna valoarea 5 (valorile 1, 4, 5, 3, 2 din tabloul a sunt
strict mai mici decât toate valorile din tabloul b.*/
void solutia4() {

	int n = 7, m = 8, a[100] = { 1, 4, 5, 3, 82, 6, 2 }, b[100] = { 56, 6, 34, 23, 8, 9, 12, 18 };

	cout << numarare(n, m, a, b);

}

/*3. Numim secvență fazan a unui şir de numere naturale un subşir al acestuia, format din termeni aflați pe poziții consecutive 
în şirul dat cu proprietatea că prima cifră a terme- nului curent este egală cu ultima cifră a termenului anterior. Lungimea 
secvenței este egală cu numărul de termeni ai acesteia. Fişierul bac. txt conține un şir de cel puțin două şi cel mult 10° 
de numere naturale din intervalul [0, 10°]. Numerele sunt separate prin câte un spațiu, iar în şir există cel puțin doi 
termeni fazan pe poziții consecutive. Se cere să se determine o secvență fazan de lungime maximă în şirul aflat în fişier 
şi să se afişeze pe ecran lungimea acestei secvente. Pentru determinarea secvenței cerute se utilizează un algoritm 
eficient din punctul de vedere al memoriei necesare şi al timpului
de executare. Exemplu: dacă fişierul bac. txt conține numerele 12 13 31 123 321 61 76 25 54
425 511 121 311 311 atunci pe ecran se afişează valoarea 5. a) Se cere să se proiecteze un algoritm eficient din punct de 
vedere al timpului de executare
și al spațiului de memorie utilizat şi să se realizeze o descriere de 3-4 rânduri a algorit- mului ales justificându-se eficienta acestuia.*/
void solutia5() {

	afisarea();
}





