#pragma once
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

/* Se consideră un text cu maximum 255 de caractere, format din litere mici ale alfabetului
englez şi spaţii. Textul conţine cel puţin o consoană. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi apoi determină transformarea acestuia, eliminând numai ultima
consoană care apare în text, ca în exemplu. Programul va afişa pe ecran textul obţinut.
Exemplu: dacă de la tastatură se introduce textul: mare frig saci
pe ecran se va afişa: mare frig sai */
void elimUltim(char s[100]) {

	char v[] = " aeiou";
	int gata = 0, i;
	i = strlen(s) - 1;
	while (!gata)
	{
		if (strchr(v, s[i]) == 0) {
			strcpy(s + i, s + i + 1);
			gata = 1;
		}
		i--;
	}
	cout << s;


}

/* Se consideră subprogramul f definit
alăturat. Ce se va afişa în urma
apelului f(12345);? (4p.)
void f(long int n)
{ if (n!=0)
 {if (n%2 == 0)
 cout<<n%10; | printf(“%d”,n%10);
 f(n/10);
 }
}
a. 513 b. 24 c. 42 d. 315 */
void f(int n)
{
	if (n != 0)
	{
		if (n % 2 == 0)
			cout << n % 10;
		f(n / 10);
	}
}

/* Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤100)şi cele
3*n elemente ale tabloului unidimensional v, fiecare element fiind un număr natural cu cel
mult patru cifre fiecare. Tabloul este împărţit în trei zone, cu câte n elemente: prima zonă
conţine primele n elemente din tablou, a doua zonă conţine următoarele n elemente din
tablou, restul elementelor fiind în zona a treia. Programul va interschimba primul element
par (dacă există) al zonei unu cu ultimul element impar (dacă există) al zonei trei şi apoi va
scrie pe prima linie a fişierului text BAC.TXT toate elementele tabloului, separate prin câte
un spaţiu. În cazul în care unul dintre aceste două elemente, care urmează a fi
interschimbate, nu există, programul nu va efectua nici o modificare asupra tabloului dat.
Exemplu: pentru n=3 şi v=(1 2 3 4 5 6 7 8 9), fişierul BAC.TXT va conţine:
1 9 3 4 5 6 7 8 2 */
void afisare(int n, int v[]) {

	ofstream f("bac.txt");

	int gasit = 0, p = 0, ip = 0;
	int i = 1;
	while (i <= n && !gasit) {
		if (v[i] % 2 == 0) {
			gasit = 1;
			p = i;
		}
		i++;
	}
	gasit = 0;
	i = 3 * n;
	while (i >= 2 * n + 1 && !gasit) {
		if (v[i] % 2 == 1) {
			gasit = 1;
			ip = i;
		}
		i--;
	}
	if (p != 0 && ip != 0) {
		int aux = v[p];
		v[p] = v[ip];
		v[ip] = aux;
	}
	for (i = 1; i <= n * 3; i++)
		f << v[i] << " ";

}

/*Se consideră şirul definit de relaţia de
recurenţă alăturată:

fn= n, daca n<=5
	2*fn-1, daca n>5

a) Scrieţi definiţia completă a unui subprogram sub, care primeşte prin intermediul
singurului său parametru n un număr natural de maximum 8 cifre, şi care returnează cel
mai mare termen al şirului f care este mai mic sau cel mult egal cu n.
Exemplu: dacă n=83 atunci subprogramul va returna valoarea 80. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural s (s≤10000000)
şi determină scrierea lui s ca sumă de termeni distincţi ai şirului dat folosind apeluri utile ale
subprogramului sub. Numerele astfel determinate se vor scrie pe ecran, pe aceeaşi linie,
separate prin câte un spaţiu. i
Exemplu: dacă valoarea citită de la tastatură este 63, se va afişa:
40 20 3 */
int sub(int n) {
	if (n <= 5)
		return n;
	else {
		int k = 5;
		while (k <= n)
			k = k * 2;
		return k / 2;
	}
}
void afisaref(int s) {

	while (s) {
		int n = sub(s);
		cout << n << " ";
		s = s - n;
	}
}
