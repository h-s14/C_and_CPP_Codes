#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s = "Harry";
    char c[10];
    ifstream i;
    ofstream o;
    o.open("Char.txt");
    o<<s;
    o.close();
    i.open("Char.txt");
    i>>c;
    cout<<strlen(c)<<endl;
    i.close();
    return 0;
}