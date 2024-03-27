#include<iostream>
using namespace std;
void f(int a)
{
    cout<<"Integer funciton"<<endl;
}
void f(double a)
{
    cout<<"Double function"<<endl;
}
void f(float a)
{
    cout<<"Float function"<<endl;
}
int main()
{
    int a ,b;
    f(2);
    f(2.5);
    f(2.5f);
    return 0;
}