//Selection Sort
#include<iostream>
using namespace std;

void print_array(int array[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<array[i]<<endl;
    }
}

void selection_sort(int array[],int size)
{
    for(int i = 0 ; i < size - 1 ; i++)
    {
        int min = i ;
        for(int j = i + 1 ; j < size ; j++)
        {
            if(array[j] < array[min])
            {
                min = j ;
            }
        }
        if( min != i)
        {
            swap(array[i],array[min]);
        }
    }
}

int main()
{
    int arr[6] = {7,4,10,8,3,1};
    int n = 6;
    selection_sort(arr,n);
    print_array(arr,n);
    return 0;
}