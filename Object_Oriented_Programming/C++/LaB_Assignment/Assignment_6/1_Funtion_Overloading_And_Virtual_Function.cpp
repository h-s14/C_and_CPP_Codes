#include<iostream>
using namespace std;
class A
{
    public:
    void calculate(int x , int y ) //gives sum if two elements are passed
    {
        cout<< x+y <<endl;
    }
};
class B : public A
{
    public:
    void calculate(int z) //gives square if single element is passed
    {
        cout<< z*z <<endl ;
    }
};
int main()
{
    A ob1;
    B ob2;
    ob1.calculate(4,5);
    ob2.calculate(4);
    return 0;
}