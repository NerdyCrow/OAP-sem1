#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");

	int a, b;
	unsigned int maska;
	unsigned int maskb = (1 << 5) - 1;
	unsigned int maskc;
	char tmp[33];
	cout << "������� A ";
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << "����� � � 2 �/� " << tmp << endl;
	cout << "������� ����� B ";
	cin >> b;
	_itoa_s(b, tmp, 2);
	cout << "����� B � 2 �/� " << tmp << endl;
	maska = a;
	maska >>= 2;
	maska <<= 31 - 5;
	maska >>= 31 - 5;
	maska <<= 1;
	maska <<= 1;
	b = (maskb ^ b) & maskb;
	b |= maska;
	_itoa_s(b, tmp, 2);
	cout << "�������� ����� � 10 �/� " << b << endl;
	cout << "�������� ����� � 2 �/� " << tmp;
}