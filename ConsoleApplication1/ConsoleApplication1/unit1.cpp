#include <iostream> 
#include "unit1.h"
#include "const.h"

using namespace std;

//Функция находит минимальный элемент массива
int minArr(int a[], int n)
{
    int min=a[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
//Функция находит произведение нечетных чисел и минимальн. элемент массива. И меняет значение минимальн. элемента на произв. нечетн. чисел.
//void prArr(int a[], int n)
void prArr(int(&a)[constants::N], int n)
{
    int m=0;
    int min=a[0];
    int pr=1;
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            m = i;
        }

        if (i % 2 != 0)
        {
            pr = pr * a[i];
        }
    }
    a[m] = pr;
    cout << "Произведение нечетн. =" << pr << "\n";
    
}
//Функция находит сумму K последних элементов массива
int sumArr(int a[], int n, int k)
{
    int s=0;
    for (int i = n - k; i <= n - 1; i++)
    {
        s = s + a[i];
    }  
    return s;
}
//Функция находит произведение первых P элементов массива
int prfArr(int a[], int n, int p)
{
    int pr=1;
    for (int i = 0; i <= p - 1; i++)
    {
        pr = pr * a[i];
    }
    return pr;
}