#include<iostream>;
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	int a, b, p, q, r, s;
	cout << "������ �������: ";
	cin >> a;
	cout << "�� ";
	cin >> b;

	cout << "������ 1 ����: ";
	cin >> p;
	cout << "�� ";
	cin >> q;

	cout << "������ 2 ����: ";
	cin >> r;
	cout << "�� ";
	cin >> s;

	if (p+r<a && q+s<b || p+r<b && q+s<a || p+s<a && q+r<b || p+s<b && q+r<a || p+q<a && s+r<b || p+q<b && s+r<a)
	{
		cout << "�����";

	}
	else
	{
		cout << "������";
	}


}