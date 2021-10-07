// lab4.2.cpp
// Сташкевич Владислав
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 19

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double x, xFirst, xLast, dx, y, firstPart, secondPart;

	cout << "Enter first x: "; cin >> xFirst;
	cout << "Enter last x: ";  cin >> xLast;
	cout << "Enter dx: ";	   cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		       << setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	for (x = xFirst; x <= xLast; x += dx) {
		firstPart = 2 * x - 13.5;

		if (x < -1) secondPart = -sin(x) / (1 + pow(cos(x), 2));
		else if (x <= 1) secondPart = -pow(cos(pow(sin(x), 2)), 2) - 1;
		else secondPart = -log10(x + 0.4);

		y = firstPart + secondPart;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
	}
	cout << "---------------------------" << endl;

	return 0;
}