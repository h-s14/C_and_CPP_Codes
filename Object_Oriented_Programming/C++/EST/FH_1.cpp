#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream gsewak;
    gsewak.open("NUM.txt");
    for(int i = 1 ; i <= 200 ; i++)
    {
        gsewak<<i<<endl;
    }
    gsewak.close();
    return 0;
}