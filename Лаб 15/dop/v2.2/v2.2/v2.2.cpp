
#include <iostream>
using namespace std;
#define SIZE 256

void String();
void Process(char* arr);


void main() {
	setlocale(LC_CTYPE, "Russian");

	String();
}

void String() {
	char Enter[SIZE];
	cout << "������� ������:\t";
	gets_s(Enter);
	Process(Enter);
}
void Process(char* arr) {
	int n, k;
	cout << "������� �������: ";
	cin >> n;
	cout << "������� �����: ";
	cin >> k;
	char BUFFER[SIZE];
	for (int i = n; i < n + k; i++)
	{
		cout << arr[i];
	}
}

//�������� ���������, ����������� ��������� ��������� S1 ������ k � ������� ����� n �� ����-��. 
