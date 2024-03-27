//For Binary Search the array should be sorted
#include<iostream>
using namespace std;
int binary_s(int num, int size, int ar[])
{
    int right = size - 1 ,
    left = 0,
    mid = (left+right) / 2;
    while(left<right)
    {
        if(num == ar[mid])
        {
            return mid;
            
        }
        else if(num < ar[mid])
        {
            right = mid-1;
        }
        else if(num > ar[mid])
        {
            left = mid + 1;
        }
        else
        {
            return -1;
        }
    }
    
}
int main()
{
    int x,arr[8]={5,15,30,35,40,42,57,67};
    int num, size = (sizeof(arr)/sizeof(int));
    cout<<"Enter the number you want to search"<<endl;
    cin>>num;
    x = binary_s(num, size, arr);
    if(x!=-1)
    {
        cout<<num<<" is present at index"<<x<<endl;
    }
    else
    {
        cout<<num<<" is not present in the array"<<endl;
    }
    return 0;
}