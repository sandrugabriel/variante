#pragma once
#include "functii.h"



/* În secvenţa alăturată, variabilele i şi j sunt de tip întreg, iar
variabila A memorează o matrice în care prima linie şi prima
coloană sunt numerotate cu 1. Toate elementele matricei
primesc valori în urma executării secvenţei.
Scrieţi în ordine, începând cu prima coloană, doar elementele
situate pe a doua linie a matricei. (6p.)
for(j=1;j<=6;j++)
for(i=3;i>=1;i--)
 a[i][j]=i+j*/
void solutia1() {

	int a[100][100]{};

	for (int j = 1; j <= 6; j++)
		for (int i = 3; i >= 1; i--) {
			if (i == 3 || j == 1)
				a[i][j] = 1;
			else
			{
				a[i][j] = i + j;
			}


		}

	for (int j = 1; j <= 6; j++) {
		for (int i = 3; i >= 1; i--)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

/* Scrieţi un program C/C++ care citeşte de la tastatură două caractere c1 şi c2 (litere
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
void solutia2() {

	char a[100] = "hocus pocus preparatus", c1 = 'a', c2 = 'o';

	inlocuire(a, c1, c2);

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
void solutia3() {

	afis(17);

}

/*3. Scrieţi definiţia completă a subprogramului nr_prim care are ca parametru un număr
natural x şi returnează cel mai mic număr prim, strict mai mare decât x.
Exemplu: pentru x=25 subprogramul returnează numărul 29, iar pentru x=17 valoarea
returnată va fi 19. */
void solutia4() {
	int x = 25;
	cout << nr_prim(x);
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
void solutia5() {

	afisarea();
}



































































































































