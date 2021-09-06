#include<iostream>
using namespace std;
#include <stdio.h>
void main()
{
	setlocale(LC_CTYPE, "rus");
	char s[256];
	int count;
	char* ps;

	puts("¬ведите строку: ");
	gets_s(s);
	int k = 0;
	int l = 0;
	int f;
	int z = 0;

	for (int i = 0; s[i] != 0; i++)
	{
		
		if (s[i] == '"') {
			for (int j = i; s[j] != 0; j++)
			{
				
				i++;
				if (s[i] == '"') {
					i++;
					break;
				}
				
			}


		}
		printf("%c", s[i]);
	}
}