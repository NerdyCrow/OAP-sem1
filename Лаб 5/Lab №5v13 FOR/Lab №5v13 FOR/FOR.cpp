#include<iostream>
using namespace std;
int main() {
	double d, c, b;
	int a=8, m=6;
	float k;
	b = 5e-3;
	setlocale(LC_CTYPE, "rus");
	for (int i = 0; i < 3; i++)
	{
		cout<< "¬ведите k : ";
		cin >> k;
		d = sin(k / a) / cos(m * b);
		c = d /(pow(d,2) + 1) / (1 - exp(k));
		cout<< "d = " << d << endl;
		cout<<"c = " << c<<endl;
		cout << endl;



	}
}
