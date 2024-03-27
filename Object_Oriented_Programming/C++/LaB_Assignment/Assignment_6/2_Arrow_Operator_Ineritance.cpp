#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void getdata()
    {
        cin>>a;
    }
    void display()
    {
        cout<<a;
    }
};
class B : public A
{
    int b;
    public:
    void input()
    {
        cin>>b;
    }
    void display()
    {
        cout<<b;
    }
};
int main()
{
    A ob1, *p;
    B ob2, *q;
    p = &ob1;
    q = &ob2;
    p -> getdata();
    q -> input();
    p -> display();
    q -> display();
    return 0;
}