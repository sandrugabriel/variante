#pragma once
#include "functii.h"
#include "backtracking.h"

/*Variabila t, declarată alăturat, memorează în câmpurile
a, b şi c lungimile laturilor unui triunghi. Care dintre
următoarele instrucţiuni atribuie câmpului p al variabilei
t valoarea perimetrului triunghiului respectiv? (4p.)
struct triunghi
 {
 float a,b,c,p;
 }t;
a. p.t=t.a+t.b+t.b; b. p.t=a.t+b.t+c.t;
c. t.p=t.a+t.b+t.c; d. t.p==t.a+t.b+t.c; */
void solutia1() {

//c. t.p=t.a+t.b+t.c;

}

/*n secvenţa de program alăturată, variabila a
memorează o matrice cu n linii şi n coloane (numerotate
de la 0 la n-1) cu elemente numere întregi, iar toate
celelalte variabile sunt întregi. Ştiind că n este un număr
natural par, nenul, scrieţi instrucţiunile care pot înlocui
punctele de suspensie din secvenţa de program
alăturată astfel încât, în urma executării acesteia, să se
afişeze ultima cifră a sumei elementelor pozitive de pe
linia k (0≤k<n) a matricei a. (6p.)
 s = 0;
 for(j = 0; j < n/2; j++)
 {
 .............
 }
 printf("%d",s);|cout<<s;*/
void solutia2() {
	int s = 0,k=2;
	int n = 6;
	int a[100][100]{ {1,2,3,4}, {2,3,4,5}, {3,8,5,2} };
	for (int j = 0; j < n / 2; j++)
	{
		s += a[k][j];
		//cout << s << endl;
		if (j == (n / 2)-1) {
			
			s = s % 10;
		}

	}
	cout << s;

}

/*. Să se scrie un program C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20
de caractere, doar litere mici ale alfabetului englez. Programul determină transformarea
cuvântului citit prin înlocuirea fiecărei vocale a cuvântului, cu un şir format din două caractere
şi anume vocala respectivă urmată de litera mare corespunzătoare, restul literelor
nemodificându-se, ca în exemplu. Programul afişează pe ecran cuvântul obţinut, pe o
singură linie. Se consideră vocale literele din mulţimea {a,e,i,o,u}.
Exemplu: pentru cuvântul bacalaureat se va afişa pe ecran: baAcaAlaAuUreEaAt */
void solutia3() {
	char a[100] = "bacalaureat";

	afisare(a);

}

/*Utilizând metoda backtracking se generează în ordine lexicografică cuvintele de câte patru
litere din mulţimea A={a,b,c,d,e}, cuvinte care nu conţin două vocale alăturate. Primele
opt cuvinte generate sunt, în ordine: abab, abac, abad, abba, abbb, abbc, abbd, abbe.
Care este ultimul cuvânt generat? (4p.)
a. edcb b. eeee c. edde d. eded */
void solutia4() {

    b();

	//d.eded
}

/*. Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(12345);? (6p.)
//C
void f(long n)
{ printf("%d",n%10);
 if(n!=0)
 { f(n/100); printf("%d",n%10); }
}
//C++
void f(long n)
{ cout<<n%10;
 if(n!=0)
 { f(n/100); cout<<n%10;}*/
void solutia5() {

	f(12345);

	//5310135
}

/*Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de
numere întregi, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++ care citeşte
numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine
crescătoare, toate numerele naturale nenule din fişier. Dacă nu există astfel de numere se
va afişa pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul NR.TXT conţine numerele: -3 -10 0 7 -5 7 51 -800 6 3798,
atunci pe ecran se va afişa: 6 7 7 51 3798*/
void solutia6() {

	afisarea();
}

/*Un număr n se numeşte extraprim dacă atât el, cât şi orice număr obţinut prin permutarea
cifrelor lui n, sunt numere prime. De exemplu, numărul 113 este un număr extraprim
deoarece 113, 311, 131 sunt numere prime.
a) Scrieţi definiţia completă a unui subprogram f, cu un parametru, subprogram care:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 3 cifre (a>1)
- returnează suma tuturor exponenţilor din descompunerea în factori primi a valorii
parametrului a.
Exemplu: pentru a=90 subprogramul va returna valoarea 4, deoarece a=2*32
*5 şi
1+2+1=4. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n, 2≤n≤999 şi,
folosind apeluri utile ale subprogramului f, verifică dacă n este un număr extraprim. În caz
afirmativ, programul afişează pe ecran mesajul DA, în caz contrar afişând mesajul NU. */
void solutia7() {
	int n = 2;


	if (extraprim(n)) {
		cout << "DA";
	}
	else cout << "NU\n";

}








