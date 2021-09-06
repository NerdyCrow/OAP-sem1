#include<iostream>
using namespace std;
int main() {
	int k, n;
	int **A, size;
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
		if (k==size)
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