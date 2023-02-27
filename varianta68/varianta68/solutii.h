﻿#pragma once
#include "functii.h"


/*5. Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale m şi n
(1≤m≤50, 1≤n≤50) şi m* n numere naturale de cel mult 5 cifre ce reprezintă elementele
unui tablou bidimensional, şi afişează pe ecran ultima cifră a produsului elementelor pozitive
aflate pe linii cu numere de ordine pare şi coloane cu numere de ordine impare.
Numerotarea liniilor, respectiv a coloanelor, se va face începând cu valoarea 1. Dacă nu
există elemente pozitive aflate pe linii cu numere de ordine pare şi coloane cu numere de
ordine impare, se va afişa mesajul NU EXISTA. (10p.)
Exemplu: pentru m=4, n=4 şi matricea alăturată se va afişa 5
(care reprezintă ultima cifră a valorii 355=5*71).
 11 -21 31 41
 5 -61 71 -81
 91 11 21 31
 -11 31 -41 0 
*/
void solutia1() {

	int m = 4, n = 4, a[100][100] = { {11, -21, 31, 41} , {5 ,-61, 71 ,-81}, { 91, 11 ,21, 31}, { -11, 31, -41, 0 } };
	generare(m, n, a);

}

/*2. Se consideră subprogramul
recursiv definit alăturat. Ce valori
vor fi afişate pe ecran în urma
apelului gama(6);? (6p.)
void gama(int n)
{int i;
 if(n>=3)
 {for(i=3;i<=n;i++)
 printf(”%d ”,n); | cout<<n<<” ”;
 gama(n-3);
 }
} 
*/
void gama(int n)
{
	int i;
	if (n >= 3)
	{
		for (i = 3; i <= n; i++)
			cout << n << " ";
		gama(n - 3);
	}
}
void solutia2() {

	gama(6);
}

/*3. a) Să se scrie definiţia completă a subprogramului calcul, care primeşte prin intermediul
celor doi parametri ai săi două numere întregi, n şi k (1≤n≤100000000 şi 1≤k≤9), şi
returnează cifra de rang k a numărului n. Rangul unei cifre este numărul său de ordine,
numerotând cifrele de la dreapta la stânga; cifra unităţilor având rangul 1. Dacă numărul k
este mai mare decât numărul de cifre ale lui n, atunci funcţia returnează valoarea -1.
Exemplu: dacă n=9243 şi k=3, în urma apelului se va returna 2.
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu cel mult 8
cifre. Programul va verifica, utilizând apeluri ale subprogramului calcul, dacă orice cifră a
lui n are rangul cifrei mai mare sau egal cu valoarea cifrei respective şi va afişa mesajul Da în
caz afirmativ şi mesajul Nu în caz contrar.
Exemplu : pentru n=4160 se va afişa Nu. (5p.)
rang 4 3 2 1
cifră 4 1 6 0
*/
void solutia3() {

	afisare(9243);
}

/*4. Fişierul text SIR.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie, separate prin spaţii, un şir crescător de n numere naturale cu cel mult 9 cifre
fiecare.
Numim platou într-un şir de valori o secvenţă de elemente identice situate pe poziţii
alăturate. Lungimea unui platou este egală cu numărul de elemente care îl formează.
a) Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din
punct de vedere al timpului de executare şi al spaţiului de memorie utilizat afişează pe
ecran, separate printr-un spaţiu, lungimea maximă a unui platou, precum şi valoarea care
formează platoul. În cazul în care sunt mai multe platouri de aceeaşi lungime se va afişa
valoarea cea mai mare care formează unul dintre aceste platouri. (6p.)
Exemplu: dacă fişierul SIR.TXT
are conţinutul alăturat,
10
11 211 211 211 328 400 400 1201 1201 1201
atunci programul va afişa pe ecran 3 1201.*/
void solutia4() {

	afisarea();

}
































