#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    public:
    void setdata()
    {
        cout<<"Enter Roll No. :"<<endl;
        cin>>rollno;
        cout<<"Enter Name :"<<endl;
        cin>>name;
    }
    void display()
    {
        cout<<"Roll No. :"<<rollno<<endl;
        cout<<"Name :"<<name<<endl;
    }
    void total_Marks()
    {

    }
};
int main()
{
    student *ptr[3];
    for( int i = 0 ; i < 3 ; i++)
    {
        ptr[i] = new student;
        ptr[i]->setdata();
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        ptr[i]->display();
    }
    return 0;
}