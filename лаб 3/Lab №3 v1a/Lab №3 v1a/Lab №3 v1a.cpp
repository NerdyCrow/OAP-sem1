#include<iostream>
#include <iomanip> 
using namespace std;

int main() {
	char a, probel;
	probel = ' ';
	setlocale(LC_CTYPE,"Russian");
	cout << "Введите символ: ";
		cin>> a;
		cout << setw(20) << setfill(probel) << probel<<endl;

	cout << setw(6) << setfill(probel) << probel;
	cout << setw(5) << setfill(a) << a<<endl;

	cout << setw(4) << setfill(probel) << probel;
	cout << setw(9) << setfill(a) << a<<endl;

	cout << setw(3) << setfill(probel) << probel;
	cout << setw(11) << setfill(a) << a<<endl;

	cout << setw(2) << setfill(probel) << probel;
	cout << setw(13) << setfill(a) << a << endl;

	/*cout << setw(2) << setfill(probel) << probel;
	cout << setw(13) << setfill(a) << a << endl;

	cout << setw(1) << setfill(probel) << probel;
	cout << setw(15) << setfill(a) << a << endl;*/


}