#include <iostream>
#include <ctime>

using namespace std;

void Zad1(int r, int c)
{
	int num = -1;
	int** arr = new int* [r];

	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];
		for (int j = 0; j < c; j++)
		{
			arr[i][j] = rand() % 5;
			cout << arr[i][j] << " ";
			if (num == -1 && arr[i][j] == 0) num = j;
			if (num > j && arr[i][j] == 0) num = j;
		}
		cout << endl;
	}

	cout << "Номер первого столбца с нулевым элементом = " << num + 1 << endl;

	for (int i = 0; i < r; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int Zad2(int n, ...)
{
	int* p = &n;
	int min = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1 || min > * (p + i)) min = *(p + i);
	}
	return min;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int q, M, N, a;	
	void(*f1)(int r, int c);
	double(*fun)(double a), (*fun3)(double n, ...);
	int(*fun2)(int n, ...);

	cout << "\tВыберите задания:" << endl;
	do
	{
		cout << "номер задания: ";
		cin >> q;
		cout << endl;
		switch (q)
		{
			
		case(1):
			cout << "Введите размер матрицы: ";
			cin >> M >> N;
			f1 = Zad1;
			f1(M, N);
			break;

		case(2):
			
			fun2 = Zad2;
			cout << "(4, -5, 6, 9, -12) = " << fun2(4, -5, 6, 9, -12) << "; \n (6, -52, 16, 4, -90, 45, 12) = " << fun2(6, -52, 16, 4, -90, 45, 12) << ";\n (7, -78, 34, 15, -99, 4, 18, -37) = " << fun2(7, -78, 34, 15, -99, 4, 18, -37) << endl;
			break;
		default:
			cout << "Няма" << endl;
			break;
		}
	} while (q != 3);
	
}
