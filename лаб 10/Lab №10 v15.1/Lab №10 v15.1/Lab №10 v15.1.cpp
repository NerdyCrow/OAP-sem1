#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, i; char tmp[33];
	cout <<"������� ����� ";
	cin>> A;
	_itoa_s(A, tmp, 2);

	cout<< "����� � �������� ���� = "<< tmp << endl;
	if ((A & 1) == 0)
		cout << "����� ������ 2" << endl;
	else
		cout << "����� �� ������ 2" << endl;
}