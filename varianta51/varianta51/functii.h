#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Se consideră un şir s având maximum 52 de caractere, şir ce conţine numai litere mici ale
alfabetului englez şi cifre. Primul caracter al şirului este o literă mică, ultimul caracter al
şirului este o cifră şi fiecare literă mică din şir este urmată de o cifră nenulă. Scrieţi un
program C/C++ care citeşte de la tastatură şirul s, apoi construieşte şi afişează pe ecran un
nou şir de caractere, format numai din litere mici ale alfabetului englez, şir construit după
următoarea regulă: fiecare literă mică se va repeta de atâtea ori de câte ori o indică cifra
situată pe poziţia imediat următoare în şirul iniţial, ca în exemplu.
Exemplu: dacă se citeşte de la tastatură şirul a2b1f2 atunci şirul cerut este aabff*/
void litere(char s[]) {


    char a[200] = "";
    int k = 0;
    for (int i = 0; i < strlen(s); i = i + 2)
        for (int j = 1; j <= s[i + 1] - '0'; j++) {
            a[k] = s[i];
            k++;
        }
    a[k] = 0;
    cout << a;


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
//??

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
void afisarea() {
	ifstream f("date.in");
	int n, a[100], ok = 0;
	f >> n;
	for (int i = 0; i < n; i++)
		f >> a[i];

	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++) {

			if (a[i] % 2 == a[j] % 2) {
				cout << a[i] << " " << a[j] << endl;
				ok = 1;
			}

		}
	if (ok == 0)
		cout << 0;


}
























