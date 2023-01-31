#pragma once
#include "functii.h"
#include "struct.h"
#include "backtracking.h"

/*În declararea alăturată, câmpurile x şi y ale înregistrării pot memora
coordonatele carteziene ale unui punct din planul xOy.Scrieţi o
secvenţă de instrucţiuni prin executarea căreia se memorează în
variabila C coordonatele mijlocului segmentului cu capetele în punctele
ale căror coordonate sunt memorate în variabilele A şi B. (6p.)
struct punct
{
	float x, y;
}A, B, C;
*/
void solutia1() {

	C.x = (A.x + B.x) / 2;
	C.y = (A.y + B.y) / 2;

}

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mică dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu.
5.
Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată.
(10p.)
 1 1 1 1 1
 1 2 2 2 2
 1 2 3 3 3
 1 2 3 4 4*/
void solutia2() {

	int a[100][100]{}, n = 4, m = 5;
	generare(a, n, m);
	afisareMatrice(a, n, m);
}

/*1. Utilizând metoda backtracking se generează în ordine lexicografică cuvintele de câte patru
litere din mulţimea A={a,b,c,d,e}, cuvinte care nu conţin două vocale alăturate. Primele
opt cuvinte generate sunt, în ordine: abab, abac, abad, abba, abbb, abbc, abbd, abbe.
Câte dintre cuvintele generate încep cu litera b şi se termină cu litera e? (4p.)
a. 9 b. 15 c. 12 d. 20*/
void solutia3() {

	back(0);
	//15
}

/*Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(121,1);? 
//C++
void f(long n, int i)
{ if(n!=0)
 if(n%3>0)
 { cout<<i; f(n/3,i+1); }
}
*/
void solutia4() {

	f(121, 1);
	//12345
}


/*Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule
cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un program
C/C++ care citeşte de la tastatură un număr natural nenul n (n≤999) şi numerele din fişierul
bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier
care sunt divizibile cu n. Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa
pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul bac.txt conţine numerele: 3 100 40 70 25 5 80 6 3798,
pentru n=10 atunci pe ecran se va afişa: 100 40 70 80 */
void solutia5() {
	int n = 10;

	afisareDiv(n);
}

/*Subprogramul sub, cu trei parametri, primeşte prin intermediul parametrilor:
– v un tablou unidimensional cu cel mult 100 de componente ce memorează numere
întregi de cel mult 4 cifre fiecare;
– n un număr natural nenul mai mic sau egal cu 100 ce reprezintă numărul efectiv de
componente ale tabloului primit prin intermediul parametrului v;
– a un număr întreg cu cel mult 4 cifre.
Subprogramul sub returnează numărul componentelor tabloului primit prin intermediul
parametrului v ale căror valori sunt strict mai mici decât valoarea parametrului a.
Exemplu: pentru valorile n=5, v=(1,21,9,21,403), a=20 ale parametrilor, în urma
apelului, subprogramului sub va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului sub. (4p.)
b) Să se scrie un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi n numere întregi, fiecare având cel mult 4 cifre, şi care, folosind apeluri utile ale
subprogramului sub, să afişeze pe ecran mesajul DA dacă oricare două dintre cele n
numere întregi citite sunt distincte două câte două, sau mesajul NU în caz contrar.
Exemplu: pentru n=6 şi cele n numere citite de la tastatură: 47 183 69 8 134 -56
se va afişa pe ecran mesajul DA*/
void solutia6() {

	int n = 6, v[100] = { 47,183,69,8,134,-56 };

	final(n, v);
}


