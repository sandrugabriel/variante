#pragma once
#include "functii.h"
#include "backing.h"



/*Ce se afişează pe ecran în urma executării
secvenţei de program alăturate, unde a este o
variabilă de tip şir de caractere? (6p.)
strcpy(a,"informatica");
strcpy(a+2,a+5);
cout<<a; | printf("%s",a);*/
void solutia1() {
	char a[100];
	//strcpy(a, "informatica");
	//strcpy(a + 2, a + 5);
	cout << a;
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤23) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane astfel încât elementele situate pe
diagonala principală să fie egale cu 2, cele situate deasupra diagonalei principale să fie
egale cu 1, iar cele situate sub diagonala principală să fie egale 3.
5.
Programul va afişa matricea pe ecran, câte o linie a matricei pe o linie a
ecranului, cu câte un spaţiu între elementele fiecărei linii.
Exemplu: dacă n este 4 atunci programul va construi şi va afişa
matricea alăturată. (10p.)
2 1 1 1
3 2 1 1
3 3 2 1
3 3 3 2*/
void solutia2() {

	generare(4);

}

/* Utilizând metoda backtracking se generează numerele formate din câte 3 cifre distincte din
mulţimea {1,3,5,7}. Dacă primele trei numere generate sunt, în acestă ordine: 135,
137, 153 care este cel de-al patrulea număr generat? (4p.)
a. 315 b. 173 c. 157 d. 357 */
void solutia3() {

	back(0);
	//c.157
}

/*2. Subprogramul f are definiţia alăturată. Ce valoare
are f(3)? Dar f(10)? (6p.)
int f(int x)
{if(x==0)return 0;
 else return f(x-1)+2;
} */
void solutia4() {

	cout << f(3) << " " << f(10);

}

/*Scrieţi definiţia completă a unui subprogram P cu doi parametri, care primeşte prin
intermediul primului parametru, n, un număr natural nenul (1≤n≤100) şi prin intermediul
celui de-al doilea parametru, a, un tablou unidimensional cu elementele numerotate de la 1
la n, numere întregi de cel mult 4 cifre fiecare. Subprogramul returnează suma tuturor
numerelor impare aflate pe poziţii pare din tablou.
Exemplu: dacă n=6, iar şirul a este format din elementele (3,12,7,1,4,3), atunci la apel se
va returna 4.*/
void solutia5() {

	int n = 6, v[100] = { 3,12,7,1,4,3 };
	cout<<P(n, v);

}

/*4. Fişierul text numere.txt conţine pe prima linie un număr natural n (0<n<100000) iar pe a
a doua linie n cifre, separate prin câte un spaţiu.
a) Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului
de executare, cel mai mare număr ce se poate forma cu toate cifrele conţinute de a doua
linie a fişierului numere.txt. Numărul determinat se va afişa pe ecran.
Exemplu: daca fişierul numere.txt are următorul conţinut:
7
2 5 3 1 5 8 9
atunci pe ecran se va afişa: 9855321*/
void solutia6() {

	afisare();

}














































