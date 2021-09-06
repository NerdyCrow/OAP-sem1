#include<iostream>
using namespace std;
int main() {
	int b = 40;
	float x = 1.1;
	long double a = 5e-6, w, v;
	w = (a + b)*tan(x) / (x + 1);
	v = 1 / 2 * b - sqrt(w - a * b);
	cout << "w=" << w << endl;
	cout << "v=" << v << endl;


}