#pragma once
#include "functii.h"


/*5. Scrieţi programul C/C++ care citeşte de la tastatură un text de cel mult 50 de caractere,
(litere mici ale alfabetului englez şi spaţii), text format din mai multe cuvinte, separate prin
câte un spaţiu, şi afişează pe ecran textul obţinut din cel iniţial prin transformarea primei
litere şi a ultimei litere ale fiecărui cuvânt în majusculă, restul caracterelor rămânând
nemodificate.
Exemplu: dacă se citeşte textul azi este examen de bacalaureat, se va afişa AzI
EstE ExameN DE BacalaureaT. */
void solutia1() {
	char c[100] = "azi este examen de bacalaureat";
	transf(c);

}

/*1. La un concurs participă 50 de sportivi împărţiţi în 5 echipe, astfel încât în fiecare echipă să
fie câte 10 sportivi. Problema determinării tuturor grupelor de câte 5 sportivi, câte unul din
fiecare echipă, este similară cu generarea tuturor: (4p.)
a. elementelor produsului cartezian
AxAxAxAxA, unde A={1,2,…,10}
b. submulţimilor cu 5 elemente ale mulţimii
{1,2,…,10}
c. permutărilor mulţimii {1,2,3,4,5} d. partiţiilor mulţimii {1,2,…,10}*/
void solutia2() {

	///c. permutărilor mulţimii {1,2,3,4,5} 

}

/*2. Pentru definiţia alăturată a subprogramului
sub, scrieţi ce valoare are sub(4). Dar
sub(132764)? (6p.)
int sub(long n)
{if (n!=0)
 if(n%2!=0)
 return n%10+sub(n/10);
 else return sub(n/10);
 else return 0;
} 
*/
int sub(long n)
{
	if (n != 0)
		if (n % 2 != 0)
			return n % 10 + sub(n / 10);
		else return sub(n / 10);
	else return 0;
}
void solutia3() {

	cout << sub(132764);

}

/*3. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(0<n<100, 0<k<4) şi apoi n numere reale pozitive care au cel mult 3 cifre la partea
întreagă şi cel mult 5 cifre zecimale şi afişează pe ecran numărul de valori reale citite care
au mai mult de k cifre zecimale.
Exemplu: dacă pentru n se citeşte valoarea 5 şi pentru k valoarea 2 şi apoi şirul de
numere reale 6.2 4.234 2 8.13 10.001 pe ecran se va afişa valoarea 2. */
void solutia4() {
	int n = 5, k = 2;
	afisare(n, k);
}

/*4. Fişierul text bac.in conţine pe prima sa linie un număr natural n (0<n<10000), iar pe
următoarea linie n numere naturale din intervalul [1,100] separate prin câte un spaţiu.
Se cere să se citescă din fişier toate numerele şi să se afişeze pe ecran numărul sau
numerele care apar de cele mai multe ori printre numerele citite de pe a doua linie a
fişierului. Numerele afişate vor fi separate prin câte un spaţiu. Alegeţi un algoritm de
rezolvare eficient atât din punctul de vedere al timpului de executare cât şi al gestionării
memoriei. .
Exemplu: dacă fişierul bac.in are următorul conţinut:
12
1 2 2 3 2 9 3 3 9 9 7 1
pe ecran se vor afişa valorile 2, 3 şi 9, nu neapărat în această ordine. */
void solutia5() {

	afisarea();

}






















































