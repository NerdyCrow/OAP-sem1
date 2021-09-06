
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
	cout << "Введите строку:\t";
	gets_s(Enter);
	Process(Enter);
}
void Process(char* arr) {
	int n, k;
	cout << "Введите позицию: ";
	cin >> n;
	cout << "Введите длину: ";
	cin >> k;
	char BUFFER[SIZE];
	for (int i = n; i < n + k; i++)
	{
		cout << arr[i];
	}
}

//Написать программу, реализующую выделение подстроки S1 длиной k с позиции номер n из стро-ки. 
