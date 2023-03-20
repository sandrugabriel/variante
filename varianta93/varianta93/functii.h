#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*5. Un şir de caractere s se numeşte “şablon” pentru un alt şir de caractere x, dacă este
format din caractere din mulţimea {*, ?,#}, are aceeaşi lungime cu x şi pe fiecare poziţie
din s în care apare * în x se găseşte o vocală, pe fiecare poziţie din s în care apare #
în x se găseşte o consoană şi pe fiecare poziţie din s în care apare ? putem avea
orice caracter în x. Se consideră vocală orice literă din mulţimea {a,e,i,o,u}.
Scrieţi programul C/C++ care citeşte de la tastatură două şiruri de caractere, de aceeaşi
lungime, formate din cel mult 200 de litere mici ale alfabetului englez, şi afişează pe ecran,
un şablon comun celor două şiruri citite, care conţine un număr minim de caractere ?.
Exemplu: pentru şirurile diamant şi pierdut se afişează #**#??#*/
void comun(char c[], char d[]) {



	char vocale[] = "aeiou";

	int i, n = strlen(c);

	for (i = 0; i < n; i++)
		//^ - operatia xor
		if ((strchr(vocale, c[i]) || NULL) ^
			(strchr(vocale, d[i]) || NULL)) {

			cout << '?';
		}
		else {
			if (strchr(vocale, c[i]))
				cout << '*';
			else
				cout << '#';
		}


}

/* 3. Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (1≤n≤99), impar, şi
construieşte în memorie un tablou unidimensional A=(A1, A2,…, An) cu elementele
mulţimii {1,2,...,n} astfel încât elementele de pe poziţii impare formează şirul crescător
1,2,...,[(n+1)/2], iar elementele de pe poziţii pare şirul descrescător n,n-1,...,
[(n+1)/2]+1.
Exemplu: pentru n=11 se va construi tabloul A : 1 11 2 10 3 9 4 8 5 7 6
*/
void afisare(int n) {

	int A[100], i;


	for (i = 1; i <= n; i++)
		if (i % 2 == 1)
			A[i] = (i + 1) / 2;
		else
			A[i] = n + 1 - i / 2;

	for (i = 1; i <= n; i++)
		cout << A[i] << " ";

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
int dcm(int a, int b) {
	while (a != b)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a;
}
	
void afisarea(int a, int b) {

int c, d, p = 1, k = 0;

	c = dcm(a, b);
	d = 2;
	while (c != 1)
		if (c % d == 0) {
			k++;
			p = p * d;
			while (c % d == 0)
				c = c / d;
		}
		else
			d++;
	if (k > 1)
		cout << p;
	else
		cout << "nu exista";

}






































































