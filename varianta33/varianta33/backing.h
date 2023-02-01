#pragma once
#include <iostream>

using namespace std;


/* Folosind un algoritm de generare putem obţine numere naturale de k cifre care au suma
cifrelor egală cu un număr natural s. Astfel, pentru valorile k=2 şi s=6 se generează, în
ordine, numerele: 15, 24, 33, 42, 51, 60. Care va fi al treilea număr generat pentru k=4 şi
s=5? (4p.)
a. 1301 b. 1022 c. 2201 d. 1031 */

unsigned s[100], n = 4, sum = 5;

void tipar() {

	int suma = 0, nr = 0, p = 1;
	for (int i = 0; i < n; i++) {
		nr = nr * p + s[i];
		p *= 10;
		suma += s[i];
	}

	if (sum == suma)
		cout << nr << endl;

}
int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 1;
		}
	}

	return 1;
}
int solutia(int k) {

	if (k == n - 1) {
		return 1;
	}
	else
	{
		return 0;
	}


}
void back(int k) {


	unsigned val;

	for (val = 0; val < 9; val++) {

		s[k] = val;

		if (valid(k)) {
			if (solutia(k)) {
				tipar();
			}
			else
			{
				back(k + 1);
			}
		}

	}



}

