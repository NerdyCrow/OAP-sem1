#include<iostream>
using namespace std;
long double a = 1.0055, y, z;
double x = 0.6;
int n = 6;
int main() {
	setlocale(LC_CTYPE, "rus");
	for (n; n <= 14; n = n + 2)
	{
		y = (pow(cos(x * x), 2)) / abs(x);
		if (y < a *x * n) {
			z = abs(y);
			cout << "z= " << z << " при y<a*x*n" << endl;
		}
		else if (y>=a*x*n)
		{
			z = sqrt(1+exp(-y));
			cout << "z= " << z << " при y>=a*x*n" << endl;
		}
	}

}