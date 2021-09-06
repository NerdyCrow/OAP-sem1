#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    int count[10] = { 0,0,0,0,0,0,0,0,0,0 };
    const int N = 100;
    char str[N];
    cout << "Введите предложение: ";
    cin.getline(str, N);
    unsigned int m;
    m = strlen(str);
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        cout << str[i]; //A, E, I, O, U 
        if (str[i] == 'a' || str[i] == 'A'
            || str[i] == 'e' || str[i] == 'E'
            || str[i] == 'i' || str[i] == 'I'
            || str[i] == 'o' || str[i] == 'O'
            || str[i] == 'u' || str[i] == 'U')
        {
            count[k]++;
        }
        if (str[i] == ' ')
        {
            k++;
        }
    }

    cout << endl;
    int max = count[0];
    int word = 0;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            word = i;
        }
    }
    cout << "Максимальное число гласных: " << max << endl;
    cout << "Слово под номером: " << word + 1 << endl;
}