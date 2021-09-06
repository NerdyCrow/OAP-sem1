#include<iostream>
using namespace std;


void main() {
	setlocale(LC_CTYPE, "rus");

	int size, z, a[50][50];
	cout << "¬ведите n: ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		z = i + 1;
		for (int j = 0; j < size; j++) {
			a[i][j] = z;
			z++;
			if (z > size)
				z = 1;

		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}


}

