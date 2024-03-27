#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
    int a,b;
    cout<<"Enter The Numbers\n";
    cin>>a>>b;
    sum(a,b);
    return 0;
}
void sum(int a,int b)
{
    int c;
    c = a+b;
    cout<<"Sum of Two Numbers is "<<c<<"\n";
}