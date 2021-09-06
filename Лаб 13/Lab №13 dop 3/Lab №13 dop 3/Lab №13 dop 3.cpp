#include <iostream>
#include<time.h>;
void main()
{
    srand(NULL(rand));
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    const int  size = 6;
   
    int arr[6][6] = { 1,2,3,4,5,6,
                    2,0,3,4,25,6,
                    3,3,3,7,5,6,
                    4,4,-6,4,15,6,
                    5,5,0,4,9,6,
                    6,6,3,4,20,6 };
    int i, j, k, sum = 0;
    cout << "Введите элементы массива" << endl;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
           
            cout << arr[i][j] << " ";
      
        }
        cout << endl;
    }
    int z = 0;
    
    for (int i = 0; i < size; i++)
    {
        k = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] == arr[j][i])
                k++;
        }
        if (k == size) { z = i + 1; }
            

    }
    cout << "Столбец и строка совпадают: " << z << " " << endl;
    cout << endl;
   
    for (int i = 0; i < size; i++)
    {
        k = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] < 0)
                k++;
        }
        if (k > 0)
        {

            for (int j = 0; j < size; j++)
            {
                sum += arr[i][j];
            }
            cout << "Строка содержащая отрицательное число: " << i + 1 << endl;
            cout << "Сумма элеметов этой строки: " << sum << endl;
            cout << endl;
        }
    }
    
}