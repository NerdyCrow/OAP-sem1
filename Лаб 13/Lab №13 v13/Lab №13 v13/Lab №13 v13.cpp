#include<iostream>
#include<ctime>
using namespace std;
int main() {
	srand(time(NULL));
	setlocale(LC_CTYPE, "rus");
	int x, y;
	int arr[100][100];
	cout << "Число строк и столбцов: ";
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int min = arr[0][0];
	int stolb = 0;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (arr[i][i] < min)
			{
				min = arr[i][i];
				stolb = i;
			}
		}

	}
	cout << "Минимальное число на главной диагонали:" << min << endl;
	cout << "Столбец в котором оно находится:" << stolb + 1 << endl;

	cout << endl;
	int i = stolb;
	for (int j = 0; j < x; j++)
	{


		cout << arr[j][i];

		cout << endl;
	}



}