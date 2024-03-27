#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    void setData(int n1 , int n2)
    {
        real = n1;
        img = n2;
    }
    friend Complex sumComplex(Complex o1, Complex o2);
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }

};
Complex sumComplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setData((o1.real + o2.real),(o1.img + o2.img));
    return o3;
}
int main()
{
    Complex c1,c2,sum;
    c1.setData(1,4);
    c1.display();

    c2.setData(5,8);
    c2.display();

    
    
    sum = sumComplex(c1 , c2);
    sum.display();
    return 0;
}