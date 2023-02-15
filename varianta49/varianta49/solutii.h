#pragma once
#include "functii.h"



/*3. Variabila x, declarată alăturat, memorează în câmpurile med1 şi
med2 mediile semestriale ale unui elev. Scrieţi o expresie a cărei
valoare va fi media anuală a acestui elev. (6p.)
struct elev {
 int matricol;
 float med1,med2;
}x; 
*/
struct elev {
	int matricol;
	float med1, med2;
}x;
void solutia1() {
	float medi;
	medi = (x.med1 + x.med2) / 2;

}

/*5. Un cuvânt s, de cel mult 20 caractere, format doar din litere mici ale alfabetului englez,
conţine cel puţin o consoană şi cel puţin o vocală. Scrieţi programul C/C++ care citeşte de la
tastatură cuvântul s, construieşte în memorie şi afişează pe ecran cuvântul obţinut prin
eliminarea tuturor consoanelor din cuvântul s. Se consideră consoană oricare literă care nu
se află în mulţimea {a, e, i, o, u}.
Exemplu: dacă se citeşte cuvântul bacalaureat, pe ecran se afişează: aaauea*/
void solutia2() {
	char s[100] = "bacalaureat";
	vocale(s);

}

/*2. Pentru o valoare naturală mai mare decât
1 memorată în variabila globală n,
subprogramul recursiv alăturat afişează
cel mai mare divizor al lui n, mai mic decât
n, la apelul divi(n). Cu ce trebuie
înlocuite α şi β ? (6p.)
void divi(long i)
{
 if(α==0)
 cout<< β; | printf(”%ld”, β);
 else divi(i-1);
} 
*/
void divi(int i)
{
	if (i == 0)
		cout << i;
	else divi(i - 1);
}
void solutia3() {

	divi(12);

}

/*3. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n ( 1≤n≤50) şi apoi
un şir de n numere naturale cu cel mult 4 cifre fiecare şi care verifică dacă elementele şirului
pot fi rearanjate astfel încât să respecte regula: al doilea element este cu 1 mai mare decât
primul, al treilea cu 2 mai mare decât al doilea, ... , ultimul este cu n-1 mai mare decât
penultimul. Programul afişează pe ecran mesajul DA în caz afirmativ şi mesajul NU în caz
contrar.
Exemplu: pentru n=4 şi şirul 8,5,11,6 se afişează DA (elementele pot fi rearajate astfel
încât să respecte regula dată: 5, 6, 8, 11)*/
void solutia4() {
	int n = 4, v[100] = { 8,5,11,6 };
	afisare(n, v);

}

/*4. Se consideră subprogramul cmax care prin parametrul a primeşte un număr natural nenul
mai mic decât 30000, iar prin parametrul b furnizează cifra maximă din numărul a.
a) Scrieţi, folosind limbajul C/C++, doar antetul subprogramului cmax. (4p.)
b) Fişierul bac.txt conţine cel mult 1000 numere naturale nenule, mai mici decât 30000
fiecare, separate prin câte un spaţiu. Scrieţi programul C/C++ care citeşte din fişierul
bac.txt toate numerele şi care determină cea mai mare cifră din scrierea lor şi cel mai mic
dintre numerele care conţin această cifră, folosind apeluri utile ale subprogramului cmax.
Cifra şi numărul determinate se vor afişa pe ecran, separate printr-un spaţiu.
Exemplu: dacă fişierul bac.txt conţine valorile: 23 12 64 12 72 345 67 23 71 634
atunci pe ecran se afişează 7 67. */
void solutia5() {

	afisarea();

}






















