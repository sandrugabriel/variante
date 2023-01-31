#pragma once
#include <iostream>
#include <fstream>

using namespace std;

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural cu exact 5 cifre şi
construieşte în memorie o matrice cu 6 linii şi 6 coloane, numerotate de la 1 la 6, formată
astfel:
- elementele aflate pe diagonala principală sunt toate nule;
- elementele de pe linia 1, aflate deasupra diagonalei principale precum şi elementele de pe
coloana 1, aflate sub diagonala principală au toate valoarea egală cu cifra unităţilor
numărului citit;
- elementele de pe linia 2, aflate deasupra diagonalei principale precum şi elementele de pe
coloana 2, aflate sub diagonala principală au toate valoarea egală cu cifra zecilor numărului
citit, şi aşa mai departe, ca în exemplu.
5.
Matricea astfel construită va fi afişată pe ecran, câte o linie a
matricei pe câte o linie a ecranului, elementele de pe aceeaşi linie
fiind separate prin câte un spaţiu.
Exemplu: dacă se citeşte numărul 28731 matricea construită va fi
cea scrisă alăturat. (10p.)
0 1 1 1 1 1
1 0 3 3 3 3
1 3 0 7 7 7
1 3 7 0 8 8
1 3 7 8 0 2
1 3 7 8 2 0*/
void generare(int n) {



	int a[20][20]{};
		for (int i = 1; i <= 6; i++)
		{
			for (int j = i + 1; j <= 6; j++)
			{
				a[j][i] = n % 10;
				a[i][j] = n % 10;
			}
			n = n / 10;
		}
		for (int i = 1; i <= 6; i++)
		{
			for (int j = 1; j <= 6; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
}

/*Pentru funcţiile f şi g definite mai jos, scrieţi care este rezultatul returnat la apelul g(11).
Dar rezultatul returnat la apelul f(6)? (6p.)
2.
long g(long x)
{ if (x>9)
 return (x/10 + x%10);
 else
 return x;
}
long f(int c)
{ if (c<1)
 return 1;
 else
 return g(c+f(c-1));
}*/
long g(long x)
{
	if (x > 9)
		return (x / 10 + x % 10);
	else
		return x;
}
long f(int c)
{
	if (c < 1)
		return 1;
	else
		return g(c + f(c - 1));
}

/*3. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤32000) şi
afişează pe ecran numărul natural din intervalul închis [1,n] care are cei mai mulţi divizori.
Dacă există mai multe numere cu această proprietate se va afişa cel mai mic dintre ele.
Exemplu: pentru n=20 se va afişa valoarea 12 (12, 18 şi 20 au câte 6 divizori, iar 12 este
cel mai mic dintre ele). */
void asif(int n) {

	int d, k, max, nr;
		nr = max = 0;
		for (int i = 1; i <= n; i++) {
			k = 1;
			d = 1;
			while (d <= i / 2) {
				if (i % d == 0)
					k++;
				d++;
			}
			if (k > max) {
				nr = i;
				max = k;
			}
		}
		cout << nr << endl;

}

/*4. În fişierul text BAC.IN se găsesc, pe o singură linie, separate prin câte un spaţiu, mai multe
numere naturale de cel mult 6 cifre fiecare. Se cere să se determine şi să se afişeze pe
ecran, separate printr-un spaţiu, ultimele două numere impare (nu neapărat distincte) din
fişierul BAC.IN. Dacă în fişier se găseşte un singur număr impar sau niciun număr impar se
va scrie pe ecran mesajul Numere insuficiente.
Exemplu: dacă fişierul BAC.IN conţine valorile: 12 15 68 13 17 90 31 42 se va
afişa 17 31.
a) Descrieţi în limbaj natural un algoritm eficient din punct de vedere al spaţiului de memorie
şi al timpului de executare, pentru rezolvarea acestei probleme, explicând în ce constă
eficienţa acestuia. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris. */
void afiare() {

	ifstream f("bac.txt");

		int primul = 0, alDoilea = 0, a;

		while (f >> a) {

			if (a % 2 == 1) {
				alDoilea = primul;
				primul = a;
			}

		}


		if (primul == 0 || alDoilea == 0)
			cout << "Numere insuficiente";
		else
			cout << alDoilea << " " << primul;


}


