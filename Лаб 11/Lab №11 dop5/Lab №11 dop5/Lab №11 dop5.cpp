#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	const int k = 101;
	int size1, size2, a[k], b[k], * pk = a, *ok = b;
	cout << "Введите размер 1-го массива: ";
	cin >> size1;
	cout << "Введите размер 2-го массива: ";
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
	cout <<endl<< "Максимальный элемент 1-го массива: "<< max << endl;
	for (int i = 0; i < size2; i++)
	{
		if (max == *(ok + i))
		{
			cout << "Максимальное значение 1-го массива содержится во втором ";
			z = 1;
			break;
		}
		
		
	}
	if (z==0)
	{
		cout << "Максимальное значение 1-го массива Не содержится во втором " << endl;
	}
	cout << endl;
}