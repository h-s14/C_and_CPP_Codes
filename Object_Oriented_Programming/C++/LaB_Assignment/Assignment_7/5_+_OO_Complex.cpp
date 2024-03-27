#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    void getdata()
    {
        cin>>real>>img;
    }
    void display()
    {
        cout<<real<<"+"<<" i"<<img<<endl;
    }
    Complex operator +(Complex const &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.getdata();
    c2.getdata();   
    c3 = c1 + c2;
    c3.display();
    return 0;
}