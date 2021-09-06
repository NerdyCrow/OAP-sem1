#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
    return cos(x)+x-7 ;
}
double fs(double x)
{
    return -sin(x)+1;
}
double fs2(double x)
{
    return -cos(x);
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
double kasat(double(*g) (double), double(*gs) (double), double(*gs2) (double), double a, double b, double e)
{
    double x, x1;
    if (g(a) * gs2(a) > 0)
        x1 = a;
    else
        x1 = b;
    x = x1;
    do
    {
        x = x1;
        x1 = x - (g(x) / gs(x));
    } while (fabs(x1 - x) > e);
    return x1;
}
void main()
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, e;
    cout << "¬ведите a: "; cin >> a;
    cout << "¬ведите b: "; cin >> b;
    cout << "¬ведите  e "; cin >> e;
    cout << " –ешение методом дихотомии:" << dichotomya(&f, a, b, e) << endl;
    cout << " –ешение методом  касательных:" << kasat(&f, &fs, &fs2, a, b, e) << endl;
}




//cos(x)+x-7