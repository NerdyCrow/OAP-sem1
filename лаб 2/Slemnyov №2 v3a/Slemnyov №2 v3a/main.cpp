#include<iostream>
using namespace std;
int main() {
	int i = -6;
	float x = 4.5;
	long double z = 1.5e-6,d,f;
	d = tan(-x * i) / sqrt(x - z);
	f = sin(2 * d) / d;
	cout << "d=" <<d<< endl;
	cout << "f=" << f << endl;




}