#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    float q, p;
    int n=0;
    float procent = 0.03;
    cout << "����: ";
    cin >> q;
    cout << "���������� �� ������ ����: ";
    cin >> p;
    while (p<q)
    {
        p = p+(p * procent);
       
        n++;
    }
    cout << "�������� �����: " << p << std::endl;
    cout << "���������� ���� " << n << " ����";
    return 0;
}