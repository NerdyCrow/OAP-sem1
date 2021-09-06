#include<iostream>
#include<time.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));
	int kol = 1;
	const int a=100;
	int arr[a];
	int razmer;
	cout << "Введите размер массива ";
	cin >> razmer;
	int max = 0;
	for (int i = 0; i < razmer; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] <<' ';
	}
	cout << endl;
	for (int k = 0; k < razmer-1; k++)
	{
		if (arr[k] == arr[k + 1]) {
			kol++;
			if (kol > max) { max = kol; }
		}
		else
		{
			kol = 1;
		}
	}
	cout << "Наибольшее число подряд идущих элементов: " << max;
	


}