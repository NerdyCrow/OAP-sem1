//��� 7 ���!!!!!!!!!

#include<iostream>
#include<time.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE,"rus");
	srand(NULL(rand));
	int n;
	cout << "������� ������ �������: ";
	cin >> n;
	int sum = 0;
	int arr[100][100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				arr[i][j] = rand() % 10;
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << "�������� �������������� �����: ";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j>=i && n-i>=j+1)
				{
					cout << arr[i][j] << " ";
					sum += arr[i][j];
				}
			}
			
		}		
		for (int i = 0; i < n; ++i) {
			for (int j = n - i - 1; j < n; ++j) {
				if (i >= j)
				{
					cout << arr[i][j] << " ";
					sum += arr[i][j];
				}
			}
		}
		cout <<endl<<"����� ���������:" << endl << sum;
}
