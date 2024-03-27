//Write a C program to find simple interest
//p*r*t/100
//steps
//1 p r t
//user input
//apply formula
//display result
#include<stdio.h>
int main()
{float p,r,t,si;
printf("enter p,r and t");
scanf("%f %f %f", &p, &r, &t);
si= p*r*t/100;
printf("the simple interest is %f",si);
return 0;
}