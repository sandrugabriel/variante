#pragma once
#include "functii.h"


/*5. Scrieţi un program C / C++ care citeşte de la tastatură un text de cel mult 255 de caractere,
		dintre care cel puţin unul este o literă mică a alfabetului englez, şi afişează pe ecran, pe o
		singură linie, despărţite prin câte un spaţiu, toate literele mici ale alfabetului englez care
		apar în text.Fiecare literă va fi afişată o singură dată, în ordinea primei ei apariţii în text.
		Exemplu: pentru textul :
	Calculati valoarea expresiei
	(10p.)
		Pe ecran se va afişa :
	a l c u t i v o r e x p s*/
void solutia1() {
	char s[100] = "Calculati valoarea expresiei";
	litere(s);
	
}

/*2. Considerăm subprogramul f, definit alăturat. Care va
fi valoarea variabilei globale x după apelul
f(4962,x), dacă înainte de apel, x are valoarea 0?
Dar dacă înainte de apel x are valoarea 52? (6p.)
void f(int n,int &a)
{int c;
if(n!=0){
 c=n%10;
 if(a<c) a=c;
 f(n/10,a);
 }
} */
void f(int n, int& a)
{
	int c;
	if (n != 0) {
		c = n % 10;
		if (a < c) a = c;
		f(n / 10, a);
	}
}
void solutia2() {
	int a = 0;
	 f(4962, a);
}

/*3. Scrieţi definiţia completă a unui subprogram fibo cu doi parametri, n şi v, care primeşte
prin intermediul parametrului n un număr natural (1<n<30) şi returnează prin intermediul
parametrului v un tablou unidimensional care conţine primii n termeni impari ai şirului lui
Fibonacci (amintim că şirul lui Fibonacci este: 1,1,2,3,5,8,13,21,…).*/
void solutia3() {
	int n=4, v[100]{};
	fibo(n, v);
	for (int i = 1; i <= n; i++)
		cout << v[i] << " ";

}

/*4. a) Fişierul date.in conţine un şir de cel mult 10000 numere naturale (printre care cel
puţin un număr par şi cel puţin un număr impar), cu cel mult 2 cifre fiecare, separate prin
câte un spaţiu. Scrieţi un program C/C++ care citeşte numerele din fişierul date.in şi
scrie în fişierul text date.out valorile distincte citite, separate prin câte un spaţiu,
respectându-se regula: pe prima linie vor fi scrise numerele impare în ordine crescătoare,
iar pe linia a doua numerele pare, în ordine descrescătoare. Alegeţi o metodă eficientă din
punctul de vedere al timpului de executare. (6p.)
Exemplu: dacă pe prima linie a fişierului date.in se află numerele:
75 12 3 3 18 75 1 3
atunci fişierul date.out va conţine:
1 3 75
18 12
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). */
void solutia4() {

	afisarea();

}


