//Bubble Sort
#include<iostream>
using namespace std;

void bubble_sort(int size , int array[])
{
    for(int i = 0 ; i < size-1 ;i++)
    {
        for(int j = 0 ; j < size-1-i ; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void print_array(int array[], int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout<<array[i]<<endl;
    }
}

int main()
{
    int arr[5] = {15,16,6,8,5};
    int n = 5;
    bubble_sort(n,arr);
    return 0;
}