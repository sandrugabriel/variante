#pragma once
#include "functii.h"



/*5. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n≤15) şi
construieşte în memorie o matrice pătrată cu n linii şi n coloane în care ultima linie conţine,
în ordine, numerele 1,2,3,..,n, elementele situate deasupra diagonalei principale sunt
nule şi oricare alt element este obţinut prin însumarea elementelor vecine cu el, aflate pe
linia imediat următoare, pe aceeaşi coloană cu el sau pe una din coloanele alăturate.
Programul va afişa pe ecran matricea obţinută pe n linii, elementele fiecărei linii fiind
separate prin câte un spaţiu.
Exemplu: pentru n=4 pe ecran se va afişa:
 (10p.)
27 0 0 0
9 18 0 0
3 6 9 0
1 2 3 4 */
void solutia1() {

	generare(4);

}

/*1. Generarea matricelor pătratice de ordinul n, cu elemente 0 şi 1, cu proprietatea că pe
fiecare linie şi pe fiecare coloană există un singur element egal cu 1, se poate realiza
utilizând metoda backtracking. Algoritmul utilizat este echivalent cu algoritmul de generare
a: (4p.)
a. combinărilor b. permutărilor c. aranjamentelor d. produsului
cartezian*/
void solutia2() {
	//a. combinărilor
}

/*2. Se consideră tabloul unidimensional a definit
global, ce memorează elementele a1=12, a2=35,
a3=2, a4=8 şi subprogramul f, definit alăturat. Ce
valoare are f(1)? Dar f(4)? (6p.)
int f(int x)
{if(x>=1)
 return (a[x]+f(x-1))%10;
 else
 return 0;
}*/
int f(int x)
{
	int a[100] = { 12,35,2,8 };
	if (x >= 1)
		return (a[x] + f(x - 1)) % 10;
	else
		return 0;
}
void solutia3() {

	cout << f(1);

}

/*3. Subprogramul cifra primeşte prin parametrul x un număr real nenul pozitiv şi furnizează
prin parametrul y valoarea cifrei unităţilor părţii întregi a lui x.
Exemplu: dacă x=34.567, după apel y=4.
a) Scrieţi definiţia completă a subprogramului cifra. (6p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură două numere reale cu cel mult două
zecimale, numere reprezentând mediile semestriale obţinute de un elev. Programul stabileşte,
folosind apeluri utile ale subprogramului cifra, dacă cele două medii citite se află în aceeaşi
categorie de medii sau nu. Precizăm că orice medie, în funcţie de intervalul în care se
încadrează, face parte din una dintre categoriile: [3,3.99], [4,4.99], [5,5.99],
[6,6.99], [7,7.99], [8,8.99] sau [9,10]. În cazul în care ambele medii fac parte din
aceeaşi categorie, programul va afişa mesajul Da, altfel va afişa mesajul Nu.*/
void solutia4() {

	afiare(2.56, 5.99);

}

/*4. În fişierul text.in se află un text scris pe mai multe linii, pe fiecare linie fiind caractere
diverse: litere mici ale alfabetului englez, cifre, spaţii şi semne de punctuaţie. Găsiţi o metodă
eficientă din punctul de vedere al timpului de executare şi al gestionării memoriei ce permite
afişarea celor mai frecvente perechi de vocale alăturate din text. Menţionăm că vocalele
sunt: a, e, i, o şi u.
De exemplu, dacă text.in conţine textul:
Aleea ce strabate valea
e-o unduire de pietris scanteietor,
De-aceea nu stii daca zboara sau doar inoata in unde aurii
cele mai frecvente perechi de vocale întâlnite în acest text sunt: ea şi oa (ele apar de 3 ori,
spre deosebire de alte perechi de vocale alăturate care apar de mai puţine ori).
a) Descrieţi succint, în limbaj natural, metoda de rezolvare aleasă, explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
b) Scrieţi programul C/C++ corespunzător metodei descrise la cerinţa a. */
void solutia5() {

	afisarea();

}