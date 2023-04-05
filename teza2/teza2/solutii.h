#pragma once
#include "functii.h"


/*3. În secvența de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A memorează un tablou 
bidimensional cu 5 linii şi 5 coloane, numerotate de la 1 la 5. Elementele tabloului sunt numere întregi. Fără a utiliza
alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma 
executării secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de mai jos.

for (i=1;i<=5;i++) for(j=1;j<=5;j++)

11113
11132
11322
13222 
32222*/
void solutia1() {
	int a[100][100]{};
	generare(a);

}

/*Scrieți un program C/C++ care citește de la tastatură un şir de caractere format din cel mult 100 de caractere 
(litere mici, litere mari ale alfabetului englez și spații) şi afiseaz pe ecran litera care apare de cele mai multe 
ori şi numărul ei de apariții, ca in e Dacă sunt mai multe litere care apar de acelaşi număr maxim de ori se vor 
afişa toate. Exemplu: Dacă se citeşte şirul de caractere Voi da Bacalaureatul la Informatica se va afişa a 8.*/
void solutia2() {
	char s[100] = "Voi da Bacalaureatul la Informatica";
	contor(s);

}

/*2. Subprogramul numărare are doi parametri:a, prin care primeşte un număr natural (2≤ a≤ 20000);
b. prin care primeşte un număr natural (2 <b<20000); Subprogramul returnează numărul de valori din
intervalul închis determinat de care au exact 3 divizori. Scrieți în limbajul C/C++ definiția completă a subprogramului a si b.
numărare.
Exemplu: Dacă a = 6 şi b = 36, subprogramul va returna 2.*/
void solutia3() {

	cout << numarare(6, 36);

}

/*3. Din fișierul bac. txt se citesc n și m (numere naturale, 0<m<n<1000000) de pe prima linie, apoi n numere naturale cu cel 
mult două cifre fiecare a1, a2, ..., an de pe linia a doua și apoi m numere naturale cu cel mult două cifre fiecare b1, b2, ..., bm 
de pe linia a treia a fișierului. Să se determine câte şiruri b se pot obține din şirul a dacă se poate schimba ordinea elementelor 
din şirul a. Se va afişa pe ecran numărul numărul de şirur obţinute.
a) Se cere să se proiecteze un algoritm eficient din punct de vedere al timpului de executare și să se realizeze o descriere de 3-4 
rânduri a algoritmului ales justificându-se eficiența acestuia.
b) Să se scrie programul C/C++ ce realizează prelucrarea descrisă și afișează pe ecran un mesaj corespunzător. De exemplu, pentru 
fișierul bac. txt cu conținutul
83
16313761
613
se afişează valoarea 2.*/
void solutia4() {

	afisarea();

}

















