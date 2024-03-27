#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter The Value Of N"<<endl;
    cin>>n;
    for(i = n ; i >= 1 ; i--)
    {
        for(int j = 1 ; j <= i ; j++)
        {
        cout<<"* ";
        }
    cout<<"\n";
    }
    return 0;
}