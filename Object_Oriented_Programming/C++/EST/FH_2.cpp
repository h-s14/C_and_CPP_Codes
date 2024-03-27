#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    int count = 0 ;
    char c;
    in.open("NOTES.txt");
    while (!in.eof())
    {
        in>>c;
        count++;
    }
    in.close();
    cout<<count-1<<endl;
    return 0;
}