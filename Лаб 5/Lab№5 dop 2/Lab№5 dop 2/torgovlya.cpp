#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    float q, p;
    int n=0;
    float procent = 0.03;
    cout << "План: ";
    cin >> q;
    cout << "Заработала за первый день: ";
    cin >> p;
    while (p<q)
    {
        p = p+(p * procent);
       
        n++;
    }
    cout << "Получила итого: " << p << std::endl;
    cout << "Количество дней " << n << " дней";
    return 0;
}