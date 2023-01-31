#pragma once
#include "functii.h"


/*2. Care dintre următoarele variante reprezintă o declarare corectă pentru o variabilă x care
memorează simultan codul de identificare al unui candidat la un examen, exprimat printr-un
număr natural de cel mult 4 cifre şi media obţinută de acesta la examen, exprimată printr-un
număr real? (4p.)
a. struct x { int cod;
 float media;};
b. 
c. int x.cod ;
float x.media;
d. struct candidat {int x.cod;
 float x.media;};*/
void solutia1() {

struct {int cod;
 float media;} x;

}

/*Ce se va afişa în urma
executării secvenţei de
program alăturate ştiind că
variabila a memorează un
şir cu cel mult 100 de
caractere, iar variabila i
este de tip întreg ? (6p.)
strcpy(a,”bacalaureat”);
cout<<strlen(a)<<endl; | printf(”%d\n”,strlen(a));
for(i=0;i<strlen(a);i++)
 if(strchr(”aeiou”,a[i])!=0)
 cout<<’*’; | printf(’*’);*/
void solutia2() {
	char a[100] = "";
	//strcpy(a, "bacalaureat");
	cout << strlen(a) << endl;
	for (int i = 0; i < strlen(a); i++)
		if (strchr("aeiou", a[i]) != 0)
			cout << '*';
	//11 b*t
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<20),
construieşte în memorie şi afişează pe ecran o matrice cu n linii şi n coloane, în care
fiecare element de pe diagonala secundară are valoarea n, fiecare element aflat deasupra
diagonalei secundare este mai mic cu o unitate decât vecinul aflat pe aceeaşi linie în
dreapta lui şi fiecare element aflat sub diagonala secundară este mai mare cu o unitate
decât vecinul aflat pe aceeaşi linie în stânga lui.
5.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9 */
void solutia3() {
	int n = 5;
	generare(n);

}

/*Subprogramul f are definiţia
alăturată. Ce se va afişa în urma
apelului f(12345);?
 (4p.)
void f(long n)
 {if (n>9)
 {cout<<n/100; | printf(“%d”,n/100);
 f(n/10);
 }
 }
a. 1231210 b. 123121 c. 1234123121 d. 123 */
void solutia4() {
	f(12345);
}

/*2. Un algoritm generează în ordine descrescătoare toate numerele de 5 cifre, fiecare dintre ele
având cifrele în ordine strict crescătoare. Ştiind că primele cinci soluţii generate sunt 56789,
46789, 45789, 45689, 45679, precizaţi care sunt ultimele trei soluţii generate, în ordinea
generării. */
void solutia5() {

	b();
}

/*3. Scrieţi definiţia completă a subprogramului interval care are doi parametri a şi n, prin
care primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici
decât 1000 şi respectiv numărul efectiv de elemente din tabloul unidimensional.
Subprogramul returnează numărul de elemente din tabloul unidimensional care aparţin
intervalului închis determinat de primul şi respectiv ultimul element al tabloului.
Exemplu: dacă tabloul a*/
void solutia6() {
	int n = 6, a[100]= { 32,23,34,13,45,2 };
	cout << interval(a, n);

}

/*4. În fişierul numere.txt pe prima linie este memorat un număr natural n (n≤10000), iar pe
linia următoare un şir de n numere naturale distincte două câte două, separate prin câte un
spaţiu, cu maximum 4 cifre fiecare. Se cere afişarea pe ecran a poziţiei pe care s-ar găsi
primul element din şirul aflat pe linia a doua a fişierului, în cazul în care şirul ar fi ordonat
crescător. Numerotarea poziţiilor elementelor în cadrul şirului este de la 1 la n. Alegeţi un
algoritm de rezolvare eficient din punct de vedere al memoriei utilizate şi al timpului de
executare.
Exemplu: dacă fişierul numere.txt conţine:
6
267 13 45 628 7 79
se va afişa 5, deoarece primul element din şirul iniţial, 267, s-ar găsi pe poziţia a cincea în
şirul ordonat crescător (7 13 45 79 267 628).
a) Descrieţi succint, în limbaj natural, strategia de rezolvare şi justificaţi eficienţa algoritmului
ales. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului ales. */
void solutia7() {

	afisare();

}







































































