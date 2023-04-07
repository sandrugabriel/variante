#pragma once
#include "functii.h"



/*Fara a utiliza alte variabile, scrieti una sau mai multe instructiuni care pot inlocui punctele de suspenzie astfel incate in
urma executari secventei obtinute, tabloul memorat in variabila A sa aiba elementele din figura de mai jos.
1 6  11 16 21
2 7  12 17 22
3 8  13 18 23
4 9  14 19 24
5 10 15 20 25
*/
void solutia1() {

	generare();

}

/*Se citeste de la tastatura un sir de carcatere format din cel putin 100 de caractere si afiseaza pe ecran lungimena maxima 
a unui cuvant si numarul cuvintelor de lungime maxima din sir
Ex: eu dau bacalaureat la informatica atunci pe ecran se va afisa 11 2.
*/
void solutia2() {
	char s[100] = "eu dau bacalaureat la informatica";
	contor(s);

}

/*
Subprogramul divizor are doi parametri n, prin care primeste un numar natural si un parametre a, prin care primeste un tablou
unidimesional care memoreaza un sir de n numere naturale. Subprogramul returneza cel mai mare divizor comun al celor n numere 
naturale din tablou.
Ex: daca n=4 si tabloul memoreaza varlorile 60 45 30 10 atunci, dupa apel, subprogramul va returna valoarea 5.
*/
void solutia3() {

	int n = 4, v[100] = { 60 ,45, 30, 10 };
	cout<<divizor(n, v);

}

/*Un numar natural N este p-compus, daca se poate scrie ca suma de p numere naturale consecutive. Se citeste din fisierul bac.txt
de pe prima linie un numar natural p si de pe urmatoarele linii un sir S cu cel mult 100 000 de numerenaturale cu cel mult 9 cifre
sa se afiseze pe ecran pe aceeasi linie separate printr-un spatiu, primul numar din suma, daca numarul din sir este p-compus
sau mesajul NU in caz contrar.
Ex: 
3
21 19 16 12
se va afisa 6 NU NU 3.
*/
void solutia4() {

	afisarea();

}


































