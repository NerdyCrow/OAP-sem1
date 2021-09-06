#include<iostream>
using namespace std;
int n, d=2;
int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "¬ведите число: ";
	cin >> n;
	cout <<n<<" = 1";
	while (n > 1) {
		while (n % d == 0) {
			cout << "*" << d;
			n = n / d;
			
		}
		d++;

	}

}