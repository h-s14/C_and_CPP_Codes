#include<iostream>
using namespace std;
void test(int a)
{
    if(a == 0)
    {
        throw ('a');
    }
    else if( a == 1)
    {
        throw (a);
    }
    else if(a == -1)
    {
        throw 1.1;
    }
}
int main()
{
    void test(int a);
    try
    {
    test(0);
    test(1);
    test(-1);
    }
    catch(char)
    {
        cout<<"Caught a character\n";
    }
    catch(int)
    {
        cout<<"Caught an Integer\n";
    }
    catch(double)
    {
        cout<<"Caught a double\n";
    }
    return 0;
}