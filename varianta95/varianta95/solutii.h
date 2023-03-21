#pragma once
#include "functii.h"



/*5. Scrieţi un program în limbajul C/C++ care citeşte de la tastatură un singur şir, format din cel
mult 20 de caractere, care reprezintă numele şi prenumele unei persoane. Între nume şi
prenume se află un număr oarecare de caractere spaţiu (cel puţin unul). Atât numele, cât şi
prenumele, sunt formate numai din litere mici ale alfabetului englez. Programul construieşte
în memorie şi afişează pe ecran un alt şir de caractere, care să conţină iniţiala prenumelui
(prima literă a prenumelui), urmată de un caracter punct, de exact un spaţiu şi de numele
din şirul citit iniţial. Toate literele din şirul afişat vor fi, de asemenea, litere mici.
Exemplu: dacă se citeşte şirul:
popescu vasile
se va construi şi apoi se va afişa pe ecran şirul
v. popescu */
void solutia1() {
	char c[100] = "popescu vasile";
	interchimbare(c);

}

/*3. Funcţia f primeşte prin intermediul parametrului n un număr natural nenul (2≤n≤200), iar
prin intermediul parametrului a un tablou unidimensional care conţine n valori întregi nenule
(fiecare dintre aceste valori întregi având cel mult patru cifre).
Funcţia returnează valoarea -1 dacă numărul de valori negative din tabloul a este strict mai
mare decât numărul de valori pozitive din tablou, valoarea 0 dacă numărul de valori
negative din a este egal cu numărul de valori pozitive din tablou şi valoarea 1 dacă numărul
de valori pozitive din tabloul a este strict mai mare decât numărul de valori negative din a.
Scrieţi definiţia completă a funcţiei f.*/
void solutia2() {
	int a[100] = { 13,523,53,13,53,1,4 }, n = 7;
	cout << verif(a, n);

}

/*4. a) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul, S, având
maximum 9 cifre, şi printr-o metodă eficientă din punct de vedere al timpului de executare,
determină şi scrie în fişierul rez.dat trei valori naturale a căror sumă este egală cu S, şi al
căror produs este maxim. Cele trei valori vor fi scrise în ordine crescătoare pe prima linie a
fişierului rez.dat, separate prin câte un spaţiu.
Exemplu: dacă se citeşte valoarea 5, fişierul rez.dat va avea o linie cu conţinutul 1 2 2*/
void solutia3() {
	long s = 5;
	long x = s / 3;
	if (s % 3 == 0)
		cout << x << " " << x << " " << x;
	if (s % 3 == 1)
		cout << x << " " << x << " " << x + 1;
	if (s % 3 == 2)
		cout << x << " " << x + 1 << " " << x + 1;
	
}































