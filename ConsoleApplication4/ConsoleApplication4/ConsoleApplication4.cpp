#include<iostream>
#include "unit1.h"

using namespace std;
//int P, K, pr, s;

int main()
{
    setlocale(LC_ALL, "rus");

    int a[4];
    // Ввод элементов массива
    for (int i = 0; i <= 3; i++)
    {
        cout << "\n Введите a" << i << "\n";
        cin >> a[i];
    }

    //Вывод элементов массива и фунций задания 11 и 12
    for (int i = 0; i <= 3; i++)
    {
        cout << "a" << i << "=" << a[i] << "\n";
        cout << "fn11" << " = " << fn11(a[i]) << "\n";
        cout << "fn12" << " = " << fn12(a[i]) << "\n";
    }

    fn23();
    fn24();
    
    return 0;
}