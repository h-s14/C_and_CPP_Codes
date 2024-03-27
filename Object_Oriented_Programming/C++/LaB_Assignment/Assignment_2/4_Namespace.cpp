#include<iostream>
using namespace std;
namespace a
{
    int x = 26 ;
}
namespace b
{
    int x = 77 ;
}
int main()
{
    cout<<"Value Of X in Namespace a is "<<a::x<<endl;
    cout<<"Value of X in Nmapespace b is "<<b::x<<endl;
    return 0;
}