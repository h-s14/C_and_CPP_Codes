#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p;
    p=&a;
    cout<<p<<endl<<&a<<endl;
    return 0;
}