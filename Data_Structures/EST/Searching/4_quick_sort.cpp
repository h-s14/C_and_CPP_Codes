//Quick Sort
#include<iostream>
using namespace std;

int partition(int array[], int size, int n)
{
    int pivot =array[n];

    int count = 0;
    for(int i = size+1 ; i <= n ; i++)
    {
        if(array[1] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = size + count;
    swap(array[pivotIndex],array[size]);

    int i = size, j = n;
    while (i<pivotIndex && j > pivotIndex)
    {
        while(array[i] < pivot)
        {
            i++;
        }
        while(array[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(array[i++], array[j--]);
        }
    }
    

}

void quick_sort(int array[], int size, int a)
{
    if(size >= a)
    {
        return;
    }

    int p = partition(array, size, a);
    quick_sort(array,size,p-1);
    quick_sort(array, p+1, a);

}

void print_array(int array[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout<<array[i]<<endl;
    }
}

int main()
{
    int arr[5] = {2,4,1,6,9};
    int n = 5;
    quick_sort(arr,0 , n-1);
    print_array(arr,n);
    return 0;
}