#pragma once
#include <iostream>
#include <string.h>
using namespace std;

char s[100], mult[100] = {'a','x','c','f','g'};
int m=3, dim= strlen(mult);

void tipar() {

	cout << s << endl;

}
int valid(int k) {

	for (int i = 0; i < k; i++) {
		if (s[i] == s[k]) {
			return 1;
		}
	}

	return 1;
}
int solutie(int k) {

	if (k == (m - 1))
		return 1;
	else
	{
		return 0;
	}

}
void back(int k) {

	unsigned val;

	for (val = 0; val < dim; val++) {

		s[k] = mult[val];

		if (valid(k)) {
			if (solutie(k))
				tipar();
			else back(k + 1);
		}

	}

}