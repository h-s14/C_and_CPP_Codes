#include<iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;
    public:
    Distance()
    {

    }
    Distance(int a , float b)
    {
        feet = a ;
        inches = b ;
    }
    void getdata()
    {
        cin>>feet>>inches;
    }
    void display()
    {
        cout<<feet<<endl<<inches<<endl;
    }
    Distance operator -()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet,inches);
    }
};
int main()
{
    Distance ob1;
    ob1.getdata();
    -ob1 ;
    ob1.display();
    return 0;
}