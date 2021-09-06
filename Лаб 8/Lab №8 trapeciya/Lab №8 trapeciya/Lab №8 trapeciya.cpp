#include<iostream>
using namespace std;
double a = 8, b = 14, n = 200, h, s, x;
 
int main() {

	h = abs(b - a) / n;
	x = a;
	s = 0;
	s = s + h * ((2 + pow(x, 3)) + (2 + pow(x, 3)+h)/2);
	while (x<(b-h))
	{
		s = s + h * ((2 + pow(x, 3)) + (2 + pow(x, 3) + h)) / 2; x = x + h;
	}
	cout << s << endl;
}