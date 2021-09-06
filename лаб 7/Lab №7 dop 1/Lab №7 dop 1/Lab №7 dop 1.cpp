#include<iostream>
using namespace std;
unsigned int n;
unsigned int result;
int r;

int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "Длина последовательности: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите значение " << i << " члена последовательности: ";
		cin >> r;
		if (r%2==0)
		{
			result = result + r;
		}
	}
	cout << result << endl;
}