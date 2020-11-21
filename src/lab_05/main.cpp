#include <iostream>
#include <cmath>
using namespace std;

bool funcPrimeCheckFor(int);
bool funcPrimeCheckDoWhile(int);
bool funcPrimeCheckWhile(int);



int main() {
	cout << funcPrimeCheckWhile(9) << endl;
	return 0;
}

bool funcPrimeCheckFor(int digit) {
	bool f = true;
	for (int i = 2; i < digit; i++) {
		if (digit % i == 0) {
			f = false;
			break;
		}
	}

	return f;
}

bool funcPrimeCheckWhile(int digit) {
	bool f = true;
	int i = 2;
	do {
		if (digit % i == 0) {
			f = false;
			break;
		}
		i++;
	} while (i < digit);

	return f;
}


bool funcPrimeCheckDoWhile(int digit) {
	bool f = true;
	int i = 2;
	while (i < digit) {
		if (digit % i == 0) {
			f = false;
			break;
		}
		i++;
	}
	return f;
}