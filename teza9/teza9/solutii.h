#pragma once
#include "functii.h"



/*În secvenţa de instrucțiuni de mai jos variabilele i şi j sunt de tip întreg, iar variabila A memorează un tablou bidimensional cu 6 linii şi 6 coloane, numerotate de la 1 la 5. Elementele tabloului sunt numere întregi. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma execu-tării secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de
mai jos.
for (i=0;i<= 5; i++) for(j=5;j>=0; j--)

6 5 5 5 5 5 
5 6 3 2 1 0 
3 3 6 3 3 3
5 4 3 6 1 0
1 1 1 1 6 1 
5 4 3 2 1 6*/
void solutia1() {

	generare();
	
}

/*1. Scrieți un subprogram C/C++, denumit circular, care primeşte prin parametrii a și b două numere naturale, 
nenule, de cel mult 9 cifre. Subprogramul va returna cel mai mic număr de permutări circulare la dreapta, cu câte 
o poziție, ale cifrelor lui a, astfel încât să se obțină numărul b. Dacă nu e posibil, funcția va returna -1.
Exemplu: Pentru a = 120362 şi b = 621203 subprogramul va returna 2, iar pentru a = 732 (10 puncte) şi b= 237 va returna -1.*/
void solutia2() {

	cout << circular(120362, 621203);

}

/*2. Spunem că două cuvinte A şi B rimează, dacă sufixul lui A care începe cu ultima vocală coincide cu sufixul lui B 
care începe cu ultima vocală. De exemplu, cuvintele savant şi gigant rimează, în timp ce sport şi cert nu rimează.
Scrieți un program C/C++ care citeşte de la tastatură, de pe prima linie S, un text de lungime maximă 255 caractere, 
litere mici și spații, iar de pe a doua linie, un cuvânt C, cu cel puțin 3 şi cel mult 30 de litere, dintre care cel 
puțin una este vocală. Textul este format din cuvinte separate prin unul sau mai multe spații. Programul va afişa, pe 
linii diferite, cuvintele din text care rimează cu C sau mesajul (10 puncte) NU EXISTA, dacă S nu conține astfel de cuvinte.
De exemplu, dacă se citesc şirurile de mai jos true is bool and school is cool
tool
se va afişa:
bool
school
cool*/
void solutia3() {
	char s[100] = "true is bool and school is cool", c[100] = "tool";
	afisare(s, c);

}

/*3. Un număr este palindrom dacă citind cifrele numărului de la dreapta la stânga și de la stânga la dreapta 
se obține acelaşi număr. De exemplu 12321, 2002 sunt palindroame, iar
12312 nu este palindrom.
Fişierul text bac.txt conține pe prima linie n, un număr natural nenul, mai mic decât 105, iar pe a 
doua linie un șir de n numere din intervalul [1, 9], separate prin câte un spațiu. Se cere afişarea 
pe ecran a celui mai mare palindrom par care se poate forma cu toate cifrele date. Dacă nu există, 
se va afișa -1. Proiectați un algoritm eficient din punct de vedere al memoriei utilizate şi al 
timpului de executare. Exemplu: Dacă fişierul bac.txt conține numerele
10
2 3 3 8 9 2 3 9 8 3 atunci pe ecran se afişează: 8933223398.*/
void solutia4() {

	afisarea();

}
