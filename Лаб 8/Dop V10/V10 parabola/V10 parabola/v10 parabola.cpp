#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 4, b = 8, n = 200, x, h, s1 = 0, s2 = 0, i = 1, z = 0;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	while (i < n)
	{
		s2 += pow(x, 2) - 4;
		x += h;
		s1 += pow(x, 2) - 4;
		x += h;
		i++;
	}

	z = h / 3 * (pow(a, 2) - 4 + 4 * (pow(a + h, 2) - 4) + 4 * s1 + 2 * s2 + pow(b, 2) - 4);
	cout << "z = " << z << endl;
}