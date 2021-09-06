//
//#include <iostream>
//#include<time.h>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int n=5;
//    srand((unsigned)time(NULL));
//    unsigned int const a = 99;
//    int x[a] = { 1,2,2,3,4 };
//    int* pt,*pt2;
//    cout << "Введите размер массива ";
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        pt = &x[i];
//        *pt = rand() % 100;
//        cout << *pt << " ";
//    }
//    int count = 1;
//    for (int i = 0; i < n; i++)
//    {
//        pt = &x[i];
//        int j = 0;
//       
//       
//            pt2 = &x[j];
//        
//
//        while (j < i && *pt2 != *pt) {
//            ++j;
//            pt2 = &x[j];
//            count += j == i;
//        }
//    }
//    cout << endl;
//    cout << "Различных элеметов  " << count << endl;
//    
//  
//}



#include <iostream>
#include <locale>

int main()
{
	using namespace std;
	const int MaxSize = 30;
	int x[MaxSize], y[MaxSize], k, n, z[MaxSize], l = 0, j = 0;
	cout << "k = ";
	cin >> k;
	cout << "n = ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (int i = 0; i < k; i++)
	{
		x[i] = rand() % 10;
		cout << *(x + i) << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		y[i] = rand() % 10;
		cout << *(y + i) << " ";
	}
	for (int i = 0; i < k; i++)
	{
		/*if (j < n)
		{
			if (x[i] == y[j])
			{
				z[l] = x[i];
				l++;
				break;
			}
			j++;
		}*/
		for (int j = 0; j < n; j++)
		{
			if (x[i] == y[j])
			{
				z[l] = x[i];
				l++;
				break;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < l; i++)
		cout << z[i] << " ";
	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
