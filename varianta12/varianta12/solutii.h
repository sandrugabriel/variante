#pragma once
#include "functii.h"
#include "backing.h"

/* Scrieţi ce se afişează pe
ecran în urma executării
secvenţei de program
alăturate, în care variabila s
memorează un şir de cel mult
12 caractere, iar variabila i
este de tip întreg. (6p.)
char s[13]="informatica";
cout<<strlen(s); | printf("%d",strlen(s));
for (i=0;i<strlen(s);i++)
 if (strchr("aeiou",s[i])!=NULL)
 s[i]= '*';
cout<<" "<<s; | printf(" %s",s); */
void solutia1() {

	char s[13] = "informatica";
	cout << strlen(s);
	for (int i = 0; i < strlen(s); i++)
		if (strchr("aeiou", s[i]) != NULL)
			s[i] = '*';
	cout << " " << s;
	//11 *nf*rm*t*c*
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, ale cărei
elemente primesc valori după cum urmează: elementul din linia i şi coloana j primeşte ca
valoare ultima cifră a produsului i*j (1≤i≤n şi 1≤j≤n).
5.
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe o linie a ecranului, elementele fiecărei linii fiind separate prin câte un
spaţiu.
Exemplu: pentru n=4 se va afişa matricea alăturată. (10p.)
1 2 3 4
2 4 6 8
3 6 9 2 */
void solutia2() {
	int n = 4;
	generare(n);

}

/* Se consideră subprogramul P, definit alăturat.
Ştiind că valoarea variabilei întregi a este înainte
de apel 4, care este valoarea ei imediat după
apelul P(a)? (4p.)
void P(int &x)
{
 x=x+5;
}
a. 10 b. 4 c. 9 d. 5*/
void solutia3() {
	int a = 4;
	P(a);
	cout << a;
}

//Un algoritm de tip backtracking generează, în ordine lexicografică, toate şirurile de 5 cifre 0
//şi 1 cu proprietatea că nu există mai mult de două cifre 0 pe poziţii consecutive.Primele 7
//soluţii generate sunt : 00100, 00101, 00110, 00111, 01001, 01010, 01011. Care este a
//8 - a soluţie generată de acest algoritm ? (4p.)
//a.01110  b.01100  c.01011  d.01101
void solutia4() {

	b();

}

/*Fişierele text NR1.TXT şi NR2.TXT conţin, separate prin câte un spaţiu, mai multe numere
întregi de cel mult 9 cifre fiecare. Fiecare dintre fişiere conţine cel mult 100 de valori şi
numerele din fiecare fişier sunt ordonate strict crescător. Se cere să se afişeze pe ecran, în
ordine crescătoare, numerele divizibile cu 5 care se găsesc doar în unul din cele două
fişiere.
Exemplu: dacă fişierul NR1.TXT conţine numerele 1 2 3 4 7 20 60, iar fişierul
NR2.TXT conţine numerele 3 5 7 8 9 10 12 20 24, atunci se vor afişa pe ecran
valorile 5 10 60. 
a) Descrieţi un algoritm de rezolvare a acestei probleme, eficient din punct de vedere al
timpului de executare şi al spaţiului de memorie utilizat, explicând în ce constă eficienţa
acestuia. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris.*/
void solutia5() {

	afisareCres();

}

/* Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n (n≤20),
apoi un şir de n numere naturale, având fiecare exact 5 cifre. Dintre cele n numere citite,
programul determină pe acelea care au toate cifrele egale şi le afişează pe ecran, în ordine
crescătoare, separate prin câte un spaţiu.
Exemplu: pentru n=5 şi numerele 11111 33333 12423 59824 11111 33443 se va
afişa: 11111 11111 33333. */
void solutia6() {
	int n = 5, a[100] = { 11111, 33333, 12423, 59824, 11111, 33443 };
	afisare(n, a);


}