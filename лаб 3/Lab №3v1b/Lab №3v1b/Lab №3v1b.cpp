#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, b;
	cout << "������� �������� ���������� �: ";
	cin >> a;
	cout << "������� �������� ���������� b: ";
	cin >>  b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "a = " << a << endl;
	cout << "b= " << b << endl;

	system("pause");
	return 0;

}