#include <iostream> 
#include "unit1.h"


using namespace std;

//������� ������� ����������� ������� �������
int minArr(int a[], int n)
{
    int min;
    min = a[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
//������� ������� ������������ �������� ����� � ���������. ������� �������. � ������ �������� ���������. �������� �� ������. ������. �����.
void prArr(int a[], int n)
{
    int m;
    int min;
    int pr;
    m = 0;
    min = a[0];
    pr = 1;
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
    cout << "������������ ������. =" << pr << "\n";
    
}
//������� ������� ����� K ��������� ��������� �������
int sumArr(int a[], int n, int k)
{
    int s;
    s = 0;
    for (int i = n - k; i <= n - 1; i++)
    {
        s = s + a[i];
    }  
    return s;
}
//������� ������� ������������ ������ P ��������� �������
int prfArr(int a[], int n, int p)
{
    int pr;
    pr = 1;
    for (int i = 0; i <= p - 1; i++)
    {
        pr = pr * a[i];
    }
    return pr;
}