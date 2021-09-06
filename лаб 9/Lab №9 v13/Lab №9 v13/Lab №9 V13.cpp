#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int s = 0;
	const int n=99;
	int razmer;
	int a[n];
	cout << "Размер массива ";
	cin >> razmer;
	for (int i = 0; i < razmer; i++)
	{
		a[i] = rand() % 100;
		s += a[i];
		cout << a[i] <<" ";
	}
	cout << "-массив" << endl;
	cout << endl;
	for (int c = razmer-1; c > 0; c--)
	{
		s -= a[c];
		a[c] = s;
			}
	for (int i = 0; i <razmer; i++)
	{
		cout << a[i] << " ";
	}
	cout << "-сумма предыдущих" << endl;
}