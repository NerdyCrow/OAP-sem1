#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int a, k, n = 1,p=3, mask;
	char tmp[33];
	cout << "Введите число а ";
	cin >> a;
	_itoa_s(a, tmp, 2);
	cout << "Число а в 2 с/с " << tmp << endl;
	cout << "Введите кол-во битов для инвертирования ";
	cin >> n;
	cout << "Позиция с которой начнется инвертация ";
	cin >> p;
	mask = (1u << n) - 1;
	mask <<= p; a ^= mask;
	_itoa_s(a, tmp, 2);
	cout << "Число а в двоичном виде после инвертации " << tmp << endl;
}