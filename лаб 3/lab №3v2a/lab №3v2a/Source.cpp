#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	char a, probel;
	probel = ' ';
	setlocale(LC_CTYPE, "rus");
	cout << "Введите символ: ";
	cin >> a;
	int f, g;
	g = 5;
	f = 5;
	for (g; g > 2; g--) { 
		cout << setw(g) << setfill (probel) << probel;
		cout << setw(f) << setfill (a) << a<<endl;
		f=f+2;
	}
	

	cout << setw(4) << setfill(probel) << probel;
	cout << setw(7) << setfill(a) << a << endl;

	cout << setw(5) << setfill(probel) << probel;
	cout << setw(5) << setfill(a) << a << endl;
	



}
/*cout << setw(2) << setfill(probel) << probel;
	cout << setw(11) << setfill(a) << a << endl;

	cout << setw(2) << setfill(probel) << probel;
	cout << setw(11) << setfill(a) << a << endl;

	cout << setw(2) << setfill(probel) << probel;
	cout << setw(11) << setfill(a) << a << endl;

	cout << setw(3) << setfill(probel) << probel;
	cout << setw(9) << setfill(a) << a << endl;*/