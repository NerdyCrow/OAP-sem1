#include <iostream>
#include <math.h>
using namespace std;
int as(int n, ...)
{
     int* p = &n;
     
     int u;
     int k;
    u = n;
    

        k = *(p++);
        
        
        cout <<k << endl;
    
    cout << endl;
    return 0;
}
int main()
{
    as(6, 4, 5, 1, 20, 3, 0);
}