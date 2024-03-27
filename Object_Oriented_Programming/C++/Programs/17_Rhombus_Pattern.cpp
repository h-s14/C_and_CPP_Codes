#include<iostream>
using namespace std;
int main()
{
    int n ,i ,j,k;
    cout<<"Enter The value Of N"<<endl;
    cin>>n;
    for(i = 1 ;i <= n ; i++)
    {
        for(j = n ; j > i ; j--)
        {
            cout<<" ";
        }
        for(k = 1 ; k <= n ; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}