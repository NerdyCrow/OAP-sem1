#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 4, b = 8, n = 200, h, x, s;

	h = abs(a - b) / n; x = a; s = 0;

	while (x < (b - h)) {
		s = s + h * (((pow(x, 2) - 4) + (pow(x, 2) - 4 + h))) / 2; x = x + h;

	}
	cout << "S= " << s; 
}