#include<iostream>
using namespace std;
template<class A,class B>
void show(A a,B b)
{
    cout<<a<<endl<<b<<endl;
}
int main()
{
    show(100,"hello world");
    show('k',1500);
    show(1.23,2987);
    return 0;
}