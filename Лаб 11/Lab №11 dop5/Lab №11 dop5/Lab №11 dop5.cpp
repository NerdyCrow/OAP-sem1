#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	const int k = 101;
	int size1, size2, a[k], b[k], * pk = a, *ok = b;
	cout << "������� ������ 1-�� �������: ";
	cin >> size1;
	cout << "������� ������ 2-�� �������: ";
	cin >> size2;
	for (int i = 0; i < size1; i++)
	{
		pk[i] = rand() % 100;
		cout << pk[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size2; i++)
	{
		ok[i] = rand() % 100;
		cout << ok[i] << " ";
	}
	
	int max = *pk;
	for (int i = 0; i < size1; i++)
	{
		if (*(pk+i)>max)
		{
			max = *(pk + i);
		}

	}
	int z = 0;
	cout <<endl<< "������������ ������� 1-�� �������: "<< max << endl;
	for (int i = 0; i < size2; i++)
	{
		if (max == *(ok + i))
		{
			cout << "������������ �������� 1-�� ������� ���������� �� ������ ";
			z = 1;
			break;
		}
		
		
	}
	if (z==0)
	{
		cout << "������������ �������� 1-�� ������� �� ���������� �� ������ " << endl;
	}
	cout << endl;
}