#include<iostream>
#include "unit1.h"
#include "const.h"

using namespace std;
int P, K, pr, s;

int main()
{    setlocale(LC_ALL, "rus");
   
    int a[constants::N];
    // Ввод элементов массива
    for (int i = 0; i <= constants::N -1; i++)
    {
        cout << "\n Введите a" << i<<"\n";
        cin >> a[i];
    }
    cout << "Минимальный элемент массива= " << minArr(a, constants::N) << "\n";

    //Функция находит произведение нечетных чисел и минимальн. элемент массива. И меняет значение минимальн. элемента на произв. нечетн. чисел.
    prArr(a, constants::N);

    //Вывод элементов массива
    for (int i = 0; i <= constants::N - 1; i++)
    {
        cout << "a" << i << "=" << a[i] << "\n";
    }





    cout << "\n Введите размер, число P и K: \n";
    //cin>>N;
    cout << "\n Введите P "; cin >> P;
    cout << "\n Введите K "; cin >> K;
    // Ввод элементов массива
    for (int i = 0; i <= constants::N - 1; i++)
    {
        cout << "\n Введите a" << i << "\n";
        cin >> a[i];
    }
    
    s = sumArr(a, constants::N, K);
    cout << "Сумма " << s << "\n";

    pr = prfArr(a, constants::N, P);
    cout << "Произведение "<<pr<<"\n";
    
    if (pr > s)
    {
        cout << "Произведение больше";
    }
    else
    {
        cout << "Сумма больше";
    }
    return 0;
}