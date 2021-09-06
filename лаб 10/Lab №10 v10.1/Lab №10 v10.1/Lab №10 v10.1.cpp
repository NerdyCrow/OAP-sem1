#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int num, mask = 0x7e;
	char tmp[33];
	cout << "Введите число А ";
	cin >> num;
	_itoa_s(num, tmp,2);
	cout << "Число А в 2 с/с " << tmp << endl;
	_itoa_s(mask, tmp, 2);
	cout << "Маска для а " << tmp << endl;
	_itoa_s((num & mask) >> 1, tmp, 2);
	cout << "Выделенные биты " << tmp << endl;

}