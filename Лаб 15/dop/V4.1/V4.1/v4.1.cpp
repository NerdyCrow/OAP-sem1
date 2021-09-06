#include <iostream>
using namespace std;
#define SIZE 256


void String();
void Process(char* arr);


void main() {
	setlocale(LC_CTYPE, "Rus");


	String();
}

void String() {
	char EnteredData[SIZE];
	cout << "¬ведите строку:\t";
	gets_s(EnteredData);
	Process(EnteredData);
	cout << EnteredData;
}
void Process(char* arr) {
	char BUFFER[SIZE];
	for (int i = 0, counter = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 'b')
		{
			if (arr[i + 1] == '\0')
			{
				BUFFER[counter] = '\0';
			}
			continue;
		}

		BUFFER[counter] = arr[i];
		counter++;
		if (i + 1 == strlen(arr)) {
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


//Ќаписать программу, котора€ удал€ет в строке все буквы b в тексте, написанном латинскими бук-вами