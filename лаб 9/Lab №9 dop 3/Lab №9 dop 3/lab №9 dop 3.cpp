#include<iostream>
#include<ctime>
using namespace std;




int main() {
	srand((unsigned)time(NULL));
	setlocale(LC_CTYPE, "rus");
	int s = 0;
	const int n = 10;
	int razmer;
	
	int a[n];
	int kol = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 5;
		cout << a[i] << " ";

	}
	cout << endl;



	for (int i = 0; i < n; i++)
	{
	
		if (a[i + 1] == a[i])
		{
			cout << a[i + 1] << " = " << a[i] << endl;
			kol++;
		}
		
	}
	cout<<"количество пар: " <<kol;

}