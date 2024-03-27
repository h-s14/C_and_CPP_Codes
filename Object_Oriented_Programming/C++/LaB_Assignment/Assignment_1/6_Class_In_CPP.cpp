#include<iostream>
using namespace std;
    class student
    {
        private:
        char name[20];
        int roll;
        float marks;
        public:
        void setStudentdata()
        {
            cout<<name<<endl<<roll<<endl<<marks<<endl;
        }
        void getStudentdata()
        {
            cout<<"Enter Name"<<endl;
            cin>>name;
            cout<<"Enter Roll No."<<endl;
            cin>>roll;
            cout<<"Enter Marks"<<endl;
            cin>>marks;
        }
    };
int main()
{
    student s[3];
    for(int i = 0 ; i < 3 ; i++)
    {
        s[i].getStudentdata();
    }
    for( int j = 0 ; j < 3 ; j++)
    {
        s[j].setStudentdata();
    }
    return 0;
}