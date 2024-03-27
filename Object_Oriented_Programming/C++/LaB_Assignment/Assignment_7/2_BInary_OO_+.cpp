#include<iostream>
using namespace std;
class Distance
{
    int x,y;
    public:
    void getdata()
    {
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
    Distance operator +(Distance obb1)
    {
        Distance obb2;
        obb2.x = x + obb1.x ;
        obb2.y = y + obb1.y ;
        return obb2;
    }
};
int main()
{
    Distance ob1,ob2,ob3;
    ob1.getdata();
    ob2.getdata();
    ob3 = ob1 + ob2;
    ob3.display();
    return 0;
}