#pragma once
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

/*Scrieţi programul C/C++ care citeşte de la tastatură o valoare naturală n (2≤n≤24),
construieşte în memorie şi apoi afişează pe ecran o matrice a, cu n linii şi n coloane,
simetrică faţă de diagonala secundară. Elemente matricei situate deasupra diagonalei
secundare, inclusiv diagonala secundară, sunt toate numerele naturale de la 1 la
2
n(n + 1).
5.
Elementele fiecărei linii, de la stânga la dreapta şi ale fiecărei coloane, de
sus în jos, situate deasupra diagonalei secundare, inclusiv cele de pe
diagonala secundară, sunt în ordine strict crescătoare, ca în exemplu.
Matricea se va afişa pe ecran, câte o linie a matricei pe o linie a ecranului,
elementele fiecărei linii fiind separate între ele prin câte un spaţiu.
Exemplu: pentru n = 4 se va afişa matricea alăturată. (10p.)
1 3 6 10
2 5 9 6
4 8 5 3
7 4 2 1*/
void generare(int n) {
	int a[100][100],k=1;

	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++) {
			a[i - j][j] = k;
			a[n - 1 - j][n - 1 - i + j] = k;
			k++;
		}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << '\n';
	}

}

/*3. a) Scrieţi definiţia completă a subprogramului Ecuatie care primeşte prin parametrii a, b şi
c trei numere întregi, a ≠ 0, de cel mult patru cifre fiecare, reprezentând coeficienţii ecuaţiei
de gradul al II-lea: ax 2 +bx+c=0. În funcţie de soluţiile ecuaţiei subprogramul va returna:
• cea mai mare dintre soluţii dacă ecuaţia are două soluţii reale distincte, dintre care cel
puţin una pozitivă.
• una dintre soluţii dacă ecuaţia are două soluţii egale şi pozitive.
• -32000 în celelalte cazuri. (10p.)
b) Se consideră şirul s: 1, 1, 2, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 1, 2,... .
Pentru un număr natural k, 0<k≤10000, se cere să se determine valoarea elementului ce
se află pe poziţia k în şirul s.
Exemplu: pentru k=5 numărul cerut este 2.
Scrieţi un program C/C++ care citeşte de la tastatură valoarea numărului natural k şi, prin
apeluri utile ale funcţiei Ecuatie, determină valoarea elementului ce se află pe poziţia k în
şirul s, folosind un algoritm eficient din punctul de vedere al spaţiului de memorie alocat şi
al timpului de executare. Valoarea astfel determinată se va scrie în fişierul text sir.out.
(6p.)
c) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul b, explicând în
ce constă eficienţa ei (3 – 4 rânduri) */
float Ecuatie(int a, int b, int c) {
        int d;
        float x1, x2;
        d = b * b - 4 * a * c;
        if (d < 0)
            return -32000;
        else if (d == 0) {
            x1 = -b / (2 * a);
            if (x1 > 0)
                return x1;
            else
                return -32000;
        }
        else {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);
            if (x1 > x2)
                if (x1 > 0)
                    return x1;
                else
                    return -32000;
            else if (x2 > 0)
                return x2;
            else
                return -32000;
        }
}
void afisarea(int k) {

       ofstream f("sir.out");


       int n;
       float x;
       x = Ecuatie(1, 1, -2 * k);
       n = floor(x);
       if (n == x)
           f << n;
       else
           f << k - n * (n + 1) / 2;
       f.close();



}











































