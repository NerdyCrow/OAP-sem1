#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int a, k, n = 1,p=3, mask;
	char tmp[33];
	cout << "������� ����� � ";
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << "����� � � 2 �/� " << tmp << endl;
	cout << "������� ���-�� ����� ��� �������������� ";
	cin >> n;
	cout << "������� � ������� �������� ���������� ";
	cin >> p;
	mask = (1u << n) - 1;
	mask <<= p; a ^= mask;
	_itoa_s(a, tmp, 2);
	cout << "����� � � �������� ���� ����� ���������� " << tmp << endl;
}