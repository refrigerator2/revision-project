#include "Header.h"

int calculateHowManyNutsRemain(int squirrel, int nut) {
	int k = nut / squirrel;
	return nut - (squirrel * k);
}

int calculateTens(int N) {
	if (N < 10) {
		cout << 0;
		return 0;
	}
	while (N > 100) {
		N = N / 10;
	}
	return N % 10;
}

int calculateSumOfDigits(int N) {
	if (N > 999 || N < 100) {
		cout << "Invalid number. Please Input another number ";
		cin >> N;
	}
	return (N % 10) + (N % 100) / 10 + (N / 100);
}

int findNextEvenNumber(int N) {
	if (N % 2 != 0) {
		return N + 1;
	}
	else {
		return N + 2;
	}
}