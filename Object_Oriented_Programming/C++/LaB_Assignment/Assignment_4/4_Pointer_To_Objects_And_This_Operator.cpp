#include<iostream>
using namespace std;
class complex
{
    int real , img;
    int a;
    public:
    void getData()
    {
        cout<<"Enter The Real Part"<<endl;
        cin>>real;
        cout<<"Enter The Img Part"<<endl;
        cin>>img;
    }
    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }
};
int main()
{
    complex c1;
    complex *ptr = &c1;
    (*ptr).getData();
    (*ptr).display();
    complex *ptr1 =  new complex[4];
    ptr1->getData();
    ptr1->display();
    return 0;
}