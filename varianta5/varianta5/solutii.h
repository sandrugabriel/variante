#pragma once
#include "functii.h"
#include "backing.h"
#include <fstream>

/*Variabila d, declarată alăturat, memorează în câmpurile a şi b
lăţimea şi, respectiv, lungimea unui dreptunghi. Care dintre
următoarele instrucţiuni atribuie câmpului aria al variabilei d
valoarea ariei dreptunghiului respectiv? (4p.)
struct dreptunghi
{
 float a,b,aria;
}d;
a. d.aria==d.a*d.b; b. aria.d=a.d*b.d;
c. aria.d=d.a*d.b; d. d.aria=d.a*d.b; */
struct dreptunghi
{
	float a, b, aria;
}d;
void solutia1() {

	//d.d.aria = d.a * d.b;

}

/*Fie s o variabilă ce memorează un şir de caractere, c o variabilă
de tip char, iar i şi j două variabile de tip int. Scrieţi
instrucţiunile ce pot înlocui punctele de suspensie din secvenţa
de program alăturată astfel încât executarea ei să determine
modificarea conţinutul şirului s prin interschimbarea caracterelor
aflate pe poziţii simetrice faţă de mijlocul şirului (primului caracter
cu ultimul, al doilea cu penultimul, etc). (6p.)
 i=0;
 j=strlen(s)-1;
 while (i<j)
 {
 .........
 } 
*/
void solutia2() {
	char s[100] = "gabias";
	int  i = 0;
	int j = strlen(s) - 1;
	while (i < j)
	{
		int aux = s[i];
		s[i] = s[j];
		s[j] = aux;

		i++;
		j--;
	}

	cout << s;
}

/*Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mare dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu. (10p.)
5.
Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată. 
 1 2 3 4 5
 2 2 3 4 5
 3 3 3 4 5
 4 4 4 4 5*/
void solutia3() {
	int a[100][100], n = 4, m = 5;

	generare(a, n, m);

}

//Utilizând metoda backtracking sunt generate numerele de 3 cifre, având toate cifrele
//distincte şi cu proprietatea că cifrele aflate pe poziţii consecutive sunt de paritate diferită.
//Ştiind că primele şase soluţii generate sunt, în această ordine, 103, 105, 107, 109, 123,
//125, care este a zecea soluţie generată ? (4p.)
//a.145  b.147  c.230  d.149
void solutia4() {

	pb5();

}

/*Pentru subprogramul f definit mai jos, ce se afişează ca urmare a apelului f(3,17)?(6p.)
//C
void f ( int a, int b)
{ if(a<=b)
 {f(a+1,b-2); printf(”%c”,’*’);}
 else printf(”%d”,b);
}
//C++
void f ( int a, int b)
{ if(a<=b)
 { f(a+1,b-2); cout<<’*’;}
 else cout<<b;
} */
void solutia5() {

	f(3, 17);
	//7*****
}

/*Scrieţi un program C/C++ care citeşte de la tastură un număr natural n cu cel mult 8 cifre
(n≥10) şi care creează fişierul text NR.TXT ce conţine numărul n şi toate prefixele nenule
ale acestuia, pe o singură linie, separate prin câte un spaţiu, în ordine descrescătoare a
valorii lor.
Exemplu: pentru n=10305 fişierul NR.TXT va conţine numerele:
10305 1030 103 10 1 */
void solutia6() {
	ofstream f("nr.txt");
	int n = 10305;
	while (n) {
		f << n << " ";
		n = n / 10;
	}

}

/*Subprogramul f, cu un parametru:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 8 cifre (a>1)
- returnează cel mai mic divizor prim al valorii parametrului a.
Exemplu: pentru valoarea 45 a parametrului a, subprogramul va returna valoarea 3
deoarece a=32
*5, iar cel mai mic divizor prim al său este 3.
a) Scrieţi definiţia completă a subprogramului f. (4p.)
b) Scrieţi un program C/C++ care să citească de la tastatură un număr natural nenul n
(n≤100) şi apoi un şir de n numere naturale de cel mult 8 cifre fiecare, toate numerele din
şir fiind strict mai mari decât 1. Folosind apeluri utile ale subprogramului f, programul va
determina şi va afişa pe ecran toate numerele prime din şirul citit. Numerele determinate se
vor afişa pe ecran, separate prin câte un spaţiu, în ordine crescătoare a valorii lor. Dacă nu
există astfel de numere se va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru n=7, şirul: 1125, 2, 314, 101, 37, 225, 12 pe ecran se va afişa:
2 37 101 */
void solutia7() {

	int n = 7, v[100] = { 1125, 2, 314, 101, 37, 225, 12 };
	afisareprmie(n, v);

}