#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int num, mask = 0x7e;
	char tmp[33];
	cout << "������� ����� � ";
	cin >> num;
	_itoa_s(num, tmp,2);
	cout << "����� � � 2 �/� " << tmp << endl;
	_itoa_s(mask, tmp, 2);
	cout << "����� ��� � " << tmp << endl;
	_itoa_s((num & mask) >> 1, tmp, 2);
	cout << "���������� ���� " << tmp << endl;

}