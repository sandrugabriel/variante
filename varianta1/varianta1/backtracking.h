#pragma once
#include <iostream>

using namespace std;

char s[100], mult[100] = {'a','b','c','d','e'}, m = 4;

bool vocala(char a) {

	char voc[100] = "aeiou";

	for (int i = 0; i < strlen(voc); i++) {
		if (voc[i] == a) {
			return 1;
		}
	}

	return 0;
}
bool verificare() {

	for (int i = 0; i < strlen(s) - 1; i++) {
		if (vocala(s[i]) && vocala(s[i + 1])) {
			return false;
		}
	}

	if (s[0] != 'b' || s[strlen(s) - 1] != 'e') {
		return false;
	}

	return true;
}

void tipar() {

	if (verificare())
		cout << s << endl;

}
int valid(int k) {

	
	for (int i = 0; i < k; i++) {
		if (s[i] != s[k]) {
			return 1;
		}
	}
	return 1;
}
int solutia(int k) {

	if (k == (m - 1)) {
		return 1;
	}
	else
	{
		return 0;
	}

}
void back(int k) {

	unsigned val;
	
	for (val = 0; val < strlen(mult); val++) {
		
		s[k] = mult[val];

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