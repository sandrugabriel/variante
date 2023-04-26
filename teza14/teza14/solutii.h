#pragma once
#include "functii.h"


/*În secvenţa de instrucţiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează 
un tablou bidimensional cu 7 linii şi 7 coloane, numerotate de la 1 la 7. Elementele tabloului sunt
caractere. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui 
punctele de suspensie astfel încât, în urma execu-tării secvenței obținute, tabloul memorat în 
variabila A să aibă elementele din figura de mai jos. (6 puncte)
for (i=0;i<=6;i++) for(j=0; j<=6; j++)
* - - - - - * 
* * - - - * *
* - * - * - *
* - - - - - * 
* - - - - - * 
* - - - - - *
*/
void solutia1() {
	
	generare();

}

/*
Scrieți un program C/C++ care citeşte de la tastatură, de pe prima linie, un număr natural
n (10<n<50), iar de pe a doua linie, un text S de cel mult 200 de caractere 
(litere mici ale alfabetului englez şi spaţii), format din cuvinte separate prin câte un spațiu. 
Textul nu începe și nu se termină cu spații. Programul afişează pe ecran liniile paragrafului în 
care se încadrează textul după operația WRAP de dimensiune n. Dacă afişarea nu e posibilă se va 
scrie pe ecran mesajul IMPOSIBIL.
De exemplu, dacă se citește n = 20 și textul:
bacul la info este usor daca esti foarte bine pregatit se va afișa
bacul la info este * usor daca esti **
foarte bine pregatit*/
void solutia2() {

	char s[100] = "";
	int n;
//	warap(n,s);

}

/*3. Din fişierul text BAC.TXT se citesc, de pe prima linie un număr k (k < 106), iar de pe linia următoare 
cel mult 1 000 000 de numere naturale cu cel mult 2 cifre fiecare, separate prin câte un spațiu. Să se afişeze
pe ecran numărul de pe a doua linie din fişier care va fi pe poziția k în şirul ordonat descrescător, 
dacă există sau -1 în caz contrar. Să se proiecteze un algoritm eficient din punct de vedere al timpului 
de executare. Exemplu: Dacă fişierul conține numerele:
6
21 9 16 2 16 2 9 4 9 21 9 2 8 atunci pe ecran se va afişa 9.*/
void solutia3() {

	afisarea();
}








