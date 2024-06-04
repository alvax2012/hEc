#include <iostream> 
#include "unit1.h"

using namespace std;


//Функция к заданию 11
double fn11(double x)
{
    if (x < 5)
    {
        return x;
    }

    if ((x >= 5) && (x <= 10))
    {
        return pow(x, 2);
    }

    if (x > 10)
    {
        return pow(x, 3);

    }
}

//Функция к заданию 12
double fn12(double x)
{
    if (x <= 2)
    {
        return x-1;
    }

    if ((x > 2) && (x <= 3))
    {
        return pow(x, 2) + 2;
    }

    if (x > 3)
    {
        return pow(x, 3) + 3;

    }
}
//Функция к заданию 23
void fn23()
{
    double a[10], y, x;
    int i = 0;
    for (int x = 30; x <= 90; x += 15)
    {
        a[i] = x;
        i = i + 1;
    }
    int n = i;


    int s = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        s = s + pow(i + 1, 2);
    }
    cout << "s=" << s <<  "\n";

    int p = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        p = p * (i - 3);
    }
    cout << "p=" << p << "\n";

    for (int i = 0; i <= n-1; i++)
    {
        x = ((a[i]-1) / 180) * 3.14;
        y = pow(sin(x-1), 2);

        cout << "x=" << x << "  Sin(x-1)^2 = " << y << "\n";
    }

}

//Функция к заданию 24
void fn24()
{
    double a[10],y;
    int i = 0;
    for (int x = 3; x <= 20; x += 2)
    {
        a[i] = x;
        i = i + 1;
    }
    int n = i;

    int s = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        s = s + pow(i, 3);
    }
    s = 3 * s;
    cout << "s=" << s << "\n";

    int p = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        p = p * pow(a[i],i);
    }
    cout << "p=" << p << "\n";


    for (int i = 1; i <= n - 1; i++)
    {
        y = log(pow(a[i], 2));
        cout << "log(x^2)=" << y << "\n";
    }
    


}


