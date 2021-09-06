#include <iostream>
#include <ctime>

using namespace std;
void Func1(int r, int c)
{
	int sum = 0;
	int** arr = new int* [r];
	int* A = new int[c];

	for (int i = 0; i < c; i++)
	{
		A[i] = 0;
	}

	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = rand() % 5;
			cout << arr[i][j] << "\t";
			if (arr[i][j] == 0) A[i] = 1;
		}
		cout << endl;
		sum += A[i];
	}

	cout << "Количество строк, имеющих нулевой элемент = " << sum << endl;

	for (int i = 0; i < r; i++)
	{
		delete[] arr[i];
	}
	delete[] arr, A;
}

int Func2(int n, ...)
{
	int* p = &n;
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		sum += *(p + i) * *(p + i + 1);
	}
	return sum;
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

	cout << "\tВыберите задания:" << endl;
	do
	{
		cout << "Введите номер задания :";
		cin >> q;
		cout << endl;
		switch (q)
		{
			

		case(1):
			cout << "Дана целочисленная прямоугольная матрица. Определить количество строк, содержащих хотя бы один нулевой элемент\nВведите M и N: ";
			cin >> M >> N;
			f1 =Func1;
			f1(M, N);
			break;

		case(2):
			
			fun2 = Func2;
			cout << "(4, 5, 6, 9, 12) = " << fun2(4, 5, 6, 9, 12) << "; \n (6, 52, 16, 4, 90, 45, 12) = " << fun2(6, 52, 16, 4, 90, 45, 12) << ";\n (8, 2, 12, 44, 19, 25, 28, 13, 82) = " << fun2(8, 2, 12, 44, 19, 25, 28, 13, 82) << endl;
			break;

		
		default:
			cout << "Няма" << endl;
			break;
		}
	}
	while (q != 3);
}