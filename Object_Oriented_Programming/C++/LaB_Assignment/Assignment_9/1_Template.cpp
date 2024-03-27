#include<iostream>
using namespace std;
template<class A,class B>
B MyMax (A x , B y)
{
    return x>y?x:y;
}
int main()
{
    cout<<MyMax(10,20.2)<<endl;
    return 0;
}