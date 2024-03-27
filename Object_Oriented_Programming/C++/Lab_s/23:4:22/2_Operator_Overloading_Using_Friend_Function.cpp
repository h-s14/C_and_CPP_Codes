#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A(int c = 0, int d = 0)
    {
        a = c;
        b = d;
    }
    friend void operator -(A &ob2);
    void show()
    {
        cout<<a<<endl
        <<b<<endl;
    }
};
void operator-(A &ob2)
{
    ob2.a = -ob2.a;
    ob2.b = -ob2.b;
}
int main()
{
    A ob(6,7);
    operator-(ob);
    ob.show();
    return 0;
}