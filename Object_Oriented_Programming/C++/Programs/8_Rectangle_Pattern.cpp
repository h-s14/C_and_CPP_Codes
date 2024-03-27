#include<iostream>
using namespace std;
int main()
{
    int i,rows,columns;
    cout<<"Enter The Number Of Rows And Columns"<<endl;
    cin>>rows>>columns;
    for(i = 0 ; i <= rows ; i++)
    {
        for(int j = 0 ; j <= columns ; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}