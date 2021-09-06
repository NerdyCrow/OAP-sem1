#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 3, b = 6, n = 200, x, h, s1 = 0, s2 = 0, i = 1, z = 0;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	while (i < n)
	{
		s2 += pow(x, 3) + 3;
		x += h;
		s1 += pow(x, 3) + 3;
		x += h;
		i++;
	}

	z = h / 3 * (pow(a, 3) + 3 + 4 * (pow(a + h, 3) + 3) + 4 * s1 + 2 * s2 + pow(b, 3) + 3);
	cout << "z = " << z << endl;
}