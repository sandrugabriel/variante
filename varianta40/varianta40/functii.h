#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>
using namespace std;



/*Un şir cu maximum 255 de caractere conţine cuvinte cuvinte formate numai din litere mici
ale alfabetului englez. Fiecare cuvânt este urmat de un caracter *. Scrieţi un program
C/C++ care citeşte un astfel de şir şi afişează pe ecran şirul obţinut prin eliminarea tuturor
apariţiilor primului cuvânt, ca în exemplu.
Exemplu: pentru şirul: bine*albine*foarte*bine* se va afişa:
*albine*foarte** */
void elim(char s[]) {
    char a[255] = "";
    char* p;
    int i = 0;
    while (s[i] != '*') {
        a[i] = s[i];
        i++;
    }
    a[i + 1] = '\\0';
  //  strcpy(s, s + i);
  //  p = strstr(s, a);
  //  while (strstr(p, a)) {
  //      p = strstr(p, a);
   //     if ((p - 1)[0] == '*' && (p + strlen(a))[0] == '*')
   //         strcpy(p, p + strlen(a));
     //   else
       //     p = p + strlen(a);
  //  }
  //  cout << s;
}

/*a) Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a
doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un
spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++ care
citeşte numerele din fişier şi care afişează pe ecran mesajul DA dacă elementele pare în şir
sunt în ordine crescătoare, iar cele impare sunt în ordine descrescătoare şi mesajul NU în
caz contrar. Alegeţi un algoritm eficient ca timp de executare şi spaţiu de memorie utilizat.
(6p.)
b) Descrieţi succint, în limbaj natural, metoda utilizată, justificând eficienţa acesteia. (4p.)
3.
Exemplu: dacă fişierul bac.in are conţinutul
alăturat, pe ecran se va afişa: DA
8
10 1133 12 331 42 1354 221 13*/
void afisare() {

ifstream f("bac.in");
    int n, x, mpar = 0, mimp = 9999, ok = 1;
    f >> n;
    for (int i = 1; i <= n; i++) {
        f >> x;
        if (x % 2 == 0)
            if (x >= mpar)
                mpar = x;
            else
                ok = 0;
        else if (x <= mimp)
            mimp = x;
        else
            ok = 0;
    }
    if (ok)
        cout << "da";
    else
        cout << "nu";
}

/*4. a) Scrieţi definiţia completă a subprogramului sdiv care primeşte prin intermediul
parametrului y un număr natural cu cel mult 6 cifre şi returnează suma tuturor divizorilor
numărului y. (5p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n<10000) şi
care, folosind apeluri ale subprogramului sdiv verifică dacă suma divizorilor lui n este un
număr prim. În caz afirmativ, programul va afişa pe ecran mesajul Da şi în caz contrar va
afişa mesajul NU.
Exemplu: dacă n=206, atunci programul va afişa: NU (1+2+103+206=312, iar 312 nu
este un număr prim). */
int sdiv(int y) {

    int d, suma = 0;
    for (d = 1; d < sqrt(y); d++)
        if (y % d == 0)
            suma = suma + d + y / d;

    return suma;
}
void afisarea(int n) {

    if (sdiv(sdiv(n)) == sdiv(n) + 1)
        cout << "Da";
    else
        cout << "NU";

}
























