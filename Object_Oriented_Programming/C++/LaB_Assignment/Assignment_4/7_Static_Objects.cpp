#include<iostream>
using namespace std;
class emp
{
    int id;
    int salary;
    static int count;           //Static Variable declaration
    public:
    void setData()                 //Input Function
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
        cout<<"Enter The Salary Of Employee"<<endl;
        cin>>salary;
        count ++;
    }
    void display(void)          //Output Function
    {
        cout<<"The ID of Employee is "<< id << endl
        <<"The Employee no. is "<<count<<endl;
    }
};
int emp::count;
int main()
{
    int n = 0; 
    cout<<"Enter The Number Of Employee"<<endl;
    cin>>n;
    emp e[n];       //Array Of Objects
    for(int i = 0 ; i < n ; i++)
    {
        e[i].setData(); //Input function is called
    }
    for(int i = 0 ; i < n ; i++)
    {
        e[i].display(); //Output function is called
    }
    return 0;
}