#include<iostream>
using namespace std;
void rot(int arr[10],int n)
{
    int j = arr[n];
    for(int i = n-1; i >= 0 ; i--)
    {
        arr[i] = arr [i-1];
    }
}
int main()
{
    int n,arr1[10];
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr1[i];
    }
    int temp = arr1[n-1];
    
    rot(arr1,n);

    arr1[0]=temp;

    cout<<endl<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr1[i]<<endl;
    }
    return 0;
}