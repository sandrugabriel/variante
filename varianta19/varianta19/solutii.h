#pragma once
#include "functii.h"
#include "backing.h"

/*3. Ce se va afişa în urma executării
secvenţei de program alăturate, ştiind
că variabila x memorează un şir cu cel
mult 100 de caractere, iar variabila i
este de tip întreg ? (6p.)
strcpy(x,”bac2009”);
cout<<x<<endl; | printf(“%s\n”,x);
for(i=0;i<strlen(x);i++)
 if (strchr(“0123456789”,x[i])==0)
 cout<<x[i]; | printf(“%c”,x[i]);*/
void solutia1() {
	char x[100] = "";
	//strcpy(x, "bac2009");
	cout << x << endl;
	for (int i = 0; i < strlen(x); i++)
		if (strchr("0123456789", x[i]) == 0)
			cout << x[i];
	// 2008bac2008
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<20),
construieşte în memorie şi afişează pe ecran o matrice cu n linii şi n coloane, numerotate
de la 1 la n, în care fiecare element aflat pe o linie impară este egal cu suma dintre indicii
liniei şi coloanei pe care se află şi fiecare element aflat pe o linie pară este egal cu cel mai
mic dintre elementele aflate pe linia anterioară şi pe aceeaşi coloană cu el sau pe linia
anterioară şi pe una dintre coloanele vecine cu cea pe care se află el.
5.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
2 3 4 5 6
2 2 3 4 5
4 5 6 7 8
4 4 5 6 7
6 7 8 9 10 */
void solutia2() {
	int n = 5;
	generare(n);

}

/*. Funcţia F are definiţia alăturată. Ce valoare
are F(18)? (4p.)
int F(int x){
 if (x<=1) return x;
 else return x+F(x-2);
}
a. 90 b. 171 c. 91 d. 18 
*/
void solutia3() {

	cout << F(18);

}

/*//Un algoritm generează în ordine crescătoare, toate numerele de n cifre (n<9), cu cifre
//distincte, care nu au două cifre pare alăturate.Dacă pentru n = 5, primele cinci soluţii
//generate sunt 10325, 10327, 10329, 10345, 10347, precizaţi care sunt următoarele trei
//soluţii generate, în ordinea obţinerii lor.*/
void solutia4() {

	b();

}

/*3. Subprogramul aranjare are doi parametri: a prin care primeşte un tablou unidimensional
cu maximum 100 de numere reale nenule şi n, numărul de elemente din tablou.
Subprogramul rearanjează elementele tabloului unidimensional astfel încât toate valorile
negative să se afle pe primele poziţii, iar valorile pozitive în continuarea celor negative.
Ordinea în cadrul secvenţei de elemente pozitive, respectiv în cadrul secvenţei de elemente
negative, poate fi oricare. Tabloul modificat va fi furnizat tot prin intermediul parametrului a.
Exemplu: dacă tabloul are 6 elemente şi este de forma (12, -7.5, 6.5, -3, -8,
7.5), după apel, acesta ar putea fi: (-7.5, -3, -8, 12, 6.5, 7.5).
Scrieţi definiţia completă a subprogramului aranjare.*/
void solutia5() {
	float a[100] = { 12, -7.5, 6.5, -3, -8,7.5 }, n = 6;
	aranjare(a, n);

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

/*În fişierul nr1.txt este memorată pe prima linie o valoare naturală n de cel mult 8 cifre,
iar pe linia următoare sunt memorate n numere naturale, cu maximum 4 cifre fiecare,
ordonate strict crescător şi separate prin câte un spaţiu. În fişierul nr2.txt este memorată
pe prima linie o valoare naturală m de cel mult 8 cifre, iar pe linia următoare sunt memorate
m numere naturale, cu maximum 4 cifre fiecare, ordonate strict crescător şi separate prin
câte un spaţiu. Se cere afişarea pe ecran, separate prin câte un spaţiu, în ordine strict
crescătoare, a tuturor numerelor aflate pe a doua linie în cel puţin unul dintre cele două
fişiere. În cazul în care un număr apare în ambele fişiere, el va fi afişat o singură dată.
Alegeţi un algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al
timpului de executare.
Exemplu: pentru următoarele fişiere:
nr1.txt
5 
3 6 8 9 12 
nr2.txt
6
2 3 5 7 9 13
se va afişa 2 3 5 6 7 8 9 12 13.
a) Descrieţi succint, în limbaj natural, strategia de rezolvare şi justificaţi eficienţa algoritmului
ales. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului ales. */
void solutia6() {

	afisare();

}






