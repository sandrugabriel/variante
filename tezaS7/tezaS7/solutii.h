#pragma once
#include "functii.h"


/*În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg. Fără a utiliza alte variabile,
scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării
secvenței obținute, să se afişeze caracterele de mai jos, în această (6 puncte)
ordine.
for (i=0; i<6; i++) { for(j=0; j<6; j++)
cout<<endl; }
A B C D E F 
B A B B F B 
C C A F C C 
D D F A D D 
E F E E A E 
F F F F F A*/
void solutia1() {

	generare();

}

/*
2. Scrieți
un program C++ care citeşte de la tastatură un număr natural n (1≤n≤100) şi un tablou unidimensional x format 
din n numere întregi şi afişează produsul maxim obţinut din două elemente distincte ale tabloului.
Exemplu: Pentru n = 6 şi tabloul x = (-60, 36, -8, -2, 10, 5), se va afişa 480. (10 puncte)*/
void solutia2() {
	int n = 6, x[100] = { -60, 36, -8, -2, 10, 5 };
		cout<<prodMaxi(n, x);

}

/*
Considerând un număr natural x ce conține cel puțin trei cifre, după ce se elimină prima şi ultima cifră se 
obține un alt număr denumit număr interior al numărului x. Fișierul bac.in conține un șir având cel mult un 
milion de numere naturale care au cel puțin trei cifre și cel mult 5 cifre, separate prin câte un spațiu. 
Scrieți un program C++ care afişează pe ecran în ordine descrescătoare, separate prin spațiu, numerele 
interioare ale numerelor din fişier pentru care prima și ultima lor cifră sunt egale sau afişează mesajul 
Nu există, dacă fișierul nu conţine niciun număr având prima şi ultima cifră egale. Utilizați un algoritm 
eficient ca timp de execuție și spațiu de memorie utilizat.
Exemplu: Dacă fișierul conține șirul de numere 1151 234 2322 212 514 23122 atunci se vor 
afişa numerele 312 32 15 1*/
void solutia3() {

	afisarea();

}












































