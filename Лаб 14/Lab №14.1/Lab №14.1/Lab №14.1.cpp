#include <iostream>
#include<time.h>
using namespace std;
void massiv();
void matrix();
int main(void){
    int c;
do
{
    setlocale(LC_CTYPE, "rus");
    cout << "¬ведите номер работы(1-массив;2-матрица;3-выход) : " << endl;
    cin >> c;
    switch (c)
    {
    case 1: massiv(); break;
    case 2: matrix(); break;
    case 3: break;
    }
} while (c != 3);
}

void massiv() {
    setlocale(LC_CTYPE, "rus");
int n, i, j, last;
double sum1 = 0, sum2 = 0;


    cout << "¬ведите размер массива : ";
    cin >> n;
    cout << endl;
    double* arr = new double[n];
    for (i = 0; i < n; i++) {
        arr[i] = (rand() % 100) / 10. - 5;
        cout << arr[i] << " ";
    }
    for (i = 0; i < n; i++) {
        if (i % 2 != 0)
            sum1 += arr[i];
    }
    cout << endl << "—умма элементов с нечетным индексом  " << sum1 << endl;
    int first = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] < 0) {
            first = i;
            break;
        }
    for (i = last = n - 1; i != 0; i--)
        if (arr[i] < 0) {
            last = i;
            break;
        }

    for (i = first; i <= last; i++) {

        sum2 += arr[i];


    }
    cout << "—умма между первым и последним отрицательными элементами " << sum2 << endl;
   /* otric(arr, n);
    mezhdy(arr, n);*/

    delete [] arr;

}
void matrix() {
	setlocale(LC_CTYPE, "rus");
	int k, n;
	int** A, size;
	cout << "¬ведите размер матрицы:";
	cin >> size;
	A = new int* [size];
	for (int i = 0; i < size; i++)
	{
		A[i] = new int[size];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> *(*(A + i) + j);
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << *(*(A + i) + j) << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < size; i++)
	{
		k = 0;
		for (int j = 0; j < size; j++)
		{
			if (*(*(A + i) + j) == 0) { k++; }
		}
		if (k == size)
		{
			n = i;
		}
	}

	for (int i = 0; i < size; i++)
	{
		*(*(A + i) + n) /= 2;

	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << *(*(A + i) + j) << " ";
		}
		cout << endl;
	}
}
