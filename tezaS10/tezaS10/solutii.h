#pragma once
#include "functii.h"


/*Se citește un număr natural n şi un şir de n numere naturale cu cel mult trei cifre fiecare. 
Scrieți un algoritm în pseudocod care afişează, în ordinea citirii, numerele din şir cu
proprietatea că reprezentarea lor în baza 2 conține doar cifre egale cu 1. 
Exemplu: Pentru n = 5 şi numerele 7 18 15 22 31 se vor afişa 7 15 31.*/
//???
void solutia1() {


}

/*
2. Un tablou unidimensional se numește k-palindrom dacă după efectuarea a k permutări circulare cu o 
poziție spre stânga acesta devine palindrom (considerăm că un vector este palindrom dacă vectorul 
parcurs de la stânga la dreapta coincide cu vectorul parcurs de la dreapta la stânga). Se citește
de la tastatură un număr natural n (n≤100), un tablou unidimensional v format din n numere
întregi şi un număr natural k (1≤k<n). Scrieți un program C++ care afişează mesajul DA dacă 
vectorul este k-palindrom sau mesajul NU
în caz contrar.
Exemplu: Dacă n = 5, v = (2, 2, 4, 5, 4), k=1 se va afișa DA.
(10 puncte)*/
void solutia2() {
	int n = 5, v[100] = { 2, 2, 4, 5, 4 },k=1;
	afisare(n, v,k);
}

/*
3. Fişierul text BAC.TXT conține un şir S cu cel mult 100 000 de numere naturale din inter-valul 
[2, 10°]. Pentru fiecare valoare x din şir se determină numărul de cifre egale cu zero de la
sfârşitul lui x! (unde x!=1*2*3..... *x). Scrieți un program C/C++ care citeşte şirul S, 
obține și afișează pe ecran, cu spațiu între ele, numărul de valori x din șir care au un
număr maxim de cifre egale cu zero la sfârșitul lui x! şi care este această valoare maximă. 
Exemplu: Dacă fișierul conține numerele 102 12 50 100 atunci pe ecran vor fi afişate valorile 2 24.*/
void solutia3() {

	afisarea();

}



















