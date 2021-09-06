#include <iostream>
using namespace std;

int main() {
	int a, b,r;
	char f;
	setlocale(LC_CTYPE, "rus");
	l1:
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Действие(%, /, +, -, *.): ";
	cin >> f;
	switch (f)
	{
	case '/':
		cout << "Результат : " << a / b << endl;
		break;
	case '*':
		cout << "Результат : " << a * b << endl;
		break;
	case '+':
		cout << "Результат : " << a + b << endl;
		break;
	case '-':
		cout << "Результат : " << a - b << endl;
		break;
	case '%':
		cout << "Результат : " << a % b << endl;
		break;
		goto l1 ;
	
		
	}
	goto l1;
	return 0;

	
	system ("pause");
	return 0;
}