#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cout<<"Enter the no. of times the output to be printed\n";
    cin>>a;
    for(i=0;i<a;i++)
    {
        cout<<"Output "<<i+1<<"\n";
    }
    return 0;
}