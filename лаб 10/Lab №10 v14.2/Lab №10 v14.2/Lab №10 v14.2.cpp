#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, C = 253, K, maskA = 14;
	int maskB = ~maskA >> 1;
	cin >> A;//55
	cin >> B;//43
	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;//110111
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;//101011
	_itoa_s(maskA, tmp, 2);//1110
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);//11
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;//111111111111111111111111111111000
	_itoa_s(B & maskB, tmp, 2);
	cout << " Очищены биты в B: " << tmp << endl;//101000
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);//101011
	cout << " Результат B=" << tmp << endl;
	K = ((B & maskB) | ((A & maskA) >> 1));
	_itoa_s(K & C, tmp, 2);
	cout <<" Результат N=" << tmp << endl;
}