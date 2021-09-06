#include <iostream>
using namespace std;
//7
#define SIZE 256
void String();
void process(char* arr);

void main() {
	setlocale(LC_CTYPE, "rus");

	String();
}

void String() {
	char Enter[SIZE];
	cout << "Введите строку: "; 
	gets_s(Enter);
	process(Enter);
	cout << Enter << endl;
}

void process(char* arr) {
	char BUFFER[SIZE];
	for (int i = 0, counter = 0; i < strlen(arr); i++, counter++)
	{
		BUFFER[counter] = arr[i];
		if (arr[i] == 'a')
		{
			counter++;
			BUFFER[counter] = '!';
		}
		if (i + 1 == strlen(arr)) {
			counter++;
			BUFFER[counter] = '\0';
		}
	}
	for (int i = 0; i < strlen(BUFFER); i++)
	{
		arr[i] = BUFFER[i];
		if (i + 1 == strlen(BUFFER)) {
			arr[i + 1] = '\0';
		}

	}

}

//Преобразовать строку: после каждой буквы a добавить символ !