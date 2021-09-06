#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");

	int A, B;

	cout << "Введите числитель: "<<endl;
	cin >> A;
	cout << "Введите знаменатель: " << endl;
	cin >> B;
	if (A < B && A != B) {
		cout << "Дробь правильная" << endl;
		}
	else
	{
		cout << "Дробь неправильная" << endl;
	}


	
}