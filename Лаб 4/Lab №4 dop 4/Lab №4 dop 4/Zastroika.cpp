#include<iostream>;
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	int a, b, p, q, r, s;
	cout << "Размер участка: ";
	cin >> a;
	cout << "на ";
	cin >> b;

	cout << "Размер 1 дома: ";
	cin >> p;
	cout << "на ";
	cin >> q;

	cout << "Размер 2 дома: ";
	cin >> r;
	cout << "на ";
	cin >> s;

	if (p+r<a && q+s<b || p+r<b && q+s<a || p+s<a && q+r<b || p+s<b && q+r<a || p+q<a && s+r<b || p+q<b && s+r<a)
	{
		cout << "Можно";

	}
	else
	{
		cout << "Нельзя";
	}


}