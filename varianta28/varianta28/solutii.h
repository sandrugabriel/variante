#pragma once
#include "functii.h"

/*Şirul de caractere s2 este “clona” şirului de caractere s1 dacă se poate obţine din s1 prin
eliminarea tuturor apariţiilor unei singure vocale. Se consideră vocală orice literă din
mulţimea {a,e,i,o,u}.
Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20 litere
mici ale alfabetului englez şi afişează pe ecran (dacă există), toate “clonele” acestui cuvânt,
fiecare pe câte o linie a ecranului.
Exemplu: pentru cuvântul informatica se afişează, nu neapărat în
această ordine, “clonele” scrise alăturat. (10p.)
nformatca
infrmatica
informtic*/
void solutia1() {
	char s[100] = "informatica";
	clone(s);

}

/*Generarea tuturor cuvintelor de trei litere mici, nu neapărat distincte, ale alfabetului englez,
se poate realiza cu ajutorul unui algoritm echivalent cu cel de generare a: (4p.)
a. produsului cartezian b. combinărilor
c. aranjamentelor d. permutărilor*/
void solutia2() {

	//c.aranjamente

}

/*Subprogramul f este definit alăturat.
Ce valoare are f(8,4)? (4p.)
int f (int x,int y)
{
 if(x<y)return 1+f(x+1,y);
 if(y<x)return 1+f(y+1,x);
 return 1;
} */
void solutia3() {

	cout << f(8, 4);

}

/*. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n din intervalul
[2,50] şi apoi n numere reale şi afişează pe ecran câte dintre cele n numere reale sunt
egale cu media aritmetică a celorlalte n-1 numere reale. */
void solutia4() {
	int n = 5;
	float x[100] = { 23,5.06,1.1,5.23,13 };
	media(n, x);
}

/*4. a) Scrieţi definiţia completă a unui subprogram primul, care
- primeşte prin singurul său parametru, a, o valoare naturală din intervalul [2,10000]
- returnează o valoare naturală reprezentând cel mai mic divizor al numărului a mai mare strict
decât 1. (6p.)
b) Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n(1≤n≤100) şi pe
următoarea linie n numere naturale din intervalul [2,10000] separate prin câte un spaţiu.
Un număr natural n se numeşte „aproape prim” dacă este egal cu produsul a două numere
prime distincte. De exemplu, numărul 14 este „aproape prim” pentru că este egal cu produsul
numerelor prime 2 şi 7.
Scrieţi un program C/C++ care determină, folosind apeluri utile ale suprogramului primul,
cel mai mare număr „aproape prim” de pe linia a doua a fişierului NUMERE.IN. În cazul în
care există un astfel de număr se afişează pe ecran mesajul DA, urmat de numărul
determinat, iar în caz contrar mesajul NU.
Exemplu: dacă fişierul NUMERE.IN are conţinutul:
6
100 14 21 8 77 35
atunci se afişează pe ecran DA 77 pentru că numărul 77 este cel cel mai mare dintre numerele
„aproape prime” din fişier (14=7*2,21=7*3,77=7*11, 35=7*5).*/
void solutia5() {
	afisare();
}




























































