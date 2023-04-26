#pragma once
#include "functii.h"


/*În secvenţa de instrucțiuni de mai jos variabilele i şi j sunt de tip întreg, iar variabila A memorează un tablou bidimensional de tip caracter, cu 5 linii şi 5 coloane, numerotate de la 0 la 4. Fără a utiliza alte variabile, scrieți una sau mai multe instrucţiuni care pot înlocui
în variabila A să aibă elementele din figura de mai jos.
for (i=0; i<5;i++)
for(j=0; j<5; j++)
A B C D E 
E A B C D 
D E A B C 
C D E A B
B C D E A*/
void solutia1() {

	generare();

}

/*1. Se citeşte de la tastatură un şir care are cel mult 250 de caractere: litere şi spaţii. Şirul este format
din mai multe cuvinte, separate între ele printr-un spațiu. Scrieți un program C++ care modifică în memorie 
şirul de caractere, prin interschimbarea caracterelor din fiecare pereche formată din două caractere alăturate,
unul fiind vocală şi celălalt fiind consoană. Exemplu: Dacă se citeşte şirul exemple de probleme se va afişa pe
ecran şirul xemplee ed porbelem.*/
void solutia2() {

	perechi();

}

/*3. Fișierul bac.txt conține un șir format din cel puțin 2 şi cel mult 10° numere naturale, fiecare număr având cel mult
9 cifre. Să se determine o secvență de lungime maximă, din-şirul aflat în fişier, cu proprietatea că ultima cifră a 
primului număr din secvență este egală cu ultima cifră a ultimului număr din secvență. Scrieți un program C++ care 
să deter-mine și să afișeze pe ecran lungimea acestei secvențe și numărul de ordine în fișier al primului număr din
secvență, utilizând un algoritm eficient din punct de vedere al timpului de execuție. Dacă în şirul de numere din 
fişier nu există o astfel de secvență se va afișa mesajul Nu există. Dacă şirul conține mai multe astfel de secvențe, 
se va utiliza ultima secvență din fişier. Se consideră că primul număr din fişier are numărul de ordine egal cu 1.
Exemplu: Dacă fișierul bac. txt conține numerele 2 37 27 24 315 144 7 85 214 atunci se afişează pe ecran 6 4.*/
void solutia3() {

	afisarea();

}






















