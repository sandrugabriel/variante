#pragma once
#include "functii.h"



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
void solutia1() {

	generare(4);

}

/*1. Ce valoare are F(2758), pentru
funcţia F definită alăturat? (4p.)
int F(int x)
{
 if(x == 0) return 0;
 if(x%10%2 == 0) return 2 + F(x/10);
 return 10 – F(x/10);
}
a. 0 b. 20 c. 12 d. 4 */
int F(int x)
{
	if (x == 0) return 0;
	if (x % 10 % 2 == 0) return 2 + F(x / 10);
	return 10 - F(x / 10);
}
void solutia2() {

	cout << F(2758);
	//d.4
}

/*2. Variabilele i, j şi aux sunt de tip întreg, iar
elementele tabloului unidimensional x sunt
urmatoarele: x0=10, x1=5, x2=-6, x3=7,
x4=0, x5=-2.
Ce valori se vor afişa în urma executării
secvenţei de program alăturate? (6p.)
for(int i = 0; i < 4; i++)
 for(int j = i + 1; j< 6; j++)
 if(x[i] > x[j])
 { aux = x[i];
 x[i] = x[j];
 x[j] = aux;
 }
for(i = 0; i < 6; i++)
 cout<<x[i]<<“ “; */
void solutia3() {

	int x[100]{10,5,-6,7,0,-2};
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 6; j++)
			if (x[i] > x[j])
			{
				int aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
	for (int i = 0; i < 6; i++)
		cout << x[i] << " ";

	//-6 -2 - 5 7 10

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
Exemplu: dacă fişierul SIR.IN are conţinutul alăturat
3
25 6
8 10
1 4589
, atunci
SIR.OUT va conţine cifra 0. (10p.)
 */
void solutia4() {

	afisarea();

}























