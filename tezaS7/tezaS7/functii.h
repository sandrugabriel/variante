#pragma once
#include <iostream>
#include <fstream>

using namespace std;



/*În secvenţa de instrucțiuni de mai jos variabilele i și j sunt de tip întreg. Fără a utiliza alte variabile,
scrieți una sau mai multe instrucțiuni care pot înlocui punctele de suspensie astfel încât, în urma executării
secvenței obținute, să se afişeze caracterele de mai jos, în această (6 puncte)
ordine.
for (i=0; i<6; i++) { for(j=0; j<6; j++)
cout<<endl; }
A B C D E F
B A B B F B
C C A F C C
D D F A D D
E F E E A E
F F F F F A*/
void generare() {


	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {

			if (i == 0) cout << char('A' + i) << " ";
			else
				if (i == j) cout << 'A' << " ";
				else
					if (i + j == 5) cout << "F" << " ";
					else cout << (char)('A' + i) << " ";
		}
		cout << endl;
	}

}

/*
2. Scrieți
un program C++ care citeşte de la tastatură un număr natural n (1≤n≤100) şi un tablou unidimensional x format
din n numere întregi şi afişează produsul maxim obţinut din două elemente distincte ale tabloului.
Exemplu: Pentru n = 6 şi tabloul x = (-60, 36, -8, -2, 10, 5), se va afişa 480. (10 puncte)*/
int prodMaxi(int n, int x[100]) {

	int prodmax = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (x[i] * x[j] > prodmax)
				prodmax = x[i] * x[j];
		}
	}

	return prodmax;
}

/*
Considerând un număr natural x ce conține cel puțin trei cifre, după ce se elimină prima şi ultima cifră se
obține un alt număr denumit număr interior al numărului x. Fișierul bac.in conține un șir având cel mult un
milion de numere naturale care au cel puțin trei cifre și cel mult 5 cifre, separate prin câte un spațiu.
Scrieți un program C++ care afişează pe ecran în ordine descrescătoare, separate prin spațiu, numerele
interioare ale numerelor din fişier pentru care prima și ultima lor cifră sunt egale sau afişează mesajul
Nu există, dacă fișierul nu conţine niciun număr având prima şi ultima cifră egale. Utilizați un algoritm
eficient ca timp de execuție și spațiu de memorie utilizat.
Exemplu: Dacă fișierul conține șirul de numere 1151 234 2322 212 514 23122 atunci se vor
afişa numerele 312 32 15 1*/
void afisarea() {

	ifstream fin("bac.in");
	int f[1000]{};

	int x=0, uc=0, p=0, nr=0;
	while (fin >> x)
	{
		p = 1; nr = 0;
		uc = x % 10; x = x / 10;
		while (x > 9)
		{
			nr = nr + (x % 10) * p;
			p *= 10; 
			x /= 10;
		}
		if (uc == x)
			f[nr] ++;

	}

	for (x = 999; x >= 0; x--)
		if (f[x] != 0)
		{
			cout << x << " ";
			p = 1;
		}

	if (p == 0)
		cout << "Nu exista";


}











































