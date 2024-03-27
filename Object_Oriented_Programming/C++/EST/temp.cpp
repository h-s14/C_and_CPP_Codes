#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream myFile;
	char ch[200];
	myFile.open("Story.txt",ios::in);
	if(!myFile)
	{
		cout<<"File Not Found";
		return 0;
	}
	while(!myFile.eof())
	{
		myFile.getline(ch,200);
		cout<<ch;
	}
	myFile.close();
	
}