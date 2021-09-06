#include<iostream>
#include <iomanip> 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << probel << endl;
	//1
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c;
	cout << setw(11) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;
	//2
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	//3
	cout << setw(6) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;
	//4
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	//5
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(39) << setfill(c) << c << endl;
	//6
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(41) << setfill(c) << c << endl;
	//7
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(43) << setfill(c) << c << endl;

	/* cout << setw(2) << setfill(probel) << probel;
	cout << setw(43) << setfill(c) << c << endl;

	cout << setw(2) << setfill(probel) << probel;
	cout << setw(43) << setfill(c) << c << endl;

	cout << setw(3) << setfill(probel) << probel;
	cout << setw(41) << setfill(c) << c << endl;

	cout << setw(4) << setfill(probel) << probel;
	cout << setw(39) << setfill(c) << c << endl;

	cout << setw(5) << setfill(probel) << probel;
	cout << setw(37) << setfill(c) << c << endl;

	cout << setw(6) << setfill(probel) << probel;
	cout << setw(35) << setfill(c) << c << endl;

	cout << setw(7) << setfill(probel) << probel;
	cout << setw(33) << setfill(c) << c << endl;
	*/

	int a = 3;
	int d = 41;
	int b;
	for (b = 41; b > 0; b=b-2)
	{

		cout << setw(a) << setfill(probel) << probel;
		cout << setw(b) << setfill(c) << c << endl;
		a = a + 1;
		d = d - 2;




	}
	
}