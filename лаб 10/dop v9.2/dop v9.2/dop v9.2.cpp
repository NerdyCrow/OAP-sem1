#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");

	int a, b, n, p;
	unsigned int maska;
	unsigned int maskb = (1 << 5) - 1;
	unsigned maskc;
	char tmp[33];
	cout << "Введите А ";
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << "Число А в 2 с/с " << tmp << endl;
	cout << "Введите B ";
	cin >> b;
	_itoa_s(b, tmp, 2);
	cout << "Число B в 2 с/с " << tmp << endl;
	cout << "Введите число бит ";
	cin >> n;
	cout << "Введите позицию ";
	cin >> p;
	maskb = (1 << n) - 1;
	maskb <<= (p - n);
	maskb ^= a;
	maskb &= a;
	_itoa_s(maskb, tmp, 2);
	cout << "Число в 2 с/с " << tmp;

}