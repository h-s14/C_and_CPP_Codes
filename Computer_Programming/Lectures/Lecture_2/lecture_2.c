//write a C program to calculate the are of circle
//formula:pi*r*r
//1. enter the value of pi (3.14;float)
//2. enter the value of r (like 1,2,3;int)
//3. operation: area(float)=pi*r*r
//display area
#include<stdio.h>
int main()
{
float pi=3.14; //declare and initialization 
float r,area;
printf("\nenter the value of radius");
scanf("%f",&r);
area=pi*r*r;
printf("%f",area);
    return 0;

}