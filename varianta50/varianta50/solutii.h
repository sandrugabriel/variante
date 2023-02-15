#pragma once
#include "functii.h"



/*Scrieţi programul C/C++ care citeşte de la tastatură un cuvânt s de cel mult 20 litere mici ale
alfabetului englez, construieşte în memorie şi afişează pe ecran cuvântul s după eliminarea
primei şi a ultimei vocale. Cuvântul s conţine cel puţin două vocale şi cel puţin o consoană. Se
consideră vocale literele: a, e, i, o, u.
Exemplu: dacă se citeşte cuvântul bacalaureat, pe ecran se afişează: bcalauret */
void solutia1() {
	char s[100] = "bacalaureat";
	eliminarea(s);

}

/*1. Valorile memorate de componentele
tabloului v, cu indicii de la 0 la 5, sunt, în
această ordine: 973, 51, 75, 350, 350, 15.
Se consideră subprogramul t cu definiţia
alăturată. Care dintre următoarele expresii
are valoarea 2 ? (4p.)
int t (int i, int v[])
{
 if(i==0) return 0;
 if(v[i]!=v[i-1]) return t(i-1,v);
 return 1;
}
a. tablou(0,v)+tablou(3,v) b. tablou(1,v)+tablou(4,v)
c. tablou(4,v)+tablou(5,v) d. tablou(3,v)+tablou(4,v) 
*/
int t(int i, int v[])
{
	if (i == 0) return 0;
	if (v[i] != v[i - 1]) return t(i - 1, v);
	return 1;
}
void solutia2() {
	int v[100] = { 973, 51, 75, 350, 350, 15 };
	cout << t(4, v) + t(5, v);

}

/*Se consideră subprogramul divxy care primeşte prin parametrii x şi y două valori întregi
pozitive (0<x<1000 şi 0<y<1000) şi returnează valoarea 1 dacă y este divizor al lui x sau x
este divizor al lui y şi returnează valoarea 0 în caz contrar.
a) Scrieţi definiţia completă a subprogramului divxy. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură trei numere naturale nenule a, b şi
n, cu cel mult 3 cifre fiecare şi care afişează pe ecran toţi divizorii lui n din intervalul închis
determinat de a şi b folosind apeluri utile ale subprogramului divxy. Intervalul închis
determinat de a şi b este [a,b] dacă a<b sau [b,a] dacă b≤a. Numerele afişate sunt
separate prin câte un spaţiu. Dacă nu există niciun astfel de număr se afişează mesajul NU
EXISTA.
Exemplu: pentru a=85, b=10 şi n=40 se afişează: 10 20 40 (nu neapărat în această
ordine). */
void solutia3() {


	int a=85, b=10, n=40;
	if (a > b) {
		int aux = a;
		a = b;
		b = aux;
	}
	while (a <= b && a <= n) {

		if (divxy(n, a))
			cout << a << " ";
		a++;

	}


}

/*4. Fişierul bac.in conţine pe prima linie un număr natural n (0<n<5000), iar pe a doua linie,
separate prin câte un spaţiu, n numere naturale, formate din cel mult 4 cifre fiecare.
Scrieţi un program C/C++ care determină şi scrie în fişierul bac.out, toate numerele, citite de
pe a doua linie a fişierului bac.in, care apar de cel puţin două ori. Numerele determinate se
vor scrie în ordine crescătoare, pe aceeaşi linie, separate prin câte un spaţiu.
Exemplu: dacă fişierul bac.in conţine pe prima linie numărul 11, iar pe linia a doua
valorile 23 12 54 12 78 345 67 23 78 934 23
atunci fişierul bac.out va conţine: 12 23 78 */
void solutia4() {

	afisarea();

}




























