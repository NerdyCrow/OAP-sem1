#include <iostream>
using namespace std;
int main()
{
	char k[33];
	int A;
	cin >> A;
	int n = 0;
	_itoa_s(A, k, 2);
	cout << k << endl;
	for (int i = 5; i <= 10; ++i)
	{
		if ((A >> i) & 1 == 1)
		{
			_itoa_s((A >> i) & 1, k, 2);
			++n;
		}
	}
	cout << n <<endl;
}