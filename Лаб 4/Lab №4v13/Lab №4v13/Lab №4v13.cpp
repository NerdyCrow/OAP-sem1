#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");

	int A, B;

	cout << "������� ���������: "<<endl;
	cin >> A;
	cout << "������� �����������: " << endl;
	cin >> B;
	if (A < B && A != B) {
		cout << "����� ����������" << endl;
		}
	else
	{
		cout << "����� ������������" << endl;
	}


	
}