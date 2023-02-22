#pragma once
#include "functii.h"


/*5. Scrieţi un program C/C++ care citeşte de la tastatură un şir de cel mult 50 de caractere
(cifre, litere ale alfabetului englez şi spaţii; şirul conţine cel puţin o literă), apoi construieşte
în memorie şi afişează pe ecran şirul de caractere obţinut din şirul citit prin eliminarea tuturor
caracterelor care nu sunt litere.
Exemplu: dacă se citeşte şirul: Voi lua 10 la informatica atunci se va afişa:
Voilualainformatica */
void solutia1() {
	char c[100] = "Voi lua 10 la informatica";
	eliminare(c);

}

/*2. Se consideră subprogramul f, definit
alăturat. Ce valoare are f(88,1)? Dar
f(3713,3)? (6p.)
int f(int n,int c){
 if(n==0)
 return 0;
 if(n%10==c)
 return f(n/10,c)*10+c;
 return f(n/10,c);
}*/
int f(int n, int c) {
	if (n == 0)
		return 0;
	if (n % 10 == c)
		return f(n / 10, c) * 10 + c;
	return f(n / 10, c);
}
void solutia2() {

	cout << f(3713, 3);

}

/*3. Fişierul text BAC.TXT conţine, pe o singură linie, cel puţin 3 şi cel mult 100 de numere
naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un
spaţiu. Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi scrie
pe ecran, în ordine descrescătoare, cele mai mici 3 numere citite.
Exemplu: dacă fişierul BAC.TXT conţine numerele 1017 48 310 5710 162, atunci se
va afişa: 310 162 48 */
void solutia3() {

	afisare();

}

/*4. Se consideră subprogramul divizor, care:
– primeşte prin intermediul parametrului a un număr natural strict mai mare decât 1, de cel
mult 4 cifre;
– furnizează prin intermediul parametrului d cel mai mare divizor al lui a strict mai mic decât
a.
a) Scrieţi numai antetul subprogramului divizor. (4p.)
b) Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură un
număr natural nenul x, de cel mult 4 cifre şi, prin apeluri utile ale subprogramului divizor,
verifică dacă x este număr prim. Programul va afişa pe ecran în caz afirmativ mesajul DA, iar
în caz contrar mesajul NU.*/
void solutia4() {

	afisarea(11);

}












