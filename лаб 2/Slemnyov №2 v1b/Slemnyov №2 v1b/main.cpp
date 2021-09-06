#include<iostream>
using namespace std;
int main() {

	int t = 6;
	double y = -1.2;
	double x = 0.4e6;
	long double p, q;
	p = 2.6 * t + cos(y / (3*x + y));
	q = sin(t) / cos(t);



	cout << "p=" <<p<< endl;
	cout << "q=" << q << endl;
}