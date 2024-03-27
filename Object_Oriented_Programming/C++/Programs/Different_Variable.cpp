// variable is a container to hold data
/* variable are of various type
1. int(integer)
2. float(decimals)
3. char(character)
4. double(large decimal)
5. boolean(true/false)
example:-
int a=4;
char letter="o"
*/
/*
SCOPE:- scope of a variable is the reigon in code where the existence of variable is valid
 Based on scope variables are classified into two types:
1. Local variables:- local variables are declared inside the braces of any function and can be accessed only
 from there
2. global variables:- global variables are declared outside any function and can be accessed from anywhere
*/
/*
C++ data types:-
> data types define the type of data a variable can hold for example an integer 
variable can hold integer data, a character type variable can hold character data

Data types are characterised into 3:-
1. Built-in:- int,float,char etc.
2. User-defined:- struct,union,enum
3. derived:- array,function,pointer
*/
//Program:-
#include<iostream>

using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}
 int main(){
     int glo=9;
     glo=78;
     int a=4,b=5;
    float pi= 3.14;
    char c='d';
    bool h=true;
    sum();
    cout<<glo<<h;
// cout<<"This is tutorial 4.\nHere the value of a is "<<a<<". \nThe value of b is "<<b;
// cout<<"\nThe value of pi is: "<<pi;

return 0;
}

/*
Rules to declare variables in C++  :->
1. Variable names in c++ can range from 1 to 255 characters.
2. All variables names must begin with a letter or underscore
3. After the first initial letter, variable names can also contain letters and numbers
4. Variable names are case sensitive
5. No spaces or special characters are allowed
6. You cannot use a C++ keyword (a reserved keyword) as a variable name
*/



