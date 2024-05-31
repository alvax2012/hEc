// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int p, k, pr, s;

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