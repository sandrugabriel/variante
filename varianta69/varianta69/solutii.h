#pragma once
#include "functii.h"




/*5. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤50) şi n* n
numere naturale de cel mult 5 cifre ce reprezintă elementele unui tablou bidimensional a, cu
n linii şi n coloane, şi verifică dacă matricea este triunghiulară superior. Programul va afişa
pe ecran mesajul corespunzător: „Este triunghiulară superior” respectiv „Nu
este triunghiulară superior”. O matrice se numeşte triunghiulară superior dacă
toate elementele aflate sub diagonala principală a ei sunt nule. (10p.)
Exemplu: pentru n=3 şi matricea alăturată
 1 2 3
 0 5 6
 0 0 9 
se va afişa mesajul:
Este triunghiulară superior
*/
void solutia1() {

	int n = 3, a[100][100] = { {1,2,3} , {0,5,6} , {0,0,9} };
	triunghi(n, a);
}

/*2. Se consideră subprogramul recursiv
definit alăturat. Ce valori vor fi
afişate pe ecran în urma apelului
beta(15);? (6p.)
void beta(int n)
{if (n!=1)
 {printf(”%d ”,n); | cout<<n<<” ”;
 if (n%3==0) beta(n/3);
 else beta(2*n-1);}
 else printf(”%d”,1); | cout<<1;
} */
void beta(int n)
{
	if (n != 1)
	{
		cout << n << " ";
		if (n % 3 == 0) beta(n / 3);
		else beta(2 * n - 1);
	}
	else cout << 1;
}
void solutia2() {
	
	beta(15);

}

/*3. a) Să se scrie definiţia completă a subprogramului calcul, care primeşte prin intermediul
parametrului întreg n un număr natural de cel mult 9 cifre şi returnează valoarea absolută a
diferenţei dintre numărul de cifre pare şi numărul de cifre impare conţinute de n.
Exemplu: dacă n=92465, în urma apelului se va returna valoarea 1 (2 cifre impare, 3 cifre
pare). (5p.)
b) Să se scrie în limbajul C/C++ un program care citeşte de la tastatură un număr natural n
de cel mult 7 cifre şi, utilizând apeluri ale subprogramului calcul, determină şi afişează pe
ecran cel mai mic număr natural m, m≥n, care are tot atâtea cifre pare câte cifre impare.
Exemple: dacă se citeşte n=5513, atunci se afişează m=5520, iar dacă se citeşte n=311,
atunci se afişează m=1001.*/
void solutia3() {

	afisare(5513);

}

/*4. Fişierul text NUMERE.TXT conţine pe prima linie un număr natural n (1≤n≤10000) şi pe a
doua linie, n numere naturale cu cel mult 9 cifre fiecare. Aceste numere sunt dispuse în
ordine crescătoare şi separate între ele prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte valorile din fişier şi, printr-o metodă eficientă din
punct de vedere al timpului de executare, afişează pe ecran, separate prin câte un spaţiu, în
ordine crescătoare, numerele pare de pe a doua linie a fişierului, urmate de cele impare în
ordine descrescătoare. (6p.)
Exemplu: dacă fişierul NUMERE.TXT are
conţinutul alăturat
6
212 412 5111 71113 81112 101112
atunci programul va afişa pe ecran 212 412 81112 101112 71113 5111
b) Descrieţi succint, în limbaj natural, metoda utilizată la punctul a, justificând eficienţa
acesteia. */
void solutia4() {

	afisarea();

}
















