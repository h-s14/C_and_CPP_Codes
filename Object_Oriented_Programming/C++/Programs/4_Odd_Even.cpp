#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    if(a%2 == 0)
    {
        cout<<a<<" is an even number\n";
    }
    else
    {
        cout<<a<<"is an odd number\n";
    }
    return 0;
}