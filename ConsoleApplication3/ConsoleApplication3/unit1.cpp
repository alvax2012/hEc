#include <iostream> 
#include "unit1.h"
using namespace std;

void prArr(int& n)
{
    //int n=222;
    n = 11;
    cout << "n=" << n << "\n";
    //return n;
}
int prArr1(int n)
{
    //int n=222;
    n = 11;
    cout << "n=" << n << "\n";
    return n;
}
int prArr2(int& n)
{
    //int n=222;
    n = 11;
    cout << "n=" << n << "\n";
    return n;
}