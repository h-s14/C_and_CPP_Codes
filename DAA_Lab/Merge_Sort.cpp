#include <iostream>
using namespace std;
void Merge(int *All, int *Left, int left_count, int *Right, int right_count)
{
    int i = 0, j = 0, k = 0;
    while (i < left_count && j < right_count)
    {
        if (Left[i] < Right[j])
        {
            All[k++] = Left[i++];
        }
        else
        {
            All[k++] = Right[j++];
        }
    }
    while (i < left_count)
    {
        All[k++] = Left[i++];
    }
    while (j < right_count)
    {
        All[k++] = Right[j++];
    }
}
void Merge_Sort(int *All, int num)
{
    int mid, i, *Left, *Right;
    if (num < 2)
    {
        return;
    }
    mid = num / 2;
    Left = new int[mid];
    Right = new int[num - mid];
    for (i = 0; i < mid; i++)
    {
        Left[i] = All[i];
    }
    for (i = mid; i < num; i++)
    {
        Right[i - mid] = All[i];
    }
    Merge_Sort(Left, mid);
    Merge_Sort(Right, num - mid);
    Merge(All, Left, mid, Right, num - mid);
    delete (Left);
    delete (Right);
}
int main()
{
    int Array[] = {6, 2, 3, 1, 9, 10, 15, 13, 12, 17};
    int n;
    n = sizeof(Array) / sizeof(Array[0]);
    Merge_Sort(Array, n);
    for (int i = 0; i < n; i++)
    {
        cout << Array[i] << endl;
    }
    return 0;
}