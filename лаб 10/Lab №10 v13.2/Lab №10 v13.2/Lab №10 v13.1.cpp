#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int A, position, n, razn, B;
    char tmp[33];
    cout << "������� A" << endl;
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << tmp << endl;
    cout << "������� ��������� �������" << endl;
    cin >> position;
    cout << "������� ����� �����" << endl;
    cin >> n;
    razn = position - n;
    while (position >= razn)
    {
        A |= 1 << position;
        _itoa_s(A, tmp, 2);
        position--;
    }

    cout << tmp << endl;
}