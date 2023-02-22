#pragma once
#include "functii.h"


/*5. Scrieţi un program C/C++ care citeşte de la tastatură un şir de cel mult 50 de caractere
(litere mici şi mari ale alfabetului englez, cifre şi spaţii) şi afişează pe ecran litera mică cel
mai des întâlnită în şirul citit. Dacă există mai multe litere mici cu număr maxim de apariţii,
programul o va afişa pe prima dintre ele în ordine alfabetică. Dacă şirul nu conţine litere
mici, atunci pe ecran se va afişa mesajul nu.
Exemplu: dacă se citeşte şirul:
mergem la munte
atunci se va afişa: e (pentru că literele e şi m apar de cele mai multe ori în şir, iar e este
prima dintre ele în ordine alfabetică). */
void solutia1() {
	char s[100] = "mergem la munte";
	maximul(s);

}

/*2. Se consideră subprogramul f, definit
alăturat. Ce valoare are f(3,13)? Dar
f(1000,2009)? (6p.)
int f(int a,int b)
{
 if(2*a>=b)
 return 0;
 if(b%a==0)
 return b-a;
 return f(a+1,b-1);
} */
int f(int a, int b)
{
	if (2 * a >= b)
		return 0;
	if (b % a == 0)
		return b - a;
	return f(a + 1, b - 1);
}
void solutia2() {

	cout << f(1000, 2009);
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
void solutia3() {

	afisare();

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
void solutia4() {

	afisarea(4);

}