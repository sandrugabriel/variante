#pragma once
#include "functii.h"

/*5. Scrieţi un program C/C++ care citeşte de la tastatură un şir de cel mult 50 de caractere
(litere mici şi mari ale alfabetului englez, cifre, puncte, virgule şi spaţii) şi afişează pe ecran
cifra care apare de cele mai multe ori în şirul citit. Dacă şirul conţine mai multe cifre cu
număr maxim de apariţii, atunci se va afişa cea mai mică dintre acestea. Dacă şirul nu
conţine cifre, se va afişa pe ecran mesajul NU.
Exemplu: dacă se citeşte şirul:
Voi lua 9,5 la matematica 10 la informatica si 10 la romana
atunci se va afişa cifra 0 (pentru că cifrele 0 şi 1 apar de cele mai multe ori în şir, iar 0 este
cea mai mică dintre ele)*/
void solutia1() {
	char s[100] = "Voi lua 9,5 la matematica 10 la informatica si 10 la romana";
	maximul(s);

}

/*2. Se consideră subprogramul f, definit
alăturat. Ce valoare are f(12,5)? Dar
f(261,31)? (6p.)
int f(int a,int b)
{
 if(a<10)
 return b;
 return f(a/10,b)*10+b+1;
} */
int f(int a, int b)
{
	if (a < 10)
		return b;
	return f(a / 10, b) * 10 + b + 1;
}
void solutia2() {

	cout << f(12, 5);

}

/*3. Fişierul text bac.txt conţine, pe o singură linie, cel puţin 3 şi cel mult 100 de numere
naturale nenule distincte de cel mult 4 cifre fiecare, numerele fiind separate prin câte un
spaţiu. Scrieţi un program C/C++ care citeşte numerele din fişier şi scrie pe ecran ultima
cifră a produsului celor mai mari 3 numere citite.
Exemplu: dacă fişierul bac.txt conţine numerele:
1017 48 312 5742 162
atunci se va afişa: 8 (ultima cifră a produsului numerelor 1017, 5742, 312) */
void solutia3() {

	afisare();

}

/*4. Se consideră subprogramul divizor, care:
– primeşte prin intermediul parametrului, a, un număr natural nenul de cel mult 4 cifre,
strict mai mare ca 1;
– furnizează prin intermediul parametrului d, cel mai mic divizor al lui a strict mai mare
decât 1.
a) Scrieţi numai antetul subprogramului divizor. (4p.)
b) Scrieţi declarările de date şi programul principal C/C++ care citeşte de la tastatură un
număr natural x (x>1), şi, prin apeluri utile ale subprogramului divizor, verifică dacă x
este număr prim. Programul va afişa pe ecran, în caz afirmativ, mesajul DA, iar în caz
contrar mesajul NU. */
void solutia4() {

	afisarea(34);

}



