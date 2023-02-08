#pragma once
#include "functii.h"
#include "backing.h"

/*5. Scrieţi programul C/C++ care citeşte de la tastatură un şir de cel mult 40 de caractere,
format doar din litere mici ale alfabetului englez, şi care afişează pe ecran, pe o singură
linie, toate vocalele ce apar în şirul citit. Vocalele vor fi afişate în ordinea apariţiei lor în şir,
separate prin câte un spaţiu, ca în exemplu. Se consideră ca fiind vocale următoarele litere:
a, e, i, o, u. Dacă şirul citit nu conţine nicio vocală, se va afişa pe ecran mesajul fara
vocale.
Exemplu: dacă se citeşte şirul calculator atunci pe ecran se va afişa: a u a o*/
void solutia1() {
	char s[100] = "calculator";
	vocale(s);

}

/*1. Utilizând metoda backtracking se generează toate permutările mulţimii {1,2,3,4}. Dacă
primele trei permutări generate sunt, în acestă ordine: 1234, 1243, 1324 precizaţi care
este permutarea generată imediat după 3412. (4p.)
a. 3214 b. 3413 c. 4123 d. 3421 */
void solutia2() {

	back(0);
	//d
}

/*2. Subprogramul f are definiţia alăturată. Ce valoare
are f(7)? Dar f(100)? (6p.)
int f(int x)
{if(x%6==0)return x;
 else return f(x-1);
} */
void solutia3() {

	cout << f(7) << " " << f(100);

}

/*. Scrieţi definiţia completă a unui subprogram P, cu trei parametri, care primeşte prin
intermediul primului parametru, a, un tablou unidimensional de cel mult 100 de numere
întregi, cu cel mult 4 cifre fiecare, prin intermediul celui de-al doilea parametru, n, numărul
efectiv de elemente ale tabloului, iar prin parametrul k, un număr natural (k<101) şi
returnează cea mai mare sumă cu k termeni care se poate obţine adunând k elemente ale
tabloului.
Exemplu: dacă n=6 şi k=4, iar şirul este format din elementele (5, 2, 5, 4, 1, 3),
atunci la apel se va returna 17.*/
void solutia4() {
	int v[100] = { 5, 2, 5, 4, 1, 3 }, n = 6, k = 4;
	cout << p(n, k, v);

}

/*4. Fişierul text numere.txt conţine pe prima linie un număr natural n (0<n<100000) iar pe
doua linie, separate prin câte un spaţiu, n numere naturale formate din cel mult două cifre
fiecare.
a) Scrieţi un program C/C++ care determină în mod eficient, din punct de vedere al timpului
de executare, numerele ce apar o singură dată în a doua linie a fişierului. Aceste numere
vor fi afişate pe ecran în ordine crescătoare, separate prin câte un spaţiu.
Exemplu: dacă fişierul numere.txt are următorul conţinut:
7
3 5 2 1 5 23 1
atunci pe ecran se va afişa: 2 3 23. */
void solutia5() {

	afisarea();
}



































