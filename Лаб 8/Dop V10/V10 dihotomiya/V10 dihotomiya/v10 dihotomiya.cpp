#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a=4, b=8, e = 0.0001, x1, x;

	


	((pow(a, 3) + a - 4) * (3 * pow(a, 2) + 1)) > 0 ? x1 = a : x1 = b;

	do {
		x = x1;
		x1 = x - (pow(x, 3) + x - 4) / (3 * pow(x, 2) + 1);
	} while (abs(x1 - x) > e);

	cout << "?1 = " << x1 << endl;

	a=4, b=8, e = 0.0001, x1, x;
	do {
		x = (a + b) / 2;
		((pow(x, 3) + x - 4) * (pow(a, 3) + a - 4)) <= 0 ? b = x : a = x;
	} while (abs(a - b) > 2 * e);

	cout << "? = " << x << endl;

}