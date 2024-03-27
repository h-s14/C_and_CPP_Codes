#include<iostream>
using namespace std;
int main()
{
    void max(int,int,int);
    int a,b,c;
    cin>>a>>b>>c;
    max(a,b,c);
    return 0;
}
void max(int a,int b,int c)
{
    if(a > b && a > c)
    {
        cout<<a<<" is the largest number\n";
    }
    else if(b > a && b > c)
    {
        cout<<b<<" is the largest number\n";
    }
    else
    {
        cout<<c<<" is the largest number\n";
    }
} 