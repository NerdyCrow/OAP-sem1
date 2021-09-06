#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int x1, y1, y2,a1,a2,a3,M,L,R;
	cout << "Введите x1,y1,y2: ";

	cin >> x1 >> y1 >> y2;

	a1 = x1 + y1;
	a2 = x1 * y1;
	a3 = y1 * y2;
	if (a1 > a2) {
		if (a1 > a3) { M = a1; }
		else { M = a3; }
	}
	else if (a2 > a3) { M = a2; }
	else { M = a3; };

	if (x1 < y1) {
		if (x1 < y2) { L = x1; }
		else { L = y2; }
	}
	else if (y1<y2)
	{
		L = y1;

	}
	else
	{
		L = y2;
	}
	R = L + M;
	cout <<"Результат: "<< R;


}