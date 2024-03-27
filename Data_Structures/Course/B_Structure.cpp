#include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;

};
int main()
{
    struct rectangle r;
    cout<<"Enter the length of Rectangle"<<endl;
    cin>>r.length;
    cout<<"Enter the breadth of Rectangle"<<endl;
    cin>>r.breadth;
    cout<<"Area of Rectangle is "<<(r.length*r.breadth)<<endl;
    return 0;
}