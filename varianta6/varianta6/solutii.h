#pragma once
#include "functii.h"
#include "backing.h"

/*Se consideră un text cu maximum 255 de caractere în care cuvintele sunt separate prin
unul sau mai multe spaţii. Primul caracter din textul citit este o literă, iar cuvintele sunt
formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi îl transformă, înlocuind prima literă a fiecărui cuvânt cu litera mare
corespunzătoare, restul caracterelor rămânând nemodificate. Textul astfel transformat va fi
afişat pe ecran.
Exemplu: dacă de la tastatură se introduce textul: mare frig rosu
se va afişa pe ecran: Mare Frig Rosu*/
void solutia1() {

	char s[100] = " mare frig rosu";

	for (int i = 0; i < strlen(s); i++) {
		if (s[i - 1] == ' ') {
			s[i] = toupper(s[i]);
		}
	}
	cout << s;
}

/*Utilizând metoda backtracking sunt generate numerele de 3 cifre, având toate cifrele
distincte şi cu proprietatea că cifrele aflate pe poziţii consecutive sunt de paritate diferită.
Ştiind că primele şase soluţii generate sunt, în această ordine, 103, 105, 107, 109, 123,
125, care este a zecea soluţie generată? (4p.)
a. 145 b. 147 c. 230 d. 149 */
void solutia2() {

	b();

}

/* Se consideră subprogramul alăturat:
Ce valoare are f(15,2)? Dar f(128,2)?
(6p.)
int f(int a, int b){
 if (b<1) return -1;
 else
 if (a%b==0)
 return 1+f(a/b,b);
else
 return 0; }
*/
void solutia3() {

	cout << f(15, 2) <<endl;
	cout << f(128, 2);

}


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤100) şi apoi
cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional
a. Programul afişează pe o linie a ecranului suma celor n elemente ale tabloului, pe
următoarea linie a ecranului suma primelor n-1 elemente şi aşa mai departe, astfel încât
ultima linie afişată să conţină doar primul element al tabloului.
Exemplu: dacă n=4 iar tabloul are elementele
a=(1,7,3,4) programul va afişa valorile
alăturate: (10p.)
15
11
8
1 */
void solutia4() {
	int n=4;
	int s = 0, a[100] = { 1,7,3,4 };
	for (int i = 1; i <= n; i++) {
		s = s + a[i];
	}
	for (int i = n; i >= 1; i--) {
		cout << s << " ";
		s = s - a[i];
	}
}

/*Se consideră fişierul BAC.TXT ce conţine un şir crescător cu cel mult un milion de numere
naturale de cel mult nouă cifre fiecare, separate prin câte un spaţiu.
a) Să se scrie un program C/C++ care, folosind un algoritm eficient din punct de vedere al
memoriei utilizate şi al timpului de executare, citeşte din fişier toţi termenii şirului şi afişează
pe ecran, pe o singură linie, fiecare termen distinct al şirului urmat de numărul de apariţii ale
acestuia în şir. Valorile afişate sunt separate prin câte un spaţiu.
Exemplu: dacă fişierul BAC.TXT are următorul conţinut:
1 1 1 5 5 5 5 9 9 11 20 20 20
programul va afişa:
1 3 5 4 9 2 11 1 20 3
deoarece 1 apare de 3 ori, 5 apare de 4 ori, etc. */
void solutia5() {

	afisaredis();

}

