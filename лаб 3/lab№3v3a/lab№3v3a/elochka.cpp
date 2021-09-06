#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	char a, probel;
	probel = ' ';
	setlocale(LC_CTYPE, "rus");
	cout << "Введите символ: ";
	cin >> a;
	int s,q;
	s = 1;
	q = 30;
	for (q; q >25; q--) {
		cout << setw(q) << setfill(probel) << probel;
		cout << setw(s) << setfill(a) << a << endl;
		s = s + 2;
	}
	int j, k;
	j = 30;
	k = 1;
	for (j; j >22; j--) {
		cout << setw(j) << setfill(probel) << probel;
		cout << setw(k) << setfill(a) << a << endl;
		k = k + 2;
		
	}
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(3) << setfill(a) << a << endl;
}