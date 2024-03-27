//Takes input while the number is positive, but will run one time irrespective if the condition is met or not
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    do
    {
        cout<<a<<" Loop is executed\n";
        cin>>a;
    }while(a>0);
    cout<<"Loop is terminated\n";
    return 0;
}