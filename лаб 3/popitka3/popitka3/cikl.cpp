#include<iostream>
#include <iomanip> 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel;
	probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << probel << endl;
	int j, k, l;
	j = 14;
	k = 4;
	l = 15;
	
	for (l; l >= 0; l=l-4)
	{
		cout << setw(j) << setfill(probel) << probel;
		cout << setw(k) << setfill(c) << c;
		cout << setw(l) << setfill(probel) << probel;
		cout << setw(k) << setfill(c) << c << endl;
		j=j-2;
		k=k+4;
	}
	//cout << setw(6) << setfill(probel) << probel;
	//cout << setw(39) << setfill(c) << c;

	int a = 8;
	int d = 35;
	for (d;d>0;d=d-4)
	{
		cout << setw(a) << setfill(probel) << probel;
		cout << setw(d) << setfill(c) << c<<endl;
		a = a + 2;

	}

	cout << setw(25) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;


	
	
}