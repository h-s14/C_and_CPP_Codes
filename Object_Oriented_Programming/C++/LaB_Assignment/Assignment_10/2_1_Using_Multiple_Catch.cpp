#include<iostream>
using namespace std;
int main()
{
    int num1,num2,age;
    int x;
    float y;
    char c;
    string name;
    cout<<"Enter the numbers for division\n";
    cin>>num1>>num2;
    cout<<"Enter name\n";
    cin>>name;
    cout<<"Enter Age\n";
    cin>>age;
    try
    {
        if(num1 == 0 || num2 == 0)
        {
            throw (x);
        }
        else if(age<18)
        {
            throw (y);
        }
    }
    catch(int)
    {
        cout<<"Divsion not possible by zero\n";
    }
    catch(float)
    {
        cout<<"Vote rights only if age is greater than 18\n";
    }
    catch(char)
    {
        cout<<" ";
    }
    catch(...)
    {
        cout<<"Exception caught\n";
    }
    
    return 0;
}