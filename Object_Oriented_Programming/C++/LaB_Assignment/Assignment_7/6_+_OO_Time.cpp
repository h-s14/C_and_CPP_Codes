#include<iostream>
using namespace std;
class Time
{
    int h,m,s;
    public:
    Time()
    {
    }
    Time(int a, int b, int c)
    {
        h = a;
        m = b;
        s = c;
    }
    void display()
    {
        cout<<h<<" Hrs "<<m<<" min "<<s<<" s "<<endl;
    }
    friend Time operator+(Time ob1 , Time ob2);
};
Time operator+(Time ob1 , Time ob2) 
{
    Time temp;
    temp.h = ob1.h + ob2.h;
    temp.m = ob1.m + ob2.m;
    temp.s = ob1.s + ob2.s;
    return temp;
}
int main()
{
    Time t1(5,15,34) , t2(9,35,58) , t3;
    t3 = t1 + t2 ;
    t3.display();
    return 0;
}