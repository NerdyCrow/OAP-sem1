# include <iostream>
#include<ctime>
using namespace std;
void massiv();
void matrix();

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	srand(time(NULL));
	int c;
	do
	{
		cout << "¬ведите номер работы" << endl;
		cin >> c;
		switch (c)
		{
		case 1: massiv(); break;
		case 2: matrix(); break;
		case 3: break;
		}
	} while (c != 3);
}
void massiv()
{
	cout << " " << endl;
	int C , size, n = 0, m = 0, k = 1;
	cout << "¬ведите размер массива: ";
	cin >> size;
	int* mass = new int[size];
	cout << "¬ведите C: ";
	cin >> C;
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 100 - 30;
		cout << mass[i] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		if (mass[i] >C)
		{
			n++;
		}
		if (mass[i] > m)
		{
			m = mass[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (mass[i] == m)
		{
			i++;
			for (; i < size; i++)
			{
				k = k * mass[i];
			}
			break;
		}
	}
	cout << "количество элементов " << size << endl;
	cout << "количество больших  " << C << " : " << n << endl;
	cout << "произведение после " << m << " : " << k << endl;
	delete[] mass;
	mass = nullptr;
}
void matrix()
{
	int rows = 7, cols = 7, n = 0, k = 0, u;
	int** mass = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		mass[i] = new int[cols];
	}
	cout << "1 массив" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mass[i][j] = rand() % 10;
			cout <<  mass[i][j] << " ";
			
		}
		cout << endl;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (mass[i][j] == 0)
			{
				n = i;
				k = j;
				cout << "координаты нулевого элемента " << endl;
				cout << "(" << n+1 << "," << k+1 << ")" << endl;
				break;
			}
		}
		if (mass[n][k] == 0)
		{
			break;
		}
	}
	u = mass[n][0];
	if (mass[n][k] == 0)
	{
		cout << "2 массив" << endl;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				mass[i][j] = mass[i][j] - u;
				cout  << mass[i][j] << " ";
				if (j == cols - 1)
				{
					cout << " " << endl;
				}
			}
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[] mass[i];
		mass[i] = nullptr;
	}
	delete[] mass;
	mass = nullptr;
}