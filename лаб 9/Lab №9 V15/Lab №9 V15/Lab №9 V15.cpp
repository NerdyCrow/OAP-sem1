#include<iostream>
#include<ctime>
using namespace std;
int main() {
	int min = 99;
	srand((unsigned)time(NULL));
	setlocale(LC_CTYPE, "rus");
	int s = 0;
	const int n = 99;
	int razmer;
	int a[n];

	cout << "Размер массива ";
	cin >> razmer;
	for (int i = 0; i < razmer; i++)
	{
		a[i] = rand() % 100;
		//s += a[i];
		cout << a[i] << " ";
	}
	cout << endl;
	//cout << "-массив" << endl;
	for (int i = 0; i < razmer; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	cout << min << endl;

	const int j = 99;
	int z[j];
	int g = 0;
	for (int i = 0; i < razmer; i++)
	{
		if (a[i] != min)
		{
			z[g] = a[i];
			cout << z[g] << " ";
			g++;
		}
		else {
			continue;


		}
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < razmer; i++)
	{
		sum = sum + a[i];
	}
	int sr;
	sr = sum / razmer;
	cout << sr << endl;
	const int h = 99;
	int arr[h];
	int u;
	int e = 0;
	for (int i = 0; i < razmer + 2; i++)
	{
		if (i <= 2)
		{
			arr[i] = sr;
		}
		else
		{
			break;
		}
	}
	cout << a[1] << endl;
	for (int i = 3; i < razmer + 3; i++)
	{
		arr[i] = a[e];
		e++;

	}
	for (int i = 0; i < razmer + 3; i++)
	{
		cout << arr[i] << ' ';
	}
}


	/*const int k = 99;
	int otric[k];
	for (int i = 0; i < razmer; i++)
	{
		if (a[i]%2== 0) {
			for (int j = 0; j < razmer; j++) {
				a[j] = a[j - 1];
				razmer++;
				a[i - 1] = 1;
			}
		}

	}


	for (int i = 0; i < razmer; i++)
	{
		cout << a[i] << ' ';
	}*/
