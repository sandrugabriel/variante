#pragma once
#include "functii.h"


/*În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar variabila A 0 la 3. 
Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui memorează un tablou
bidimensional de tip întreg, cu 4 linii și 4 coloane, numerotate de la punctele de suspensie astfel încât,
în urma executării secvenței obținute, tabloul memorat
(6 puncte)
în variabila A să aibă elementele din figura de mai jos.
for (i=0; i<4;i++)
for(j=0; j<4; j++)
1 2 3 7 
1 1 7 4
1 7 1 4 
7 2 3 1*/
void solutia1() {
	generare();
}

/*Se citeşte de la tastatură un şir format din cel mult 20 de litere şi cifre. Scrieți un program C++ care va 
determina şi va afişa pe ecran produsul numerelor din şir, ştiind că un număr cel mult 3 cifre şi în şir există 
cel puțin cinci litere.
Exemplu: Dacă se citeşte şirul abc123DE2c42e5 se va afişa numărul 51660 care reprezintă produsul numerelor 123, 2, 42 şi 5
*/
void solutia2() {
	char s[100] = "abc123DE2c42e5";
	cout << prod(s);

}

/*
2. Subprogramul produs are doi parametri: n prin care primeşte un număr natural (1<n<100) şi x prin care primeşte
un tablou unidimensional format din n numere întregi și retur-nează produsul maxim obținut din două elemente situate
pe poziții distincte ale tabloului. Exemplu: Pentru n = 6 şi tabloul a = (-60, 36, -8, -2, 10, 5), subprogramul 
va returna 480. Scrieți în limbajul C++ definiția completă a subprogramului produs. 
*/
void solutia3() {
	int a[100] = { -60, 36, -8, -2, 10, 5 };
	cout << produs(6, a);

}

/*
3. Considerând un număr natural x ce conține cel puțin trei cifre, după ce se elimină prima şi ultima cifră se 
obține un alt număr denumit număr interior al numărului x. Fișierul bac.in conține un șir având cel mult un milion
de numere naturale care au cel puțin trei cifre și cel mult 5 cifre, separate prin câte un spațiu. Scrieți un
program C++ care afișează pe ecran în ordine descrescătoare, separate prin spațiu, numerele interioare ale 
numerelor din fişier pentru care prima şi ultima lor cifră sunt egale sau afişează mesajul Nu există, dacă 
fișierul nu conține niciun număr având prima şi ultima cifră egale. Utilizaţi un algoritm eficient ca timp de execuție.
Exemplu: Dacă fișierul conține şirul de numere 1151 234 2322 212 514 23122 atunci se vor afişa numerele 312 32 15 1.*/
void solutia4() {

	afisarea();

}


























