#include <iostream>
using namespace std;

int main() {
	int a, b,r;
	char f;
	setlocale(LC_CTYPE, "rus");
	l1:
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "��������(%, /, +, -, *.): ";
	cin >> f;
	switch (f)
	{
	case '/':
		cout << "��������� : " << a / b << endl;
		break;
	case '*':
		cout << "��������� : " << a * b << endl;
		break;
	case '+':
		cout << "��������� : " << a + b << endl;
		break;
	case '-':
		cout << "��������� : " << a - b << endl;
		break;
	case '%':
		cout << "��������� : " << a % b << endl;
		break;
		goto l1 ;
	
		
	}
	goto l1;
	return 0;

	
	system ("pause");
	return 0;
}