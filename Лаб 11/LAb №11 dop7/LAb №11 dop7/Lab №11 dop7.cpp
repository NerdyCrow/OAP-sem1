#include<iostream>
#include<time.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	srand(unsigned(time(NULL)));
	int n, k;
	cout << "������� K:";
	cin >> k;

	cout << "������� ������ �������:";
	cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
	{
		A[i] = rand() % 100;
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "������ ������� > K: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) > k) { cout << i << ' '; }
	}

	cout << endl;
	cout << "������ ������� < K: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) < k) { cout << i << ' '; }
	}
	cout << endl;
	cout << "������ ������� = K: ";
	for (int i = 0; i < n; i++)
	{
		if (*(A + i) == k) { cout << i << ' '; }
	}
}