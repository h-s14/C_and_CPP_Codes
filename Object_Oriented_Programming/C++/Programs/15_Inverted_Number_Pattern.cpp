#include<iostream>
using namespace std;
int main()
{
    int n,i,j,num;
    cout<<"Enter The Value Of N"<<endl;
    cin>>n;
    for(i = 1 ; i <= n ; i++)
    {
        num = 1;
        for( j = n ; j >= i ; j--)
        {
            cout<<num<<" ";
            num ++;
        }
    cout<<endl;
    }
    return 0;
}