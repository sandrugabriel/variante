#pragma once
#include "functii.h"
#include "backing.h"

/*3. Care va fi şirul de caractere afişat după executarea
secvenţei de program alăturate, în care variabila s
memorează un şir cu cel mult 5 caractere ? (6p.)
char s[]=”raton”;
s[1]=s[3];
cout<<s; */
void solutia1() {
	char s[] = "raton";
	s[1] = s[3];
	cout << s;
	//roton
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural
n (2<=n<=9) şi elementele unui tablou bidimensional A cu n linii şi n
coloane, care memorează numere naturale mai mici decât 10, şi
afişează pe ecran (dacă există), separate prin câte un spaţiu,
elementele din matrice care au proprietatea că sunt egale cu produsul
celorlalte elemente aflate pe aceeaşi coloană. Dacă nu există astfel de
elemente, programul va afişa pe ecran mesajul NU EXISTA.
Exemplu: pentru matricea din figura alăturată
1 1 2 9
9 2 3 3
8 4 1 1 
0 2 9 3
se afişează, nu neapărat în
această ordine, valorile: 4 9 (4=1*2*2; 9=3*1*3). */
void solutia2() {
	int n = 4;
	prodEgal(n);

}

/*//Pentru generarea în ordine crescătoare a numerelor cu n cifre formate cu elementele
//mulţimii{ 0,2,8 } se utilizează un algoritm backtracking care, pentru n = 2, generează, în
//ordine, numerele 20, 22, 28, 80, 82, 88.
//Dacă n = 4 şi se utilizează acelaşi algoritm, precizaţi câte numere generate sunt divizibile cu 100 ? (4p.)
//a. 8 b. 90 c. 6 d. 10*/
void solutia3() {

	b();

}

/*2. Subprogramul afis este definit alăturat.
Ce se afişează ca urmare a apelului afis(8); ?
 (4p.)
void afis (int n)
{
 cout<<n; | printf(“%d”,n);
 for (int i=n/2;i>=1;i--)
 if(n%i==0)afis(i);
}*/
void solutia4() {

	afis(8);

}

/*Scrieţi programul C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(n≤100, k≤100) şi afişează pe ecran, separaţi prin câte un spaţiu, în ordine
descrescătoare, cei mai mici k multipli naturali nenuli ai numărului n.
Exemplu: pentru n=6 şi k=5 se afişează 30 24 18 12 6.*/
void solutia5() {
	int n = 6, k = 5;
	afisare(n, k);

}

/*/* a) Scrieţi definiţia completă a subprogramului sterge, care primeşte prin cei 4 parametri
v,n,i,j:
- v, un tablou unidimensional cu maximum 100 de elemente întregi din intervalul [-1000,1000]
- n, un număr natural reprezentând numărul de elemente din tabloul v
- i şi j două valori naturale cu 1≤i≤j≤n
şi elimină din tabloul v elementele vi,vi+1,…,vj actualizând valoarea parametrului n.
Tabloul modificat este furnizat tot prin parametrul v. (6p.)
b) Fişierul text NUMERE.IN conţine pe prima linie un număr natural nenul n (1≤n≤100) şi pe
următoarea linie n numere întregi din intervalul [-1000;1000], separate prin câte un spaţiu.
Scrieţi un program C/C++ care citeşte din fişierul NUMERE.IN numărul natural n,
construieşte în memorie un tablou unidimensional v cu cele n numere întregi aflate pe linia a
doua în fişier şi utilizează apeluri utile ale subprogramului sterge pentru a elimina din
tablou un număr minim de elemente astfel încât să nu existe două elemente alăturate cu
aceeaşi valoare. Elementele tabloului obţinut se afişează pe ecran, separate prin câte un
spaţiu.
Exemplu: Dacă fişierul NUMERE.IN are conţinutul:
12
10 10 2 2 19 9 9 9 9 15 15 15 atunci se afişează 10 2 19 9 15. */
void solutia6() {

	afisarea();

}

























