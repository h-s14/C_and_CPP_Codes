#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age;
    bool gender;
    student()
    {
        cout<<"Default Constructor is called"<<endl;
        //Default COnstructor
    }
    student (string s,int a,bool g)
    //Parameterised Constructor
    {
        cout<<"Parameterised Contructor is called"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    void printinfo()
    {
        cout<<name<<endl<<age<<endl<<gender<<endl;
    }
    student(student &a)
    //Copy Constructor
    {
        cout<<"Copy Constructor is called"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    ~student()
    {
        cout<<"Destrucotr is called"<<endl;
    }
    bool operator == (student &a)
    //Operator Overloading
    {
        if(name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    student a("Harry",18,0);
    a.printinfo();
    student b("HS",22,0);
    student c = a;
    c.printinfo();
    if(a==b)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not Same"<<endl;
    }
    return 0;
}