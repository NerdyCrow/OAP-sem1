#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	float d, c, b = 5e-3, k, a = 8.0;
	int m = 6;
	while (a>3)
	{
		k = a;
		d = sin(k / a) / cos(m * b);
		c = d / (pow(d, 2)) / (1 - exp(k));
		cout << "d = " << d << endl;
		cout << "c = " << c << endl;
		cout << endl;
		a = a - 0.5;
		


	}

	
	

}
