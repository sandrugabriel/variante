#pragma once
#include "functii.h"



/*Ce valoare se va afişa pe ecran în urma executării
secvenţei de program alăturate, ştiind că variabila
a este de tip şir de caractere, iar i este o variabilă
de tip întreg? (6p.)
strcpy(a,"info");
for(i=0;i<strlen(a);i++)
 a[i]=a[i]+1;
cout<<a;*/
void solutia1() {
	char a[100] = "info";
	for (int i = 0; i < strlen(a); i++)
		a[i] = a[i] + 1;
	cout << a;
	//jogp
}

/* Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤23) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, formată din numere naturale
nenule, mai mici sau egale cu n, astfel încât să nu existe două linii cu aceeaşi sumă a
elementelor şi nici două coloane cu aceeaşi sumă a elementelor.
Programul va afişa matricea pe ecran, câte o linie a matricei pe o linie a ecranului, cu un
spaţiu între elementele fiecărei linii.
Exemplu: dacă n=3 atunci o soluţie posibilă este următoarea matrice:
1 1 1
1 1 2
1 2 3 */
void solutia2() {

	generare(3);
}

/*1. Care dintre următoarele variante reprezintă antetul corect al unui subprogram care primeşte
prin parametrii x şi y două numere întregi şi furnizează prin parametrul m cea mai mică
dintre cele două valori x şi y? (4p.)
a. int minim(int x,int y,int m) b. void minim(int x,int y,int &m)
c. int minim(int x,int y) d. void minim(int& x,int& y,int m)*/
void solutia3() {
	//b. void minim(int x, int y, int& m)
}

/*2. Subprogramul f are definiţia alăturată. Ce
valoare are f(6,5)? Dar f(5,10)? (6p.)
int f(int x,int y)
{if(x==y)return x;
 else if(x<y)return f(x+1,y-1);
 else return f(x-1,y);
}*/
void solutia4() {

	cout << f(6, 5) << " " << f(5, 10);
}

/*3. Scrieţi definiţia completă a unui subprogram P, cu doi parametri, a şi b, numere naturale cu
cel mult 4 cifre fiecare, care afişează pe ecran, separate prin câte un spaţiu, numerele aflate
în intervalul închis determinat de valorile a şi b, care sunt pătratele unor numere prime.
Exemplu: pentru a=40 şi b=1 se vor afişa valorile: 4 9 25 (nu neapărat în această ordine).*/
void solutia5() {

	P(40, 1);

}



































