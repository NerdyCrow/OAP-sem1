#include<iostream>
using namespace std;
int p, y, q;
float result = 1;
float mass[6]{ 3,-2,0.9,0.5,1 };
int main() {
	p = mass[0];
	for (int i = 0; i < 6; i++)
	{
		if (p > mass[i]) { p = mass[i]; }
			
	}
	for (int n = 0; n <5 ; n++)
	{
	
		result=result*((mass[n] - 5) + p);
	}
	cout << result << endl;

}