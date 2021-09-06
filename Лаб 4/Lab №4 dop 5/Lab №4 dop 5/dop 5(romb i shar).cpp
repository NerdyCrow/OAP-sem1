#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	int r, p, q;
	cout << "¬ведите радиус: ";
	cin >> r;
	cout << "¬ведите 1 диагональ: "; 
	cin >> p;
	cout << "¬ведите 2 радиус: ";
	cin >> q;

	if (r<=p*q/sqrt(p^2+q^2))
	{
		cout << "может" << endl;

	}
	else{ cout << "не может" << endl; }
		
	
}