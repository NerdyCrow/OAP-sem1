#include<iostream>
using namespace std;
unsigned int l,s=0;
unsigned int a,f=0;
float result=0;
int main() {
	setlocale(LC_CTYPE, "ru");
	cout << "����� ������������������: ";
	cin >> l;
	for (int i = 1; i < l+1; i++)
	{
		cout << "������� " << i << " ���� ������������������: ";
		cin >> a;
		if (a%2!=0)
		{
			s = s + a;
			f++;
			result = s / f;
		}
	}
	cout <<"������� �������������� �������� �����: "<< result;
}