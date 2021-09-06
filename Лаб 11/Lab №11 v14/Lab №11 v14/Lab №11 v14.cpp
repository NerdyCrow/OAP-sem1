#include<iostream>
#include<time.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int const i = 99;
	unsigned int razmer1, razmer2;
	int x[i];
	int const j = 99;
	int y[i];
	int *pt1, *pt2;
	unsigned int k=0;
	cout << "Введите размер первого массива ";
	cin >> razmer1;
	srand((unsigned)time(NULL));
	cout << "Введите размер второго массива ";
	cin >> razmer2;
	for (int i = 0; i < razmer1; i++)
	{
		x[i] = rand() % 100;
		cout << x[i] << " ";
		
	}
	cout << endl;
	for (int i = 0; i < razmer2; i++)
	{
		y[i] = rand() % 100;
		cout << y[i] << " ";

	}
	for (int i = 0; i < razmer1; i++)
	{
		pt1 = &x[i];

		for (int j = 0; j < razmer2; j++)
		{
			pt2 = &y[j];
			if (*pt1==*pt2)
			{
				k++;
			}
		}
	}
	cout << endl;
	cout <<"Количество одинаковых элементов "<< k;

}
