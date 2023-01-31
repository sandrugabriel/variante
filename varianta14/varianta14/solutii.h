#pragma once
#include "backing.h"
#include "functii.h"


/*Ce se afişează pe ecran în urma
executării secvenţei de program
alăturate, în care variabila s
memorează un şir cu cel mult 10
caractere, iar variabilele i şi j
sunt de tip întreg? (4p.)
char s[11]="abcduecda";
cout<<strlen(s); | printf("%d",strlen(s));
i=0; j=strlen(s)-1;
while (i<j)
 if (s[i]==s[j])
 { strcpy(s+j,s+j+1);
 strcpy(s+i,s+i+1); j=j-2;
 }
 else
 { i=i+1; j=j-1; }
cout<<" "<<s; | printf(" %s",s); */
void solutiia1() {

	char s[11] = "abcduecda";
	cout << strlen(s);
	int i = 0, j = strlen(s) - 1;
	while (i < j)
		if (s[i] == s[j])
		{
		//	strcpy(s + j, s + j + 1);
		//	strcpy(s + i, s + i + 1); j = j - 2;
		}
		else
		{
			i = i + 1; j = j - 1;
		}
	cout << " " << s;
	//9 2
}

/*Scrieţi un program C/C++ care citeşte de la tastatură un număr natural nenul, cu maximum
8 cifre, construieşte în memorie şi afişează apoi pe ecran o matrice pătratică, având
numărul de linii şi de coloane egal cu numărul de cifre ale numărului dat, completată cu
cifrele numărului citit.
5.
Astfel, elementele de pe prima coloană a matricei vor fi toate egale cu
cifra unităţilor numărului dat, elementele de pe a doua coloană a
matricei vor fi toate egale cu cifra zecilor numărului dat, şi aşa mai
departe, ca în exemplu.
Exemplu: dacă se citeşte numărul 1359, matricea construită va fi cea
alăturată.
9 5 3 1
9 5 3 1
9 5 3 1
9 5 3 1
*/
void solutia2() {
	int n = 1359;
	generare(n);

}

/*Utilizând metoda backtracking se generează permutările cuvântului info. Dacă primele trei
soluţii generate sunt: fino, fion, fnio care este cea de-a cincea soluţie? (4p.)
a. foin b. fnoi c. foni d. ifon */
void solutia3() {

	b();

}

/*Pentru funcţiile f1 şi f2 definite
alăturat, stabiliţi care este valoarea lui
f1(3). Dar f2(41382)? (6p.)
long f1(int c)
{ if (c%2==1) return 1;
 else return 2;
}
long f2(long n)
{ if (n==0) return 0;
 else return f1(n%10)+f2(n/10);
}*/
void solutia4() {

	cout << f1(3) << endl;//1
	cout << f2(41382);//8

}

/*Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii. Se
cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un
spaţiu.
Exemplu: pentru n=19 şi cifrele 3 3 0 9 2 1 2 1 3 7 1 5 2 7 1 0 3 2 3 se va
afişa pe ecran 0 0 1 1 1 1 2 2 2 2 3 3 3 3 3 5 7 7 9.
a) Descrieţi pe scurt un algoritm de rezolvare al problemei, eficient din punct de vedere al
spaţiului de memorie utilizat şi al timpului de executare, explicând în ce constă eficienţa
metodei alese. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris. */
void solutia5() {

	int n = 19, v[100] = { 3, 3 ,0 ,9 ,2 ,1 ,2, 1, 3, 7, 1, 5, 2, 7, 1, 0, 3, 2, 3 };
	afisare(n, v);
}

/*Fişierul text BAC.TXT conţine mai multe numere naturale, cu cel mult 6 cifre fiecare, câte
un număr pe fiecare linie a fişierului.
4.
Scrieţi un program C/C++ care citeşte toate numerele din fişierul BAC.TXT şi le
afişează pe ecran, în aceeaşi ordine, câte cinci pe fiecare linie, separate prin câte
un spaţiu, cu excepţia ultimei linii care poate conţine mai puţin de cinci numere.
Programul va afişa apoi pe ecran, pe o linie separată, câte numere din fişier au
suma cifrelor pară.
Exemplu: dacă fişierul are conţinutul alăturat
11
21
30
40
51
16
17
10
1, pe ecran se vor afişa numerele
de mai jos:
11 21 30 40 51
16 17 10 1
4 (10p.)
 */
void solutia6() {

	sumParAfis();
}



















