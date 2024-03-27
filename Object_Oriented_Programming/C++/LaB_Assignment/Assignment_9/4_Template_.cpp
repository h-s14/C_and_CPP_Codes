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
    show(3,3);
    return 0;
}