#include<iostream>
using namespace std;
int main() {
	int n=2;
	for (int i = 1; i <1000; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) { cout << i << endl; n++; }
		if (n >7) { break; }
		
	}


}