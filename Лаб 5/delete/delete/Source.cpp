#include<iostream>
using namespace std;
int b, c, d, e,q, f, g;

int main() {
	for (int a = 0; a < 999999; a++) {
		f = a / 999999 + 100000;
		q = a + 1;
		for (q = 0; q < 999999; q++) {
			g= q / 999999 + 100000;
			if ((g + q) % 7 == 0 && (f + a) % 7 == 0) {
				cout << g + q << " " << f + a << endl;
			}
		}
		
	}


}