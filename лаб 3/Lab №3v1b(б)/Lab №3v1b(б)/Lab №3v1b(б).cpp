#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, b,c;
	cout << "Введите значение переменной а: ";
	cin >> a;
	cout << "Введите значение переменной b: ";
	cin >> b;
	c = a + b;
	b = c - b;
	a = c - b;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


}