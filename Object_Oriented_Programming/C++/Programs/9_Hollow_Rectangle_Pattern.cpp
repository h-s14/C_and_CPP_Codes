#include<iostream>
using namespace std;
int main()
{
    int i , j , row ,col;
    cout<<"Enter The Number Of Rows And Columns\n";
    cin>>row>>col;
    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < col ; j++)
        {
                if(i == 0 || i == row-1 || j == 0 || j == col-1 )
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
        }
    cout<<"\n";
    }
    return 0;
}