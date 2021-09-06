#include <iostream>
#include <ctime>
#define MIN  -50
#define MAX   50
using namespace std;
int Func1(int n, ...)
{
	int* p = &n;
	int min = *p;
	while (*p)
	{
		if (*p < min)
		{
			min = *p;
		}
		p++;
	}
	return min;
}
void Func2(int r, int c)
{
	int num = -1, sumH = 0, sum = 0, help = 0;
	int** arr = new int* [r];

	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = (rand() % 4 == 0) ? -1 * rand() % 5 : rand() % 5;
			cout << arr[i][j] << " ";
			help += (arr[i][j] >= 0) ? 1 : 0;
			sumH += arr[i][j];
		}
		if (num == -1 && help == c)
		{
			num = i;
			sum = sumH;
		}
		sumH = 0;
		help = 0;
		cout << endl;
	}

	cout << " Строка без отрицательных чисел : " << num + 1 << ", сумма элементов этой строки = " << sum << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			arr[i][j] -= sum;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < r; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int q, M, N, a;
	bool work = true;
	void(*f1)(int r, int c);
	double(*fun)(double a), (*fun3)(double n, ...);
	int(*fun2)(int n, ...);

	
	do
	{
		cout << "Введите номер задания : ";
		cin >> q;
		cout << endl;
		switch (q)
		{
		case(1):
			cout << "\n Введите размеры: ";
			cin >> M >> N;
			f1 = Func2;
			f1(M, N);
			break;

		case(2):
			
			cout << "(4, -5, 6, 9, -12) = " << Func1(4, -5, 6, 9, -12) << "\n (6.0, -152.45, -316.23, 43.7, -9.345, 4.314, 12.3) = " << Func1(6.0, -152.45, -316.23, 43.7, -9.345, 4.314, 12.3) << ";\n  (7.0, -152.45, 16.23, 43.7, -9.345, 4.314, 12.3, 17.9) = " << Func1(7.0, -152.45, 16.23, 43.7, -9.345, 4.314, 12.3, 17.9) << endl;
			break;

		default:
			cout << "Няма" << endl;
			break;
		}
	} while (q != 3);

}