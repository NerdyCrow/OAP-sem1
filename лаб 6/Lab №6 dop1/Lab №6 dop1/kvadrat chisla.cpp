#include <iostream>
using namespace std;
int k;

int main() {
	for (int i = 11; i < 31; i++) {
		k = pow(i, 2);
		if (k / 100 < (k % 100) / 10 && (k % 100) / 10 < (k % 100) % 10)
		{
			for (int j = 2; j < i - 1; j++)
			{
				if (i%j==0 )
				{
					
					break;
					 }
				else
				{
					cout << k <<" "<<i<< endl;
					break;
				}
				}
			}
		}
	}
