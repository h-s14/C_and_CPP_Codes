#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "Enter the number of elements" << endl;
    cin >> n;
    int arr1[n];
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                for (int x = j - 1; x <= n - j; x++)
                {
                    arr1[x] = arr1[x + 1];
                }
                n = n - 1;
            }
        }
    }
    cout << "Output:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << endl;
    }
    return 0;
}