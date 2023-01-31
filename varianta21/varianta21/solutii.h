#pragma once
#include "functii.h"


/*Se consideră declarările de mai jos, în care variabila ev memorează date despre un anumit
elev. Scrieţi instrucţiunea C/C++ prin care se iniţializează anul naşterii acestui elev cu
valoarea 1990. (6p.)
3.
struct data{
 int zi;
 int luna;
 int an;
};
struct elev {
 char nume[30];
 struct data data_nasterii;
 float media;
}ev;*/
struct data {
	int zi;
	int luna;
	int an;
};
struct elev {
	char nume[30];
	struct data data_nasterii;
	float media;
}ev;
void solutia1() {

	ev.data_nasterii.an = 1990;
}

/*Se consideră un text alcătuit din cel mult 250 de caractere, în care cuvintele sunt formate doar
din litere mici ale alfabetului englez şi sunt separate prin unul sau mai multe caractere *.
Scrieţi un program C/C++ care citeşte de la tastatură textul şi afişează pe ecran, pe câte o
linie, toate secvenţele formate din câte două litere identice, ca în exemplu.
5.
Exemplu: dacă textul citit este: copiii*sunt*la***zoo se afişează
perechile alăturate.

(10p.)
 ii
 ii
 oo*/
void solutia2() {
	char s[100] = "copiii*sunt*la***zoo";
	dubleAfis(s);

}

/* 1. Următoarele probleme se referă la mulţimea de numere reale M={x1, x2, …, xn} (n>1000).
Care dintre acestea, comparativ cu celelalte, admite un algoritm care se încheie după un
număr minim de paşi? (4p.)
a. sortarea elementelor mulţimii M b. generarea elementelor produsului
cartezian M x M
c. determinarea elementului minim al
mulţimii M*/
void solutia3() {
	//c.determinarea elementului minim al mulţimii M

}

/*Se consideră subprogramul, f, definit
alăturat.
• Ce valoare are f(100)?
• Scrieţi o valoare pentru x astfel încât
f(x)=1 (6p.)
 int f(int n)
 { if(n==0) return 0;
 else return n%2+f(n/2);
 } */
void solutia4() {

	cout << f(2);

}

/* 3. Scrieţi definiţia completă a unui subprogram i_prim care primeşte prin singurul său
parametru, n, un număr natural din intervalul [2,30000] şi returnează diferenţa minimă
p2-p1 în care p1 şi p2 sunt numere prime şi p1≤n≤p2.
Exemplu: dacă n=20 atunci i_prim(n)=4, valoare obţinută pentru p1=19 şi p2=23. */
void solutia5() {

	int n = 20;
	cout << i_prim(n);

}

/*Fişierul text BAC.TXT conţine pe prima linie două numere naturale n şi k separate de un
spaţiu (3≤n≤10000, 2≤k≤n/2), iar pe a doua linie un şir de n numere naturale x1, x2, ...,
xn separate prin câte un spaţiu, fiecare număr din acest şir având cel mult patru cifre.
a) Scrieţi un program C/C++ care citeşte numerele din fişier şi determină, utilizând o
metodă eficientă din punct de vedere al timpului de executare, cel mai mic indice i (1≤i≤nk+1) pentru care media aritmetică a numerelor xi, xi+1, ..., xi+k-1 este maximă. Programul
afişează valoarea lui i pe ecran.
Exemplu: pentru fişierul alăturat se afişează 2, deoarece media
maximă se obţine pentru 9, 4, 7. (6p.)
8 3
2 9 4 7 5 2 9 9
 4.
b) Explicaţi succint, în limbaj natural, metoda utilizată la punctul a, justificând eficienţa
acesteia. */
void solutia6() {

	afisare();

}














































































