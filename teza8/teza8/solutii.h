#pragma once
#include "functii.h"


/*in secventa urmatoare var n si i sunt de tip intreg, iar variabila s permite numorarea unui cuvant. Cuvintele citite sunt
formate din cifre zecimale si reprezinta numere de telefon, acestea sunt separate prin Enter
int n = ;
	char s[11][11] = "";
	for (int i = 1; i <= 5; i++) {
		cin >> s;

	}

	fara a utiliza alte variabile, scrieti secventa astfel incat, in urma executarii secventei obtinute, variabila n sa memoreze
	numarul de siruri citite pentru care subsirul format din primele patru caractere ale lor coincide cu sirul 2019, iar acesta NU
	apare pe alte pozitii in codul respectiv.
	Ex: Daca se citesc sirurile, variabila n are valoarea 2.
	2019745432
	1378912217
	2019345435
	2019782019
	1765412019

*/
void solutia1() {

	
	generare();

}

/*Subprogramul patrat are un parametru n, prin care primeste un numar natural. Subprogramul returneaza cel mai mare patrat 
perfect care este divizor al lui n. 
Ex: n=72 atunci , dupa apel, subprogramul va returna 36. 
*/
void solutia2() {

	cout << patrat(72);

}

/*Se citeste din bax.txt un sir S cu cel mult 100 000 de nr nat..Pentru fiecare valoare x din sir se determina numarul de cifre
egale cu zero de la sfarsitul lui x! (unde x!=1*2*3*...*x)
.Programul determina si afiseaza ecran cu spatiu intre ele numarul de valori x din sir care au un numar maxim de valori egale
cu zero la sfarzitul lui x! si care este aceasta valoare maxima.
Ex: fisierul contine nr. 102 12 50 100 se afiseaza 2 24.
*/
void solutia3() {

	afisarea();

}


























