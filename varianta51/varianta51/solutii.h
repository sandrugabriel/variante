#pragma once
#include "functii.h"



/*1. Considerăm declararea alăturată
folosită pentru a memora numele,
prenumele şi media unui elev.
Care dintre expresiile de mai jos are ca
valoare prima literă a numelui unui
elev ale cărui informaţii sunt memorate
în variabila p? (4p.)
struct elev{
 char nume[10],prenume[20];
 float medie;
 }p;
a. p.nume[1] b. p.nume[0]
c. p.nume d. nume[1] 
*/
struct elev {
	char nume[10], prenume[20];
	float medie;
}p;
void solutia1() {

	cout << p.nume[1];

}

/*5. Se consideră un şir s având maximum 52 de caractere, şir ce conţine numai litere mici ale
alfabetului englez şi cifre. Primul caracter al şirului este o literă mică, ultimul caracter al
şirului este o cifră şi fiecare literă mică din şir este urmată de o cifră nenulă. Scrieţi un
program C/C++ care citeşte de la tastatură şirul s, apoi construieşte şi afişează pe ecran un
nou şir de caractere, format numai din litere mici ale alfabetului englez, şir construit după
următoarea regulă: fiecare literă mică se va repeta de atâtea ori de câte ori o indică cifra
situată pe poziţia imediat următoare în şirul iniţial, ca în exemplu.
Exemplu: dacă se citeşte de la tastatură şirul a2b1f2 atunci şirul cerut este aabff*/
void solutia2() {
	char s[100] = "a2b1f2";
	litere(s);

}

/*1. Care este antetul corect al subprogramului cifre, care primeşte prin intermediul primului
parametru, x, un număr natural şi furnizează prin intermediul celui de-al doilea parametru,
y, suma cifrelor numărului natural x? (4p.)
a. void cifre(int x, int &y) b. int cifre(int x)
c. void cifre(int x, int y) d. void cifre(int &x, int y) */
void solutia3() {

	//a. void cifre(int x, int& y)

}

/*3. Se consideră subprogramul dist2, care primeşte prin intermediul parametrilor xa, ya şi
respectiv xb, yb, coordonatele carteziene întregi (abscisă, ordonată) pentru două puncte
din plan, A şi respectiv B. Subprogramul returnează pătratul distanţei dintre cele două
puncte.
a) Scrieţi în limbajul C/C++ definiţia completă a subprogramului dist2. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură 8 valori întregi reprezentând
coordonatele carteziene pentru patru puncte din plan şi afişează mesajul Da dacă cele
patru puncte pot fi vârfurile unui pătrat, iar în caz contrar afişează mesajul Nu,folosind
apeluri utile ale subprogramului dist2.
 Exemplu: dacă coordonatele punctelor sunt cele alăturate
atunci se va afişa mesajul Da (6p.)
0 0
3 0
3 3
0 3 */


/*Fişierul text date.in conţine pe prima linie un număr natural nenul n (n≤100), iar pe a
doua linie n numere naturale nenule, separate prin câte un spaţiu, fiecare număr având
maximum 4 cifre. Scrieţi un program C/C++ care citeşte toate numerele din fişierul text
date.in, construieşte în memorie un tablou unidimensional a, cu cele n elemente din fişier
şi afişează pe ecran perechile (ai, aj) , 1≤i<j≤n, cu proprietatea că elementele fiecăreia
dintre aceste perechi au aceeaşi paritate. Fiecare pereche se va afişa pe câte o linie a
ecranului, elementele perechii fiind separate prin câte un spaţiu. În cazul în care nu există
nicio pereche, se va afişa valoarea 0.
4.
Exemplu: dacă fişierul date.in are conţinutul alăturat
5
16 22 3 6 1,
se vor afişa:
16 22
16 6
22 6
3 1 (10p.)
*/
void solutia5() {

	afisarea();

}





































