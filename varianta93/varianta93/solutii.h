#pragma once
#include "functii.h"



/*5. Un şir de caractere s se numeşte “şablon” pentru un alt şir de caractere x, dacă este
format din caractere din mulţimea {*, ?,#}, are aceeaşi lungime cu x şi pe fiecare poziţie
din s în care apare * în x se găseşte o vocală, pe fiecare poziţie din s în care apare #
în x se găseşte o consoană şi pe fiecare poziţie din s în care apare ? putem avea
orice caracter în x. Se consideră vocală orice literă din mulţimea {a,e,i,o,u}.
Scrieţi programul C/C++ care citeşte de la tastatură două şiruri de caractere, de aceeaşi
lungime, formate din cel mult 200 de litere mici ale alfabetului englez, şi afişează pe ecran,
un şablon comun celor două şiruri citite, care conţine un număr minim de caractere ?.
Exemplu: pentru şirurile diamant şi pierdut se afişează #**#??#*/
void solutia1() {
	char c[100] = "diamant", d[100] = "pierdut";
	comun(c, d);

}

/* 3. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤99), impar, şi
construieşte în memorie un tablou unidimensional A=(A1, A2,…, An) cu elementele
mulţimii {1,2,...,n} astfel încât elementele de pe poziţii impare formează şirul crescător
1,2,...,[(n+1)/2], iar elementele de pe poziţii pare şirul descrescător n,n-1,...,
[(n+1)/2]+1.
Exemplu: pentru n=11 se va construi tabloul A : 1 11 2 10 3 9 4 8 5 7 6
*/
void solutia2() {

	afisare(11);
}

/* 4. a) Scrieţi definiţia completă a subprogramului dcm, cu doi parametri, care:
 - primeşte prin parametrii a şi b două valori naturale din intervalul [1,30000]
 - returnează o valoare naturală reprezentând cel mai mare număr care este atât divizor al lui a
cât şi divizor al lui b.
Exemplu: dacă a=100 şi b=120, subprogramul returnează valoarea 20. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale a şi b,
numere din intervalul [1,30000] şi determină, folosind apeluri utile ale subprogramului
dcm, cel mai mare număr care este divizor al fiecăruia dintre numerele a şi b şi are
proprietatea că este un produs de două sau mai multe numere prime distincte. Programul
afişează pe ecran numărul cu proprietatea cerută, iar dacă nu există un astfel de număr,
afişează mesajul nu exista.
Exemplu: dacă a=60 şi b=72, atunci se afişează 6
iar dacă a=100 şi b=75, atunci se afişează nu exista. */
void solutia3() {

	afisarea(60, 72);

}



































