#include<iostream>
using namespace std;
long float c1, c2;


int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "������� ���-�� ������ � 1 ������: ";
	cin >> c1;
	cout << endl;
	cout << "������� ���-�� ������ � 2 ������: ";
	cin >> c2;
	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		c2 = c2 + c1 / 2;
		c1 = c1 - c1 / 2;
		c1 = c1 + c2 / 2;
		c2 = c2 - c2 / 2;
		


	}
	cout << c2 << " " << c1;

}