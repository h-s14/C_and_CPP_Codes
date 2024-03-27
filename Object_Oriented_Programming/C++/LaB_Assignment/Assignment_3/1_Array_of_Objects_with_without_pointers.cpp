#include<iostream>
using namespace std;
class students
{
    int rollno;
    char name[20];
    int marks;
    public:
    void getdata();
    void display();
    void bonus_marks();
};
void students::getdata()
{
    cout<<"Enter Roll No. :"<<endl;
    cin>>rollno;
    cout<<"Enter The Name :"<<endl;
    cin>>name;
    cout<<"Enter The Marks :"<<endl;
    cin>>marks;
}
void students::display()
{
    cout<<name<<endl;
    cout<<rollno<<endl;
    cout<<marks<<endl;
}
void students::bonus_marks()
{
    int* ptr = &marks;
    cout<<"Enter The New Marks : "<<endl;
    cin>>marks;
}
int main()
{
    students s[2];
    for(int i = 0 ; i < 2 ; i++)
    {
        s[i].getdata();
    }   
    for(int j = 0 ; j < 2 ; j++) 
    {
        s[j].display();
    }
    s[1].bonus_marks();
    s[1].display();
    return 0;
}