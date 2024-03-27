#include<iostream>
using namespace std;
int main()
{
    int n , i , j;
    cout<<"Enter The Value Of N"<<endl;
    cin>>n;
    for(i = 1 ; i <= n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if(j>=n-i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
    cout<<"\n";
    }

    return 0;
}