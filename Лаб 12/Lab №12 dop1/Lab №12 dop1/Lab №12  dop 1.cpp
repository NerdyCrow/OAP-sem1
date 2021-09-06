#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const int num = 255;
	char str[num], ls;
	int sum = 0, c;
	cout << "¬ведите строку: ";
	cin.getline(str, num);
	int n = strlen(str);
	for (int i = n; i >= 0; i--) {
		str[i + 1] = str[i];
	}
	str[0] = ' ';
	n += 2;
	str[n - 1] = ' ';
	for (int i = 0; i < n; i++) {
		cout << str[i];
	}
	cout << "¬ведите окончание: ";
	cin >> ls;
	for (int i = 2; i < n; i++) {
		if (str[i] == ' ') {
			if (str[i - 1] == ls) {
				for (c = i - 1; c < n; c--) {
					if (str[c] == ' ')
						break;
				}
				for (int k = c; k < i;) {
					cout << str[k + 1];
					k++;
				}
				cout << endl;
			}
		}
	}
	system("pause");
}