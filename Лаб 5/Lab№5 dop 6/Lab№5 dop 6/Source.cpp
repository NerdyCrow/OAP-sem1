#include<iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");
	int k;
	int n= 0, i,z;
	cout << "¬ведите число K ";
	cin >> k;
	for ( i = 0; i < 1000; i++)
	{
		n = pow(2, i);
		if (i + 1 == k)break;
		
		if (n / 10 > 1) {
			if (k % 2 ==0) { z = n / 10; }
			if(k % 2 !=0){z = n % 10; }
		}
	}
	cout << z<< " элемент поседовательности по номером " << k << endl;
		


}