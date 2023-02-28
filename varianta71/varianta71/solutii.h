#pragma once
#include "functii.h"


/*4. Fiecare dintre variabilele declarate alăturat memorează numele
şi nota câte unui elev.
Scrieţi secvenţa de instrucţiuni prin care se citesc de la
tastatură numele şi nota pentru fiecare dintre variabilele e1 şi
e2 şi apoi se afişează numele elevului cu nota cea mai mare.
Dacă cele două note sunt egale, se va afişa numele elevului
memorat în variabila e1. (6p.)
struct elev{
 char nume[20];
 float nota;
};
elev e1,e2; 
*/
struct elev {
	char nume[20];
	float nota;
};
elev e1, e2;
void solutia1() {

	if (e1.nota > e2.nota) {
		cout << e1.nota;
	}
	else
	{
		cout << e2.nota;
	}

}

/*5. Scrieţi programul C/C++ care citeşte de la tastatură, separate prin Enter, două şiruri de
caractere: un şir s de maximum 255 de caractere, care pot fi litere ale alfabetului englez şi
spaţii, apoi un şir c de maximum 20 de caractere. Programul va înlocui în şirul s toate
apariţiile şirului c cu un şir de exact aceeaşi lungime efectivă cu c, format doar din caractere
*, ca în exemplu. Şirul s obţinut în urma acestei prelucrări va fi afişat pe ecran. În cazul în
care c nu apare în s, programul va afişa mesajul NU APARE.
Exemplu: dacă şirul S citit este Din departare se vede tare iar c este tare
atunci pe ecran se va afişa: Din depar**** se vede **** */
void solutia2() {

	char s[100] = "Din departare se vede tare", c[100] = "tare";
	inlocuire(s, c);
}

/*2. Ce valoare va avea variabila întreagă x, în
urma apelului F(1,x), ştiind că, înainte de
apel, variabila x are valoarea 0, iar
subprogramul F este definit alăturat?
(6p.)
void F(int i, int &x)
{ if (i <= 10)
 { if(i % 2) x = x + 2;
 else x = x – 1;
 F(i + 1, x);
 }
} */
void F(int i, int& x)
{
	if (i <= 10)
	{
		if (i % 2) x = x + 2;
		else x = x - 1;
		F(i + 1, x);
	}
}
void solutia3() {
	int x=0;
	F(1, x);
	cout << x;//5
}

/*3. Un număr natural se numeşte palindrom dacă numărul citit de la stânga la dreapta este egal
cu numărul citit de la dreapta la stânga.
a) Scrieţi definiţia completă a subprogramului Palindrom care primeşte prin intermediul
parametrului n un număr natural de cel mult nouă cifre şi returnează 1 dacă acesta este
palindrom şi 0 în caz contrar. (10p.)
b) Fişierul text NUMERE.IN conţine cel mult 100000 numere naturale de cel mult nouă cifre
fiecare, numerele fiind despărţite prin câte un spaţiu. Cel puţin unul dintre numere este
palindrom.
Scrieţi programul C/C++ care citeşte numerele din fişierul NUMERE.IN şi, folosind apeluri
utile ale subprogramului Palindrom determină în mod eficient, din punct de vedere al
memoriei utilizate şi al timpului de executare, care este cel mai mare număr palindrom citit şi
de câte ori apare el în fişierul NUMERE.IN. Programul scrie în fişierul text NUMERE.OUT
numărul astfel determinat precum şi numărul de apariţii ale acestuia, pe rânduri diferite.
Exemplu: dacă NUMERE.IN conţine numerele:
23 565 78687 7887 7865 78687 7887 23 78687 98798
atunci NUMERE.OUT va conţine:
78687
3 (6p.)
c) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită la punctul b, explicând în
ce constă eficienţa ei (3 – 4 rânduri).  */
void solutia4() {

	afisarea();

}












































