#include <iostream>

using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	int n, m;
	int s;
	cout << "����� �������: ";
	cin >> n;
	cout << "������ ������� ��������(�����): ";

	cin >> m;
	
	m = m * 60;
	s = (2 * m + (n - 1) * 10)*n / 2;

	cout << s <<" �����"<< endl;
	
	
}