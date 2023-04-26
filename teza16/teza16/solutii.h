#pragma once
#include "functii.h"



/*3. În secvența următoare variabilele n și i sunt de tip întreg, iar variabila s permite memorarea unui cuvânt 
format din cel mult 200 de caractere. Cuvântul citit este format din litere mici Fără a utiliza alte variabile, 
scrieți secvenţa de instrucţiuni care poate înlocui punctele de suspensie astfel încât, în urma executării 
secvenței obținute, afişează, în ordine crescătoare a lungimilor, sufixele lui s care încep cu cuvântul info.
(6 puncte)
}
cin>>s;
n=.....;
for (i=0; i<n; i++)
{*/
void solutia1() {
	char s[100] = "";
	cin >> s;
	int n = strlen(s);

	for (int i = 0; i < n; i++) {
		if (strstr(s + i, "info")) {
			cout << s + i << endl;
		}
	}

}

/*Scrieți un program C/C++ care citeşte de la tastatură un număr natural N (NE [2,10]) elementele unui tablou bidimensional 
cu N linii şi N coloane, caractere din mulţimea completată doar cu caracterul 'X' şi NU, altfel. {'X', 'U'}. Programul 
afişează DA, dacă există cel puțin o linie, o coloană sau o diagonală Exemplu: dacă N=4 şi tabloul este: 
X U U X    atunci pe ecran se va afişa DA
U X X X 
X X U X
X U X X
*/
void solutia2() {
	int n = 4;
	char a[100][100] = { {'X','U','U','X'},{'U','X','X','X'},{'X','X','U','X'},{'X','U','X','X'} };
	generare(n,a);
}


/*
2. Subprogramul nMax primeşte prin parametrul n un număr natural de cel mult 6 cifre și prin parametrul c o cifră nenulă. 
Subprogramul furnizează tot prin parametrul n numărul maxim care se poate obține inserând în n cifra c. Scrieți în 
limbajul C/C++ definiția completă a subprogramului nMax.
Exemplu: Dacă n = 57332 şi c = 4 atunci, după apel, subprogramul va returna valoarea
574332.*/
void solutia3() {

	int n = 57332;
	nMax(n, 4);
	cout << n;

}

/*3. Numim interval asociat unui șir de numere, perechea de numere naturale a, b (a≤b) cu proprietatea că şirul 
este format din toate valorile naturale distincte, cuprinse între a și b şi scrise în ordine crescătoare. 
De exemplu, şirul 4 5 6 7 8 are intervalul asociat 48, iar şirul 1 2 3 5 7 8 9 este format din trei subşiruri 
ale căror intervale asociate sunt 1 3, 5 5 şi 7 9.
Scrieți un program C/C++ care citeşte din fişierul text BAC.TXT un șir S cu cel mult 1 000 000 de numere naturale 
din intervalul [0,10³] și afişează pe ecran extremitățile intervalului care reprezintă intersecția tuturor intervalelor 
asociate, de lungime maximă, din care este format şirul dat sau mesajul mulțimea vidă, în cazul în care acestea 
nu conțin niciun element comun.
Exemplu: Dacă fișierul conține numerele 2 3 4 1 2 3 4 5 6 3 4 5 0 1 2 3 atunci pe ecran vor fi afişate valorile 
2 3 deoarece şirul este format din 4 intervale asociate 2 4, 1 6, 3 5 şi 0 3 a căror intersecție este intervalul 
2 3. Dacă fișierul conține numerele 3 4 5 4 5 6 8 atunci pe ecran se va afişa multimea vida.*/
void solutia4() {

	afisare();

}

























