#pragma once
#include "functii.h"
#include "backing.h"

/*Care dintre următoarele variante reprezintă o declarare corectă pentru o variabilă x care
memorează simultan vârsta în ani împliniţi şi media la bacalaureat a unui elev? (4p.)
a. struct {float media;
 int varsta;} x;
b. struct x {float media;
 int varsta;};
c. float x.media;
int x.varsta;
d. struct elev {float x.media;
 int x.varsta};*/
void solutia1() {

struct {
	float media;
	int varsta;
} x;

}

/*Ce se va afişa în urma
executării secvenţei de program
alăturate ştiind că variabila a
memorează un şir cu cel mult
100 de caractere, iar variabilele
i şi k sunt de tip întreg? (6p.)
k=’a’-’A’;
strcpy(a,”clasa a-XII-a A”);
cout<<a<<endl; | printf(“%s\n”,a);
for(i=0;i<strlen(a);i++)
 if(a[i]>=’a’&& a[i]<=’z’) a[i]=a[i]-k;
cout<<a; | printf(“%s”,a);*/
void solutia2() {
	char a[100];
	char k = 'a' - 'A';
	//strcpy(a, "clasa a - XII - a A");
	cout << a << endl;
	for (int i = 0; i < strlen(a); i++)
		if (a[i] >= 'a' && a[i] <= 'z') a[i] = a[i] - k;
	cout << a;
	//clasa a-XII-a A
	//clasaaa
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<16),
construieşte în memorie şi afişează pe ecran o matrice cu n linii şi n coloane în care
elementele de pe cele două diagonale sunt egale cu 0, elementele care se află deasupra
ambelor diagonale sunt egale cu 1, elementele care se află sub ambele diagonale sunt
egale cu 2, iar restul elementelor sunt egale cu 3.
5.
Elementele matricei vor fi afişate pe ecran, câte o linie a matricei pe
câte o linie a ecranului cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=5 se va afişa matricea alăturată. (10p.)
0 1 1 1 0
3 0 1 0 3
3 3 0 3 3
3 0 2 0 3
0 2 2 2 0 */
void solutia3() {
	int n = 5;
	generare(n);

}

/* Funcţia F are definiţia alăturată. Ce valoare
are F(3)? (4p.)
int F(int n)
 {if(n==0 || n==1) return 1;
 else
 return 2*F(n-1)+2*F(n-2);}
a. 1 b. 12 c. 6 d. 10 
*/
void solutia4() {

	cout << F(3);
}

/*//Un algoritm de tip backtracking generează, în ordine lexicografică, toate şirurile de 5 cifre 0
//şi 1 cu proprietatea că nu există mai mult de două cifre 0 pe poziţii consecutive.Primele 7
//soluţii generate sunt : 00100, 00101, 00110, 00111, 01001, 01010, 01011. Care este a
//8 - a soluţie generată de acest algoritm ? (4p.)
//a.01110  b.01100  c.01011  d.01101*/
void solutia5() {

	b();

}

/*3. Scrieţi definiţia completă a subprogramului multiplu care are 3 parametri: a, prin care
primeşte un tablou unidimensional cu maximum 100 de numere naturale mai mici decât
1000, n, numărul efectiv de elemente ale tabloului şi k, un număr natural (k≤9).
Subprogramul returnează numărul de elemente din tablou care sunt multipli ai numărului k
şi au ultima cifră egală cu k.
Exemplu: dacă n=6, a=(9,273,63,83,93,123), iar k=3, subprogramul va returna
valoarea 4.*/
void solutia6() {
	int n = 6, a[100] = { 9, 273, 63, 83, 93, 123 }, k = 3;
	cout << multiplu(a, n, k);

}

/*4. În fişierul numere.txt sunt memorate maximum 10000 de numere naturale cu cel mult 9
cifre fiecare. Fiecare linie a fişierului conţine câte un număr. Se cere afişarea pe ecran, în
ordine descrescătoare, a tuturor cifrelor care apar în numerele din fişier. Alegeţi un algoritm
de rezolvare eficient din punct de vedere al timpului de executare.
Exemplu: dacă fişierul numere.txt conţine:
267
39628
79
se va tipări 9987766322.
a) Descrieţi succint, în limbaj natural, strategia de rezolvare şi justificaţi eficienţa algoritmului
ales. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului ales. */
void solutia7() {


	afisare();

}










