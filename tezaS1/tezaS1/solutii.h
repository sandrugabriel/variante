#pragma once
#include "functii.h"



/*Se citește un număr natural n şi se cere să se scrie suma divizorilor primi ai lui n 
Exemplu: Dacă n = 12, atunci se scrie 5, iar dacă n = 11 atunci se scrie 11. Scrieți, 
în pseudocod, algoritmul de rezolvare al problemei enunţate.
(10 puncte)*/
void solutia1() {

	cout << sumDiv(12);
}

/*
2. Scrieți
un program C/C++ care citeşte de la tastatură numărul natural n (n € [2,10], apoi cele n elemente ale 
unui tablou unidimensional, numere naturale din intervalul [0, 10²], și afişează pe ecran, separate 
printr-un spațiu, primul număr și ultimul număr memorate în tablou, apoi pe linia următoare primele
două numere din tablou şi ultimele două numere din tablou, ș.a.m.d. în final primele n numere din 
tablou şi ultimele n numere din tablou (10 puncte) ca în exemplu.
Exemplu: Dacă n=4 şi elementele tabloului sunt 2 4 7 1 atunci pe ecran se va afișa:
2 1
2 4 7 1
2 4 7 4 7 1
2 4 7 1 2 4 7 1
*/
void solutia2() {
	generare(4);
}

/*
3. Scrieți un
un program C/C++ care citeşte din fişierul text BAC.TXT un şir S cu cel mult 100 000 de numere 
naturale formate din cel mult trei cifre fiecare. Asupra acestui şir se aplică în mod repetat 
următoarea prelucrare: se elimină din şir valorile prime, iar valorile neprime se incrementează 
cu valoarea 1. Prelucrarea se repetă până când în şir nu mai rămâne niciun număr. Să se afişeze
pe ecran de câte ori a fost aplicată această prelucrare. Exemplu: Dacă fișierul conține 
numerele 12 11 16 45 34 atunci după prima prelucrare vom avea numerele 13 17 46 35; după a 
doua 47 36; după a treia 37; astfel pe ecran va fi afișată valoarea 4.*/
void solutia3() {

	afisarea();

}
















