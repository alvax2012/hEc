
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;
int N,P,K,pr,s;
int main()
{
    cout<<"Введите размер массива, число Р и К: ";
    cin>>N;
    cin>>P;
    cin>>K;
    int a[N];
    for(int i=1;i<=N;i++)
    cin>>a[i];
    pr=1;
    for(int i=N-P;i<=N;i++)
    pr=pr*a[i];
    s=0;
    for(int i=N-K;i<=N;i++)
    s=s+a[i];
    if (pr>s)
    {
        cout<<"Произведение больше";
    }
    else
    {
        cout<<"Сумма больше";
    }
    return 0;
}
