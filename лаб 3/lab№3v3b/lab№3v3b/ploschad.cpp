#include<iostream>
using namespace std;
 
int main() {
	long double n,s, l, h,p;
	setlocale(LC_CTYPE, "rus");
	cout << "�� ������� ��� ������: ";
	cin >> n;
	h = (2 * n + 2) / n;
	l = h * n;
	s = l * h;
	p = (l + h) * 2;
	cout <<"������ ����� = "<< h << endl;
	cout <<"����� ����� = "<< l << endl;
	cout <<"������� ����� = "<<s<<endl;
	cout <<"�������� ����� = "<<p;
}