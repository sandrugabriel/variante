#pragma once
#include "functii.h"



/*În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, 
iar variabila A memorează un tablou bidimensional cu 5 linii şi 5 coloane, numerotate 
de la 1 la 5. Elementele tabloului sunt numere întregi. Fără a utiliza alte variabile, 
scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel 
încât, în urma execu-tării secvenței obținute, tabloul memorat în variabila A să aibă 
elementele din figura de mai jos. (6 puncte)
for (i=5;i>=1;i--) for(j=1; j<6; j++)
5 1 1 1 2 
5 2 0 0 1 
5 1 2 0 1
5 2 1 2 1
5 5 5 5 5*/
void solutia1() {

	generare();

}

/*Se consideră un text cu cel mult 200 de caractere, litere, cifre şi spaţii. Cuvintele sunt formate din 
litere ale alfabetului englez şi/sau cifre şi sunt separate prin câte un spațiu. Scrieți un program C/C++
care citeşte de la tastatură un text de tipul menţionat mai sus şi care nu conține nicio cifră, 
transformată în majusculă. Dacă nu există astfel de cuvinte, se construieşte în memorie apoi 
afişează pe ecran şirul format din prima literă a fiecarui cuvânt
afişează pe ecran mesajul nu există.
Exemplu: Pentru şirul Varianta T100 data in 10nov la simulare 12c
se afişează VDILS.*/
void solutia2() {
	char c[100] = "Varianta T100 data in 10nov la simulare 12c";
	maj(c);
}

/*3. Fiind date două numere a și b, îl numim pe a sufix al lui b dacă a este egal cu b sau dacă b 
se poate obține din a prin alipirea la stânga a unor noi cifre. Exemplu: 12 este sufix al lui 12, 
iar 15 este sufix al lui 31415. Fișierul bac.txt conține pe prima linie un număr natural x, cu cel 
mult 4 cifre, iar pe a doua linie un şir de cel puțin două şi cel mult 1 000 000 de numere naturale
cu cel mult nouă cifre. Numerele din şir sunt separate prin câte un spațiu.
Se cere să se afişeze pe ecran ultimul termen al şirului care are ca sufix numărul x. Dacă în 
şir nu există o astfel de valoare, pe ecran se afişează mesajul nu exista. Pentru determi-narea 
numărului cerut se utilizează un algoritm eficient din punctul de vedere al memoriei şi al timpului de executare.
Exemplu: Dacă fişierul bac.txt conține numerele
12
3445 89312 1212 12 67120 312 1234578 atunci pe ecran se afişează 312.*/
void solutia3() {

	afisarea();

}






























