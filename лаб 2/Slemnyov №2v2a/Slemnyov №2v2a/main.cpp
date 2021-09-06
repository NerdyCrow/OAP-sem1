#include<iostream>
using namespace std;
int main() {
	int n = 2;
	float b = -0.12;
	long double x = 1.3e-4,z,y;
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-b) + 1) / 2*z;
	cout << "z=" << z << endl;
	cout << "y=" << y << endl;


}