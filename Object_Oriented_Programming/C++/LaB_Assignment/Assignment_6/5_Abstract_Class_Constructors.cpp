#include<iostream>
using namespace std;
class Base
{
    protected:
    int var_base;
    public:
    virtual void fun() = 0 ;
    Base()
    {
        cout<<"Constructor of Abstract Class\n";
    }
};
class Derived : public Base
{
    protected:
    int var_derived;
    public:
    Derived()
    {
        cout<<"Constructor of Derived Cladd\n";
    }
    void fun()
    {}
};
int main()
{
    Derived d1;
    return 0;
}