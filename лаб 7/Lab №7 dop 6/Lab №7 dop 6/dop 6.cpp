#include<iostream>
using namespace std;
unsigned int n;
unsigned int sum=0;
int p=1;
int r;
int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "Длина последовательности: ";
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		cout << "Введите значение " << i << " члена последовательности: ";
		cin >> r;
		if (r> 0)
		{
			sum += r;
		}
		if (r < 0) { p = p * r; }
	}
	cout <<"Сумма положительных: "<< sum<< endl;
	cout <<"Произведение отрицательных: "<<p << endl;
}