#include<iostream>
using namespace std;
int main()
{
    int a,b,i,j,n,arr[30];
    cout<<"Enter The Value of N\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = i+1 ; j < n ; j++)
        {
            if(arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    cout<<"The Sorted Numbers are\n";
    for(i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}