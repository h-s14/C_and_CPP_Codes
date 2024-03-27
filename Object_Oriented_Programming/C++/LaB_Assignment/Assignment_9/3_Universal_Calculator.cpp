#include<iostream>
using namespace std;
template<class T>
void sum(T a , T b)
{
    cout<< a + b ;
}
void subtract( T a , T b)
{
    cout<< b - a;
}
void multiply( T a , T b)
{
    cout<< a*b;
}
void divide(T a , T b)
{
    cout<< a/b ;
}
int main()
    int a = 10 ,b = 20 ;
    float c = 10.10 , d = 20.22;
    sum(a,b);
    sum(c,d);
    subtract(b,a);
    subtract(d,c);
    multiply(a,b);
    multiply(c,d);
    divide(b,a);
    divide(d,c);
    return 0;
}