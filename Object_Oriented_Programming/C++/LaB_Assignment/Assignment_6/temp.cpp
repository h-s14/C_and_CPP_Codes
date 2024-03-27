#include <iostream>
using namespace std;
class temp
{
public:
    void change(int arr[])
    {
        arr[0] = 9;
    }
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    temp a;
    a.change(arr);
    cout << arr[0];
    return 0;
}