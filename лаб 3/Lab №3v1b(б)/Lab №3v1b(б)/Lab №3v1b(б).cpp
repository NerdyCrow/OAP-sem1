#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, b,c;
	cout << "������� �������� ���������� �: ";
	cin >> a;
	cout << "������� �������� ���������� b: ";
	cin >> b;
	c = a + b;
	b = c - b;
	a = c - b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


}