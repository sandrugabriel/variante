#pragma once
#include <iostream>
#include <fstream>

using namespace std;


/*Scrieţi un program C/C++ care citeşte de la tastatură două caractere c1 şi c2 (litere
distincte ale alfabetului englez), şi un text având cel mult 250 caractere (doar spaţii şi litere
ale alfabetului englez), pe care îl modifică înlocuind toate apariţiile caracterului memorat în
c1 cu cel memorat în c2 şi toate apariţiile caracterului memorat în c2 cu cel memorat în c1.
Programul afişează pe linii separate ale ecranului atât textul iniţial cât şi textul obţinut după
efectuarea înlocuirilor. (10p.)
Exemplu: dacă pentru c1 se citeşte a, pentru c2 se citeşte o iar textul citit este:
hocus pocus preparatus
se va afişa :
hocus pocus preparatus
hacus pacus preporotus*/
void inlocuire(char a[], char c1, char c2) {

	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == c1)
			a[i] = c2;

		if (a[i] == c2)
			a[i] = c1;

	}

	cout << a;
}

/*2. Subprogramul afis este definit alăturat.
Ce se va afişa în urma apelului
afis(17);?
 (6p.)
void afis(int x)
{ if (x>3)
 { cout<<x-1; | printf("%d",x-1);
 afis(x/3);
 cout<<x+1; | printf("%d",x+1);
 }
}*/
void afis(int x)
{
	if (x > 3)
	{
		cout << x - 1;
		afis(x / 3);
		cout << x + 1;
	}
}

/*Scrieţi definiţia completă a subprogramului nr_prim care are ca parametru un număr
natural x şi returnează cel mai mic număr prim, strict mai mare decât x.
Exemplu: pentru x=25 subprogramul returnează numărul 29, iar pentru x=17 valoarea
returnată va fi 19. */
int nr_prim(int x) {
	int semn = 0;
	do {
		x++;
		semn = 0;
		for (int i = 2; i <= x / 2; i++) {
			if (x % i == 0) {
				semn = 1;
			}
		}

		if (semn == 0) {
			return x;
		}


	} while (x != x + 10);


}

/*4. În fişierul numere.txt sunt memorate pe mai multe linii, numere întregi (cel mult 100),
numerele de pe aceeaşi linie fiind despărţite prin câte un spaţiu, fiecare număr având cel
mult 9 cifre. Să se determine cele mai mici două valori având exact două cifre fiecare,
memorate în fişier şi să se afişeze pe ecran aceste valori, despărţite printr-un spaţiu. Dacă
în fişier nu se află două astfel de valori, pe ecran se va afişa valoarea 0.
a) Descrieţi în limbaj natural o metodă de rezolvare eficientă din punct de vedere al
gestionării memoriei şi al timpului de executare. (4p.)
b) Scrieţi programul C/C++ corespunzător metodei descrise la punctul a. (6p.)
Exemplu: dacă fişierul numere.txt are conţinutul alăturat
5 10
3 -77 20
50 5 0 12 18 30
, se
va afişa pe ecran, nu neapărat în această ordine:
 -77 10
*/
void afisarea() {

	ifstream f("numere.txt");

	int a, minim1 = 100, minim2 = 100;
	while (f >> a) {

		if ((a >= 10 && a <= 99) ||
			(a <= -10 && a >= -99)) {
			if (a < minim2) {
				minim1 = minim2;
				minim2 = a;
			}
			else if (a < minim1)
				minim1 = a;
		}
	}

	if (minim2 == -100)
		cout << 0;
	else
		cout << minim2 << " " << minim1;


}
















































































































