#include<iostream>
using namespace std;
class demo
{
    int rollno;
    string name;
    public:
     void setdata()
    {
        cout<<"Enter The Roll No. :"<<endl;
        cin>>rollno;
        cout<<"Enter The Name :"<<endl;
        cin>>name;
    }
      void display()
    {
        cout<<"Roll No :"<<rollno<<endl;
        cout<<"Name :"<<name<<endl;
    }
    demo()
    {
        cout<<"No Argument Constructor"<<endl;//default constructor
    }
    demo(int a)
    {
        rollno = a;
        cout<<"One Argument Constructor"<<endl;
    }
    demo(int c,string d)
    {
        rollno = c;
        name = d;
        cout<<"Two Argument Constructor"<<endl;
    }
    demo(demo &x)
    {
        rollno = x.rollno;
        name = x.name;
    }
   
  
};
int main()
{
    demo x;
    x.setdata();
    x.display();
    demo y = x;
    y.display();
    demo z(404,"Harry");
    z.display();
    demo k(404);
    k.setdata();
    k.display();
    return 0;
}