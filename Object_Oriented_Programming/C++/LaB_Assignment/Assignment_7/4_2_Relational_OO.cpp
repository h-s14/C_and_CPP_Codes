#include<iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;
    public:
    void getdata()
    {
        cin>>feet>>inches;
    }
    void display()
    {
        cout<<feet<<" ft "<<inches<<" in "<<endl;
    }
    friend bool operator ==  (Distance d1 , Distance d2);
    friend bool operator <   (Distance d1 , Distance d2);
    friend bool operator <=  (Distance d1 , Distance d2);
    friend bool operator >   (Distance d1 , Distance d2);
    friend bool operator >=  (Distance d1 , Distance d2);
};
bool operator == (Distance d1 , Distance d2)
{
    if(d1.feet == d2 .feet && d1.inches == d2.inches)
    {
        return true;
    } 
    else
    {
        return false;
    }
}
bool operator < (Distance d1 , Distance d2)
{
    if(d1.feet < d2 .feet && d1.inches < d2.inches)
    {
        return true;
    } 
    else
    {
        return false;
    }
}
bool operator <= (Distance d1 , Distance d2)
{
    if(d1.feet <= d2 .feet && d1.inches <= d2.inches)
    {
        return true;
    } 
    else
    {
        return false;
    }
}
bool operator > (Distance d1 , Distance d2)
{
    if(d1.feet > d2 .feet && d1.inches > d2.inches)
    {
        return true;
    } 
    else
    {
        return false;
    }
}
bool operator >= (Distance d1 , Distance d2)
{
    if(d1.feet >= d2 .feet && d1.inches >= d2.inches)
    {
        return true;
    } 
    else
    {
        return false;
    }
}
int main()
{
    Distance ob1 , ob2;
    ob1.getdata();
    ob2.getdata();
    if (ob1 == ob2)
    {
        cout<<"Distance 1 is equal to Distance 2"<<endl;
    }
    else if (ob1 < ob2)
    {
        cout<<"Distance 1 is less than Distance 2"<<endl;
    }
    else if (ob1 <= ob2)
    {
        cout<<"Distance 1 is less than equal to Distance 2"<<endl;
    }
    else if (ob1 > ob2)
    {
        cout<<"Distance 1 is greater than Distance 2"<<endl;
    }
    else if (ob1 >= ob2)
    {
        cout<<"Distance 1 is greater than equal to Distance 2"<<endl;
    }
    return 0;
}