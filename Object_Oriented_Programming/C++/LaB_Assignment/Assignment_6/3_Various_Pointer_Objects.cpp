#include<iostream>
using namespace std;
class A
{
    public:

};
class B : public A
{
    public:
};
int main()
{
    A *a = new A();
    A *b = new B();
    // B *c = new A(); {can't be done}
    B *d = new B();
    return 0;
}