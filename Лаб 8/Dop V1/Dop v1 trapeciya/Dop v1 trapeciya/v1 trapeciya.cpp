#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 1, b = 3, n = 200, h, x, s;

	h = abs(a - b) / n; x = a; s = 0;

	while (x < (b - h)) {
		s = s + h * (((pow(x, 3) - 3) + (pow(x, 3) - 3 + h))) / 2; x = x + h;

	}
	cout << "s=" << s; 
}