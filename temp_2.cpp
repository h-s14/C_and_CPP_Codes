// Binary Search
#include <iostream>
using namespace std;
int Binary_Search(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == x)
        {
            return mid;
        }
        else if (array[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n = 10, x;
    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    cout << "Enter The Value Of X" << endl;
    cin >> x;
    int index = Binary_Search(arr, x, 0, n - 1);
    if (index == -1)
    {
        cout << "Element Not Found" << endl;
    }
    else
    {
        cout << "Element Found at " << index << endl;
    }
    return 0;
}