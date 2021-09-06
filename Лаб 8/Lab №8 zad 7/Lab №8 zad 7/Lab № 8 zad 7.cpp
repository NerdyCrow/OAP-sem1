#include<iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	float a = 8, b = 14, x;
	int a1, a2,z1;
	float x1;
	double e = 0.0001;
	z1:
	x = (a + b) / 2;
	if ((2 * x + pow(x, 3) - 7) * (2 * a + pow(a, 3) - 7) <= 0) { b = x; }
	else
	{
		a = x;
	}
	if (abs(a - b) > 2 * e) { goto z1; }
		else
		{
		cout <<"Метод дихотомии: "<< x << endl;
		}
	
	
	 //метод косательных	
	
	a = 8, b = 14;

	if ((2 * a + pow(a, 3) - 7) * (2 + 3 * pow(a, 2)) > 0) {
		x1 = a;
	}
	else { x1 = b; }
	a1:
	x = x1;;
	x1 =  x-(2 * a + pow(x, 3) - 7) / (2 + 3 * pow(x, 2));
	if (abs(x1 - x) > e) { goto a1; }
	else cout << "Метод косательных:  " << x1 << endl;

}
	