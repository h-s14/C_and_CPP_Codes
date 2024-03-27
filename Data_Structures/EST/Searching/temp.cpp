#include <iostream>
using namespace std;
int main()
{
    int i, j, k, r = 4, c = 4;
    int arr1[4][4] = {0, 10, 0, 12, 0, 0, 0, 0, 0, 0, 5, 0, 15, 12, 0, 0};
    int arr2[4][4] = {0, 0, 8, 0, 0, 0, 0, 23, 0, 0, 9, 0, 20, 25, 0, 0};
    int arr3[4][4];
    for (i = 0; i <= r; i++)
    {
        for (j = 0; j <= c; j++)
        {
            for (k = 0; k <= r; k++)
            {
                arr3[i][j] = arr1[i][j] * arr2[j][i];
            }
        }
    }
    for (i = 0; i <= r; i++)
    {
        for (j = 0; j <= c; j++)
        {
            cout << arr3[i][j] << " ";
        }
    }
    return 0;
}