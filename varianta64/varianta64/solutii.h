#pragma once
#include "functii.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un text format din cel mult 200 de
litere ale alfabetului englez, în care cuvintele sunt separate printr-un singur spaţiu şi
afişează pe ecran numărul de cuvinte din textul citit, care au prima respectiv ultima literă
vocală. În cazul în care în text nu există un astfel de cuvânt, se va afişa pe ecran mesajul
NU EXISTA. Se consideră vocală orice literă din mulţimea {a,A,e,E,i,I,o,O,u,U}.
5.
Exemplu: dacă textul introdus este:
Eratostene a sugerat ca anii bisecti se repeta la fiecare patru ani
pe ecran se va afişa:
4 */
void solutia1() {
	char s[100] = "Eratostene a sugerat ca anii bisecti se repeta la fiecare patru ani";
	contor(s);

}

/*2. Se consideră subprogramul f, definit
alăturat. Ce se va afişa în urma apelului
f(5,0);?
 (6p.)
void f(int i,int j)
{ if(j<=9) f(i,j+1);
 printf(”%d*%d=%d\n”,i,j,i*j);/
 cout<<i<<’*’<<j<<’=’<<i*j<<endl;
} 
*/
void f(int i, int j)
{
	if (j <= 9) f(i, j + 1);
	cout << i << '*' << j << '=' << i * j << endl;
}
void solutia2() {

	f(5, 0);

}

/*3. Subprogramul diviz primeşte prin intermediul parametrului n un număr natural nenul
(2≤n≤200), iar prin intermediul parametrului a, un tablou unidimensional care conţine n
valori naturale nenule, fiecare dintre acestea având cel mult patru cifre. Elementele tabloului
sunt numerotate de la 1 la n.
Subprogramul returnează o valoare egală cu numărul de perechi (ai,aj), 1≤i<j≤n, în
care ai este divizor al lui aj , sau aj este divizor al lui ai.
Scrieţi definiţia completă a subprogramului diviz, în limbajul C/C++.
Exemplu: pentru n=5 şi a=(4,8,3,9,4) subprogramul returnează valoarea 4.*/
void solutia3() {
	int n = 5, a[100] = {4, 8, 3, 9, 4};
	cout<<divizor(n, a);
}

/* Fişierul text date.in conţine pe prima linie , separate prin câte un spaţiu, cel mult 1000 de
numere naturale, fiecare dintre ele având maximum 9 cifre.
a) Scrieţi un program C/C++ care citeşte numerele din fişierul date.txt şi determină cea
mai lungă secvenţă ordonată strict descrescător, formată din valori citite consecutiv din
fişier. Numerele din secvenţa găsită vor fi afişate pe ecran, pe o linie, separate prin câte un
spaţiu. Dacă sunt mai multe secvenţe care respectă condiţia impusă, se va afişa doar prima
dintre acestea. Alegeţi o metodă de rezolvare eficientă din punctul de vedere al timpului de
executare.
Exemplu: dacă fişierul date.in conţine
5 2 19 4 3 6 3 2 1 0 8
 (6p.)
pe ecran se afişează:
6 3 2 1 0*/
void solutia4() {

	afisarea();
}
