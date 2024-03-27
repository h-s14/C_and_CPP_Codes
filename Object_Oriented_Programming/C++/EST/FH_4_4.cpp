#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream myFile;
	char ch[500];
	myFile.open("Story.txt",ios::in);
	if(!myFile)
	{
		cout<<"File Not Found";
		return 0;
	}
	while(!myFile.eof())
	{
		myFile.getline(ch,250);
		cout<<ch;
        cout<<"1";
	}
	myFile.close();
	
}