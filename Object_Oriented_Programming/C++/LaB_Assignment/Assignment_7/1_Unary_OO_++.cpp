#include<iostream>
using namespace std;
class A
{
    int var;
    public:
    void getdata()
    {
        cin>>var;
    }
    void display()
    {
        cout<<var<<endl;
    }
    void operator ++ () //Pre-Increment
    {
        ++var;
    }
    A operator ++ (int) //Post-Increment 
    {
        A temp;
        var++;
        temp.var = var ;
        return temp;
    }

};
int main()
{
    A ob1,ob2,ob3;
    ob1.getdata();
    ob2.getdata();
    ++ob1;
    ob2++;
    ob1.display();
    ob2.display();
    ob3 = ob1++;
    ob3.display();
    return 0;
}