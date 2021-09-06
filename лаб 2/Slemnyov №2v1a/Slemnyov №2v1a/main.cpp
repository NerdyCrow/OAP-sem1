#include<iostream>
using namespace std;
int main() {
	int k = 4;
	float a = 8.1;
	long double x = 2e-4,t,u;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	cout << "t=" <<t<< endl;
	cout << "u=" <<u<< endl;
	



}