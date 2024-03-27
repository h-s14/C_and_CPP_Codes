#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char c;
    ofstream o;
    ifstream i ; 
    i.open("Source.txt");
    o.open("Target.txt");
    while(!i.eof())
    {
        i>>c;
        o<<c;
    }
    i.close();
    o.close();
    return 0;
}