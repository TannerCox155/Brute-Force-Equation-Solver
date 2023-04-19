// P07 -- Brute Force Equation Solver
// Tanner Cox
#include <iostream>
using namespace std;

int main() {
	
	int a, b, c;
	int a1, b1, c1;
	bool isTrue = false;

	cout << "*** Brute Force Equation Solver ***" << endl;
	cout << "Enter coefficients (a, b, c) for first equation separated by spaces: ";
	cin >> a >> b >> c;
	cout << "Enter coefficients (a, b, c) for second equation separated by spaces: ";
	cin >> a1 >> b1 >> c1;

	for (int x = -10; x <= 10; x++) {
		for (int y = -10; y <= 10; y++) {
			if ((a * x) + (b * y) == c && (a1 * x) + (b1 * y) == c1) {
				isTrue = true;
				cout << "x = " << x << ", " << "y = " << y << endl;
			}
		}
	}
	if (isTrue == false) {
		cout << "There is no solution" << endl;
	}

	return 0;
}