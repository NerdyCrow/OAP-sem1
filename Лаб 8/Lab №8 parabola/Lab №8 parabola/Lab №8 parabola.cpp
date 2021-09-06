#include<iostream>;
using namespace std;
double a = 8, b = 14, n = 200, x, h, s1 = 0, s2 = 0, i = 1, z = 0;
int main() {
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n) {
		s2 += 2 + pow(x, 3);
		x += h;
		s1 += 2 + pow(x, 3);
		x += h;
		i++;
	}
	z = h / 3 * (2 + pow(a, 3) + 4 * (pow(a + h, 3) + 2) + 4 * s1 + 2 * s2 + pow(b, 3) + 2);
	cout << z << endl;
}