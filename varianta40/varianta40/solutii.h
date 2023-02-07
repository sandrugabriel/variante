#pragma once
#include "functii.h"


/*Considerăm declaraţiile:
int i,j,a[10][10];
Ce se va afişa după executarea
secvenţei de instrucţiuni alăturate?
 (6p.)
for(i=1;i<=3;i++)
 for(j=1;j<=3;j++)
 if(i<j)a[i][j]=i;
 else a[i][j]=j;
for(i=1;i<=3;i++){
 for(j=1;j<=3;j++)
 cout<<a[i][j]; | printf(“%d“,a[i][j]);
 cout<<endl; | printf(“\n“);
 } */
void solutia1() {
	int i, j, a[100][100];

	for (i = 1; i <= 3; i++)
		for (j = 1; j <= 3; j++)
			if (i < j)a[i][j] = i;
			else a[i][j] = j;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++)
			cout << a[i][j];
		cout << endl; 
	}

	/*
111
122
123*/
}

/*Un şir cu maximum 255 de caractere conţine cuvinte cuvinte formate numai din litere mici
ale alfabetului englez. Fiecare cuvânt este urmat de un caracter *. Scrieţi un program
C/C++ care citeşte un astfel de şir şi afişează pe ecran şirul obţinut prin eliminarea tuturor
apariţiilor primului cuvânt, ca în exemplu.
Exemplu: pentru şirul: bine*albine*foarte*bine* se va afişa:
*albine*foarte** */
void solutia2() {
	char s[100] = "bine*albine*foarte*bine*";
	elim(s);

}

/*În secvenţa alăturată variabilele i, j şi aux sunt întregi,
iar v memorează un tablou unidimensional ale cărui
elemente au următoarele valori: v[1]=2, v[2]=13,
v[3]=1, v[4]=5, v[5]=-4. Care este numărul de
interschimbări care se efectuează în urma executării
secvenţei alăturate? Daţi un exemplu de alte 5 valori
pentru elementele tabloului astfel încât, în urma executării
secvenţei alăturate, să nu se efectueze nicio
interschimbare. (6p.)
for(i=1;i<5;i++)
 for(j=5;j>i;j--)
 if(v[i]<v[j])
 {
 aux=v[i];
 v[i]=v[j];
 v[j]=aux;
 } */
void solutia3() {
	int i, j, v[100],aux;
	v[1] = 2, v[2] = 13;
	v[3] = 1, v[4] = 5, v[5] = -4;
	for (i = 1; i < 5; i++)
		for (j = 5; j > i; j--)
			if (v[i] < v[j])
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	for (int i = 1; i < 5; i++) {
		cout << v[i] << " ";
	}

	//1 1 1 1 1
	//2 2 2 2 2
	//3 3 3 3 3 
	//4 4 4 4 4
	//5 5 5 5 5 
}

/*a) Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a
doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un
spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++ care
citeşte numerele din fişier şi care afişează pe ecran mesajul DA dacă elementele pare în şir
sunt în ordine crescătoare, iar cele impare sunt în ordine descrescătoare şi mesajul NU în
caz contrar. Alegeţi un algoritm eficient ca timp de executare şi spaţiu de memorie utilizat.
(6p.)
b) Descrieţi succint, în limbaj natural, metoda utilizată, justificând eficienţa acesteia. (4p.)
3.
Exemplu: dacă fişierul bac.in are conţinutul
alăturat, pe ecran se va afişa: DA
8
10 1133 12 331 42 1354 221 13*/
void solutia4() {

	afisare();

}

/*4. a) Scrieţi definiţia completă a subprogramului sdiv care primeşte prin intermediul
parametrului y un număr natural cu cel mult 6 cifre şi returnează suma tuturor divizorilor
numărului y. (5p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n<10000) şi
care, folosind apeluri ale subprogramului sdiv verifică dacă suma divizorilor lui n este un
număr prim. În caz afirmativ, programul va afişa pe ecran mesajul Da şi în caz contrar va
afişa mesajul NU.
Exemplu: dacă n=206, atunci programul va afişa: NU (1+2+103+206=312, iar 312 nu
este un număr prim). */
void solutia5() {
	int n = 206;
	afisarea(n);

}























