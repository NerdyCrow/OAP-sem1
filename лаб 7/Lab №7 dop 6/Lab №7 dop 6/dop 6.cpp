#include<iostream>
using namespace std;
unsigned int n;
unsigned int sum=0;
int p=1;
int r;
int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "����� ������������������: ";
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		cout << "������� �������� " << i << " ����� ������������������: ";
		cin >> r;
		if (r> 0)
		{
			sum += r;
		}
		if (r < 0) { p = p * r; }
	}
	cout <<"����� �������������: "<< sum<< endl;
	cout <<"������������ �������������: "<<p << endl;
}