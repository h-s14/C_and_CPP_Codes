#include<iostream>
using namespace std;
int main()
{
    int n,i,j,num=1;
    cout<<"Enter The value Of N"<<endl;
    cin>>n;
    for(i=0 ; i < n ; i++)
    {
        for(j=0 ; j <= i ; j++)
        {
            cout<<num<<" ";
            num++;
        }
    cout<<"\n";
    }
    return 0;
}