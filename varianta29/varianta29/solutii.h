#pragma once
#include "functii.h"

/* Care va fi şirul de caractere afişat pe ecran după
executarea secvenţei de program alăturate în
care variabila s memorează un şir cu cel mult 4
caractere iar variabila t un caracter? (4p.)
char s[]=”arac”;
t=s[1]; s[1]=s[3];
s[3]=’t’;
cout<<s; | printf(”%s”,s);*/
void solutia1() {

	char s[] = "arac";
	char t = s[1]; s[1] = s[3];
	s[3] = 't';
	cout << s;

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr
natural n (1≤n≤6) şi elementele unui tablou bidimensional A cu n linii
şi n coloane, care memorează numere naturale nenule mai mici decât
100, şi afişează pe ecran produsul numerelor “pivot” pentru matricea
A dacă există astfel de numere, altfel va afişa mesajul NU EXISTA.
Un număr natural x este “pivot” pentru matricea A dacă înmulţind
fiecare element de pe prima coloană cu numărul x, se obţin, în
aceeaşi ordine, elementele unei alte coloane din matrice.
5.
Exemplu: pentru matricea din figura alăturată
2 7 4 8 4
1 1 2 4 2
3 12 6 12 3
1 22 2 4 2
5 10 10 20 8
se afişează 8. */
void solutia2() {

	generare();
}

/*. Ce se afişează ca urmare a
apelului p(123); dacă
subprogramul p are definiţia
alăturată? (6p.)
void p (int x)
{cout<<x; | printf(“%d”,x);
 if(x!=0){p(x/10);
 cout<<x%10; | printf(“%d”,x%10);}} 
*/
void solutia3() {

	p(123);

}

/*Scrieţi definiţia completă a subprogramului multipli, cu trei parametri a,b,c (a≤b),
numere naturale din intervalul [1,10000] ce returnează numărul numărul multiplilor lui c
din intervalul [a;b].
Exemplu: pentru a=10, b=27,c=5 subprogramul returnează valoarea 4. */
void solutia4() {
	int a = 10, b = 27, c = 5;
	cout << multipli(a, b, c);
}

/*Se consideră două tablouri unidimensionale A şi B cu elemente numere naturale din
intervalul [1,10000]. Spunem că tabloul A “se poate reduce” la tabloul B dacă există o
împărţire a tabloului A în secvenţe disjuncte de elemente aflate pe poziţii consecutive în
tabloul A astfel încât prin înlocuirea secvenţelor cu suma elementelor din secvenţă să se
obţină, în ordine, elementele tabloului B.
De exemplu tabloul
A 7 3 4 1 6 4 6 8 7 1 8 7
B 14 7 26 16
se poate reduce la tabloul
Fişierul text NUMERE.IN conţine pe prima linie două numere naturale nenule n şi m
(1≤m≤n≤100), pe linia a doua n numere naturale din intervalul [1;10000] şi pe linia a
treia alte m numere naturale din intervalul [1;10000]. Pe fiecare linie numerele sunt
separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte toate numerele din fişierul NUMERE.IN şi verifică,
utilizând un algoritm eficient din punctul de vedere al timpului de executare, dacă tabloul
construit cu cele n numere aflate pe linia a doua în fişier se poate reduce la tabloul construit
cu cele m numere aflate pe linia a treia în fişier. Programul afişează pe ecran mesajul DA în
caz afirmativ şi mesajul NU în caz negativ. (6p.)
 b) Descrieţi în limbaj natural metoda utilizată şi explicaţi în ce constă eficienţa ei. */
void solutia5() {

	afisarea();
}



















































