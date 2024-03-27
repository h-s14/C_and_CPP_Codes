//cube of number
#include<iostream>
using namespace std;
    inline int cube(int b)
    {
        return b*b*b;
    }
int main()
{
    int a;
    cout<<"Etner The Number"<<endl;
    cin>>a;
    cout<<"The cube of the number is "<<cube(a)<<endl;
    return 0;
}