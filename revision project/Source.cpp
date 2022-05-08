#include "Header.h"

int calculateHowManyNuts(int squirrel, int nut) {
	return nut / squirrel;
}

int main() {
	/*int n, k;
	cout << "Input number of squirrels ";
	cin >> k;
	cout << "Input number of nuts ";
	cin >> n;*/

	cout << (calculateHowManyNuts(3, 15) == 5 ? "well done" : "something was wrong");
}