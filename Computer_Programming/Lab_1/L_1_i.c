// C program to calculate simple interest
#include<stdio.h>
int main()
{
    float si,p,r,t;
    printf("enter p,r,t\n");
    scanf("%f %f %f",&p,&r,&t);
    si = p*r*t/100;
    printf("the simple interest is %f",si);
    return 0;
} 