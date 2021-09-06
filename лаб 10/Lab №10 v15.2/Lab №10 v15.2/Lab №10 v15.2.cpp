#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
				
	int a, b, n, p;
	unsigned int maska;
	unsigned int maskb = (1 << 5) - 1;
	unsigned maskc;
	char tmp[33];
	cout << "¬ведите ј ";
	cin>> a;
	_itoa_s(a, tmp, 2);
	cout << "„исло ј в 2 с/с " << tmp << endl;
	cout << "¬ведите B ";
	cin >> b;
	_itoa_s(b, tmp, 2);
	cout << "„исло B в 2 с/с " << tmp << endl;
	cout << "¬ведите n ";
	cin >> n;
	cout << "¬ведите P ";
	cin >> p;
	maskb = (1 << n)-1 ;
	maskb <<= (p -n);
	maskb ^= a;
	maskb &= a;
	_itoa_s(maskb, tmp, 2);
	cout << "„исло в 2 с/с " << tmp;

}