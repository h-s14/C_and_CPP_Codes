#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    void setData(int x , int y)
    {
        real = x ;
        img = y ;
    }
    void sum(complex cc1,complex cc2)
    {
        real = cc1.real + cc2.real;
        img = cc1.img + cc2.img;
    }
    complex sum2(complex x)
    {
        complex sum;
        sum.real = x.real + real;
        sum.img = x.img + real;
        return sum;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setData(1,2);
    c2.setData(3,4);
    c3.sum(c1,c2);
    c3.display();
    c1.sum2(c2);
    return 0;
}