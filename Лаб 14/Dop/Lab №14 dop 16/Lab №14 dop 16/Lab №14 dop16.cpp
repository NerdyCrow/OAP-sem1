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
		cout << "Введите номер работы" << endl;
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
	int  size = 20, f = 0, n = 0, m = 0, k = 0;
	int* mass = new int[size];
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % 100 - 50;
		cout << mass[i] << endl;
	}
	for (int i = 0; i < size; i++)
	{
		if (mass[i] > 0)
		{
			n = mass[i];
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (mass[i] > 0)
		{
			m = mass[i];
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (mass[i] < k)
		{
			k = mass[i];
		}

	}
	for (int i = 0; i < size; i++)
	{
		if (mass[i] != n or mass[i] != m)
		{
			f = f + mass[i];
		}
	}
	cout << "самый маленький элемент " << k << endl;
	cout << "сумма между " << n << " и " << m << " положительным элементами" << ":" << f << endl;
	delete[] mass;
	mass = nullptr;
}
void matrix()
{
	int rows = 5, cols = 5, n = -1, k = 0;
	int** mass = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		mass[i] = new int[cols];
	}
	cout << "1 матрица" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			mass[i][j] = rand() % 10 - 5;
			cout << mass[i][j] << " ";
			
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (mass[i][j] < 0)
			{
				n = i;
				break;
			}
		}
		if (n!=-1)
		{
			break;
		}
	}
	cout << "Строка содержащая отрицательный элемент: " << n << endl;
	cout << "2 матрица" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (j == n)
			{
				mass[i][j] = mass[i][j] / 2;
			}
			cout << mass[i][j] << " ";
			if (j == cols - 1)
			{
				cout << " " << endl;
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