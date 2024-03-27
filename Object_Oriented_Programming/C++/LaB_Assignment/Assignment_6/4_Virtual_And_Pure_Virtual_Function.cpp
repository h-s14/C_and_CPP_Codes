#include<iostream>
using namespace std;
class Base
{
    int var_base;
    public:
    virtual void display() //virtual function
    {
        cout<<"Function of Base Class"<<endl;
    }
};
class Derived : public Base
{
    int var_derived;
    public:
    void display()
    {
        cout<<"Function of Derived Class"<<endl;
    }
};
class Base1 //abstract class
{
    int var_base1;
    public:
    virtual void display2() = 0 ; //pure virtual function
};
class Derived1
{
    int var_derived1;
    public:
    void display2()
    {
        cout<<"Function of Derived Class from Abstract Base Class"<<endl;
    }

};
int main()
{
    Base b1;
    Derived d1 ;
    Base *b = &d1 ;
    b -> display() ;
    Derived1 dd1;
    dd1.display2();
    return 0;
}