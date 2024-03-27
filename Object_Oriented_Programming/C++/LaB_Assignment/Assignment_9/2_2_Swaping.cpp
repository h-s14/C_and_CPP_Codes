#include<iostream>
using namespace std;
template<class T1 , class T2>
void Swap(T1 &x , T2 &y)
{
    T1 a;
    T2 b;
    a = y;
    b = x;
    y = a;
    x = b;
}
int main()
{
    int a = 10;
    float b = 20.23;
    cout<<"Value of A and B before swaping data types are "<<a<<" and "<<b<<endl;
    Swap(a,b);
    cout<<"Value of A and B after swaping data types are "<<a<<" and "<<b<<endl;
    return 0;
}
