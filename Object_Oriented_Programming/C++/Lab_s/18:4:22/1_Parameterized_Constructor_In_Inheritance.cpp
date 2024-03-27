#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int a)
    {
        cout<<"Cons of A is called"<<endl;
    }
};
class B : public A
{
    int b;
    public:
    B(int a, int b):A(a)
    {
        cout<<"Cons of B is called"<<endl;
    }
};
class C : public B 
{
    int c;
    public:
    C(int a , int b, int c) : B(a,b)
    {
        cout<<"Cons of C is called"<<endl;
    }
};
int main()
{
    C ob1(2,3,4);
    return 0;
}