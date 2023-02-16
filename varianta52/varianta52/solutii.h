#pragma once
#include "functii.h"
#include "backing.h"

/*. Considerăm declararea alăturată folosită
pentru a memora numele, prenumele şi cele
2 note ale unui elev.
Care dintre instrucţiunile de mai jos
calculează în variabila reală m media
aritmetică a notelor elevului ale cărui
informaţii sunt memorate în variabila x? (4p.)
struct elev{
 char nume[10],prenume[20];
 float nota1,nota2;
 } x;
a. m=(x.nota1+x.nota2)/2; b. m=(nota1+nota2)/2;
c. x.m=(x.nota1+x.nota2)/2; d. m=(x,nota1+x,nota2)/2;*/
struct elev {
	char nume[10], prenume[20];
	float nota1, nota2;
} x;
void solutia1() {

	int m = (x.nota1 + x.nota2) / 2;
	cout << m;

}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul n (n≤100),
apoi n şiruri de caractere, fiecare şir având maximum 30 de caractere, doar litere mici ale
alfabetului englez, şi afişează pe ecran câte dintre cele n şiruri de caractere sunt formate
numai din vocale. Se consideră vocale literele a, e, i, o, u.
Exemplu: dacă n=3, iar şirurile citite sunt date alăturat
arc
ae
creion
, atunci
programul va afişa pe ecran 1 deoarece şirul ae este format
numai din vocale. (10p.)
*/
void solutia2() {
	int n = 3;
		char  c[100][100] = { "arc" , "ae" , "creion"};
	cout << contorVo(n, c);

}

/*1. Utilizând metoda backtracking, se generează în ordine lexicografică toate anagramele
cuvântului caiet ( cuvinte formate din aceleaşi litere, eventual în altă ordine). Câte cuvinte
care încep cu litera t vor fi generate? (4p.)
a. 1 b. 6 c. 12 d. 24*/
void solutla3() {

	back(0);

}

/* Se consideră subprogramul f, definit
alăturat. Ce valoare are f(4)? Dar f(9)?
(6p.)
int f(int n)
{ if (n==0) return 0;
 if(n%2==1)return n-f(n-1);
 return f(n-1)-n;
}*/
int f(int n)
{
	if (n == 0) return 0;
	if (n % 2 == 1)return n - f(n - 1);
	return f(n - 1) - n;
}
void solutia4() {

	cout << f(4) << " " << f(9);

}

/*Subprogramul mult, cu doi parametri, primeşte prin intermediul primului parametru, n, un
număr natural nenul cu maximum trei cifre şi prin intermediul celui de-al doilea parametru,
a, un tablou unidimensional având n componente numere naturale cu cel mult 8 cifre
fiecare. Subprogramul returnează valoarea true dacă cele n componente ale lui a pot
forma o mulţime şi returnează false în caz contrar.
a) Scrieţi definiţia completă a subprogramului mult. (6p.)
b) Fişierul text date.in conţine cel mult 400 de numere naturale având maximum 8 cifre
fiecare. Scrieţi un program C/C++ care, folosind apeluri utile ale subprogramului mult,
afişează pe ecran valoarea maximă k, astfel încât primele k numere succesive din fişier să
poată forma o mulţime.
Exemplu: dacă fişierul date.in conţine
16 17 8 31 8 2 10
atunci se va afişa 4 (deoarece primele patru numere din fişier pot forma o mulţime şi
	acesta este cardinalul maxim posibil în condiţiile impuse de enunţul problemei)*/
void solutia5() {

	ctMaxi();

}

/*4. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi k
(k<n≤10000) şi afişează pe ecran un şir format din k numere naturale consecutive care au
suma n. Numerele se vor afişa pe ecran, în ordine crescătoare, despărţite între ele prin
câte un spaţiu. În cazul în care nu există un astfel de şir, se va afişa mesajul Nu există.*/
void solutia6() {

	afisarea(5, 5);

}

























