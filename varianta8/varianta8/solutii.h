#pragma once
#include "functii.h"
#include "backing.h"


/* Ce se afişează în urma executării secvenţei de
program alăturate dacă variabila s memorează
şirul de caractere abcdefgh? (6p.)
strcpy(s+2,s+4);
cout<<s<<” ”<<strlen(s);
| printf(”%s %d”,s,strlen(s));*/
void solutia1() {
	char s[100] = "abcdefgh";
	//strcpy(s + 2, s + 4);
	cout << s << " " << strlen(s);
	//cdefgh
}

/*5. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi p
(2≤n≤20, 1≤p≤20) şi construieşte în memorie un tablou bidimensional cu n linii şi p
coloane. Tabloul va fi construit astfel încât, parcurgând tabloul linie cu linie de sus în jos şi
fiecare linie de la stânga la dreapta, să se obţină şirul primelor n*p pătrate perfecte
impare, ordonat strict crescător, ca în exemplu. Tabloul astfel construit va fi afişat pe
ecran, fiecare linie a tabloului pe câte o linie a ecranului, cu câte un spaţiu între elementele
fiecărei linii.
Exemplu: pentru n=2, p=3 se va afişa tabloul alăturat:
 (10p.)
1 9 25
49 81 121 */
void solutia2() {
	int n = 2, p=3;
	afisare(n,p);

}

/*Utilizând metoda backtracking sunt generate numerele de 3 cifre care au cifrele în ordine
crescătoare, iar cifrele aflate pe poziţii consecutive sunt de paritate diferită. Ştiind că primele
cinci soluţii generate sunt, în această ordine, 123, 125, 127, 129, 145, care este cel de al
8-lea număr generat? (4p.)
a. 169 b. 149 c. 167 d. 147 */
void solutia3() {

	b();

}

/*Se consideră subprogramul f,
descris alăturat. Ce se va afişa
în urma apelului f(3);? (6p.)
void f(int n)
{ if (n!=0)
 { if (n%2==0)
 cout<<n<<’ ’; | printf("%d ",n);
 f(n-1);
 cout<<n<<’ ’; | printf("%d ",n);
 }
 else cout<<endl; | printf("\n");
}*/
void solutia4() {

	f(3);
	//2
	//1 2 3
}

/*Pe prima linie a fişierului text BAC.TXT se află o valoare naturală n (1<n≤50), iar pe a doua
linie n numere naturale cu maximum 4 cifre fiecare, despărţite prin câte un spaţiu. În şirul
numerelor de pe a doua linie a fişierului există cel pzâin două numere pătrate perfecte.
Scrieţi un program C/C++ care citeşte toate numerele din fişier şi afişează pe ecran
expresia aritmetică reprezentând suma numerelor de pe a doua linie a fişierului care au
proprietatea că sunt pătrate perfecte, cu simbolul + între ele şi, după un semn =, valoarea
acestei sume, ca în exemplu. Termenii sumei afişate se pot afla în orice ordine.
Exemplu: dacă fişierul BAC.TXT are următorul conţinut
5
9 5 36 9 8
atunci pe ecran se poate afişa:
9+9+36=54 sau 9+36+9=54 sau 36+9+9=54 */
void solutia5() {

	afisareSum();

}

/* Subprogramul sub primeşte prin intermediul parametrilor:
– n şi m două numere naturale (1<n<100, 1<m<100)
– a şi b două tablouri unidimensionale, fiecare având componente numere naturale de
maximum patru cifre, ordonate crescător; tabloul a conţine n numere pare, iar tabloul b
conţine m numere impare.
Subprogramul va afişa pe ecran, în ordine crescătoare, separate prin câte un spaţiu, un şir
format dintr-un număr maxim de elemente care aparţin cel puţin unuia dintre tablouri, astfel
încât orice două elemente aflate pe poziţii consecutive să fie de paritate diferită.
Exemplu: pentru n=5, m=3 şi tablourile a=(2,4,8,10,14) şi b=(3,5,11), subprogramul
va afişa 2 3 4 5 8 11 14 sau 2 3 4 5 10 11 14.
a) Scrieţi definiţia completă a subprogramului sub, alegând pentru rezolvare un algoritm
eficient din punctul de vedere al timpului de executare. (6p.)
b) Descrieţi succint, în limbaj natural, algoritmul pe baza căruia a fost scris subprogramul de
la punctul a), explicând în ce constă eficienţa metodei utilizate. */
void solutia6() {
	int n = 5, m = 4, a[100] = { 2,4,8,10,14 }, b[100] = { 3,5,11 }, c[100];
	sub(n, m, a, b,c);

}


















