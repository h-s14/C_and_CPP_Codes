#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[20];
    float marks;
    public:
    void putdata();
    void getdata();
};
void student::getdata()
{
    cout<<"Enter the Roll No."<<endl;
    cin>>roll;
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter The Marks"<<endl;
    cin>>marks;
}
void student::putdata()
{
    cout<<"Roll No. : "<<roll<<"Name : "<<name<<"Maeks : "<<marks<<endl;
}

int main()
{
    student s[3];
    for(int i = 0 ; i < 3 ; i++)
    {
        s[i].getdata();
    }
    for(int j = 0 ; j < 3 ; j++)
    {
        s[j].putdata();
    }
    return 0;
}