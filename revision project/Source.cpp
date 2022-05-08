#include "Header.h"

int calculateHowManyNuts(int squirrel, int nut) {
	return nut / squirrel;
}

int main() {
	cout << (calculateHowManyNuts(1, 1) == 5 ? "well done" : "something was wrong");
}