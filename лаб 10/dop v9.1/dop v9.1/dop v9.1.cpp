#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");

	int a, b;
	unsigned int maska;
	unsigned int maskb = (1 << 5) - 1;
	unsigned int maskc;
	char tmp[33];
	cout << "Введите A ";
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << "Число А в 2 с/с " << tmp << endl;
	cout << "Введите число B ";
	cin >> b;
	_itoa_s(b, tmp, 2);
	cout << "Число B в 2 с/с " << tmp << endl;
	maska = a;
	maska >>= 2;
	maska <<= 31 - 5;
	maska >>= 31 - 5;
	maska <<= 1;
	maska <<= 1;
	b = (maskb ^ b) & maskb;
	b |= maska;
	_itoa_s(b, tmp, 2);
	cout << "Конечное Число в 10 с/с " << b << endl;
	cout << "Конечное Число в 2 с/с " << tmp;
}