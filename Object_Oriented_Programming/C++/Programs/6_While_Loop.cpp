//Take Input unless a negative number is entered
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a>0)
    {
        cout<<"Positive number entered loop will Continue\n";
        cin>>a;
    }
    cout<<"Negative number entered loop will terminate\n";
    return 0;
}