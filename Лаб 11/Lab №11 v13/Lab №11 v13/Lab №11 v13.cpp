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
//    cout << "������� ������ ������� ";
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
//    cout << "��������� ��������  " << count << endl;
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
// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.
