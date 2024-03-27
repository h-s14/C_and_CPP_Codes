#include<iostream>
using namespace std;
namespace a
{
    int ag = 7;
}
namespace b
{
    int ag = 9;
}
int main()
{
    cout<<a::ag<<endl;
    cout<<b::ag<<endl;
    return 0;
}