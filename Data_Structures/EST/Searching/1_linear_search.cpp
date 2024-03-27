#include<iostream>
using namespace std;
int main()
{
    int n,pos = 0;
    bool x;
    int arr[8]={15,5,20,35,2,42,67,17};
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i = 0 ; i < 8 ; i++)
    {
        if(n == arr[i])
        {
            pos = i;
            x = true;
            break;
        }
        else
        {
            x = false;
            continue;
        }
    }
    if(x == 1)
    {
        cout<<n<<" is present at the index "<<pos<<endl;
    }
    else
    {
        cout<<n<<" is not present in the array"<<endl;
    }
    return 0;
}