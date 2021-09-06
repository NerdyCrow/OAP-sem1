#include<iostream>
#include <iomanip> 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c;
	cout << setw(15) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c<<endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(25) << setfill(c) << c;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(25) << setfill(c) << c<<endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(65) << setfill(c) << c<<endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(65) << setfill(c) << c << endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(65) << setfill(c) << c << endl;
	cout << setw(25) << setfill(probel) << probel;
	cout << setw(65) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(55) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(45) << setfill(c) << c << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(35) << setfill(c) << c << endl;
	cout << setw(45) << setfill(probel) << probel;
	cout << setw(25) << setfill(c) << c << endl;
	cout << setw(50) << setfill(probel) << probel;
	cout << setw(15) << setfill(c) << c << endl;
	cout << setw(55) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;




}
	
