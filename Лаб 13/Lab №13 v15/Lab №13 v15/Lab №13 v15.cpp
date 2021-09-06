#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int mas1[100][100];
int k;
int nizhe = 0, vishe = 0;

int main()
{
	setlocale(LC_CTYPE, "rus");
	srand(time(NULL));
	int mass[100][100];

	cout << "Введите размер массива: ";
	cin >> k;
	for (int j = 0; j < k; j++)
	{
		for (int i = 0; i < k; i++)
		{
			mass[i][j] = rand() % 9;
			cout << mass[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++) {
			cout << mass[i][j] << " ";
			nizhe += mass[i][j];
		}
	cout << endl;
	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++) {
			cout << mass[j][i] << " ";
			vishe += mass[j][i];
		}
	cout << endl << "Сумма элементов ниже главной диагонали: " << nizhe << endl;
	cout << endl << "Сумма элементов выше главной диагонали: " << vishe << endl;
}