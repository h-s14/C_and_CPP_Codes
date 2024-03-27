#include <iostream>
using namespace std;
void Swap(int Array[], int i, int j)
{
    int temp = Array[i];
    Array[i] = Array[j];
    Array[j] = temp;
}
int Partition(int Array[], int l, int r)
{
    int pivot = Array[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (Array[j] < pivot)
        {
            i++;
            Swap(Array, i, j);
        }
    }
    Swap(Array, i + 1, r);
    return i + 1;
}
void Quick_Sort(int Array[], int l, int r)
{
    if (l < r)
    {
        int pi = Partition(Array, l, r);
        Quick_Sort(Array, l, pi - 1);
        Quick_Sort(Array, pi + 1, r);
    }
}
int main()
{
    int n = 10;
    int Array[10] = {6, 2, 3, 1, 9, 10, 15, 13, 12, 17};
    Quick_Sort(Array, 0, n - 1);
    cout << "Sorted Array";
    for (int i = 0; i < 10; i++)
    {
        cout << Array[i] << endl;
    }
    return 0;
}