// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
//#include<conio.h>
using namespace std;
int N, P, K, pr, s;
int main()
{
    setlocale(LC_ALL, "rus");
    

    cout << "\n Введите размер массива, число P и K: \n";
    //cin>>N;
    cout << "\n Введите P "; cin >> P;
    cout << "\n Введите K "; cin >> K;
    const int N = 3;
    int a[N];
    cout << "\n элементы массива \n";
    for (int i = 0; i <= N-1; i++)
    {
        cout << "\n Введите a" << i<<"\n";
        cin >> a[i];
        //cout << a[i];
    }

    pr = 1;
    for (int i = 0; i <= P - 1; i++)
        pr = pr * a[i];
    
    s = 0;
    for (int i = N - K; i <= N - 1; i++)
        s = s + a[i];

    cout << "Сумма " << s << "\n";
    cout << "Произведение "<<pr<<"\n";
    if (pr > s)
    {
        cout << "Произведение больше";
    }
    else
    {
        cout << "Сумма больше";
    }
    //std::cout <<  std::endl; //"Hello World!\n";
    return 0;
}