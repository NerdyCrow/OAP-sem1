#include<iostream>
using namespace std;


int main() {
	for (int i = 1; i < 9; i++)
		for (int j = 0; j < 9; j++)
			for (int k = 0; k < 9; k++)
				for (int l = 0; l < 9; l++)
					for (int z = 0; z < 9; z++)
						
					for (int m = 0; m < 9; m++) {

						
						if ( (i+j+k+l+z+m)%7 == 0) { cout << m+z*10+l*100+k*1000+j*10000+i*100000 << endl;
 }
					}
}