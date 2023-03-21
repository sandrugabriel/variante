#pragma once
#include <iostream>
#include <fstream>

using namespace std;




/*3. Scrieţi definiţia completă a funcţiei f, care primeşte prin intermediul parametrului n un număr
natural nenul (2≤n≤200), iar prin intermediul parametrului a un tablou unidimensional care
conţine n valori întregi, fiecare dintre aceste valori întregi având cel mult patru cifre. Funcţia
returnează valoarea 1 dacă elementele tabloului formează un şir crescător, valoarea 2 dacă
elementele tabloului formează un şir descrescător, valoarea 0 dacă elementele tabloului
formează un şir constant şi valoarea -1 în rest. */
int f(int n, int* a) {

	int r = a[0] - a[1], i;

	for (i = 1; i < n - 1; i++)
		if (r * (a[i] - a[i + 1]) < 0)
			return -1;
	if (r == 0)
		return 0;
	if (r > 0)
		return 2;
	if (r < 0)
		return 1;

}

/*4. Fişierul text număr.txt conţine pe prima linie o valoare naturală n cu exact 9 cifre nenule
distincte. Scrieţi un program eficient din punctul de vedere al timpului de executare care
citeşte din fişier numărul n şi afişează pe ecran cea mai mică valoare m formată din exact
aceleaşi cifre ca şi n, astfel încât m>n. În cazul în care nu există o astfel de valoare,
programul va afişa pe ecran mesajul Nu exista.
Exemplu: Dacă fişierul număr.txt conţine numărul 257869431, se va afişa pe ecran
numărul 257891346.
 a) Descrieţi succint, în limbaj natural, metoda de rezolvare folosită, explicând în ce constă
eficienţa ei (3 – 4 rânduri). (4p.)
b) Scrieţi un program C/C++ care rezolvă problema conform metodei descrise. */
void afisarea() {

    ifstream f("numar.in");

        long n;
        int aux, i, c1, c2, a[10], nr = 0;
        f >> n;
        cout << endl;
        while (n / 10 && n % 10 < n / 10 % 10) {
            nr++;
            a[nr] = n % 10;
            n = n / 10;
        }
        if (n < 10)
            cout << "nu exista";
        else {
            nr++;
            a[nr] = n % 10;
            n = n / 10;
            c1 = n % 10;
            n = n / 10;
            i = 1;
            while (a[i] < c1)
                i++;
            c2 = i;
            aux = c1;
            c1 = a[c2];
            a[c2] = aux;
            n = n * 10 + c1;
            for (i = 1; i <= nr; i++)
                n = n * 10 + a[i];
            cout << n;
        }


}






















