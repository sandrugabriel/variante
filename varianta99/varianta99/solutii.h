#pragma once
#include "functii.h"


/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤24) şi
construieşte în memorie un tablou bidimensional cu n linii şi n coloane care să conţină
primele n numere naturale nenule. Prima linie a tabloului va conţine, în această ordine,
valorile 1,2,...,n; a doua linie va conţine, în ordine, valorile 2,2,3,...,n; a treia linie
va conţine, în ordine, valorile 3,3,3,4,...,n, iar ultima linie va conţine valorile n,
n,..., n.
5.
Programul afişează pe ecran matricea construită, câte o linie a matricei
pe câte o linie a ecranului, elementele fiecărei linii fiind despărţite prin
câte un spaţiu.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
1 2 3 4 5
2 2 3 4 5
3 3 3 4 5
4 4 4 4 5
5 5 5 5 5*/
void solutia1() {

	generare(5);

}

/*1. Se consideră subprogramul recursiv alăturat, S,
definit incomplet.
Cu ce expresie pot fi înlocuite punctele de
suspensie astfel încât, în urma apelului S(2), să se
afişeze 3 caractere * ? (4p.)
void S(int x)
{ cout<<'*';
 if (...) {
 cout<<'*';
 S(x-1);
 }
}
a. x>1 b. x>2 c. x>=3 d. x>0*/
void S(int x)
{
	cout << '*';
	if (x>1) {
		cout << '*';
		S(x - 1);
	}
}
void solutia2() {

	S(2);
}

/*3. Subprogramul Nr are un singur parametru, k, prin intermediul căruia primeşte un număr
natural de cel puţin 3 cifre şi cel mult 9 cifre, cu toate cifrele nenule. Subprogramul
furnizează tot prin intermediul parametrului k, valoarea obţinută prin eliminarea primei şi
ultimei cifre a numărului transmis la apel.
Exemplu: dacă subprogramul primeşte prin intermediul parametrului k valoarea 12438, în
urma apelului subprogramului Nr, k va primi valoarea 243.
Scrieţi, în limbajul C/C++, definiţia completă a subprogramului Nr.*/
void solutia3() {
	int k = 12438;
	Nr(k);
	cout << k;

}

/*4. Pe prima linie a fişierului text DATE.TXT se află un şir de cel mult 10000 de numere întregi,
având cel mult 4 cifre fiecare. Numerele sunt despărţite prin câte un spaţiu.
a) Scrieţi un program C/C++ care citeşte numerele din fişier şi afişează pe ecran lungimea
maximă a unei secvenţe de numere din şir, cu proprietatea că oricare două numere din
secvenţă, aflate pe poziţii consecutive, au parităţi diferite. Pe a doua linie a ecranului,
programul va afişa o secvenţă de lungime maximă, valorile fiind despărţite prin câte un
spaţiu. Dacă există mai multe secvenţe de lungime maximă, se va afişa una dintre ele,
oricare. Alegeţi o metodă de rezolvare eficientă ca timp de executare.
Exemplu: dacă fişierul conţine, în ordine, numerele 2 4 3 2 7 4 6 2 7 8 12, se va
afişa:
5
4 3 2 7 4 (6p.)
 b) Descrieţi succint, în limbaj natural, metoda utilizată, justificând eficienţa acesteia. */
void solutia4() {

	afisarea();

}









































































































