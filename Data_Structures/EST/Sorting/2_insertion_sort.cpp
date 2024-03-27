//Insertion Sort
#include<iostream>
using namespace std;
void insertion_sort(int n, int arr[])
{
    int j = 0;
    for(int i = 1 ; i < n ; i++)
    {
        int temp = arr[i];
        j=i;
        while(j>0 && arr[j-1]>temp){
            arr[j]=arr[j-1];
            j=j-1;
        }
        arr[j] = temp;
    }
}

void print_array(int n , int arr[])
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[6]= {5,4,10,1,6,2};
    int n = 6;
    insertion_sort(n,arr);
    print_array(n,arr);
    return 0;
}