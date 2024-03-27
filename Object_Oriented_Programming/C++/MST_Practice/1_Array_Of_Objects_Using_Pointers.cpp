#include<iostream>
using namespace std;
class students
{
    int id;
    float marks;
    public:
    void setdata(int a ,float b)
    {
        id = a;
        marks = b;
    }
    void getdata()
    {
        cout<<"ID of student is "<<id<<endl;
        cout<<"Marks are "<<marks<<endl;
    }
};
int main()
{
    students *ptr = new students[2];
    int aid;
    float amarks;
    for(int i = 0 ; i < 2 ; i++)
    {
        cout<<"Enfter The ID and Marks of Student "<<i+1<<endl;
        cin>>aid>>amarks;
        ptr->setdata(aid,amarks);
    }
    for(int i = 0 ; i < 2 ; i++)
    {
        ptr->getdata();
    }
    return 0;
}