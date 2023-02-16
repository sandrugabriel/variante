#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*3. Se consideră subprogramul cmmdc, care primeşte prin intermediul a doi parametri, a şi b,
două numere naturale nenule, cu maximum 8 cifre fiecare, şi returnează cel mai mare
divizor comun al valorilor parametrilor a şi b.
a) Scrieţi definiţia completă a subprogramului cmmdc. (4p.)
b) Scrieţi un program Pascal care citeşte de la tastatură un număr natural n (n<300), şi,
cu ajutorul subprogramului cmmdc, determină numărul perechilor de valori naturale (a,b),
1<a<b<n, cu proprietatea că a şi b nu au niciun divizor comun în afară de 1. Numărul
obţinut se va afişa pe ecran.
Exemplu: dacă se citeşte n=6, atunci se va afişa 6 (deoarece perechile (2,3), (2,5),
(3,4), (3,5), (4,5), (5,6) satisfac condiţiile din enunţ).*/
int cmmdc(int a, int b) {
    while (a != b)
        if (a > b)
            a = a - b;
        else
            b = b - a;
    return a;

}
void afisare(int n) {
   int a, b, nr = 0;

    for (a = 2; a < n; a++)
        for (b = a + 1; b <= n; b++)
            if (cmmdc(a, b) == 1)
                nr++;

    cout << nr;

}
 
/*Fişierul text bac.txt are două linii: pe prima linie conţine un număr natural nenul n
(n<=100), iar pe linia a doua un şir format din n numere naturale de cel mult 4 cifre fiecare,
despărţite prin spaţii. Scrieţi un program C/C++ care adaugă în fişier toate permutările
circulare distincte ale şirului de pe linia a doua a fişierului. Astfel, se vor adăuga la sfârşitul
fişierului încă n-1 linii, fiecare linie conţinând permutarea circulară cu o poziţie către
stânga, a elementelor şirului aflat pe linia precedentă din fişier. Elementele fiecărei
permutari vor fi separate prin câte un spaţiu.
Exemplu: dacă fişierul bac.txt conţine liniile:
4
10 20 30 49
atunci, după rularea programului, fişierul va avea conţinutul
reprezentat alăturat. (10p.)
4
10 20 30 49
20 30 49 10
30 49 10 20
49 10 20 30*/

void afisarea() {

ifstream f("bac.txt");
int n, a[100];
	f >> n;
	for (int i = 0; i < n; i++)
		f >> a[i];

	f.close();
	ofstream g("bac.txt");
	g << n << endl;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++)
			g << a[j] << " ";
		for (int j = 0; j < i; j++)
			g << a[j] << " ";
		g << endl;
	}
}

	



































