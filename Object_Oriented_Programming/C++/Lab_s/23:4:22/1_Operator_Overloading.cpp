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
    void operator -()
    {
        a = -a;
        b = -b;
    }
    void show()
    {
        cout<<a<<endl
        <<b<<endl;
    }
};
int main()
{
    A ob(6,7);
    -ob;
    ob.show();
    return 0;
}