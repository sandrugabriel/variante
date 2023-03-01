#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*ntr-o matrice a, cu n linii şi n coloane, numerotate de la 1 la n, numim “semidiagonală de
indice k” mulţimea formată din elementele ai,j ale matricei pentru care relaţia: i+j=k+1
este adevărată (1≤k<2*n, 1≤i≤n, 1≤j≤n, i∈N,j∈N,k∈N).
Scrieţi programul C/C++ care citeşte de la tastatură o valoare naturală n (2≤n≤24),
construieşte în memorie şi apoi afişează pe ecran o matrice a cu n linii şi n coloane,
numerotate de la 1 la n, în care elementele fiecărei semidiagonale de indice k sunt egale cu
(k+1)2
, ca în exemplu.
5.
Matricea se va afişa pe ecran, câte o linie a matricei pe o linie a
ecranului, elementele unei linii fiind separate între ele prin câte un
spaţiu.
Exemplu: pentru n = 4 se va obţine matricea alăturată. (10p.)
 4 9 16 25
 9 16 25 36
16 25 36 49
25 36 49 64*/
void generare(int n) {
	int a[100][100];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			a[i][j] = (i + j) * (i + j);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}
}

/*3. a) Scrieţi definiţia completă a funcţiei UltimaCifra care primeşte prin cei doi parametri a
şi b câte un număr natural (0<a<1000000, 0<b<1000000), calculează în mod eficient din
punct de vedere al timpului de executare şi returnează ultima cifră a numărului ab (a la
puterea b). (6p.)
b) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri) (4p.)
c) Fişierul text SIR.IN conţine pe prima sa linie un număr natural n (0<n<1001), iar pe
fiecare dintre următoarele n linii câte o pereche de numere naturale, xi yi (1≤i≤n,
xi≤30000, yi≤30000).
Scrieţi programul C/C++ care citeşte numerele din fişierul SIR.IN şi scrie în fişierul text
SIR.OUT ultima cifră expresiei: 1 2 yn
n
y
2
y x1 +x +...+x ,folosind apeluri ale funcţiei
UltimaCifra.
Exemplu: dacă fişierul SIR.IN are conţinutul alăturat, atunci
SIR.OUT va conţine cifra 0. (10p.)
3
25 6
8 10
1 4589 */
int ultimacifra(int a, int b) {
    a = a % 10;
    b = b % 4;
    if (a == 0 || a == 1 || a == 5 || a == 6)
        return a;
    if (a == 4 || a == 9)
        if (b % 2 == 0)
            return a * a % 10;
        else
            return a;
    if (b == 0)
        return a * a * a * a % 10;
    if (b == 1)
        return a;
    if (b == 2)
        return a * a % 10;
    if (b == 3)
        return a * a * a % 10;
}
void afisarea() {

        int x, y, n, i, s = 0;
        ifstream f("SIR.IN");
        ofstream g("SIR.OUT");
        f >> n;
        for (i = 1; i <= n; i++) {
            f >> x >> y;
            s = (s + ultimacifra(x, y)) % 10;
        }
        g << s;
        cout << s;


}




































