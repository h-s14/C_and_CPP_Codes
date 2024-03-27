#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter The Value Of N"<<endl;
    cin>>n;
    for(i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
        cout<<i<<" ";
        }
    cout<<"\n";
    }
    return 0;
}