#include<iostream>
using namespace std;

int main() {
	double d, c, b;
	int  m = 6;
	float k, a ;
	b = 5e-3;
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i < 3; i++)
	{
		cout << "¬ведите k : ";
		cin >> k;
		for (a=2;a < 2.9;a=a+0.2)
		{

			d = sin(k / a) / cos(m * b);
			c = d / (pow(d, 2) + 1) / (1 - exp(k));
			cout << "d = " << d << endl;
			cout << "c = " << c << endl;
			cout << endl;
			
		}
	}

}
