#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	for (int k = 1; k < 10; ++k)
		for (int o = 0; o < 10; ++o)
			for (int t = 0; t < 10; ++t) {
				if ((k * 100 + t * 10 + o) + (k * 100 + o * 10 + t) == (t * 100 + o * 10 + k)) {
					cout << "Имеется одно решение:" << k * 100 + o * 10 + t << endl;
				}
				else
				{
					cout << "Решений КОТ+КОТ=ТОК  не существует" << endl;
					
					return 0;
				}
			}
}
