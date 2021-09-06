#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	const int N = 100;
	int size, a[N], b[N], S[N], * pk = a, * ok = b, l;
	cout << "¬ведите размер массивов: ";
	cin >> size;
	for (int i = 0; i <size; i++)
	{
		pk[i] = rand() % 99;
		cout << pk[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		ok[i] = rand() % 99;
		cout << ok[i] << " ";
	}
	cout << endl;
	cout << "результат:" << endl;
	for (int i = 0; i < size; i++)
	{
		l = *(pk + i) + *(ok + i);
			S[i] = l;
		cout << S[i] << " ";
	}
}