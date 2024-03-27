#include<iostream>
using namespace std;
 class students
    {
        public:
        int roll;
        float marks;
        char name[20];
        void set_student_data();
        void get_student_data();
    };
int main()
{
    int i;
    students s[3];
    for(i = 0 ; i < 3 ; i ++)
    {
        cout<<"Student "<<i+1<<endl;
        s[i].set_student_data();
    }
    for(i = 0 ; i < 3 ; i++)
    {
        cout<<"Student "<<i+1<<endl;
        s[i].get_student_data();
    }
}
void students::set_student_data()
{
cout<<"Enter The Roll No. "<<endl;
cin>>roll;
cout<<"Enter the Marks "<<endl;
cin>>marks;
cout<<"Enter the Name "<<endl;
cin>>name;
cout<<"\n";
}
void students::get_student_data()
{
    cout<<"Roll No. "<<roll<<endl;
    cout<<"Marks "<<marks<<endl;
    cout<<"Name "<<name<<endl;
    cout<<"\n";
}