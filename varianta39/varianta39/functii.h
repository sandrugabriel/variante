#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*Un ?ir cu maximum 255 de caractere con?ine cuvinte separate prin câte un spa?iu. Cuvintele
sunt formate numai din litere mici ale alfabetului englez. Scrie?i un program C/C++ care
cite?te de la tastatur? un astfel de ?ir ?i îl afi?eaz? pe ecran modificat, inversând prin
oglindire doar cuvintele care încep cu vocal?, ca în exemplu. Se consider? ca fiind vocale
urm?toarele litere: a, e, i, o, u.
Exemplu: pentru ?irul: maine este proba la informatica se va afi?a:
maine etse proba la acitamrofni*/
void afisare(char s[]) {

    int p;
    char v[] = "aeiou";
    int i = 0;
    if (strchr(v, s[i])) {
        p = i;
        while (s[i] != ' ')
            i++;
        for (int j = i - 1; j >= p; j--)
            cout << s[j];
    }
    else
        while (s[i] != ' ') {
            cout << s[i];
            i++;
        }
    cout << ' ';
    i++;
    while (i < strlen(s)) {
        if (strchr(v, s[i]) && s[i - 1] == ' ') {
            p = i;
            while (s[i] != ' ' && i < strlen(s))
                i++;
            for (int j = i - 1; j >= p; j--)
                cout << s[j];
        }
        else
            while (s[i] != ' ' && i < strlen(s)) {
                cout << s[i];
                i++;
            }
        i++;
        cout << " ";
    }

}

/*2. Pentru definiţia alăturată a subprogramului
f, ce valoare are f(3)? Dar f(8)? (6p.)
int f(int x)
{
 if(x<=4) return x*x-3;
 return f(x-3)+4;
}*/
int f(int x)
{
    if (x <= 4) return x * x - 3;
    return f(x - 3) + 4;
}

/*Pe prima linie a fişierului bac.in se află un număr natural nenul n (n≤1000), iar pe a
doua linie a fişierului se află un şir format din n numere naturale, despărţite prin câte un
spaţiu, fiecare număr fiind format din cel mult 4 cifre. Scrieţi un program C/C++ care
citeşte valorile din fişier şi care afişează pe ecran mesajul DA dacă toate elementele pare
din şir sunt în ordine crescătoare şi mesajul NU în caz contrar.
3.
Exemplu: dacă fişierul bac.in are conţinutul
alăturat
7
10 113 12 33 42 1354 421,
pe ecran se va afişa: DA (10p.)
*/
void crescPare() {

    ifstream f("sir.in");

    int x, n, m;
    f >> n;
    do {
        f >> x;
    } while (x % 2 == 1);
    m = x;
    int p = 1;
    while (!f.eof()) {
        do {
            f >> x;
        } while (x % 2 == 1);
        if (x >= m)
            m = x;
        else
            p = 0;
    }
    if (p == 1)
        cout << "da";
    else
        cout << "nu";
}

/*4. Se consideră subprogramul pr, care primeşte prin intermediul parametrului a un număr
natural nenul cu cel mult 9 cifre şi returnează 1 dacă numărul este prim şi 0 în caz contrar.
a) Scrieţi numai antetul subprogramului pr. (4p.)
b) Considerăm un număr natural nenul n>99 cu cel mult 9 cifre. Din n se obţine un şir de
valori prin eliminarea succesivă a ultimei cifre, apoi a ultimelor două cifre, apoi a ultimelor
trei cifre etc., până ce se obţine un număr de două cifre, ca în exemplu. Să se realizeze un
program C/C++ care citeşte de la tastatură numărul n şi care, folosind apeluri utile ale
subprogramul pr, afişează pe ecran, separate prin câte un spaţiu, doar valorile prime din
şirul numerelor obţinute din n, prin procedeul descris mai sus.
Exemplu: pentru n=193124 se obţine şirul de valori 19312,1931, 193, 19. din care se
vor afişa pe ecran doar valorile 1931 193 19 (nu neapărat în această ordine). */
bool pr(int a) {

    if (a == 0 || a == 1) {
        return false;
    }

    for(int i=2;i<=a/2;i++){
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}
void afisare(int n) {

    while (n!=0)
    {
        if (pr(n)) {
            cout << n << " ";
        }
        n /= 10;
    }


}


































