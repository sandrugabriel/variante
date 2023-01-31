#pragma once
#include "functii.h"
#include "back.h"


/*În declararea alăturată, câmpurile x şi y ale înregistrării pot
memora numărătorul, respectiv numitorul unei fracţii. Scrieţi
secvenţa de instrucţiuni prin executarea căreia se construieşte în
variabila f o fracţie obţinută prin însumarea fracţiilor memorate în
variabilele f1 şi f2. (6p.)
struct fractie
 {
 int x,y;
 }f,f1,f2; */
struct fractie
{
	int x, y;
}f, f1, f2;
void solutia1() {

	f.x = (f1.x * f2.y) + (f2.x * f1.y);
	f.y = f1.y * f2.y;
}

/*În secvenţa de instrucţiuni de mai jos, variabila s memorează un şir de caractere format
doar din litere ale alfabetului englez, iar variabilele i şi n sunt de tip int. Ştiind că în urma
executării secvenţei s-a afişat succesiunea de caractere eied*eael* scrieţi care este
şirul de caractere memorat de variabila s. (6p.)
4.
//C
n=strlen(s);
for(i=0;i<n;i++)
 if (s[i]==’e’) printf(”%c”,’*’);
 else printf("%c%c",’e’,s[i]);
//C++
n=strlen(s);
for(i=0;i<n;i++)
 if (s[i]==’e’) cout<<’*’;
 else cout<<'e'<<s[i]; */
void solutia2() {
	char s[100]="ideale";
	int n = strlen(s);
	for (int i = 0; i < n; i++)
		if (s[i] == 'e') cout << '*';
		else cout << 'e' << s[i];
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
după cum urmează:
- elementele aflate pe diagonala principală a matricei vor primi valoarea 0
- elementele de pe prima coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea n
- elementele de pe a doua coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea n-1
...
- elementele de pe ultima coloană, cu excepţia celui aflat pe diagonala principală vor primi
valoarea 1
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii (ca în
exemplu).
Exemplu: pentru n=4 se va afişa matricea alăturată. (10p.)
0 3 2 1
4 0 2 1
4 3 0 1
4 3 2 0 */
void solutia3() {

	int n = 4;
	generare(n);

}

/*Utilizând metoda backtracking se generează în ordine lexicografică cuvintele de câte patru
litere din mulţimea A={a,b,c,d,e}, cuvinte care nu conţin două vocale alăturate. Primele
opt cuvinte generate sunt, în ordine: abab, abac, abad, abba, abbb, abbc, abbd, abbe.
Care este penultimul cuvânt generat? (4p.)
a. edec b. eded c. edde d. edcb*/
void solutia4() {

	pb();
	//a
}

/*2. Pentru definiţia alăturată a
subprogramului f, ce se afişează ca
urmare a apelului f(26);? (6p.)
void f (int x)
{
 if(x>0)
 if(x%4==0)
 { cout<<’x’; | printf(”%c”,’x’);
 f(x-1); }
 else
 { f(x/3);
 cout<<’y’; | printf(”%c”,’y’);
 }
} */
void solutia5() {

	f3(26);//xyyy

}

/*Fişierului text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel
mult 100 de numere naturale, fiecare număr având cel mult 4 cifre. Scrieţi un program
C/C++ care citeşte toate numerele din fişierul NR.TXT şi afişează pe ecran, separate prin
câte un spaţiu, în ordine crescătoare, toate numerele din fişier care au cel puţin 3 cifre.
Dacă fişierul nu conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA. (10p.)*/
void solutia6() {

	afis3Cifre();

}

/*
4. Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre
şi care determină şi afişează pe ecran, folosind apeluri utile ale subprogramului cif, cel mai
mare număr palindrom ce poate fi obţinut prin rearanjarea tuturor cifrelor numărului n. Dacă
nu se poate obţine un palindrom din toate cifrele numărului n, programul va afişa pe ecran
numărul 0. Un număr natural este palindrom dacă este egal cu numărul obţinut prin scrierea
cifrelor sale în ordine inversă.
Exemplu: dacă n=21523531 atunci se va afişa pe ecran numărul 53211235, iar dacă
n=12272351 atunci se va afişa pe ecran numărul 0. */
void solutia7() {
	int n = 21523531;
	afisarePalindrom(n);
}


































