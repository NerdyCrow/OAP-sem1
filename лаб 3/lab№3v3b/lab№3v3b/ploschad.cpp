#include<iostream>
using namespace std;
 
int main() {
	long double n,s, l, h,p;
	setlocale(LC_CTYPE, "rus");
	cout << "Во сколько раз больше: ";
	cin >> n;
	h = (2 * n + 2) / n;
	l = h * n;
	s = l * h;
	p = (l + h) * 2;
	cout <<"Высота равна = "<< h << endl;
	cout <<"Длина равна = "<< l << endl;
	cout <<"Площадь равна = "<<s<<endl;
	cout <<"Периметр равен = "<<p;
}