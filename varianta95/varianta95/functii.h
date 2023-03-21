#pragma once
#include <iostream>
#include <fstream>

using namespace std;


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
void interchimbare(char c[]) {

	char nouSir[21];

	int i, n = strlen(c);

	//char* p = strtok(c, " ");
	//strcpy(nouSir, p);

//	p = strtok(NULL, " ");
	//strcpy(nouSir + 3, nouSir);

	//nouSir[0] = p[0];
	nouSir[1] = '.';
	nouSir[2] = ' ';

	cout << nouSir;

}

/*3. Funcţia f primeşte prin intermediul parametrului n un număr natural nenul (2≤n≤200), iar
prin intermediul parametrului a un tablou unidimensional care conţine n valori întregi nenule
(fiecare dintre aceste valori întregi având cel mult patru cifre).
Funcţia returnează valoarea -1 dacă numărul de valori negative din tabloul a este strict mai
mare decât numărul de valori pozitive din tablou, valoarea 0 dacă numărul de valori
negative din a este egal cu numărul de valori pozitive din tablou şi valoarea 1 dacă numărul
de valori pozitive din tabloul a este strict mai mare decât numărul de valori negative din a.
Scrieţi definiţia completă a funcţiei f.*/
int verif(int a[100], int n) {
    int p = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] <= 0)
            p--;
        else if (a[i] >= 0)
            p++;
    if (p < 0)
        return -1;
    else if (p > 0)
        return 1;
    else
        return 0;
}








