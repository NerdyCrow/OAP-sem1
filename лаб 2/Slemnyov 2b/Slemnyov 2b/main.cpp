#include<iostream>
using namespace std;
int main() {
	int m = 6;
	double long z = 0.05e-5, y, w;
	y = cos(5*m) / pow(sin(0.4*m), 2);
	w = 4*z * y - 7*exp(-2*y);
	cout << "y=" << y << endl;
	cout << "w=" << w << endl;


}