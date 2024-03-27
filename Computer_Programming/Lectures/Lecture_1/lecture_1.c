//add two numbera in C
//single line comment
//2+4=6(problem statement)
// 1. enter first number
//2. 2
//3. enter the second no.
//4. 4
//5. 2+4(operation)
//6. result 6
#include<stdio.h>
int main()
{
    int a,b,c;//declared variables
    printf("enter first number");
    scanf("%d" ,&a);
    printf("\nenter second number");// \n is the newline character
    scanf("%d",&b);
    c=a+b; //= is the assignment opperator
            //a==b ==is the equality operator
    printf("/n the result of c is: %d",c);
    return 0;
}