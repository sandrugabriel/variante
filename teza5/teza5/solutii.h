#pragma once
#include "functii.h"


/*În secvența de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila a memorează un tablou bidimensional cu 
5 linii şi 5 coloane, numerotate de la 1 la 5. Elementele tabloului sunt numere întregi. Fără a utiliza alte variabile, scrieți 
una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării secvenței obținute, 
tabloul memorat în variabila a să aibă elementele din figura de mai jos.

for (i=1;i<=5;i++) for(j=1;j<=5;j++)
01110
4 0 1 0 2
44022
4 03 02
03330*/
void solutia1() {

	generare();

}

/*2. Subprogramul divizori are un parametru n, prin care primeşte un număr natural (2n≤10)
Subprogramul returnează suma divizorilor primi ai lui n. Scrieți în limbajul C/C++ definiți
completă a subprogramului divizori.
Exemplu: Dacă n = 12 si a = ( 1,2,2,2,3,3,5,8,9 ) atunci, după apel, subprogramul va returna valoarea 5, divizorii primi ai lui 12 sunt 2 şi 3.*/
void solutia2() {
	int n = 12, a[100] = { 1,2,2,2,3,3,5,8,9 };
	cout << divizori(n, a);

}

/*3. Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un şir S cu cel mult 100 000 de numere naturale 
formate din cel mult trei cifre fiecare. Asupra acestui şir se aplică în mod repetat următoarea prelucrare: se elimină 
din şir valorile prime, iar valorile neprime se incrementează cu valoarea 1. Prelucrarea se repetă până când în şir 
nu mai există niciun număr. Să se afișeze pe ecran de câte ori a fost aplicată această prelucrare.
Exemplu: Dacă fișierul conține numerele 12 11 16 45 34 atunci după prima prelucrare
vom avea valorile 13 17 46 35; după a doua 47 36; după a treia 37; pe ecran va fi afişată valoarea 4. a) Se cere să 
se proiecteze un algoritm eficient din punct de vedere al timpului de execu- tare şi al spațiului de memorie utilizat
şi să se realizeze o descriere de 3-4 rânduri
a algoritmului ales justificându-se eficienţa acestuia.*/
void solutia3() {

	afisarea();

}


















