#pragma once
#include "functii.h"
#include "backing.h"


/*Ce se afişează pe ecran în urma
executării secvenţei de program
alăturate, în care variabila s
memorează un şir cu cel mult 12
caractere, iar variabila i este de
tip întreg?
 (6p.)
strcpy(s,”abracadabra”);
i=0;
cout<<strlen(s); | printf(”%d”,strlen(s));
while (i<strlen(s))
 if (s[i]=='a')
 strcpy(s+i,s+i+1);
 else
 i=i+1;
cout<<” ”<<s; | printf(” %s”,s); */
void solutia1() {

	//brcdbr
}

/*Scrieţi un program C/C++ care citeşte de la tastatură două valori naturale nenule m şi n
(m≤10, n≤10) şi apoi m*n numere naturale nenule cu cel mult 4 cifre fiecare, reprezentând
elementele unei matrice cu m linii şi n coloane. Programul determină apoi valorile minime de
pe fiecare linie a matricei şi afişează pe ecran cea mai mare valoare dintre aceste minime.
Exemplu: pentru m=3, n=5 şi matricea
5 13 7 2 3
9 6 12 9 10
3 6 5 4 7
, se afişează pe ecran valoarea 6
(cea mai mică valoare de pe prima linie a matricei este 3, cea mai mică valoare de pe linia a
doua este 6, cea mai mică valoare de pe linia a treia este 2. Cea mai mare dintre aceste trei
valori este 6). */
void solutia2() {
	int a[100][100] = { {5, 13, 7, 2, 3}, {9, 6, 12, 9 ,10} , {3, 6, 5, 4, 7 } }, n = 5, m = 3;
	afisareA(a, n, m);

}

/*Un algoritm de tip backtracking generează, în ordine lexicografică, toate şirurile de 5 cifre 0
şi 1 cu proprietatea că nu există mai mult de două cifre 0 pe poziţii consecutive. Primele 7
soluţii generate sunt: 00100, 00101, 00110, 00111, 01001, 01010, 01011. Care este a
8-a soluţie generată de acest algoritm? (4p.)
a. 01110 b. 01100 c. 01011 d. 01101*/
void solutia3() {

	b();
}

/*Pentru funcţia f definită alăturat, stabiliţi care
este valoarea f(5). Dar f(23159)? (6p.)
int f(int n){
 int c;
 if (n==0) return 9;
 else
 {c=f(n/10);
 if (n%10<c) return n%10;
 else return c;
 }
}*/
void solutia4() {

	cout << f(5);
	cout << f(23159);
}

/*Fişierul text numere.txt conţine pe prima linie un număr natural n (n<30000), iar pe a
doua linie n numere întregi având maximum 4 cifre fiecare. Se cere să se afişeze pe ecran
un şir de n numere întregi, cu proprietatea că valoarea termenului de pe poziţia i
(i=1,2,…,n) din acest şir este egală cu cea mai mare dintre primele i valori de pe a doua
linie a fişierului numere.txt.
a) Descrieţi pe scurt un algoritm de rezolvare, eficient din punct de vedere al timpului de
executare şi al spaţiului de memorie utilizat, explicând în ce constă eficienţa sa. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris. (6p.)
3.
Exemplu: dacă fişierul numere.txt are conţinutul
12
4 6 3 7 8 1 6 2 7 9 10 8
alăturat, se afişează pe ecran numerele
4 6 6 7 8 8 8 8 8 9 10 10

*/
void solutia5() {

	afisare();


}

/*
4. a) Scrieţi doar antetul funcţiei sum care primeşte ca parametru un număr natural nenul x cu
maximum 9 cifre şi returnează suma divizorilor numărului x.
Exemplu: sum(6) are valoarea 12 (=1+2+3+6). (3p.)
b) Să se scrie un program C/C++ care citeşte de la tastatură un număr natural n (0<n<25) şi
apoi n numere naturale nenule cu maximum 9 cifre fiecare. Programul calculează, folosind
apeluri ale funcţiei sum, şi afişează pe ecran câte numere prime conţine şirul citit.
Exemplu: pentru n=5 şi valorile 12 3 9 7 1 se va afişa pe ecran valoarea 2 (în şirul dat
există două numere prime şi anume 3 şi 7). */
void solutia6() {

	int n = 5, a[100] = { 12, 3 ,9 ,7 ,1 };
	afisarePri(n, a);

}























