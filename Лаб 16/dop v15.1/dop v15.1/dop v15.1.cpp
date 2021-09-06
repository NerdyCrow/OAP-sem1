#include<iostream>
#include<ctime>
using namespace std;

int prov(int proverka)
{
	if (proverka == 1)
	{
		return 1;
	}
	else return 0;
}

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");


	int stroka;
	int stolbec;
	cout << "Введите кол-во строк и столбцов" << endl;;
	cin >> stroka;
	cin >> stolbec;

	int* mas = new int[stroka];
	int** arr = new int* [stolbec];
	for (int i = 0; i < stroka; i++) // ЗАполнение двумерного массива
	{
		arr[i] = new int[stolbec];
	}

	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolbec; j++)
		{
			arr[i][j] = rand() % 20 - 10;
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	int proverka = 0;

	for (int i = 0; i < stroka; i++)
	{
		if (i > stroka)
		{
			break;
		}
		for (int j = 0; j < stolbec; j++)
		{
			if (i > stroka)
			{
				break;
			}
			if (arr[i][j] > 0)
			{
				i++;
				continue;
			}


			if (j + 1 == stolbec)
			{
				proverka = 1;
			}
		}
	}
	int k = 1;
	if (prov(proverka) == 0)
	{
		cout << "Во всех строках есть положительный элемент\n";
	}
	else
	{
		cout << "\n\n";
		k = 0;

		for (int j = 0; j < stolbec; j++)
		{
			if (arr[0][j] < 0)
			{
				arr[0][j] *= -1;
				cout << arr[0][j] << " ";
			}
			else
			{
				arr[0][j] = arr[0][j];
			}
		}
	}
	if (k==0)
	{
		for (int i = 0; i < stroka; i++)
		{

			for (int j = 0; j < stolbec; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
}