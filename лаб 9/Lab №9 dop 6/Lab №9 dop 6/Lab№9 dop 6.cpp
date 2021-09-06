#include<iostream>
#include<conio.h>
#include<time.h>
int main() {
	setlocale(LC_CTYPE, "rus");
	using namespace std;
	const int k = 100;;
	int i, razmer, arr[k], a = 1, b = 0;
	cout << "¬ведите размер массива ";
	cin >> razmer;
	srand((unsigned)time(NULL));
	for (i = 1; i < 10000; i++) {
		a = a + b;
		b = b + a;
		for ( i = 1; i <razmer; i++)
		{
			arr[i] = rand() % 100;
			if (arr[i] == a || arr[i] == b) {
				cout << "число ‘ибоначчи :  " << arr[i] << endl;
				
			}
		}

	}

}