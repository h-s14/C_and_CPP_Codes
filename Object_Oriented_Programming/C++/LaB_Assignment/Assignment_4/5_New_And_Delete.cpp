#include<iostream>
using namespace std;
int main()
{
    int a = 2;
    int *ptr = new int(55);
    cout<<"The Value Of a is : "<<a<<endl;
    cout<<"The Value Of new int is : "<<*ptr<<endl;
    return 0;
}