#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    void setdata(int a)
    {
        this->a = a;
    }
    void getdata()
    {
        cout<<"Value of a is :"<<a<<endl;
    }
};
int main()
{
    demo a;
    a.setdata(4);
    a.getdata();
    return 0;
}