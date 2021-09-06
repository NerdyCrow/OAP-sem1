#include <iostream>		
using namespace std;
#define MIN   0
#define MAX   10

void Func1(int& size)
{
	int i, j, numofs;
	
	
	int** a = new int* [size];
	for (i = 0; i < size; i++)
		a[i] = new int[size];
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			a[i][j] = rand() % 50;
			;
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			
			cout  << a[i][j]<<" ";
		}
		cout << endl;
	}
	int sum_1 = NULL;                //суммы элементов диагоналей над главной
	for (int i = 0; i < size - 1; i++)
		for (int j = 1; j < size; j++)
			if (j == i + 1)
			{
				sum_1 += *(*(a + i) + j);
			}
	int sum_2 = 0;
	for (int i = 0; i < size - 2; i++)
		for (int j = 2; j < size; j++)
			if (j == i + 2)
			{
				sum_2 += *(*(a + i) + j);
			}
	int sum_3 = 0;
	for (int i = 0; i < size - 3; i++)
		for (int j = 3; j < size; j++)
			if (j == i + 3)
			{
				sum_3 += *(*(a + i) + j);
			}

	int sum1 = NULL;                         //суммы элементов диагоналей под главной
	for (int i = 1; i < size; i++)
		for (int j = 0; j < size - 1; j++)
			if (i == j + 1)
			{
				sum1 += *(*(a + i) + j);
			}
	int sum2 = 0;
	for (int i = 2; i < size; i++)
		for (int j = 0; j < size - 2; j++)
			if (i == j + 2)
			{
				sum2 += *(*(a + i) + j);
			}
	int sum3 = 0;
	for (int i = 3; i < size; i++)
		for (int j = 0; j < size - 3; j++)
			if (i == j + 3)
			{
				sum3 += *(*(a + i) + j);
			}
	cout << endl;
	cout << "Суммы " << sum_1 << " " << sum_2 << " " << sum_3 << " " << sum1 << " " << sum2 << " " << sum3 << " " << endl;
	cout << endl;
	int massive[6] = { sum_1, sum_2, sum_3, sum1, sum2, sum3 };
	int min = massive[0];
	for (int i = 0; i < 6; ++i)
	{
		if (massive[i] < min)
		{
			min = massive[i];
		}
	}
	cout << "минимальное:" << min;
}


void Func2(int& size)
{
	int  i, j, numofs;
	
	int** a = new int* [size];
	for (i = 0; i < size; i++)
		a[i] = new int[size];
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			a[i][j] = (int)(((double)rand() /
				(double)RAND_MAX) * (MAX - MIN) + MIN);
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int sum1 = NULL;                         //суммы элементов диагоналей под главной
	for (int i = 1; i < size; i++)
		for (int j = 0; j < size - 1; j++)
			if (i == j + 1)
			{
				sum1 += *(*(a + i) + j);
			}
	int sum2 = 0;
	for (int i = 2; i < size; i++)
		for (int j = 0; j < size - 2; j++)
			if (i == j + 2)
			{
				sum2 += *(*(a + i) + j);
			}
	int sum3 = 0;
	for (int i = 3; i < size; i++)
		for (int j = 0; j < size - 3; j++)
			if (i == j + 3)
			{
				sum3 += *(*(a + i) + j);
			}
	cout << endl;
	cout << "Сумма элементов  " << sum1 << " " << sum2 << " " << sum3 << " " << endl;
	cout << endl;
	int massive[3] = { sum1, sum2, sum3 };
	int max = massive[0];
	for (int i = 0; i < 3; ++i)
	{
		if (massive[i] > max)
		{
			max = massive[i];
		}
	}
	cout << "Максимальное значение суммы : " << max << endl;
}
int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int size;
	cout << "Введите размер матрицы: ";
	cin >> size;
	int c;
	do
	{
		cout << endl;
		
		cout << "Введите номер задания : " << endl;
		cin >> c;
		switch (c)
		{
		case 1: Func1(size);
			break;
		case 2: Func2(size);
			break;
		case 3: break;
		}
	} while (c != 3);
}





