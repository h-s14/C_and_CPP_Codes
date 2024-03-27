#include<iostream>
using namespace std;
template< class A, class B>
    class demo
    {
        A a;
        B b;
        public:
        demo(A x , B y)
        {
            a = x;
            b = y;
        }
        void divideBy2(demo d)
        { 
        }
    };
int main()
{
    demo <int,float> d1(2,2.5);

    return 0;
}