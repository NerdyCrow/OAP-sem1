#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
    return 2*x+pow(x,3)-7;
}
double fs(double x)
{
    return 3 * pow(x, 2) + 2;
}
double fs2(double x)
{
    return 6 * x;
}
double dichotomya(double(*g) (double), double a, double b, double e)
{
    while (fabs(a - b) > 2.0 * e)
    {
        double x = (a + b) / 2.0;
        if (g(x) * g(a) <= 0)
            b = x;
        else
            a = x;
    }
    return (a + b) / 2.0;
}

void main()
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, e;
    cout << "¬ведите a: "; cin >> a;
    cout << "¬ведите b: "; cin >> b;
    cout << "¬ведите  e "; cin >> e;
    cout << " –ешение методом дихотомии:" << dichotomya(&f, a, b, e) << endl;
   
}




//2x + x^3 Ц 7