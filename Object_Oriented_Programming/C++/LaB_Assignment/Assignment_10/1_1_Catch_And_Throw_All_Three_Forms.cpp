#include<iostream>
using namespace std;
int sum(int x, int y)
{
    int sUm;
    sUm = x + y ;
    return sUm;
}
void Xheption(int y)
{
    try
    {
        char x = 'h';
        if(y>10)
        {
            throw y;
        }
        else if(y == 0)
        {
            throw(x);
        }
        else if (y<10)
        {
            throw(2.2);
        }
    }
        catch(int)
    {
        cout<<"Sum is greater than 10\n";
    }
    catch(char)
    {
        cout<<"Sum is equal to zero\n";
    }
    catch(double)
    {
        cout<<"Sum is smaller than 10\n";
    }
}
int main()
{
    int a,b;
    char x = 'h';
    cout<<"Enter The Value Of a and b\n";
    cin>>a>>b;
    Xheption(sum(a,b));
    return 0;

}