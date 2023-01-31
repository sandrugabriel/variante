#pragma once
#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;


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
void afisare(int n, int p) {
    int a[100][100]{};
   int  x = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++) {
            a[i][j] = x * x;
            x = x + 2;
        }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }


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
void f(int n)
{
    if (n != 0)
    {
        if (n % 2 == 0)
            cout << n << ' ';
        f(n - 1);
        cout << n << ' ';
    }
    else cout << endl; 
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
void afisareSum() {

    ifstream f("bac.txt");

    int n, m = 0, x, a[50], i;
    f >> n;
    for (i = 1; i <= n; i++) {
        f >> x;
        if (sqrt(x) == floor(sqrt(x))) {
            m++;
            a[m] = x;
        }
    }
    int s = 0;
    for (i = 1; i < m; i++) {
        cout << a[i] << "+";
        s = s + a[i];
    }
    cout << a[m] << "=";
    s = s + a[m];
    cout << s;

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
void sub(int n, int m, int a[100], int b[100], int c[200]) {
    int i, j, k;
    i = j = k = 1;
    while (i <= n && j <= m)
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    while (i <= n)
        c[k++] = a[i++];
    while (j <= m)
        c[k++] = b[j++];
    cout << c[1] << " ";
    for (i = 2; i <= n + m; i++)
        if (c[i] % 2 != c[i - 1] % 2)
            cout << c[i] << " ";
}





















