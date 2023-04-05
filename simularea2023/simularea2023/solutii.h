#pragma once
#include "functii.h"


/*3. Variabilele i şi j sunt de tip întreg, iar variabila a memorează un tablou bidimensional cu 5 linii şi 5
coloane, numerotate de la 1 la 5, având iniţial toate elementele nule.
Fără a utiliza alte variabile decât cele menționate, scrieţi secvenţa de instrucţiuni de mai
jos, înlocuind punctele de suspensie astfel încât, în urma executării secvenţei obţinute,
variabila a să memoreze tabloul alăturat.
for(i=1;i<=5;i++)
 for(j=1;j<=5;j++)
 .................. (6p.)
4 3 2 1 0
4 3 2 1 1
4 3 2 2 2
4 3 3 3 3
4 4 4 4 4*/
void solutia1() {

	generare();

}

/*1. Subprogramul NrImp are trei parametri:
• x și y, prin care primeşte câte un număr natural (2≤x<y≤109)
• nr, prin care furnizează numărul valorilor naturale din intervalul [x,y] cu trei divizori pozitivi impari.
Scrieţi definiţia completă a subprogramului.
Exemplu: dacă x=4 și y=50, după apel nr=6 (pentru valorile 9, 18, 25, 36, 49, 50). */
void solutia2() {
	int nr;
	NrImp(4, 50, nr);
	cout << nr;

}

/*2. Într-un text de cel mult 100 de caractere cuvintele sunt separate prin câte un spațiu și sunt formate din litere
mari ale alfabetului englez, iar dacă sunt scrise prescurtat sunt urmate de caracterul . (punct). Textul
reprezintă denumirea științifică a unei păsări și doar cuvintele din mulțimea {FAMILIA, GENUL, SPECIA},
specifice sistemului de clasificare a organismelor, sunt mereu prescurtate, prin eliminarea ultimelor lor litere.
Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul precizat și construiește în memorie,
apoi afișează pe ecran denumirea științifică, în care pentru cuvintele specifice sistemului de clasificare a
organismelor se păstrează doar primele trei litere, scrise cu litere mici, și urmate de punct, ca în exemplu.
Exemplu: pentru textul FAMIL. PHASIANIDAE GEN. MELEAGRIS SP. GALLOPAVO
sau pentru textul FAM. PHASIANIDAE G. MELEAGRIS SPECI. GALLOPAVO
se obține fam. PHASIANIDAE gen. MELEAGRIS spe. GALLOPAVO */
void solutia3() {
	char s[100] = "FAMIL. PHASIANIDAE GEN. MELEAGRIS SP. GALLOPAVO";
	afisare(s);

}

/*3. Pentru a studia un metal, s-a urmărit comportamentul său într-o succesiune de pași, la fiecare pas
metalul fiind supus unei anumite temperaturi. Pașii sunt numerotați cu valori naturale consecutive,
începând de la 1. Un pas se numește reprezentativ dacă la niciunul dintre pașii anteriori nu este
utilizată o temperatură strict mai mare decât la acest pas. Dacă există o secvență de pași consecutivi la
care se utilizează aceeași temperatură, se consideră reprezentativ doar primul pas din secvență.
Fișierul bac.txt conține cel mult 106 numere naturale din intervalul [0,104], separate prin câte un
spațiu, reprezentând temperaturile la care este supus metalul, în ordinea pașilor corespunzători. Se cere
să se afișeze pe ecran, separați prin câte un spațiu, pașii reprezentativi pentru datele din fișier. Proiectați
un algoritm eficient din punctul de vedere al timpului de executare și al spațiului de memorie utilizat.
Exemplu: dacă fișierul conține numerele 7 4 9 10 10 10 3 9 2 10 10 8 2 30
se afișează pe ecran 1 3 4 10 14
a. Descrieți în limbaj natural algoritmul proiectat, justificând eficiența acestuia. (2p.)
b. Scrieți programul C/C++ corespunzător algoritmului proiectat.*/
void solutia4() {

	afisarea();

}



























