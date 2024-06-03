// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "unit1.h"
using namespace std;

int main()
{
    
    int n=777;
    int a[2]=()
    prArr(n);
    cout << "n=" << n << "\n";

    //void prArr();
    

    //std::cout << "\n Введите P "; std::cin >> p;

    /*int x, *y;
    y = &x;*/
   
    /*int x;
    int* y=&x;*/

    int x;
    int *y = &x;

    x = 11;
    std::cout << "x=" << x  << " &x=" << &x << "\n";
    *y = 7;
    std::cout << "*y=" << *y << "  y=" << y  << "\n";
}