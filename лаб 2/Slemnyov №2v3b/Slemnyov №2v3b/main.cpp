#include<iostream>;
using namespace std;
int main() {
	float y = 0.956;
	int n = 4;
	long double a = 5e-6,t,u,s;
	t = 1 / sqrt(y) + 14 * a;
	u = (t + 1) / (a + 2);
	s= log((2*n / 3) + exp(-n) / u);
	cout << "t=" << t << endl;
	cout << "u=" << u << endl;
	cout << "s=" << s << endl;


}