#include <iostream>
using namespace std;

int main() {
	setlocale(LC_CTYPE, "rus");

	int r, p, q;
	cout << "������� ������: ";
	cin >> r;
	cout << "������� 1 ���������: "; 
	cin >> p;
	cout << "������� 2 ������: ";
	cin >> q;

	if (r<=p*q/sqrt(p^2+q^2))
	{
		cout << "�����" << endl;

	}
	else{ cout << "�� �����" << endl; }
		
	
}