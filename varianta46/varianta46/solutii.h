#pragma once
#include "functii.h"
#include "backing.h"

/* În secvenţa alăturată, variabila v memorează
elementele unei matrice cu liniile şi coloanele
numerotate de la 1 la n, iar toate celelalte
variabile sunt întregi. Dacă 1≤k<n, atunci
executarea secvenţei determină: (4p.)
for ( i=k+1; i<=n; i++)
 for (j=1; j<=n; j++)
 v[i-1][j] = v[i][j];
n=n-1;
a. eliminarea liniei k din matrice b. adăugarea liniei k în matrice
c. eliminarea coloanei k din matrice d. adăugarea coloanei k în matrice */
void solutia1() {

	//a.eliminarea liniei k din matrice


}

/*Se consideră un text format doar din spaţii şi litere mici ale alfabetului englez, care începe
cu o literă şi care conţine cel puţin o vocală din multimea {a,e,i,o,u}. Scrieţi programul
C/C++ care citeşte de la tastatură un şir cu cel mult 100 de caractere, ca cel descris mai
sus şi care determină transformarea acestuia prin înlocuirea fiecărei vocale din text cu litera
imediat următoare din alfabet (a se înlocuieşte cu b, e se înlocuieşte cu f ş.a.m.d.).
Programul va afişa pe ecran şirul obţinut.
Exemplu: dacă şirul citit este examen de bacalaureat, după modificare se afişează:
fxbmfn df bbcblbvrfbt */
void solutia2() {
	char c[100] = "bacalaureat";
	mod(c);


}

/*Un program generează, în ordine crescătoare, numerele naturale de exact 5 cifre din
mulţimea {1, 2, 3, 4, 5}. Fiecare dintre numerele generate are cifrele distincte două câte
două. Primele 3 numere astfel generate sunt: 12345, 12354, 12435. Care este numărul
generat imediat după 12543? (4p.)
a. 15342 b. 12534 c. 13245 d. 13452 
*/
void solutia3() {

	back(0);
	//c. 13245
}

/*2. Funcţia f are definiţia alăturată. Dacă f(x) are
valoarea 10100, care este valoarea lui x?
 (6p.)
long f(int n)
{
 if(n<=0) return 0;
 else return f(n-1)+2*n;
} */
long f(int n)
{
	if (n <= 0) return 0;
	else return f(n - 1) + 2 * n;
}
void solutia4() {

	cout << f(10100);

}

/*Fişierul bac.txt conţine pe prima linie un număr natural n (n≤100), iar pe a doua linie,
separate prin câte un spaţiu, n numere naturale nenule, cu cel mult 4 cifre fiecare. Scrieţi
programul C/C++ care citeşte de la tastatură un număr natural k (k≤25), construieşte în
memorie şi afişează pe ecran un tablou unidimensional ce conţine, în ordinea în care au
fost citite, numerele de pe a doua linie a fişierului bac.txt care au cel puţin k divizori.
3.
Exemplu: pentru k=5 şi fişierul bac.txt cu conţinutul
alăturat
 6
 100 9 400 56 7 10
, tabloul care se afişează este:
100 400 56 (10p.)
*/
void solutia5() {


	afisare(5);

}

/*4. a) Scrieţi în limbajul C/C++ doar antetul subprogramului cifre, care prin intermediul
parametrului nr primeşte un număr natural de cel mult 9 cifre şi furnizează prin intermediul
parametrilor nc şi sc numărul de cifre şi respectiv suma cifrelor din scrierea lui nr. (4p.)
b) Scrieţi programul C/C++ care citeşte de la tastatură un număr natural n (10≤n≤109
) şi
verifică, folosind apeluri utile ale subprogramului cifre, dacă în scrierea în baza 10 a lui n
se găseşte cel puţin o cifră care să fie media aritmetică a celorlalte cifre din componenţa lui
n.Programul afişează pe ecran mesajul DA în caz afirmativ şi mesajul NU în caz contrar.
Exemplu: pentru n=27989 programul va afişa mesajul DA, deoarece în scrierea lui n apare
cifra 7 care este media aritmetică a celorlalte cifre din scrierea lui n: 7=(2+9+8+9)/4.
Pentru n=7351 se va afişa mesajul NU. */
void solutia6() {

	afisarea(27989);
}






















