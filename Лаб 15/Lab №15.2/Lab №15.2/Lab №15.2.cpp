
#include <iostream>
using namespace std;
char* udal(char* a)
{
    setlocale(LC_CTYPE, "rus");



    for (int i = 0; a[i] != 0; i++)
    {

        if (a[i] == '"') {
            for (int j = i; a[j] != 0; j++)
            {

                i++;
                if (a[i] == '"') {
                    i++;
                    break;
                }

            }


        }
        printf("%c", a[i]);
    }
    return a;
}
void main()
{
    setlocale(LC_CTYPE, "Russian");
    char* s1 = new char[256];

    cout << "¬ведите текст: ";
    cin.getline(s1, 1024);;

    char* r = udal(s1);

}


//»з текста удалить те его части, которые заключены в кавычки (вместе с кавычками).
