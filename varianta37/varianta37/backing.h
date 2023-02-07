#pragma once
#include <iostream>

using namespace std;

/* Se utilizează un algoritm pentru a genera în ordine lexicografică inversă toate permutările
mulţimii {1,2,3,4,5}. Primele patru permutări generate sunt: 54321, 54312, 54231,
54213. A cincea permutare este: (4p.)
a. 53421 b. 54321 c. 54132 d. 54123  */

unsigned s[100], n = 5;

void tipar() {

	cout << endl;
	for (int i = n - 1; i >= 0; i--) {
		cout << s[i];
	}

}
int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[k] == s[i]) {
			return 0;
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

	for (val = 1; val <= n; val++) {

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
