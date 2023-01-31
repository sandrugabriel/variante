#pragma once
#include <iostream>
#include <fstream>	

using namespace std;


/*Se consideră un text alcătuit din cel mult 250 de caractere, în care cuvintele sunt formate doar
din litere mici ale alfabetului englez şi sunt separate prin unul sau mai multe caractere *.
Scrieţi un program C/C++ care citeşte de la tastatură textul şi afişează pe ecran, pe câte o
linie, toate secvenţele formate din câte două litere identice, ca în exemplu.
5.
Exemplu: dacă textul citit este: copiii*sunt*la***zoo se afişează
perechile alăturate.

(10p.)
 ii
 ii
 oo*/
void dubleAfis(char s[]) {


    for (int i = 0; i < strlen(s) - 1; i++)
        if (s[i] == s[i + 1] && s[i] != '*')
            cout << s[i] << s[i + 1] << endl;

}

/*Se consideră subprogramul, f, definit
alăturat.
• Ce valoare are f(100)?
• Scrieţi o valoare pentru x astfel încât
f(x)=1 (6p.)
 int f(int n)
 { if(n==0) return 0;
 else return n%2+f(n/2);
 } */
int f(int n)
{
    if (n == 0) return 0;
    else return n % 2 + f(n / 2);
}

/* 3. Scrieţi definiţia completă a unui subprogram i_prim care primeşte prin singurul său
parametru, n, un număr natural din intervalul [2,30000] şi returnează diferenţa minimă
p2-p1 în care p1 şi p2 sunt numere prime şi p1≤n≤p2.
Exemplu: dacă n=20 atunci i_prim(n)=4, valoare obţinută pentru p1=19 şi p2=23. */
int prim(int n) {
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int i_prim(int n) {
    int p1, p2;
    p1 = p2 = n;
    while (!prim(p1))
        p1--;
    while (!prim(p2))
        p2++;
    return p2 - p1;
}

/*Fişierul text BAC.TXT conţine pe prima linie două numere naturale n şi k separate de un
spaţiu (3≤n≤10000, 2≤k≤n/2), iar pe a doua linie un şir de n numere naturale x1, x2, ...,
xn separate prin câte un spaţiu, fiecare număr din acest şir având cel mult patru cifre.
a) Scrieţi un program C/C++ care citeşte numerele din fişier şi determină, utilizând o
metodă eficientă din punct de vedere al timpului de executare, cel mai mic indice i (1≤i≤nk+1) pentru care media aritmetică a numerelor xi, xi+1, ..., xi+k-1 este maximă. Programul
afişează valoarea lui i pe ecran.
Exemplu: pentru fişierul alăturat se afişează 2, deoarece media
maximă se obţine pentru 9, 4, 7. (6p.)
8 3
2 9 4 7 5 2 9 9
 4.
b) Explicaţi succint, în limbaj natural, metoda utilizată la punctul a, justificând eficienţa
acesteia. */
void afisare() {
    ifstream f("bac.txt");

        int n, k, imax, s = 0, smax, x[10000], y, p;
        f >> n >> k;
        for (int i = 1; i <= k; i++) {
            f >> x[i];
            s = s + x[i];
        }
        imax = 1;
        smax = s;
        int i = 1;
        for (int j = k + 1; j <= n; j++) {
            f >> x[j];
            s = s - x[i] + x[j];
            i++;
            if (s > smax) {
                smax = s;
                imax = i;
            }
        }
        cout << imax;
        f.close();



}

































































