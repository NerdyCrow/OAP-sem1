#include<iostream>
using namespace std;
unsigned int n;
unsigned int result;
int r;

int main() {
	setlocale(LC_CTYPE, "rus");
	cout << "����� ������������������: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� " << i << " ����� ������������������: ";
		cin >> r;
		if (r%2==0)
		{
			result = result + r;
		}
	}
	cout << result << endl;
}