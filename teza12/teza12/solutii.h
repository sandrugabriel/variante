#pragma once
#include "functii.h"


/*3. În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg, iar varia-bila A memorează un tablou bidimensional cu 6 linii şi 6 coloane, numerotate de la 1 la 6. Elementele tabloului sunt numere întregi. Fără a utiliza alte variabile, scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării secvenței obținute, tabloul memorat în variabila A să aibă elementele din figura de mai jos. (6 puncte)
for(i=1;i<=6;i++) for(j=1; j<=6; j++)
2 3 1 2 3 1 
3 6 2 3 6 2
1 2 0 1 2 0
2 3 1 2 3 1
3 6 2 3 6 2
1 2 0 1 2 0*/
void solutia1() {

	generare();

}

/*1. Scriețiun program C/C++ care citeşte de la tastatură un şir de caractere format din cel mult 250 de caractere, 
litere mici ale alfabetului englez şi afişează pe ecran şirul rezultat i numărul minim de etape de eliminare 
astfel încât să nu mai existe în şir două caractere alăturate identice. O etapă de eliminare se aplică unei 
secvente de caractere identice care începe la poziția i din şir, şterge secvenţa de la poziţia i, apoi repetă
ştergerea secvenţelor de caractere identice ce includ poziția i, până cînd nu se mai obţin caractere identice
alăturate. Exemplu: Dacă se citeşte şirul mtopppppootatnnnne se va afişa mate 2, pentru că sunt 2 etape de 
eliminare: topppppoot şi nnnn.*/
void solutia2() {
	char s[100] = "mtopppppootatnnnne";
	afisare(s);
}

/*
2. Scrieți un subprogram C/C++, denumit perechi, care primeşte prin parametrii n şi m două numere naturale, 
nenule, de cel mult două cifre. Subprogramul va furniza prin parametrul k numărul de perechi de numere x, y 
(x<y<=n), care au cel mai mic multiplu comun m. Perechile determinate se vor afișa pe ecran, pe linii diferite, 
separate prin câte un spațiu. Exemplu: Pentru n = 6 și m = 6 se afişează perechile:
1 6
2 3
2 6
3 6, iar în k va fi valoarea 4.*/
void solutia3() {

	cout << perechi(6, 6);

}

/*
3. Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un șir cu cel mult 1 000 000 de numere 
întregi formate dintr-o cifră fiecare şi afişează pe ecran separate printr-un spațiu, numărul sau numerele 
din fişier cu număr maxim de apariții.
Exemplu: Dacă în fișier sunt numerele 1 -8 1 1 -8 -8 9 9 atunci pe ecran se vor afişa nu neapărat în această ordine -8 1.*/
void solutia4() {

	afisarea();
}




























