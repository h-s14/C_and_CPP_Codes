#include<iostream>
using namespace std;
template<class A>
void bubbleSort(A a[] , int n)
{
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = n-1 ; i < j ; j--)
        {
            if(a[j]<a[j-1])
            swap(a[j], a[j-1]);
        }
    }
}
int main()
{
    int arr[10] = {5,4,3,2,1,6,7,8,9,2};
    bubbleSort(arr, 10);
    for( int i = 0 ; i < 10 ; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}