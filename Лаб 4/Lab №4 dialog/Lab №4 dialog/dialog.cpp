#include<iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	int k, l;
	cout << "Что хотите посмотреть?(1-мультик, 2-фильм): ";
	cin >> k;
	switch (k)
	{
	case 1:
	cout<<"Рекомендую посмотреть: Маша и Медведь"<<endl;
		
		break;
	case 2: 
		cout << "Рекомендую посмотреть: Шерлок Холмс "<<endl;
		
	
		  break;
	}
}