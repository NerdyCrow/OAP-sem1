#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int k, l;
	cout << "��� ������ ����������?(1-�������, 2-�����): ";
	cin >> k;
	switch (k)
	{
	case 1:
	cout<<"���������� ����������: ���� � �������"<<endl;
		
		break;
	case 2: 
		cout << "���������� ����������: ������ ����� "<<endl;
		
	
		  break;
	}
}